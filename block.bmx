

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


