Graphics 800,600


Local i,j
Local im:TImage
Global imagelist:TImage[60]
Global noi

For i=0 To 30
 create_block_image()
Next



'SetMaskColor 67,87,200
SetBlend SOLIDBLEND
'DrawImage im,50,50

Flip

While 1
 If MouseHit(1) Then Exit
Wend



Function create_block_image()

Local blockart:TImage
Local chem=Rand(0,8)

blockart=LoadImage("blocks2\blockart"+chem+".bmp")
GrabImage blockart,0,0
imagelist[noi]=CreateImage(30,30,1,dynamicimage=1)
GrabImage imagelist[noi],0,0

noi=noi+1

End Function