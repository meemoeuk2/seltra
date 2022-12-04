
Type block ' ********************* type block ****************************
Field btype 
' 0 = wall , 1 = force block 2 = ? 

Field image:TImage
Field x,y,bit_tags,id ' bit_tags 1 = prototype for generators  ' %10 for right angle double bonder ( double bonder w/o tag = straight bonder )
Field oldx[2],oldy[2]
Field group:bgroup ' parent class
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

'If ok=2
' ' create 2 new blocks
' If btarray[bt].btype=btype 
'  If group.xv
'   btarray[bt].createsingleblock(x,y-1,0,-1,10:long,btype)
'   btarray[bt].createsingleblock(x,y+1,0,1,10:long,btype)
 ' EndIf
'  If group.yv
'   btarray[bt].createsingleblock(x-1,y,-1,0,10:long,btype)
'   btarray[bt].createsingleblock(x+1,y,1,0,10:long,btype)
 ' EndIf
' EndIf

' del() ' delete block
'EndIf

End Method


End Type



Function thingBlockDeleteCheck()

Local i

End Function


Function ThingBlockCheckArrows()

Local i=1,key
Local val:Long

While i=<thingmap.le

 val=v[i]

 ' this method is primitve, for blockgroups with one block only
 ' later for multi block groups will need direction setter management for multiple arrow inputs
 If val & isBlock ' if block ' is block may be redundant as we expand arrays in th thingmap
  'DebugStop
  Select val Mod 8
   Case upArrow    ;  DebugStop; v[i]=(val &~ directionFlags) | movingUp
   Case downArrow  ;   v[i]=(val &~ directionFlags) | movingDown
   Case leftArrow  ;   v[i]=(val &~ directionFlags) | movingLeft
   Case rightArrow ;   v[i]=(val &~ directionFlags) | movingRight
  End Select
 EndIf

 i=i+1
Wend ' this will have to be redone for multi blocks, which use a separate array

End Function



Function thingblockRemove(key)

v[thingmap.k[key]]=0
' key doesn't die, in case there's other stuff

End Function



Function ThingBlockMove()

Local i=1,key,key2
Local val:Long
Local val2:Long
Local n=thingmap.le

While i<=n
While i<=n

 key2=-1
 val = v[i]
 key = thingmap.getkey(val)

  If dblog Then Print "thingmoveblock: starting with block index:"+i+" value:"+val+" key:"+key

 Select (val & directionFlags)
  Case movingLeft ; key2 = key-1
  Case movingRight; key2 = key+1
  Case movingUp   ; key2 = key-(1 Shl 10)
  Case movingDown ; key2 = key+(1 Shl 10)
 End Select

 ' cheap check if outside pay area, will need to improve sometime
 If key2<0 Or key2>(1023 Shl 10) + 1023 Then Exit
 ' this causes skewed wrap around east-west, and stoppage at the north south limits

 Local i2= thingmap.ifetch(key2)
 val2:Long = v[i2]

 If val & isMovingBlock
  If val2 & isBlock Then DebugStop; thingBlockCollisionManager(i,i2)

  If key2<0 Or (key Mod 1024)<0
   thingblockRemove(key)
  Else
 
   If isWall &~ val2 ' this isthe actual move, which is a problem because its adding a element to he list everytime
    If isBlock &~ val2 ' not a block
     If dblog Then Print " thingmoveblock: move approved for "+key+" "+val+" block to "+key2
     moveblock(key,key2,i,i2,val,val2)     
    EndIf
   Else ' hit wall
    Local gbt:Long = (val & getBlockType) Shr btypeSh
    Local bte:Long = Sgn(val & blocktypeElastic)
    Local bf:Long = bounce*Sgn(val & blocktypeElastic)
    Local vbf:Long = val ~ bounce*Sgn(val & blocktypeElastic)
    v[i]= val ~ bounce*Sgn(val & blocktypeElastic)
  '  v[i]= val + val &  clockrotate*Sgn( val & blocktypeMagClock )
    If val & blocktypeMagClock Then  v[i] = clockRotation(val)
    If val & blocktypeMagAntiC Then  v[i] = antiCRotation(val)
    thingmap.v[key] = v[i]' XOR with bounceflag flips the direction
   EndIf

  EndIf

 EndIf 

 i=i+1
