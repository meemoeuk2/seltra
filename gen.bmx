Type gen ' generator

Field x,y:Int
Field bglist:bgroup[100]
Field le:Int ' length of bglist  
Field rate,t,bitflags,n,id         

Method genIsolatedBlock:bgroup()

Local bg:bgroup=New bgroup
Local bg2:bgroup
Local r:Int
Local xv,yv
Local tm=thingmap.fetch(x+y Shl 10)

If tm<10 And tm>0
 Select tm Mod 8
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

Return bg

End Method



Method addRandomBlock(bg:bgroup)

Select Rand(4)
 Case 0 ;
End Select

End Method


Method genRandomBlockGroup(n)

Local bg:bgroup = genIsolatedBlock()

End Method


Method update()

If time Mod rate=t Then genIsolatedBlock()

End Method

End Type
