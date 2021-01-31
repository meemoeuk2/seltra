' to do
' move group is blanking cells that should have own groups blocks in. STOP THAT!
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


'Global gene:TImage=LoadImage2("gene.png")

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
SeedRnd MilliSecs()

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
Global bi,bgc:Int ' block INCREMENTOR, blockgroup counter
Global camposx,camposy :Int
Global time

' block interactions , randomized with seed
' b-b interactions are particular to world
' sticky 0 = stick with ajcent block, 1 sticky with 1 force ( momemntum of single block colliding blocks ), 999999 unreactive
' splity 0 = splits with zero force, 
' impact Type. blocks react differently To impacts ' 0 = stop, 1 = bounce , 2 turn left, 3 turn right

Global garray:grouparray=New grouparray
Global barray:blockarray=New blockarray ' active blocks
Global wallgroup:blockarray=New blockarray ' wall blocks
Global rarray:redrawarray=New redrawarray
Global genarray:generatorarray=New generatorarray

Global bmap:fastblockmap=New fastblockmap
Global thingmap:fastintmap=New fastintmap ' arrows and generators



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
 Select tm Mod 5
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


Type block
Field btype 
' 0 = wall

Field image:TImage
Field x,y,bit_tags,id ' bit_tags 1 = prototype for generators
Field oldx[2],oldy[2]
Field group:bgroup ' super class

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
 bi=bi+1
 barray.add(b)
 bmap.insert(b.x+b.y Shl 10,b)
 Return b
End Method

End Type


Type redraw
Field x,y
Field redraws:Byte ' %11 = redraws 1~3
End Type



Type bgroup
Field blist:blockarray=New blockarray
Field xv,yv,bittags,id ' bittags 1 -> tagged for deletion
Field xf,yf

' consider next place
' weigh up forces
' change places


Method add(b:block)

blist.add(b)
b.group=Self

End Method



Method move()

Local b:block=blist.ba[0]
Local b2:block=Null
Local xt,yt:Int
Local n:Int=bmap.le
Local cv,i

If Abs(xv)+Abs(yv)>1 Then DebugStop

While b

 xt=b.x+xv
 yt=b.y+yv
  
 If xt>=0 And yt>=0 Then b2=bmap.fetch(xt+yt Shl 10) Else remove();Return
 If b2<>Null And b2<>b And b2.group<>b.group

  If b.btype=3 And b2.btype=0 Then xv=-xv ; yv=-yv
  If b.btype=4 And b2.btype=0 Then cv=xv; xv=-yv  ; yv=cv
  If b.btype=5 And b2.btype=0 Then cv=xv; xv=yv ; yv=-cv
  If b.btype=6 And b2.btype=0 Then xv=0 ; yv= 0

  If b2.group
   If b2.btype=1 Or b2.btype=3 Or b2.btype=6 Or b2.btype=7
    b2.group.xf=b2.group.xf+xv*Len(blist)
    b2.group.yf=b2.group.yf+yv*Len(blist)
   ElseIf b2.btype=4
    b2.group.xf=b2.group.xf+yv*Len(blist)
    b2.group.yf=b2.group.yf-xv*Len(blist)
   ElseIf b2.btype=5
    b2.group.xf=b2.group.xf-yv*Len(blist)
    b2.group.yf=b2.group.yf+xv*Len(blist)
   EndIf
   
   If b.btype=1 Or b.btype=3 Or b.btype=6 Or b2.btype=7
    b.group.xf=b.group.xf-xv*Len(blist)
    b.group.yf=b.group.yf-yv*Len(blist)
   ElseIf b.btype=4
    b.group.xf=b.group.xf-yv*Len(blist)
    b.group.yf=b.group.yf+xv*Len(blist)
   ElseIf b.btype=5
    b.group.xf=b.group.xf+yv*Len(blist)
    b.group.yf=b.group.yf-xv*Len(blist) 
   EndIf
  EndIf
  Return 0 ' this can be improved once leading edge is implemented
 EndIf
 
 i=i+1
 b=blist.ba[i]
