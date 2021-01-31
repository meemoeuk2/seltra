Type btemplate

 Method create_block_image()

  Local party:TPixmap
  Local blockart:TImage
  blockart=LoadImage("blockart0.png")
'  party=LoadPixmap("blockart0.png")

'  blockart=LoadImage(MaskPixmap(party,255,255,255))
  DrawImage blockart,0,0

 End Method

End Type



Function thread1:Object( data:Object )

 While Not KeyDown(key_escape)
 Wend

End Function



Function thread2:Object( data:Object )

 Graphics 1024,768
 Local bt:btemplate=New btemplate
 bt.Create_block_image()

End Function



' *** start ***

'  Local blockart:TImage
'  blockart=LoadImage("blockart0.png")
'  party=LoadPixmap("blockart0.png")

'  blockart=LoadImage(MaskPixmap(party,255,255,255))
'  DrawImage blockart,0,0



Local threads:TThread[2]
threads[1]=CreateThread(thread2,"")
'threads[0]=CreateThread(thread1,"")
'WaitThread(threads[0])
WaitThread(threads[1])