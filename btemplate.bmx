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



Method createsingleblock:Long(x,y,xv,yv)

Local val:Long

If bmap.fetch(x+y Shl 10) Then Return
val = thingmap.fetch(x+y Shl 10)
If val & isBlock Then Return
If btype=0 Then wallblock(x,y,id);Return

'Local bg:bgroup=New bgroup
'bg.xv=xv
'bg.yv=yv
'bgc=bgc+1
'garray.add(bg)

'Local b:block=New block
'b.x=x
'b.y=y
'b.btype=btype
'b.bt=id
'b.maxbonds=maxbonds
'b.bonds=maxbonds
'b.bonds2=bonds2

'b.image=imagelist[id]
'bg.add(b)
'barray.add(b)
'bmap.insert(b.x+b.y Shl 10,b)

' we need to build a value to put in the map
Return thingmap.put(x + y Shl 10, val | isBlock | (thingmap.le Shl 8) )
 ' 

End Method



Method setbindingblock(x,y)

'Local bg:bgroup
'Local b:block=bmap.fetch(x+y Shl 10)
'Local b2:block

'If b=Null Then bg=createsingleblock(x,y,0,0) Else bg=b.group

'b=bg.blist.ba[0]

'If x>0 Then b2=bmap.fetch((x-1)+y Shl 10)
'If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
'If y>0 Then b2=bmap.fetch(x+(y-1) Shl 10)
'If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
'b2=bmap.fetch(x+1+y Shl 10)
'If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()
'b2=bmap.fetch(x+(y+1) Shl 10)
'If b2 And b2.btype>0 And b.checkchem2(b2) Then bg.merge(b2.group);b.get_moli_chem();b2.get_moli_chem()

' consider binding to the strongest bind 1st rather than this arbitrary directional order

End Method

End Type

