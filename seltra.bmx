' to do
' middle block is going missing in chem reaction  STOP THAT!
' the blitzmax debugger won't let look at ga[2]

Strict 

Include "memap.bmx"
Include "blockmap.bmx"
Include "arrays.bmx"

Graphics 1024,768
Global gw=GraphicsWidth()
Global gh=GraphicsHeight()

Global imagelist:TImage[200]


SetMaskColor 0,0,0

Global blockart:TImage[10]

SetMaskColor 255,255,255
Global blockw:TImage=LoadImage3("blocks2\blockw.png")
Global blocko:TImage=LoadImage3("blocks2\blocko.png")
Global blockc:TImage=LoadImage3("blocks2\blockc.png")
Global blocks:TImage=LoadImage3("blocks2\blocks.png")
Global blockq:TImage=LoadImage3("blocks2\blockq.png")
Global blockx:TImage=LoadImage3("blocks2\blockx.png")
Global blockd:TImage=LoadImage3("blocks2\blockd.png")
Global blockb:TImage=loadimage3("blocks2\blockb.png")

Global btarray:btemplate[100]


SetMaskColor 0,0,0
Global mousep:TImage = LoadImage(MaskPixmap(LoadPixmap("mouse.png"),0,0,0))
Global mousec:TImage = LoadImage(MaskPixmap(LoadPixmap("mousecell.png"),0,0,0))

SetMaskColor 150,150,46
Global blank:TImage=LoadImage("blank.png")
Global arroww:TImage=LoadImage("arroww.png")
Global arrowe:TImage=LoadImage("arrowe.png")
Global arrown:TImage=LoadImage("arrown.png")
Global arrows:TImage=LoadImage("arrows.png")


Global noi ' number of images ( not strictly true if arrows don't appear in list )

Global frame:Byte=0
SeedRnd 1' MilliSecs()

Global mox,moy,moz:Int '  ' mousex,y
Global moxo[2],moyo[2]
Global smi:TImage=imagelist[0] ' selected mouse image
Global smt ' selected mouse thing
Global zoom:Float=30.0 '  mouse wheel controls map zoom
Global mozo,mozu:Float ' modified and Used mouse z position
Global moxc,moyc:Int ' mousex,y cell
Global moxco[2]
Global moyco[2]
Global redraw_map:Int=3
Global bgc,bc     'blockgroup counter, blovk counter
Global sgc,sc 'substrategroup counter, substrate counter
Global camposx,camposy :Int
Global time,gamespeedbrake=100,gamespeedbrake_setting=2

' block interactions , randomized with seed
' b-b interactions are particular to world
' sticky 0 = stick with ajcent block, 1 sticky with 1 force ( momemntum of single block colliding blocks ), 999999 unreactive
' splity 0 = splits with zero force, 
' impact Type. blocks react differently To impacts ' 0 = stop, 1 = bounce , 2 turn left, 3 turn right

Global garray:grouparray=New grouparray ' all groups, or moving groups

Global barray:blockarray=New blockarray ' active blocks
' can substrates be on the normal block and group lists? assume no
Global sarray:subarray=New subarray ' we'll try put substrate groups on
Global sgarray:subgrouparray = New subgrouparray

barray.ba=barray.ba[..999999]                  '     *** wtf is this notation ? ans: Slice : a sub array of an existing array'
Global wallgroup:blockarray'=New blockarray ' wall blocks
'wallgroup.ba=wallgroup.ba[..999999]
Global rarray:redrawarray=New redrawarray
Global genarray:generatorarray=New generatorarray

Global bmap:fastblockmap=New fastblockmap
Global thingmap:fastintmap=New fastintmap ' arrows and generators
Global smap:substratemap=New substratemap



Function loadimage2:TImage(fn$)

imagelist[noi]=LoadImage(MaskPixmap(LoadPixmap(fn),0,0,0))
noi=noi+1
Return imagelist[noi-1]

End Function


Function loadimage3:TImage(fn$)

imagelist[noi]=LoadImage(MaskPixmap(LoadPixmap(fn),255,255,255))
noi=noi+1
Return imagelist[noi-1]

End Function



Type gen ' generator

Field x,y:Int
Field bglist:bgroup[100]
Field le:Int ' length of bglist
Field rate,n,t,id:Int 
Field bitflags:Int ' 1 randon, 2 ordered cycle, 4 infinite


Method genblock()

Local bg:bgroup=New bgroup
Local bg2:bgroup
Local r:Int
Local xv,yv
Local tm=thingmap.fetch(x+y Shl 10)

If tm<10 And tm>0
 Select tm Mod 8
  Case 1 ; yv=-1
  Case 2 ; yv=1
  Case 3 ; xv=-1
  Case 4 ; xv=1
 End Select

' btarray[X].createsingleblock(x,y,xv,yv) ' **** restart generators with this line
 ' get block template from list
 If bitflags And 1
  bg2=bglist[Rand(0,le)]
 EndIf
EndIf

n=n-1

End Method


Method update()

If time Mod rate=t Then genblock()

End Method

End Type



Type block ' ********************* type block ****************************
Field btype 
' 0 = wall , 1 = force block 2 = ? 

Field image:TImage
Field x,y,bit_tags,id ' bit_tags 1 = prototype for generators  ' %10 for right angle double bonder ( double bonder w/o tag = straight bonder )
Field oldx[2],oldy[2]
Field group:bgroup ' super class
Field ch, mch ' atomic chemistry number, molicule chemestry number
Field bt ' block template id
Field bonds
Field maxbonds
Field bond:block[4] ' 0 north, 1 east, 2 south, 3 west
Field bonds2  ' %1111 open bonds , %11110000 set bonds


Method Del()

group.remove_block(Self)
barray.ba[id]=Null
bmap.remove(x+y Shl 10)

Local re:redraw=New redraw
re.x=oldx[frame]
re.y=oldy[frame]
re.redraws=2
rarray.add(re)
re:redraw=New redraw
re.x=oldx[1-frame]
re.y=oldy[1-frame]
re.redraws=2
rarray.add(re)

End Method



Method draw()
 DrawImage blank,(oldx[frame]-camposx)*zoom,(oldy[frame]-camposy)*zoom
 DrawImage image,(x-camposx)*zoom,(y-camposy)*zoom
 oldx[frame]=x
 oldy[frame]=y
End Method

Method out_of_bounds()
 If x<1 Or x>1000 Or y<1 Or y>1000 Then Return 1 
End Method


Method spawn:block(xs,ys) ' where this block is a prototype
 Local b:block=New block
 b.btype=btype
 b.bit_tags=b.bit_tags-1
 b.image=image
 b.x=x+xs
 b.y=y+ys
 barray.add(b)
 bmap.insert(b.x+b.y Shl 10,b)
 b.id=bc
 bc=bc+1
 Return b
End Method


Method checkchem(b2:block)

Local d1#=chem_dist(ch),d2#=chem_dist(b2.ch),dc#=chem_dist(ch+b2.ch)
Print d1+"  "+d2+"  "+dc+"  "+(d1+d2)/2.0

If dc<d1+d2 Then Return 1 ' a bit harder to grasp : If one elements need To combine 
							   ' is greater than the others lack of need To combine, Then they'll combine							
End Method


Method get_moli_chem()
' the surrounding 4 cells in the group

Local b:block
mch=ch

