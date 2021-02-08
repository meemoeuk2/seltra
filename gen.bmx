Type genTile ' generator

Field x,y:Int
Field ggroup

Method addRandomBlock(bg:bgroup)
' the primary intended use of this method is building a blockgroup to randomly generate

'select random block
' requires number of blocks
Local r = Rand(bg.n)
Local b:block = bg.blist.ba[r]

Select Rand(4)
 Case 0 ; If bmap.fetch((b.x+1)+b.y Shl 10) = Null ; bg.addNewBlock(x+1,y)
 Case 1 ; If bmap.fetch((b.x-1)+b.y Shl 10) = Null ; bg.addNewBlock(x-1,y)
 Case 2 ; If bmap.fetch(b.x+((b.y+1) Shl 10)) = Null ; bg.addNewBlock(x,y+1)
 Case 3 ; If bmap.fetch(b.x+((b.y-1) Shl 10)) = Null ; bg.addNewBlock(x,y-1)
End Select

End Method


Method genRandomBlockGroup(n)

'Local bg:bgroup = genIsolatedBlock()

End Method

End Type