Wend

i=0
b=blist.ba[0]

'check_group_vel()

While b
 If bmap.fetch(b.x+b.y Shl 10)=b Then bmap.remove(b.x+b.y Shl 10) ' conditional cos new block in same group may have moved in already
 b.x=b.x+xv
 b.y=b.y+yv
 bmap.insert(b.x+b.y Shl 10,b)

 i=i+1
 b=blist.ba[i]
Wend

i=0
b=blist.ba[0]

While b
 If b.btype<>7 Then Return
 i=i+1
 b=blist.ba[i]
Wend
xv=0;yv=0 ' concrete blocks

End Method



Function check_group_vel()
Local i,g:bgroup

While i<garray.le
 g:bgroup=garray.ga[i]
 If Abs(g.xv)+Abs(g.yv)>1 Then DebugStop
 i=i+1
Wend

End Function



Method check_forces()

Local xvo=xv
Local yvo=yv

If Abs(xf)>=Len(blist) 
 xv=xv+Sgn(xf)
 If Abs(xv)>0 And xvo=0 Then yv=0
EndIf
If Abs(yf)>=Len(blist) 
 yv=yv+Sgn(yf)
 If Abs(yv)>0 And yvo=0 Then xv=0
EndIf

xv=Sgn(xv)
yv=Sgn(yv)

If Abs(xv)+Abs(yv)>1 ' tiebreaker
 If Abs(xv+xf)>=Abs(yv+yf) Then yv=0 Else xv=0
EndIf

xf=0;yf=0

End Method


Method remove()

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

 barray.ba[b.id]=Null
 i=i+1
 b=blist.ba[i]
Wend
garray.ga[id]=Null
garray.ordered_sort(0,0)

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
  Select thingmap.fetch(b.x+(b.y Shl 10)) Mod 5
   Case 1 ; xv=0 ; yv=-1
   Case 2 ; xv=0 ; yv=1
   Case 3 ; xv=-1; yv=0
   Case 4 ; xv=1 ; yv=0
  End Select
 EndIf

 i=i+1
 b=blist.ba[i]
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

While b
 blist.add(b)
 b.group=Self
 i=i+1
 b=g.blist.ba[i]
Wend

garray.ga[g.id]=Null

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
  If v<10
   Select v Mod 5
    Case 1 ; im=arrown
    Case 2 ; im=arrows
    Case 3 ; im=arroww
    Case 4 ; im=arrowe
   End Select
   SetMaskColor (255,255,230)
   If (v Mod 5) Then DrawImage im,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
 '  If v>=5 Then DrawImage gene,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
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

Flip
While MilliSecs() Mod 100<>0
Wend
While MilliSecs() Mod 100<>1
Wend
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

DrawLine gw-100,0,gw-100,gh
SetColor 0,0,0
DrawRect gw-90,gh-50,100,20
SetColor 222,222,222
DrawText (moxc+" "+moyc,gw-90,gh-50)

Local b:block=bmap.fetch(moxc+moyc Shl 10)
If b
 SetColor 0,0,0
 DrawRect gw-90,gh-25,100,20
 SetColor 222,222,222
 DrawText b.btype,gw-90,gh-25
EndIf

SetScale (0.67,0.67)
While imagelist[i]
 x=30*Int(i/30)
 y=(i*20) Mod 600
 DrawImage imagelist[i],x+gw-95,y+10
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

While i<garray.le
 Local bg:bgroup=garray.ga[i]
 If bg
  bg.check_forces()
  bg.checkarrows()
  bg.move()
  If bg.out_of_bounds() 

'   Print "deleted bgroup "+bg.id+" due to out of bounds "
   bg.remove()
   
  EndIf
 EndIf
 
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



Function redraw_cell(x,y)

Local b:block=bmap.fetch(x+y Shl 10)
Local v=thingmap.fetch(x+y Shl 10)
Local im:TImage

If b Then DrawImage b.image,(x-camposx)*zoom,(y-camposy)*zoom ; Return
If Not v Then DrawImage blank,(x-camposx)*zoom,(y-camposy)*zoom ; Return