If x>0 Then b=bmap.fetch((x-1)+y Shl 10)
If b And b.group=group Then mch=mch+b.ch
b=bmap.fetch((x+1)+y Shl 10)
If b And b.group=group Then mch=mch+b.ch
If y>0 Then b=bmap.fetch(x+(y-1) Shl 10)
If b And b.group=group Then mch=mch+b.ch
b=bmap.fetch(x+(y+1) Shl 10)
If b And b.group=group Then mch=mch+b.ch

End Method


Method bondcheck(b2:block)
' here we're using unset bonds, only determined once a previous bond is created
' we can consider the alternative : set bonds positions at creation of block, which will make this function much simpler
'    and likely unnnecessary

'If bonds=0 Or b2.bonds=0 Then Return 0

If (bonds2 & %0001) And (b2.bonds2 & %0100) And (y-b2.y)>0 And (Not (bonds2 & %00010000)) And (Not (b2.bonds2 & %0100000)) Then Return 1
If (bonds2 & %0100) And (b2.bonds2 & %0001) And (y-b2.y)<0 And (Not (bonds2 & %01000000)) And (Not (b2.bonds2 & %0001000)) Then Return 1
If (bonds2 & %0010) And (b2.bonds2 & %1000) And (x-b2.x)>0 And (Not (bonds2 & %00100000)) And (Not (b2.bonds2 & %1000000)) Then Return 1
If (bonds2 & %1000) And (b2.bonds2 & %0010) And (x-b2.x)<0 And (Not (bonds2 & %10000000)) And (Not (b2.bonds2 & %0010000)) Then Return 1

Return 0

End Method


Method checkchem2(b2:block)
'is the binding of these 2 blocks closer to a chemical whole number? if so return 1
' ought to change to boolean

Local ud,bd,diff

ud=Abs(chem_dist(mch))+Abs(chem_dist(b2.mch)) ' 1st measure unbinded
bd=Abs(chem_dist(mch+b2.ch))+Abs(chem_dist(b2.mch+ch))

If bd<ud Then Return 1 

End Method



Method checkchem_detach:block[](b2:block)
'checks to see if molicule is tighter by snapping a bind, returns snapping binds
' looks at up to 6 binds ( 3 on object , 3 on subject blocks )
' and every combo (
Local bw:block,be:block,bn:block,bs:block

' get baseline chem number
Local d=chem_dist(mch+b2.ch)+chem_dist(b2.mch+ch)
If d=0 Then Return ' can improve on that!

'employ organic molecule builder

'get adjacent blocks
If x>0 Then bw=bmap.fetch((x-1)+y Shl 10)
be=bmap.fetch((x+1)+y Shl 10)
If y>0 Then bn=bmap.fetch(x+(y-1) Shl 10)
bs=bmap.fetch(x+(y+1) Shl 10)

' check if they are connected to b group, if not, we don't want them
If bw And bw.group<>group Then bw=Null
If be And be.group<>group Then be=Null
If bn And bn.group<>group Then bn=Null
If bs And bs.group<>group Then bs=Null



End Method



Method checkchem3:block[](b2:block)
'checks to see if molicule is tighter by snapping a bind, returns snapping binds
' requires mch to 
' the disconnected blocks need flood fill group creation

Local d,mch2
Local b:block,b3:block
Local ba:block[5]
Local bw:block,be:block,bn:block,bs:block

mch2=mch
If b2 Then mch2=mch+b2.ch
Local ldsf=chem_dist(mch2)

If x>0 Then bw=bmap.fetch((x-1)+y Shl 10)
be=bmap.fetch((x+1)+y Shl 10)
If y>0 Then bn=bmap.fetch(x+(y-1) Shl 10)
bs=bmap.fetch(x+(y+1) Shl 10)

If bw And bw.group<>group Then bw=Null
If be And be.group<>group Then be=Null
If bn And bn.group<>group Then bn=Null
If bs And bs.group<>group Then bs=Null

If bw
 d=chem_dist(mch2-bw.ch)
 If ldsf>d Then ba[0]=bw;ldsf=d
EndIf

If be
 d=chem_dist(mch2-be.ch)
 If ldsf>d Then ba[0]=be;ldsf=d
EndIf

If bn
 d=chem_dist(mch2-bn.ch)
 If ldsf>d Then ba[0]=bn;ldsf=d
EndIf

If bs
 d=chem_dist(mch2-bs.ch)
 If ldsf>d Then ba[0]=bs;ldsf=d
EndIf

If bw And be
 d=2*chem_dist(mch2-(bw.ch+be.ch))+chem_dist(bw.mch-ch)+chem_dist(be.mch-ch)
 If ldsf>d Then ba[0]=bw;ba[1]=be;ldsf=d
EndIf

If bw And bn
 d=2*chem_dist(mch2-(bw.ch+bn.ch))+chem_dist(bw.mch-ch)+chem_dist(bn.mch-ch)
 If ldsf>d Then ba[0]=bw;ba[1]=bn;ldsf=d
EndIf

If bw And bs
 d=2*chem_dist(mch2-(bw.ch+bs.ch))+chem_dist(bw.mch-ch)+chem_dist(bs.mch-ch)
 If ldsf>d Then ba[0]=bw;ba[1]=bs;ldsf=d
EndIf

If bn And be
 d=2*chem_dist(mch2-(bn.ch+be.ch))+chem_dist(bn.mch-ch)+chem_dist(be.mch-ch)
 If ldsf>d Then ba[0]=bn;ba[1]=be;ldsf=d
EndIf

If bn And bs
 d=2*chem_dist(mch2-(bn.ch+bs.ch))+chem_dist(bn.mch-ch)+chem_dist(bs.mch-ch)
 If ldsf>d Then ba[0]=bn;ba[1]=bs;ldsf=d
EndIf

If bs And be
 d=2*chem_dist(mch2-(bs.ch+be.ch))+chem_dist(bs.mch-ch)+chem_dist(be.mch-ch)
 If ldsf>d Then ba[0]=bs;ba[1]=be;ldsf=d
EndIf

Local ch2,i
If bw Then ch2=chem_dist(bw.mch-ch);mch2=mch2-bw.ch
If be Then ch2=ch2+chem_dist(be.mch-ch);mch2=mch2-be.ch
If bn Then ch2=ch2+chem_dist(bn.mch-ch);mch2=mch2-bn.ch
If bs Then ch2=ch2+chem_dist(bs.mch-ch);mch2=mch2-bs.ch
d=ch2+chem_dist(mch2)
If ldsf>d
 ba=ba[..5]
 If bw Then ba[0]=bw;i=i+1
 If be Then ba[i]=be;i=i+1
 If bn Then ba[i]=bn;i=i+1
 If bs Then ba[i]=bs;i=i+1
EndIf

'return b3
'split blocks self and b3, part 2
If ba[0]
 i=0
 While ba[i]
  try_flood_split(ba[i])
  ba[i].get_moli_chem()
  i=i+1
 Wend
 Self.get_moli_chem()
 ' garray.ga[group.id]=Null   <---------- don't think we need this, merge groups will sort this out
EndIf

End Method 


Method try_flood_split(b:block)
' starting form self & b block, an attempt is made to split the group into 2 groups.

Local i,m=1
Local ba:block[100],b2:block
ba[0]=b
If Not (b.group=group) Then Return ' b has already gone to split group

