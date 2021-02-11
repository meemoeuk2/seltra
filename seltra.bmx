Strict


Const arrowflags=%111 ' consider is arrow flag
Const upArrow=   %001  ' except current way gives 3 other possible objects
Const downArrow =%010 
Const leftArrow =%011
Const rightArrow=%100
Const isBlock   =%1000
Const isMovingBlock=%10000
Const directionFlagsX=%11000000 ' used to reset direction
Const directionFlags =%11100000 ' used to work with direction
Const movingUp       =%00100000 ' blockMovingUp
Const movingDown     =%01100000 ' we'll need to be more specific when substrates are added
Const movingLeft     =%10100000
Const movingRight    =%11100000
Const blockflags     =%11111000 ' all flags used by blocks

Include "memap.bmx"
Include "blockmap.bmx"
Include "arrays.bmx"
Include "gen.bmx"
Include "block.bmx"
Include "bgroup.bmx"
Include "substrate.bmx"
Include "sgroup.bmx"
Include "btemplate.bmx"
Include "ggroup.bmx"
Include "fastLongMap.bmx"

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

Global gencell:TImage=loadimage3("gene.png")

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
Global moxo[2],moyo[2] ' seem to be snapshots of mouse co-ords for drawing to canvas
Global smi:TImage=imagelist[0] ' selected mouse image
Global smt ' selected mouse thing
Global zoom:Float=30.0 '  mouse wheel controls map zoom
Global mozo,mozu:Float ' modified and Used mouse z position
Global moxc,moyc:Int ' mousex,y cell
Global moxco[2],moyco[2] ' 
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

Global unAllocatedGenTiles:cellArray=New cellArray
Global garray:grouparray=New grouparray ' all groups, or moving groups

Global barray:blockarray=New blockarray ' active blocks
' can substrates be on the normal block and group lists? assume no
Global sarray:subarray=New subarray ' we'll try put substrate groups on
Global sgarray:subgrouparray = New subgrouparray

barray.ba=barray.ba[..999999]               ' *** wtf is this notation ? ans: Slice : a sub array of an existing array'
Global wallgroup:blockarray'=New blockarray ' wall blocks
'wallgroup.ba=wallgroup.ba[..999999]
Global rarray:redrawarray=New redrawarray
Global genarray:generatorarray=New generatorarray

Global bmap:fastblockmap=New fastblockmap
Global thingmap:fastLongmap=New fastLongmap ' arrows and generators
Global smap:substratemap=New substratemap

Type cell ' sometimes just need this
 Field x,y
End Type 

Const wallimageindex:Int = 3
Const gencode:Int = 5 ' gen code for thing map


Global dbflag

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



Type redraw
Field x,y
Field redraws:Byte ' %11 = redraws 1~3
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
    Case 5 ; im=gencell
   End Select
   SetMaskColor (255,255,230)
   If (v Mod 8) Then DrawImage im,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
   If v=5       Then DrawImage gencell,zoom*((m Mod 1024)-camposx),zoom*((m Shr 10)-camposy)
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



Function draw_everything()

Local i,key
Local val:Long
Local x,y

While i<thingmap.le

 key = thingmap.kfetch(i)
 val = thingmap.vfetch(i)
 x= (key Mod 1024) - camposx
 y= (key Shr 10)   - camposy
 If val & 8
  DrawImage imagelist[5],zoom*x,zoom*y
 ElseIf val Mod 8 = 1 
  DrawImage arrown,zoom*x,zoom*y
 ElseIf val Mod 8 = 2
  DrawImage arrows,zoom*x,zoom*y
 ElseIf val Mod 8 = 3
  DrawImage arroww,zoom*x,zoom*y
 ElseIf val Mod 8 = 4
  DrawImage arrowe,zoom*x,zoom*y
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

SetViewport 0,0,gw-100,gh ' map
'If mox<gw-100 Then redraw3x3(moxco[frame],moyco[frame])
Cls 'If redraw_map>0 Then Cls
'draw_things()
'draw_sarray()
'draw_barray()
draw_everything() ' everything on the map
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

If wallgroup=Null Then Return

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
   Case 5 ; im=gencell
  End Select
  DrawImage im,(x-camposx)*zoom,(y-camposy)*zoom
 EndIf
EndIf
 
If s Then DrawImage s.image,zoom*(x-camposx),zoom*(y-camposy) 

End Function



Function gen_maze_map(xs,ys,xf,yf,mx,my)
' s,f start finish of maze , m size of maze
wallgroup:blockarray=New blockarray ' wall blocks
wallgroup.ba=wallgroup.ba[..999999]
bmap=New fastblockmap
thingmap=New fastlongmap

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
b.image=imagelist[wallimageindex] ' may need to change this value are more images are added
bmap.insert(x+y Shl 10,b)
wallgroup.add(b)

End Function


' mouse functions, currently only 3 functions so maybe don't need to objectify
Function get_mouse_input()

mozo=moz
Mox=MouseX()
moy=MouseY()
moz=MouseZ()

If mox<gw-100 Then mouse_input_map() Else mouse_input_editbar()

End Function



Function mouse_input_editbar()

Local w = 25 ' paint block width
Local margin = 20
Local n = 30 ' paint box number of cells per column

If MouseHit(1)
 
 If mox<gw-(margin+w*2) Then smt=0*n+(moy-10)/20;smi=imagelist[smt];Return
 If mox<gw-(margin+w*1) Then smt=1*n+(moy-10)/20;smi=imagelist[smt];Return
 If mox<gw-(margin+w*0) Then smt=2*n+(moy-10)/20;smi=imagelist[smt];Return

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
 If smt<=55
  b=bmap.fetch(moxc+moyc Shl 10)
  If Not b
   If smi=sub0    Then createsinglesubstrate(moxc,moyc);Return
   If smi=subd    Then placeSubstrateGuide(moxc,moyc);Return
   If smi=gencell Then placegenTile(moxc,moyc);Return
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
' end mouse functions


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



