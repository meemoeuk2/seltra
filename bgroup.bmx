Type bgroup  ' block group
Field blist:blockarray=New blockarray
Field xv,yv,bittags,id ' bittags 1 -> tagged for deletion
Field lastmove    ' the latest move

Field bref:block ' internal, used when the program needs a reference to another block
                 ' for instance collision processing
Field n '[ a counter that counter the number of blocks in this group

' consider next place
' weigh up forces
' change places


Method add(b:block)

blist.add(b)
b.group=Self

End Method



Method addNewBlock(x,y)

Local b:block = New block
b.x=x
b.y=y

add(b)

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