While ba[i]
 If b.x>0 
  b2=bmap.fetch((b.x-1)+b.y Shl 10)
  If b2 And b2.group=group And b2<>Self Then ba[m]=b2;b2.group.remove_block(b2);m=m+1;
 EndIf
 b2=bmap.fetch(b.x+1+b.y Shl 10)
 If b2 And b2.group=group And b2<>Self Then ba[m]=b2;b2.group.remove_block(b2);m=m+1
 If b.y>0 
  b2=bmap.fetch((b.x+(b.y-1) Shl 10))
  If b2 And b2.group=group And b2<>Self Then ba[m]=b2;b2.group.remove_block(b2);m=m+1
 EndIf
 b2=bmap.fetch(b.x+(b.y+1) Shl 10)
 If b2 And b2.group=group And b2<>Self Then ba[m]=b2;b2.group.remove_block(b2);m=m+1

 i=i+1
Wend

Local bg:bgroup=New bgroup
i=0
b.group.remove_block(b)

While ba[i]
 ' remove block from old group
 bg.add(ba[i])
 i=i+1
Wend
garray.add(bg)

End Method


Method repblock()
' bloc splits into 2

Local ok,b2:block

If group.xv
 If y>0
  b2=bmap.fetch(x+(y-1) Shl 10)
  If Not b2 Then ok=1
 EndIf
 b2=bmap.fetch(x+(y+1) Shl 10)
 If Not b2 Then ok=ok+1
EndIf

If group.yv
 If x>0
  b2=bmap.fetch((x-1)+y Shl 10)
  If Not b2 Then ok=1
 EndIf
 b2=bmap.fetch((x+1)+y Shl 10)
 If Not b2 Then ok=ok+1
EndIf

If ok=2
 ' create 2 new blocks
 If btarray[bt].btype=btype 
  If group.xv
   btarray[bt].createsingleblock(x,y-1,0,-1)
   btarray[bt].createsingleblock(x,y+1,0,1)
  EndIf
  If group.yv
   btarray[bt].createsingleblock(x-1,y,-1,0)
   btarray[bt].createsingleblock(x+1,y,1,0)
  EndIf
 EndIf

 del() ' delete block
EndIf

End Method


End Type


Type redraw
Field x,y
Field redraws:Byte ' %11 = redraws 1~3
End Type



Type bgroup
Field blist:blockarray=New blockarray
Field xv,yv,bittags,id ' bittags 1 -> tagged for deletion
Field lastmove    ' the latest move

Field bref:block ' internal, used when the program needs a reference to another block
                 ' for instance collision processing

' consider next place
' weigh up forces
' change places


Method add(b:block)

blist.add(b)
b.group=Self

End Method


Method collide(b:block,b2:block)

Local e,m,e2,m2,cv

Select b.btype
 Case 3 e=1;m=0
 Case 4 e=0;m=1
 Case 5 e=0;m=-1
End Select

Select b2.btype
 Case 3 e2=1;m2=0
 Case 4 e2=0;m2=1
 Case 5 e2=0;m2=-1
End Select

Local g2:bgroup=b2.group

'DebugStop

Select xv*g2.xv+yv*g2.yv   ' dot product
 Case 0 
  If xv*g2.yv+yv*g2.xv 
   cv=xv ; xv=-xv*e+yv*m ; yv=cv*m-yv*e   ' isolated reflection
  Else
   g2.xv=xv*e2+yv*m2 ; g2.yv=xv*m2+yv*e2 ' transfer
   xv=0 ; yv=0
  EndIf
 Case 1 ; cv=xv ; xv=-xv*e+yv*m ; yv=-yv*e+cv*m ' shunt isolated reflection
 Case -1 
  cv=xv    ; xv=-xv*e+yv*m            ; yv=-yv*e+cv*m        ' mutual reflection
  cv=g2.xv ; g2.xv=-g2.xv*e2+g2.yv*m2 ; g2.yv=cv*m2-g2.yv*e2
End Select

If Abs(xv)+Abs(yv)>1 Then RuntimeError(" bgroup, move , both xv and yv non zero ")
If Abs(b2.group.xv)+Abs(b2.group.yv)>1 Then RuntimeError(" bgroup, move , both xv and yv non zero ")

End Method



Method collision_manager(b:block,b2:block)
' here or in block class ?
Local m2,cv

If b2.btype=0
 If b.btype=3 Then xv=-xv;yv=-yv
 If b.btype=4 Then cv=xv;xv=-yv;yv=cv
 If b.btype=5 Then cv=xv;xv=yv;yv=-cv
 If b.btype=6 Then xv=0;yv=0
 Return 
EndIf
collide(b,b2)
Return 

  ' btype 0 = wall , wall collisions
If b.btype=3 
 If b2.btype=0

  xv=-xv
  yv=-yv

  Return
 EndIf

 collide(b,b2)
 Return

 If b2.btype=3
'  collide3v3(b2.group)
  Return

  If xv
   If b2.group.xv=xv Then xv=-xv ' the awkward ugly case ' simplest solution is reflection, which is ugly, but hey we are going for simplicity
   If b2.group.xv=-xv Then xv=-xv;b2.group.xv=-b2.group.xv ' ideal mutual reflection
   If b2.group.xv=0
    If b2.group.yv=0 Then b2.group.xv=xv;xv=0 ' transfer
    If b2.group.yv<>0 Then xv=-xv             ' reflection
   EndIf   
  EndIf
 
  If yv
   If b2.group.yv=yv Then yv=-yv
   If b2.group.yv=-yv Then yv=-yv;b2.group.yv=-b2.group.yv ' ideal mutual reflection
   If b2.group.yv=0
    If b2.group.xv=0 Then b2.group.yv=yv;yv=0 ' transfer
    If b2.group.xv<>0 Then yv=-yv             ' reflection
   EndIf   
  EndIf

  'transferMomentum(b:block,b2:block)
 ' get_velocity_from_momentum() ' changed momentum   ' if can't pass on momentum then change velocity
  Return
 EndIf

 If b2.btype=4
  If xv
   If b2.group.xv=xv Then yv=-xv;xv=0 ' magnetic reflection
   If b2.group.xv=-xv Then yv=-xv;xv=0 ; b2.group.xv=-b2.group.xv ' mutual reflection
   If b2.group.xv=0
    If b2.group.yv=0 Then b2.group.xv=xv ; xv=0 ' transfer
    If b2.group.yv<>0 Then yv=-xv ; xv=0 ; ' magnetic reflection
   EndIf
   Return
  EndIf

  If yv
   If b2.group.yv=yv Then xv=yv;yv=0
   If b2.group.yv=-yv Then xv=yv;yv=0 ; b2.group.yv=-b2.group.yv ' mutual reflection
   If b2.group.yv=0
    If b2.group.xv=0 Then b2.group.yv=yv ; yv=0 ' transfer
    If b2.group.xv<>0 Then xv=yv ; yv=0 ; ' magnetic reflection
   EndIf
   Return
  EndIf
 EndIf

EndIf

If b.btype=4  
 cv=xv 
 xv=-yv
 yv=cv 
EndIf
If b.btype=5 Then cv=xv  ; xv=yv  ; yv=-cv 
If b.btype=6 And b2.btype=0 Then xv=0   ; yv=0

If b2.group And (b2.group.xv<>b.group.xv Or b2.group.yv<>b.group.yv)
 If b2.btype=1 Or b2.btype=3 Or b2.btype=6 Or b2.btype=7
   
 EndIf
EndIf

End Method



Method push(k) ' t is type of collision block

'Select k
' Case 3
'  If xv
 
'End Select

End Method



Method kicked()



End Method



Method check_collision:block(xm,ym)
' -1 means block has moved out of play area