If v
 If v<10
  Select v Mod 5
   Case 1 ; im=arrown
   Case 2 ; im=arrows
   Case 3 ; im=arroww
   Case 4 ; im=arrowe
  End Select
 ' If (v Mod 5) Then DrawImage blank,(x-camposx)*zoom,(y-camposy)*zoom

  If (v Mod 5) Then DrawImage im,(x-camposx)*zoom,(y-camposy)*zoom
'  If v>=5 Then DrawImage gene,(x-camposx)*zoom,(y-camposy)*zoom
 EndIf
EndIf
 
End Function



Function Create_world()

End Function



Function gen_maze_map(xs,ys,xf,yf,mx,my)
' s,f start finish of maze , m size of maze
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
'If u Then b.image=wall2 Else b.image=wall1
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
 If mox<gw-70 Then smt=(moy-10)/20;smi=imagelist[smt]
EndIf

End Function



Function mouse_input_map()

Local mozd,mozn:Float

moxc=mox/zoom+camposx
moyc=moy/zoom+camposy

mozd=moz-mozo ' have to log own mouse z position cos bmax doesn't let u movemousez
If mozu+mozd<-9 Then mozn=-9 Else mozn=mozu+mozd

If mozu<>mozn
 mozu=mozn
 zoom=30*(1.0+mozu/10.0)
 redraw_map=2
 SetScale (zoom/30.0,zoom/30.0)
 camposx=moxc-GraphicsWidth()/(2.0*zoom)
 camposy=moyc-GraphicsHeight()/(2.0*zoom)
 MoveMouse (GraphicsWidth()/2,GraphicsHeight()/2)
EndIf

If moxc<0 Then moxc=0
If moyc<0 Then moyc=0

If MouseHit(1)
 'DebugStop
' If smt=0 And bmap.fetch(moxc+moyc Shl 10)=Null Then wallblock(moxc,moyc,1) 
' If smt=1 And bmap.fetch(moxc+moyc Shl 10)=Null Then placegene(moxc,moyc)
 If smt<=24 Then If bmap.fetch(moxc+moyc Shl 10)=Null Then btarray[smt].Createsingleblock(moxc,moyc,0,0)

EndIf

If MouseHit(2)
' If smt=0 And bmap.fetch(moxc+moyc Shl 10)=Null Then wallblock(moxc,moyc,1) 
 If smt<=24 And bmap.fetch(moxc+moyc Shl 10)=Null Then btarray[smt].CreateBindingblock(moxc,moyc)
 
EndIf


If MouseHit(3)
 camposx=moxc-GraphicsWidth()/(2.0*zoom)
 camposy=moyc-GraphicsHeight()/(2.0*zoom)
 redraw_map=2
 MoveMouse (GraphicsWidth()/2,GraphicsHeight()/2)
EndIf

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
Local t=thingmap.fetch(moxc+moyc Shl 10)

If (Not b) Or (b And b.btype<>0)
 If t<10
  t=t-(t Mod 5)
  If KeyHit(key_w) Then thingmap.insert(moxc+moyc Shl 10,t+1)
  If KeyHit(key_s) Then thingmap.insert(moxc+moyc Shl 10,t+2)
  If KeyHit(key_a) Then thingmap.insert(moxc+moyc Shl 10,t+3)
  If KeyHit(key_d) Then thingmap.insert(moxc+moyc Shl 10,t+4)
 EndIf
EndIf

If KeyHit(key_space)
 If t>=5 And t<=9 
  'garray.remove(moxc+moyc Shl 10) 'remove generator
 EndIf
 thingmap.remove(moxc+moyc Shl 10)
 If b And b.btype<>0 Then b.group.remove()
 If b And b.image=imagelist[1] Then wallgroup.ba[b.id]=Null; bmap.remove(b.x+b.y Shl 10)
EndIf

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
chem[0]=Rand(2,4)
chem[1]=chem[0]+Rand(4,6)
chem[2]=chem[1]+Rand(5,7)
chem[3]=chem[2]+Rand(6,8)