Function placeGenTile(x,y)

Local p = x+y Shl 10
Local tm=thingmap.fetch(p)
If tm>=0 And tm<=4 Then thingmap.put(p,gencode | tm)
Local db = thingmap.fetch(p)

' gens are now groups of gen tile
'  need to discern if placing a gen-tile is creating a new gen or adding to an existing one
'   also need to merge gens
'    and split them, according to map editing

'get adjacent generator
'If thingmap.fetch(p-1) And 5 Then ag = ' at this point we either need an index 
'If thingmap.fetch(p+1) And 5
'If thingmap.fetch(p+1 Shl 10)   And 5
'If thingmap.fetch(p-(1 Shl 10)) And 5

unAllocatedGenTiles.add(x,y)

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
 If KeyHit(key_w) Then thingmap.putNew(moxc+moyc Shl 10,p|1)
 If KeyHit(key_s) Then thingmap.putNew(moxc+moyc Shl 10,p|2)
 If KeyHit(key_a) Then thingmap.putNew(moxc+moyc Shl 10,p|3)
 If KeyHit(key_d) Then thingmap.putNew(moxc+moyc Shl 10,p|4)
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



Function update_thingblocks()

Local k

ThingBlockCheckArrows()
  'bg.check_substrates()
ThingBlockMove()
  'If bg.out_of_bounds() Then bg.remove() 

End Function



Function core_engine_thread:Object( data:Object )

If bmap.rc>1000 Then bmap.orderedsort()
update_thingblocks()
'update_sgroups()
'update_bgroups()
'update_gens()
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
 WriteLong out,thingmap.vfetch(i)
Next

CloseFile out

End Function



Function load_map()

' flushes the object array
wallgroup:blockarray=New blockarray ' wall blocks
wallgroup.ba=wallgroup.ba[..999999]

' but gotta flush map too!
bmap=New fastblockmap
thingmap = New fastLongmap

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
Local k:Int,v:Long

For i=0 To n-1
 k=ReadLong(in)
 v=ReadLong(in)
 If v Then thingmap.put(k,v)
Next

CloseFile in

End Function



Function reForgeGenerators()
' often awkward to define generators continously
' this function is intended to be a one off controlled by the user

Local h,i,j,k,p,q ' counters
Local ff:cell[50]

Local c:cell = unAllocatedGenTiles.ca[i]

Repeat
 If c=Null Then Exit
 
 p = thingmap.fetch(c.x+ c.y Shl 10) 
 
 If p>=5 And p<=9
  thingmap.put(c.x+ c.y Shl 10,p-100)
 
  If k=0 Then genarray.ga[j]=New ggroup
  genarray.ga[j].clist[k] = New cell
  genarray.ga[j].clist[k].x = c.x
  genarray.ga[j].clist[k].y = c.y
  k=k+1

  'do floodfill search
  p=thingmap.fetch((c.x+1) + (c.y Shl 10))
  If p>=5 And p<=8
   ff[q]=New cell
   ff[q].x=c.x+1
   ff[q].y=c.y
   thingmap.put((c.x+1) + (c.y Shl 10),-4)
   q=q+1
  EndIf
  p=thingmap.fetch((c.x-1) + (c.y Shl 10))
  If p>=5 And p<=8 
   ff[q]=New cell
   ff[q].x=c.x-1
   ff[q].y=c.y
   thingmap.put((c.x-1) + (c.y Shl 10),-4)
   q=q+1
  EndIf
  p=thingmap.fetch(c.x + ((c.y+1) Shl 10) )
  If p>=5 And p<=8 
   ff[q]=New cell
   ff[q].x=c.x
   ff[q].y=c.y+1
   thingmap.put(c.x + ((c.y+1) Shl 10),-4)
   q=q+1
  EndIf
  p=thingmap.fetch( c.x + ((c.y-1) Shl 10) )
  If p>=5 And p<=8 
   ff[q]=New cell
   ff[q].x=c.x
   ff[q].y=c.y-1
   thingmap.put(c.x + (c.y-1) Shl 10,-4)
   q=q+1
  EndIf  

  ff[h]=Null
  h=h+1
  c=ff[h]

  If c=Null 
   i=i+1
   c=unAllocatedGenTiles.ca[i]
   h=0
  EndIf
 Else ' cell is not a unallocated gen cell
  i=i+1
  c=unAllocatedGenTiles.ca[i]
  j=j+1 ' start new group
  k=0
 EndIf

Forever

i=0
Repeat
 Local g:ggroup = genarray.ga[i]
 If g=Null Then Exit

 j=0
 Repeat
  c=g.clist[j]
  If c=Null Then Exit
  p=thingmap.fetch(c.x+c.y Shl 10)
  thingmap.put(c.x+c.y Shl 10,p+100)
  j=j+1
 Forever 

 i=i+1
Forever


End Function


' *** start ***
Global sub0:TImage=loadimage2("sub0.png")
Global subd:TImage=loadimage2("subd.png")

create_chem_numbers()
create_block_mix()

remove_block_image_templates()

'gen_maze_map(1,1,40,1,40,40)
smi=imagelist[smt]

While Not KeyDown(key_escape)
 If gamespeedbrake_setting>0 Then core_engine_thread("")
 get_mouse_input()
 get_user_input()
 update_display()
Wend

End