Local b:block=blist.ba[0]
Local b2:block
Local xt,yt,i

While b
 xt=b.x+xm
 yt=b.y+ym
 
 If xt>=0 And yt>=0 
  b2=bmap.fetch(xt+yt Shl 10) 
 Else
  Return Null
 EndIf

 
 If b2 And b2.group<>Self
  bref=b
  Return b2
 EndIf

 i=i+1
 b=blist.ba[i]
Wend
 
Return Null

End Method


Method move()
 move(xv,yv)
End Method


Method move(xm,ym)

Local b:block=blist.ba[0]
Local b2:block=Null
Local xt,yt:Int
Local n:Int=bmap.le
Local cv,i
Local xv2,yv2

If Abs(xv)+Abs(yv)>1 Then RuntimeError(" bgroup, move , both xv and yv non zero ")
If lastmove=time Then Return

b2=check_collision(xm,ym)
If b2 Then b=bref

If b2<>Null And b2<>b And b2.group<>b.group
 If b2.btype<>0
 ' DebugStop
  If b.bondcheck(b2)
    
   merge(b2.group)
'   b.bonds=b.bonds-1
'   b2.bonds=b2.bonds-1
   If b.x-b2.x=1  Then b.bonds2=b.bonds2 | %0010000 ; b2.bonds2=b2.bonds2 | %1000000
   If b.y-b2.y=1  Then b.bonds2=b.bonds2 | %0001000 ; b2.bonds2=b2.bonds2 | %0100000 
   If b.x-b2.x=-1 Then b.bonds2=b.bonds2 | %1000000 ; b2.bonds2=b2.bonds2 | %0010000
   If b.y-b2.y=-1 Then b.bonds2=b.bonds2 | %0100000 ; b2.bonds2=b2.bonds2 | %0001000

   Return
  EndIf

 EndIf

 If b.bType=2 And b2.btype=0 Then b.repblock()
 collision_manager(b,b2)

 Return 0 ' this can be improved once leading edge is implemented
			' this makes block pause for one frame. it is possible to have a faster bounce by continuing ( use break\exit )
EndIf

i=0
b=blist.ba[0]

'check_group_vel()

While b
 If bmap.fetch(b.x+b.y Shl 10)=b Then bmap.remove(b.x+b.y Shl 10) ' conditional cos new block in same group may have moved in already
 b.x=b.x+xm
 b.y=b.y+ym
 bmap.insert(b.x+b.y Shl 10,b)

 i=i+1
 b=blist.ba[i]
Wend

If xv=0 And yv=0 Then Return ' no need to update maps and lasttime if not moving
lastmove=time

i=0
b=blist.ba[0]

While b '  a group with a concrete block keeps its velocity... arbitary 
 If b.btype<>7 Then Return
 i=i+1
 b=blist.ba[i]
Wend
xv=0;yv=0 ' concrete blocks ' htf this works? 

End Method



Function check_group_vel()
Local i,g:bgroup

While i<garray.le
 g:bgroup=garray.ga[i]
 If Abs(g.xv)+Abs(g.yv)>1 Then RuntimeError(" bgroup : both xv and yv non zero ")
 i=i+1
Wend

End Function


Method check_substrates()

Local i,j,k,ok
Local b:block
Local s:substrate
Local sl:substrate[10]

While blist.ba[i]
 b=blist.ba[i]
 s=smap.fetch(b.x+b.y Shl 10)
 If s
  ok=1
  For j=0 To k ' check see if blockgroup has already been moved by this substrate
   If sl[j]=s Then ok=0
  Next
  If ok
   move(s.group.xv,s.group.yv)
   sl[k]=s
   k=k+1
  EndIf
 EndIf

 i=i+1
Wend

End Method



Method remove_block(b:block)' remove block from grouplist
' should be used in conjuction with another Function that either deletes block Or puts it in another group
Local i
While i<blist.le
 If blist.ba[i]=b Then blist.ba[i]=Null
 i=i+1
Wend
b.group=Null

End Method


Method remove() ' remove group from global list

Local b:block=blist.ba[0]
Local i

While b
 bmap.remove(b.x+b.y Shl 10)

 Local re:redraw=New redraw
 re.x=b.oldx[frame]
 re.y=b.oldy[frame]
 re.redraws=2
 rarray.add(re)
 re:redraw=New redraw
 re.x=b.oldx[1-frame]
 re.y=b.oldy[1-frame]
 re.redraws=2
 rarray.add(re)

 barray.ba[b.id]=Null ' ********** this should be deleting block from barray ****
 i=i+1
 b=blist.ba[i]
Wend
garray.ga[id]=Null
garray.ordered_sort(0,0)

End Method


Method split(bl:block[],xvn,yvn) ' into 2 groups

Local i,b:block,bg:bgroup

While i<blist.le
 If blist.ba[i]=b Then blist.ba[i]=Null;Exit
 i=i+1
Wend
bg=New bgroup
bg.xv=xvn
bg.yv=yvn
bg.blist.ba=bg.blist.ba[..10] 
bg.blist.ba=bl
bgc=bgc+1

End Method


Method spawn:bgroup(xs,ys)
 Local bgn:bgroup=New bgroup
 Local i:Int
 Local m:block=blist.ba[0]

 While m
'  bgn.blist.addlast(block(m.value).spawn(xs,ys))
  i=i+1
  m=blist.ba[i]
 Wend
 bgn.id=bgc
 bgc=bgc+1 
End Method


Method checkarrows()

Local b:block=blist.ba[0]
Local i

While b
 If b.btype
  Select thingmap.fetch(b.x+(b.y Shl 10)) Mod 8
   Case 1 ; xv=0 ; yv=-1 
   Case 2 ; xv=0 ; yv=1  
   Case 3 ; xv=-1; yv=0  
   Case 4 ; xv=1 ; yv=0  
  End Select
 EndIf

 i=i+1
 b=blist.ba[i]     ' this should not be 10 long ' but it is, right from being placed
Wend

End Method


Method out_of_bounds()

Local i
Local b:block=blist.ba[0]

If b<>Null
 Repeat
  If Not b.out_of_bounds() Return 0
  i=i+1
  b=blist.ba[i]
 Until b=Null
EndIf

Return 1

End Method


Method draw()

Local b:block=blist.ba[0]
Local i

If b<>Null
 Repeat
  b.draw()
  i=i+1
  b=blist.ba[i]
 Until b=Null
EndIf

End Method



Method merge(g:bgroup)

If g=Self Then Return
Local b:block=g.blist.ba[0]
Local i

While i<g.blist.le
 If b Then blist.add(b);b.group=Self
 i=i+1
 b=g.blist.ba[i] ' hope that le < max size of ba, else will crash here
Wend

garray.ga[g.id]=Null

End Method


End Type ' ** end block group **



Type substrate
  
Field image:TImage
Field x,y,bit_tags,id ' bit_tags 1 = prototype for generators
Field oldx[2],oldy[2]
Field group:sgroup


Method New(xs,ys,im:TImage,sg:sgroup) ' yay! constructors!
 
x=xs;y=ys
'If smt=31 Then image=sub0
'If smt=32 Then image=subd
image=im
'id=sc ' hmm how we keep track of id when its linked to position in sarray and sarray length is variable?
If sg=Null
 sg=New sgroup
 sgarray.add(sg)
EndIf

sg.add(Self)
sarray.add(Self)

End Method


Method out_of_bounds()
 If x<1 Or x>1000 Or y<1 Or y>1000 Then Return 1 
