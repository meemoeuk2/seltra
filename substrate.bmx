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