End Function



Type btemplate

Field btype,ch,id


Method create_block_image()

Local bred,bgre,bblu
Local blockart:TImage

bred=100.0*colfunc(Float(ch)/7.0)+Rand(20)+120
bgre=150.0*colfunc((2.3+Float(ch))/7.0)+30
bblu=150.0*colfunc((4.7+Float(ch))/7.0)+50

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
GrabImage imagelist[noi],0,0

noi=noi+1

End Method


Method createsingleblock:bgroup(x,y,xv,yv)

If bmap.fetch(x+y Shl 10) Then Return
If btype=0 Then wallblock(x,y,id);Return

Local bg:bgroup=New bgroup
bg.xv=xv
bg.yv=yv
bg.blist.ba=bg.blist.ba[..10]
bgc=bgc+1
Local b:block=New block
b.x=x
b.y=y
b.btype=btype

b.image=imagelist[id]
bg.add(b)
garray.add(bg)
barray.add(b)
bmap.insert(b.x+b.y Shl 10,b)

Return bg

End Method


Method createbindingblock(x,y)

Local bg:bgroup=createsingleblock(x,y,0,0)
Local b2:block

If x>0 Then b2=bmap.fetch((x-1)+y Shl 10)
If b2 And b2.btype>0 Then bg.merge(b2.group)
If y>0 Then b2=bmap.fetch(x+(y-1) Shl 10)
If b2 And b2.btype>0 Then bg.merge(b2.group)
b2=bmap.fetch(x+1+y Shl 10)
If b2 And b2.btype>0 Then bg.merge(b2.group)
b2=bmap.fetch(x+(y+1) Shl 10)
If b2 And b2.btype>0 Then bg.merge(b2.group)

Return

If bmap.fetch(x+y Shl 10) Then Return

Local b:block=New block
Local j
b.x=x
b.y=y
b.btype=btype
b.image=imagelist[b.id] ' ******************* <-------------------------- image deff ----------------

bmap.insert(b.x+b.y Shl 10,b)
barray.add(b)

' look for nearby groups
While j=0
 If x>0 Then b2=bmap.fetch((x-1)+y Shl 10)
 If b2 And b2.btype>0 Then b2.group.add(b); Exit
 If y>0 Then b2=bmap.fetch(x+(y-1) Shl 10)
 If b2 And b2.btype>0 Then b2.group.add(b); Exit
 b2=bmap.fetch(x+1+y Shl 10)
 If b2 And b2.btype>0 Then b2.group.add(b); Exit
 b2=bmap.fetch(x+(y+1) Shl 10)
 If b2 And b2.btype>0 Then b2.group.add(b); Exit
 j=1
Wend

If b.group=Null ' no bind so create single block
 bg:bgroup=New bgroup
 bgc=bgc+1
 bg.add(b)
 garray.add(bg)
EndIf

End Method

End Type



Function create_block_mix()
' this function is then sent to create block image, to make a random mix of blocks for this game
Local i,j,k
Local bt:btemplate

' three times, for 3 different chemicals per block type
For i=0 To 7
 bt=New btemplate
 bt.btype=i
 j=Rand(0,6)
 bt.Ch=j
 btarray[k]=bt
 bt.Create_block_image()
 bt.id=k
 k=k+1

 bt=New btemplate
 bt.btype=i
 j=Rand(j+1,7)
 bt.ch=j
 btarray[k]=bt
 bt.Create_block_image()
 bt.id=k
 k=k+1

 bt=New btemplate
 bt.btype=i
 bt.ch=Rand(j+1,8)
 btarray[k]=bt
 bt.Create_block_image()
 bt.id=k
 k=k+1
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
'DebugStop
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

End Function


' *** start ***
create_block_mix()
remove_block_image_templates()
gen_maze_map(1,1,40,1,40,40)

While Not KeyDown(key_escape)

If bmap.rc>1000 Then bmap.orderedsort()
update_bgroups()
get_mouse_input()
get_user_input()
update_gens()

update_display()
time=time+1

Wend