End Method


Method draw()
 DrawImage blank,(oldx[frame]-camposx)*zoom,(oldy[frame]-camposy)*zoom
 DrawImage image,(x-camposx)*zoom,(y-camposy)*zoom
 oldx[frame]=x
 oldy[frame]=y
End Method


Method Del()

Local re:redraw=New redraw
re.x=oldx[frame]
re.y=oldy[frame]
re.redraws=2
rarray.add(re)
re:redraw=New redraw
re.x=oldx[1-frame]
re.y=oldy[1-frame]
re.redraws=2
rarray.add(re)

group.remove()
sarray.sa[id]=Null
smap.remove(x+y Shl 10)

End Method


End Type



Function update_sgroups() ' substrate groups

Local i
Local sg:sgroup

While i<sgarray.le
 sg=sgarray.sga[i] 
 If sg
  sg.checkarrows()
  sg.move()
  If sg.out_of_bounds_check() 
'   Print "deleted bgroup "+bg.id+" due to out of bounds "
   sg.remove() 
  EndIf
 EndIf
 
 i=i+1
Wend

End Function



Type sgroup

Field slist:subarray=New subarray
Field xv,yv,bittags,id ' bittags 1 -> tagged for deletion

Method add(s:substrate)
 slist.add(s)
 s.group=Self
End Method


Method move()

Local s:substrate=slist.sa[0]
Local s2:substrate=Null
Local xt,yt:Int
Local n:Int=thingmap.le
Local i,t,t2
Local ti ' thing in adjacent cell 
Local bi:block
Local si:substrate

If Abs(xv)+Abs(yv)>1 Then RuntimeError(" sgroup, move, xv and yv both non zero ")

While s ' old out of bounds check? seems redundant
 xt=s.x+xv
 yt=s.y+yv
 If xt>=0 And yt>=0 
  ti=thingmap.fetch(xt+yt Shl 10) 
  bi=bmap.fetch(xt+yt Shl 10)
  si=smap.fetch(xt+yt Shl 10)
 Else
  remove();Return 
 EndIf

 If bi
  If bi.btype=0 Then xv=-xv;yv=-yv;Return
 EndIf

 If si
  If si.group<>s.group Then xv=-xv;yv=-yv;Return
 EndIf

 i=i+1
 s=slist.sa[i]
Wend

' now lets actually move the substrate
i=0
s=slist.sa[0]
While s
 smap.remove(s.x+s.y Shl 10)
 i=i+1
 s=slist.sa[i]
Wend

i=0
s=slist.sa[0]
While s
 s.x=s.x+xv
 s.y=s.y+yv
 smap.insert(s.x+s.y Shl 10,s)
 i=i+1
 s=slist.sa[i]
Wend

End Method


Method remove()

Local s:substrate=slist.sa[0]
Local i

While s
 smap.remove(s.x+s.y Shl 10)

 Local re:redraw=New redraw
 re.x=s.oldx[frame]
 re.y=s.oldy[frame]
 re.redraws=2
 rarray.add(re)
 re:redraw=New redraw
 re.x=s.oldx[1-frame]
 re.y=s.oldy[1-frame]
 re.redraws=2
 rarray.add(re)

 sarray.sa[s.id]=Null ' ********** this should be deleting block from barray ****
 i=i+1
 s=slist.sa[i]
Wend
sgarray.sga[id]=Null
sgarray.ordered_sort(0,0)

End Method



Method out_of_bounds_check()

Local i
Local s:substrate=slist.sa[0]

If s<>Null
 Repeat
  If Not s.out_of_bounds() Return 0
  i=i+1
  s=slist.sa[i]
 Until s=Null
EndIf

Return 1

End Method


Method checkarrows()

Local s:substrate=slist.sa[0]
Local i

While s
 If s.image=subd
  Select thingmap.fetch(s.x+(s.y Shl 10)) Mod 8
   Case 1 ; xv=0 ; yv=-1
   Case 2 ; xv=0 ; yv=1
   Case 3 ; xv=-1; yv=0
   Case 4 ; xv=1 ; yv=0
  End Select
 EndIf

 i=i+1
 s=slist.sa[i]
Wend

End Method


Method draw()

Local s:substrate=slist.sa[0]
Local i

If s<>Null
 Repeat
  s.draw()
  i=i+1
  s=slist.sa[i]
 Until s=Null
EndIf

End Method


End Type



Function draw_things()

Local m,v,i:Int

Local im:TImage
Local n:Int=thingmap.le

While i<n
 m=thingmap.kfetch(i)
 v=thingmap.fetch(m)
 
 If v
  If v Mod 8
   Select v Mod 8
    Case 1 ; im=arrown
    Case 2 ; im=arrows
    Case 3 ; im=arroww
    Case 4 ; im=arrowe
   End Select
   SetMaskColor (255,255,230)
   If (v Mod 8) Then DrawImage im,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
   If v=5       Then DrawImage gene,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
  EndIf
  If v & 136=136
   SetMaskColor 0,0,0
   DrawImage subd,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
  ElseIf v & 128
   SetMaskColor 0,0,0
   DrawImage sub0,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
  EndIf
 EndIf
 i=i+1
Wend

End Function



Function redraw3x3(x,y)

Local x2:Int=x
Local y2:Int=y
Local v
Local b:block
Local im:TImage

While x2<x+3
y2=y
While y2<y+3
 redraw_cell(x2,y2)
 y2=y2+1
Wend
x2=x2+1
Wend

End Function



Function update_display()

SetViewport 0,0,gw,gh
SetColor 0,0,0
DrawRect moxo[frame],moyo[frame],50,50
SetColor 255,255,255 '        what in the unholy feck!?! this color call is controling the alpha of all images drawn

SetViewport 0,0,gw-100,gh
If mox<gw-100 Then redraw3x3(moxco[frame],moyco[frame])
If redraw_map>0 Then Cls
draw_things()
draw_sarray()
draw_barray()
DrawImage mousec,(moxc-camposx)*zoom,(moyc-camposy)*zoom
If redraw_map>0 Then draw_walls();redraw_map=redraw_map-1
rarray.do_redraws()

SetViewport gw-100,0,gw,gh
draw_editbar()

SetViewport 0,0,gw,gh 

DrawImage smi,mox+15,moy+15
DrawImage mousep,mox,moy
moxco[frame]=moxc
moyco[frame]=moyc
moxo[frame]=mox
moyo[frame]=moy

Flip 0

If gamespeedbrake_setting<>0 And gamespeedbrake_setting<>4
 While MilliSecs() Mod gamespeedbrake<>0
 Wend
 While Abs(MilliSecs() Mod gamespeedbrake)<>1
 Wend
EndIf

frame=1-frame

End Function



Function draw_editbar()

Local i,x,y

SetColor 0,0,0
DrawRect mox,moy,90,90 ' needs to be in prior frames
SetMaskColor (0,0,0)

SetMaskColor 255,255,230
SetColor (222,222,222)
SetScale (1.0,1.0)

Local s:substrate=smap.fetch(moxc+moyc Shl 10)
Local t=thingmap.fetch(moxc+moyc Shl 10)

DrawLine gw-100,0,gw-100,gh
SetColor 0,0,0
DrawRect gw-90,gh-70,100,20
SetColor 222,222,222
DrawText (moxc+" "+moyc+" "+t,gw-90,gh-65)