Wend
i=i+1
Wend

End Function



Function moveblock(key1,key2,i1,i2,val1:Long,val2:Long)
' assumes there's nothing blocking the move

If dblog Then Print "moveblock: starting with block "+i1+" key:"+key1+" val1:"+val1
If dblog Then Print "moveblock: blockflags:"+blockflags+"input block with blockflags "+(val1 & blockflags)

Local dbg1:Long  = val1 & blockflags
Local dbg2:Long  = val1 &~ (blockflags | keyrefflags)
Local val1b:Long = (val1 & blockflags) | (key2 Shl keyrfSh) 
' extracting the block and keymap data, leaving behind arrow data

If val1 &~ (blockflags | keyrefflags) ' something else is there, so need to split, and create new index
  ' no need for new index
  ' switch is always necessary, because block must retain order amongst themselves
  ' 'switch' is this a switch when the index is passed on?
 If val2=0
  thingmap.put(key2,val1b)
  i2=thingmap.ifetch(key2)
 
  If dblog Then Print "moveblock: "+val1b+" has been put in key "+key2
  If dblog Then Print "moveblock: "+(val1 &~ blockflags)+" has been put in key "+key1+"  "+v[k[key1]]
 EndIf 
Else
 val1=0
EndIf

' pass on the index

v[i2]=val1 &~ blockflags
v[i1]= val2 | val1b ' notice here that the indices have swaped. We wish to keep the active thing at the same index
k[key2]=i1
k[key1]=i2

If val1=0 Then k[key1]=0

If dblog Then Print "moveblock: init i,k,v "+i2+" "+key1+" "+v[i2]+"  dest: "+i1+" "+key2+" "+v[i1]


End Function



Function ThingBlockCheckCollision:Long(key) ' nope cos we need to check for arrows too
' 0 means no collision
' 1 means block has moved out of play area

If key>=0 And (key Mod 1024)>=0
 Local val:Long = thingmap.fetch(key)
 If val & isBlock Then Return val ' return key for collision block
 If val & isWall  Then Return val
Else
 Return 0
EndIf

Return 1

End Function



Function thingBlockCollisionManager(i,i2)
' at this point, we know blocks have collided, so we don't need to check keys anymore

Local val1:Long=v[i]
Local val2:Long=v[i2]
' taking the indices is faster
' why do we have 4 inputs?
' are keys checked here to make sure they are adjacent and moving accordingly?
'	 no. that is done in the check manager. if we get here its means collision is confirmed
'DebugStop

'check for block join
If (val1 & isBlock) And (val2 & isBlock) 
 If ((val1 & (bondpWestflag | movingLeft )) = bondpWestflag | movingLeft ) And (val2 & bondpEastFlag )
  val1=val1 | bondaWestFlag
  val2=val2 | bondaEastFlag
  v[i]=val1
  v[i2]=val2  
 EndIf
 If ((val1 & (bondpEastflag  | movingRight)) = bondpEastflag  | movingRight) And (val2 & bondpWestFlag )
  val1=val1 | bondaEastFlag
  val2=val2 | bondaWestFlag
  v[i]=val1
  v[i2]=val2
 EndIf
 If ((val1 & (bondpNorthflag | movingUp   )) = bondpNorthflag | movingUp)   And (val2 & bondpSouthFlag)
  val1=val1 | bondaNorthFlag
  val2=val2 | bondaSouthFlag
  v[i]=val1
  v[i2]=val2
 EndIf
 If ((val1 & (bondpSouthflag | movingDown )) = bondpSouthflag | movingDown) And (val2 & bondpNorthFlag)  
  val1=val1 | bondaSouthFlag
  val2=val2 | bondaNorthFlag
  v[i]=val1
  v[i2]=val2
 EndIf
EndIf




' after join, a block needs to become master or slave
End Function



Function mergeBlocks(key1,key2)

End Function