Local b:block=bmap.fetch(moxc+moyc Shl 10)
If b And b.btype<>0
 SetColor 0,0,0
 DrawRect gw-90,gh-45,100,40
 SetColor 222,222,222
 DrawText b.btype+" "+b.id+" "+b.group.id,gw-90,gh-45
EndIf

SetColor 0,0,0
DrawRect gw-90,gh-20,100,20
If s
 SetColor 222,222,222
 DrawText (s.id+1)+" "+t,gw-90,gh-20
EndIf
SetColor 222,222,222

SetScale (0.67,0.67)
While imagelist[i]
 x=25*Int(i/30)
 y=(i*20) Mod 600
 DrawImage imagelist[i],x+gw-96,y+10
 i=i+1
Wend
SetScale (zoom/30.0,zoom/30.0)

End Function



Function draw_walls()

Local b:block,i

While i<wallgroup.le
 b=wallgroup.ba[i]
 If b
  DrawImage blank,(b.oldx[frame]-camposx)*zoom,(b.oldy[frame]-camposy)*zoom
  DrawImage b.image,(b.x-camposx)*zoom,(b.y-camposy)*zoom
  b.oldx[frame]=b.x
  b.oldy[frame]=b.y
 EndIf
 i=i+1
Wend

End Function



Function update_bgroups()

Local i
Local bg:bgroup

i=0
While i<garray.le
 bg=garray.ga[i]
 If bg
  bg.checkarrows()
  bg.check_substrates()
  bg.move()
  If bg.out_of_bounds() Then bg.remove() 
 EndIf
'   Print "deleted bgroup "+bg.id+" due to out of bounds "

 i=i+1
Wend

End Function



Function draw_barray()

Local i:Int
Local b:block

While i<barray.le
 b=barray.ba[i]
 If b
  redraw_cell(b.oldx[frame],b.oldy[frame])'DrawImage blank,(b.oldx[frame]-camposx)*zoom,(b.oldy[frame]-camposy)*zoom ' 
  DrawImage b.image,(b.x-camposx)*zoom,(b.y-camposy)*zoom
  b.oldx[frame]=b.x
  b.oldy[frame]=b.y
 EndIf

 i=i+1
Wend

End Function



Function draw_sarray()

Local i:Int
Local s:substrate

While i<sarray.le
 s=sarray.sa[i]
 If s
  redraw_cell(s.oldx[frame],s.oldy[frame])'DrawImage blank,(b.oldx[frame]-camposx)*zoom,(b.oldy[frame]-camposy)*zoom ' 
  DrawImage s.image,(s.x-camposx)*zoom,(s.y-camposy)*zoom
  s.oldx[frame]=s.x
  s.oldy[frame]=s.y
 EndIf

 i=i+1
Wend

End Function



Function redraw_cell(x,y)

Local b:block=bmap.fetch(x+y Shl 10)
Local v=thingmap.fetch(x+y Shl 10)
Local s:substrate=smap.fetch(x+y Shl 10)

Local im:TImage

If b Then DrawImage b.image,(x-camposx)*zoom,(y-camposy)*zoom   ; Return
If Not v Then DrawImage blank,(x-camposx)*zoom,(y-camposy)*zoom ; Return

' no v it seems when substrate created
If v
 If v Mod 8
  Select v Mod 8
   Case 1 ; im=arrown
   Case 2 ; im=arrows
   Case 3 ; im=arroww
   Case 4 ; im=arrowe
  End Select
 ' If (v Mod 8) Then DrawImage blank,(x-camposx)*zoom,(y-camposy)*zoom
  DrawImage im,(x-camposx)*zoom,(y-camposy)*zoom
 EndIf
'  If v>=5 Then DrawImage gene,(x-camposx)*zoom,(y-camposy)*zoom
EndIf
 
If s Then DrawImage s.image,zoom*(x-camposx),zoom*(y-camposy) 

End Function



Function gen_maze_map(xs,ys,xf,yf,mx,my)
' s,f start finish of maze , m size of maze
wallgroup:blockarray=New blockarray ' wall blocks
wallgroup.ba=wallgroup.ba[..999999]
bmap=New fastblockmap
thingmap=New fastintmap

Local m:Byte[mx*my]
Local d,ok,k:Byte=0
Local xv,yv,x,y,x2,y2,i=0,j=0:Int
Local xs2[6]
Local ys2[6]
xs2[0]=xs ; ys2[0]=ys
xs2[1]=xf ; ys2[1]=yf
xs2[2]=1 ; ys2[2]=1
xs2[3]=mx-1 ; ys2[3]=1
xs2[4]=1 ; ys2[4]=my-1
xs2[5]=mx-1 ; ys2[5]=my-1

x=xs;y=ys

While k<6
x=xs2[k];y=ys2[k]
i=0;j=0

While (i<100 Or ok=0) And (j<1024)
 
 d=Rand(0,3)
 Select d
  Case 0 ;xv=1  ;yv=0
  Case 1 ;xv=-1 ;yv=0
  Case 2 ;xv=0  ;yv=1
  Case 3 ;xv=0  ;yv=-1
 End Select

 While 1
  m[x+y*mx]=1

  x2=x+xv
  y2=y+yv

  If x2>0 And x2<mx-1 And y2>0 And y2<my-1
   If m[x2+xv+(y2+yv)*mx]=0 Or m[x2+y2*mx]=1 Then x=x+xv; y=y+yv
  Else
   Exit
  EndIf

  If x=xf And y=yf Then ok=1

  i=i+1
  If Rand(0,2)=1 Then Exit
 Wend
 
 j=j+1
Wend
k=k+1
Wend

For i=0 To mx*my-1
 If m[i]=0 Then wallblock(i Mod mx,Int(i/mx),0)
Next

End Function



Function wallblock(x,y,u)

Local b:block=New block
b.x=x
b.y=y
b.btype=0
b.image=imagelist[u]
bmap.insert(x+y Shl 10,b)
wallgroup.add(b)

End Function



Function get_mouse_input()

mozo=moz
Mox=MouseX()
moy=MouseY()
moz=MouseZ()

If mox<gw-100 Then mouse_input_map() Else mouse_input_editbar()

End Function



Function mouse_input_editbar()

If MouseHit(1)
 If mox<gw-70 Then smt=(moy-10)/20;smi=imagelist[smt];Return
 If mox<gw-45 Then smt=30+((moy-10)/20);smi=imagelist[smt];Return
EndIf

End Function



Function mouse_input_map()

Local mozd,mozn:Float
Local b:block
Local prox ' nearby object to mouseclick

moxc=mox/zoom+camposx
moyc=moy/zoom+camposy

mozd=moz-mozo ' have to log own mouse z position cos bmax doesn't let u movemousez
If mozu+mozd<-9 Then mozn=-9 Else mozn=mozu+mozd

If mozu<>mozn
 mozu=mozn
 zoom=30*(1.0+mozu/10.0)
 redraw_map=3
 SetScale (zoom/30.0,zoom/30.0)
 camposx=moxc-GraphicsWidth()/(2.0*zoom)
 camposy=moyc-GraphicsHeight()/(2.0*zoom)
 MoveMouse (GraphicsWidth()/2,GraphicsHeight()/2)
EndIf

If moxc<0 Then moxc=0
If moyc<0 Then moyc=0

If MouseHit(1)
 If smt<=43
  b=bmap.fetch(moxc+moyc Shl 10)
  If Not b
   If smi=sub0 Then createsinglesubstrate(moxc,moyc);Return
   If smi=subd Then placeSubstrateGuide(moxc,moyc);Return
   If smi=gene Then DebugStop;placegene(moxc,moyc);Return   ' 42
   btarray[smt].Createsingleblock(moxc,moyc,0,0)
  Else
   b.checkchem3(Null)
  EndIf
 EndIf

EndIf

If MouseHit(2)
 b=bmap.fetch(moxc+moyc Shl 10)
 If Not b
  If smt<=3 Then wallblock(moxc,moyc,0);Return
  prox=bmap.fetch(1+moxc+moyc Shl 10) Or bmap.fetch(-1+moxc+moyc Shl 10)
  prox=prox Or bmap.fetch(moxc+(moyc+1) Shl 10) Or bmap.fetch(+moxc+(moyc-1) Shl 10)
  If prox And smt<=30
   btarray[smt].setBindingblock(moxc,moyc) ' create new or bind existing one
  Else
   If smt<=31
    b=bmap.fetch(moxc+moyc Shl 10)
    If Not b
     btarray[smt].Createsingleblock(moxc,moyc,0,0)
    Else
     b.checkchem3(Null)
    EndIf
   EndIf
   If smi=sub0 Then mergeSingleSubstrate(moxc,moyc,smi)
   If smi=subd Then placeSubstrateGuide(moxc,moyc)
  EndIf
 EndIf
EndIf

If MouseHit(3)
 camposx=moxc-GraphicsWidth()/(2.0*zoom)
 camposy=moyc-GraphicsHeight()/(2.0*zoom)
 redraw_map=3
 MoveMouse (GraphicsWidth()/2,GraphicsHeight()/2)
 
EndIf

End Function



Function createsingleSubstrate:sgroup(x,y)

Local b:block=bmap.fetch(x+y Shl 10)
Local s:substrate=smap.fetch(x+y Shl 10)

If b Then If b.btype=0 Return
If s Then Return

Local sg:sgroup=New sgroup
'sg.slist.sa=sg.slist.sa[..10] wtf we need .. slice for?
sgc=sgc+1
s=New substrate(x,y,sub0,sg)

sg.add(s)
sgarray.add(sg)
sarray.add(s)
smap.insert(s.x+s.y Shl 10,s)

Return sg

End Function



Function placeSubstrateGuide:sgroup(x,y)

Local b:block=bmap.fetch(x+y Shl 10)
Local s:substrate=smap.fetch(x+y Shl 10)

If b Then If b.btype=0 Return
If s Then Return

Local sg:sgroup=New sgroup
sg.slist.sa=sg.slist.sa[..10]
sgc=sgc+1
s=New substrate
s.x=x
s.y=y

s.image=subd
sg.add(s)
sgarray.add(sg)
sarray.add(s)
smap.insert(s.x+s.y Shl 10,s)

Return sg

End Function



Function mergeSingleSubstrate(x,y,image:TImage)
 
Local b:block=bmap.fetch(x+y Shl 10)
Local s:substrate=smap.fetch(x+y Shl 10)
Local s2:substrate

If b Then If b.btype=0 Return
If s Then Return

s=New substrate
s.x=x
s.y=y
s.image=image
sarray.add(s)
smap.insert(s.x+s.y Shl 10,s)

If x>0 
 s2=smap.fetch(moxc+1+moyc Shl 10)
 If s2
  s.group=s2.group
  s.group.add(s)
  Return
 EndIf  
EndIf

If y>0 
 s2=smap.fetch(moxc+(moyc+1) Shl 10)
 If s2
  s.group=s2.group
  s.group.add(s)
  Return
 EndIf  
EndIf

If x<1000 
 s2=smap.fetch((moxc-1)+moyc Shl 10)
 If s2
  s.group=s2.group
  s.group.add(s)
  Return
 EndIf  
EndIf

If y<1000 
 s2=smap.fetch(moxc+(moyc-1) Shl 10)
 If s2
  s.group=s2.group
  s.group.add(s)
  Return
 EndIf  
EndIf

End Function



Function placeBigSubstrate(x1,y1,x2,y2)

Local x,y,t

For y=y1 To y2
For x=x1 To x2
 
Next
Next

End Function



Function placegene(x,y)

Local tm=thingmap.fetch(x+y Shl 10)
If tm>0 And tm<5 Then thingmap.insert(x+y Shl 10,5 Or tm)
Local g:gen=New gen
g.x=x
g.y=y
g.rate=5
g.bitflags=4
genarray.add(g)

End Function



Function get_user_input()

Local b:block=bmap.fetch(moxc+moyc Shl 10)
Local s:substrate=smap.fetch(moxc+moyc Shl 10)
Local t=thingmap.fetch(moxc+moyc Shl 10)
Local p

If KeyHit(key_f1) Then save_map()
If KeyHit(key_f2) Then load_map()
If KeyHit(key_f3) Then gen_maze_map(1,1,40,1,40,40)


If (Not b) Or (b And b.btype<>0)
 p=t-(t Mod 8)
 If KeyHit(key_w) Then thingmap.insert(moxc+moyc Shl 10,p|1)
 If KeyHit(key_s) Then thingmap.insert(moxc+moyc Shl 10,p|2)
 If KeyHit(key_a) Then thingmap.insert(moxc+moyc Shl 10,p|3)
 If KeyHit(key_d) Then thingmap.insert(moxc+moyc Shl 10,p|4)
EndIf

If KeyHit(key_space)
 If t>=5 And t<=9 
  'garray.remove(moxc+moyc Shl 10) 'remove generator
 EndIf
 thingmap.remove(moxc+moyc Shl 10)
 If b And b.btype<>0 Then b.group.remove()
 If b And b.image=imagelist[1] Then wallgroup.ba[b.id]=Null; bmap.remove(b.x+b.y Shl 10)
 If s Then s.del()
EndIf

Local old_gamespeedbrake_setting=gamespeedbrake_setting
gamespeedbrake_setting=gamespeedbrake_setting+KeyHit(key_openbracket)-KeyHit(key_closebracket)
If gamespeedbrake_setting<>old_gamespeedbrake_setting 
 Select gamespeedbrake_setting
  Case -1; gamespeedbrake_setting=0
  Case 0 ;' paused
  Case 1 ; gamespeedbrake=500' slow
  Case 2 ; gamespeedbrake=100' normal
  Case 3 ; gamespeedbrake=20 ' fast
  Case 4 ;' max
  Case 5 ; gamespeedbrake_setting=4
 End Select
EndIf

If gamespeedbrake<4 Then gamespeedbrake=4

FlushKeys()

End Function



Function update_gens()

Local i

While i<genarray.le
 genarray.ga[i].update()
 i=i+1
Wend

End Function



Global chem[4]
Function create_chem_numbers()
' block chemical numbers will prefer reactions that sum them to these numbers
chem[0]=4'Rand(2,4)
chem[1]=10'chem[0]+Rand(4,6)
chem[2]=chem[1]+Rand(5,7)
chem[3]=chem[2]+Rand(6,8)

End Function



Function chem_dist(x)
' how far is x from a chem number?
Local d2
Local i=0,d,s

d2=9999 

While i<4
 d=Abs(x-chem[i])
' s=Sgn(x-chem[i])
 If d<Abs(d2) Then d2=d'*s
 i=i+1
Wend

Return d2

End Function



Type btemplate

Field btype,ch,id,maxbonds
Field bonds2  ' bit bank for potential bonds and actual bonds %aaaapppp


Method create_block_image(grey)

Local bred,bgre,bblu
Local blockart:TImage

bred=100.0*colfunc(Float(maxbonds)/7.0)+Rand(20)+120
bgre=150.0*colfunc((2.3+Float(maxbonds))/7.0)+30
bblu=150.0*colfunc((4.7+Float(maxbonds))/7.0)+50

If grey
 bred=(bred+bgre+bblu)/3
 bgre=(bred+bgre+bblu)/3
 bblu=(bred+bgre+bblu)/3
EndIf

SetViewport 0,0,30,30
SetMaskColor 0,0,0
SetColor 0,0,0
DrawRect 0,0,30,30
blockart=LoadImage(MaskPixmap(LoadPixmap("blocks2\blockart"+ch+".png"),255,255,255))
SetColor (bred+20,bgre+40,bblu+40)
DrawRect 0,0,30,30

DrawImage blockart,0,0
SetMaskColor 0,0,0
GrabImage blockart,0,0

Cls
imagelist[noi]=CreateImage(30,30,1,dynamicimage=1)
SetColor (bred,bgre,bblu)
DrawRect (0,0,30,30)
DrawImage blockart,0,0
DrawImage imagelist[btype],0,0  ' draw the block shape here. But where To get it?

SetColor 200,50,50
If bonds2 & %0001 Then DrawRect 13 ,0,3,10
If bonds2 & %0100 Then DrawRect 13,20,3,10
If bonds2 & %0010 Then DrawRect  0,13,10,3
If bonds2 & %1000 Then DrawRect 20,13,10,3

GrabImage imagelist[noi],0,0

noi=noi+1

End Method



Method createsingleblock:bgroup(x,y,xv,yv)

If bmap.fetch(x+y Shl 10) Then Return
If btype=0 Then wallblock(x,y,id);Return

Local bg:bgroup=New bgroup
bg.xv=xv
bg.yv=yv
bgc=bgc+1
garray.add(bg)

Local b:block=New block
b.x=x
b.y=y
b.btype=btype
b.bt=id
b.maxbonds=maxbonds
b.bonds=maxbonds
b.bonds2=bonds2

b.image=imagelist[id]
bg.add(b)
barray.add(b)
bmap.insert(b.x+b.y Shl 10,b)

Return bg

End Method


Method setbindingblock(x,y)

Local bg:bgroup
Local b:block=bmap.fetch(x+y Shl 10)
Local b2:block

If b=Null Then bg=createsingleblock(x,y,0,0) Else bg=b.group

b=bg.blist.ba[0]

If x>0 Then b2=bmap.fetch((x-1)+y Shl 10)
If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
If y>0 Then b2=bmap.fetch(x+(y-1) Shl 10)
If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
b2=bmap.fetch(x+1+y Shl 10)
If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
b2=bmap.fetch(x+(y+1) Shl 10)
If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()

' consider binding to the strongest bind 1st rather than this arbitrary directional order

End Method

End Type



Function create_block_mix()
' this function is then sent to create block image, to make a random mix of blocks for this game
Local i,j,k,grey
Local bt:btemplate

' three times, for 3 different chemicals per block type
For i=0 To 5
 j=0
 If i=0 Then grey=1 Else grey=0

 While j<16
  bt=New btemplate
  bt.btype=i
  btarray[k]=bt
  bt.id=k
'  bt.maxbonds=j
  bt.bonds2=j
  bt.Create_block_image(grey)

  k=k+1
  j=j+1
  If grey=1 Then Exit
 Wend

Next

End Function



Function colfuncx:Float(x#)

While x>1
 x=x-1
Wend

If x<1.0/3.0 Then Return 0.0
x=x-1.0/3.0
If x<1.0/6.0 Then Return x*6.0
x=x-1.0/6.0
If x<1.0/3.0 Then Return 1.0
x=x-1.0/3.0
Return 1.0-x*6.0

End Function



Function colfunc:Float(x#)

While x>1
 x=x-1
Wend

If x<1.0/3.0 Then Return 0.0
x=x-1.0/3.0
If x<1.0/12.0 Then Return x*9.0
x=x-1.0/12.0
If x<1.0/12.0 Then Return 0.75+x*3
x=x-1.0/12.0
If x<1.0/3.0 Then Return 1.0
x=x-1.0/3.0
If x<1.0/12.0 Then Return 1.0-x*3
x=x-1.0/12.0
Return 0.75-x*9.0

End Function



Function demo_color_spread()

Local w:Float
While w<255.0
Local w2:Float=w/255.0
Local red:Float=255.0*colfunc(w2)
Local gre:Float=255.0*colfunc((85.0+w)/255.0)
Local blu:Float=255.0*colfunc((170.0+w)/255.0)
SetColor Int(red),Int(gre),Int(blu)
DrawRect w,50,1,150
w=w+1
Wend
Flip

While Not MouseHit(1)
Wend

End Function



Function remove_block_image_templates()

Local i
For i=0 To 60
 imagelist[i]=imagelist[i+8]
Next

' also get correct noi
i=0
While imagelist[i]
 i=i+1
Wend
noi=i

End Function



Function core_engine_thread:Object( data:Object )

If bmap.rc>1000 Then bmap.orderedsort()
update_sgroups()
update_bgroups()
update_gens()
time=time+1
    
Return "finished"

End Function


Function io_and_display_thread:Object( data:Object )

create_chem_numbers()
create_block_mix()
remove_block_image_templates()
gen_maze_map(1,1,40,1,40,40)

While Not KeyDown(key_escape)
 get_mouse_input()
 get_user_input()
 update_display()
Wend

Return " le fin "

End Function



Function save_map()

Local out:TStream = WriteFile("seltraMap.sem")
If Not out Then CreateFile("seltraMap.sem") ; out=WriteFile("seltraMap.sem")

' walls
Local i

WriteInt out,wallgroup.le

For i=0 To wallgroup.le-1
 WriteInt (out,wallgroup.ba[i].x)
 WriteInt (out,wallgroup.ba[i].y)
Next

WriteInt out,thingmap.le

For i=0 To thingmap.le
 WriteInt out,thingmap.kfetch(i)
 WriteInt out,thingmap.vfetch(i)
Next

CloseFile out

End Function



Function load_map()

' flushes the object array
wallgroup:blockarray=New blockarray ' wall blocks
wallgroup.ba=wallgroup.ba[..999999]

' but gotta flush map too!
bmap=New fastblockmap
thingmap = New fastintmap

Local in:TStream = ReadFile("seltraMap.sem")
If Not in Then Return

Local i,x,y
Local n=ReadInt(in)

For i=0 To n-1
 x=ReadInt(in)
 y=ReadInt(in)
 wallblock(x,y,0)
Next

n=ReadInt(in)
Local k,v

For i=0 To n-1
 k=ReadInt(in)
 v=ReadInt(in)
 If v Then thingmap.insert(k,v)
Next

CloseFile in

End Function



' *** start ***
'Local threads:TThread[2]
'threads[0]=CreateThread(core_engine_thread,"hihih")
create_chem_numbers()
create_block_mix()
remove_block_image_templates()
Global sub0:TImage=loadimage2("sub0.png")
Global subd:TImage=loadimage2("subd.png")
Global gene:TImage=loadimage2("gene.png")
gen_maze_map(1,1,40,1,40,40)
smi=imagelist[smt]

While Not KeyDown(key_escape)
 If gamespeedbrake_setting>0 Then core_engine_thread("")
 get_mouse_input()
 get_user_input()
 update_display()
Wend
End