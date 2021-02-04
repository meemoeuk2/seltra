Type Ggroup
' generator group

Field bglist:bgroup[100] ' this is supposed to be the list of blockgroups that the gen can generate
'                         ' but shall we use this?
Field le:Int ' length of bglist  
Field rate,t,bitflags,n,id
Field clist:cell[25]       
Field time

Method update()

'If time Mod rate=t Then genIsolatedBlock()

End Method



Method genIsolatedBlock:bgroup(x,y)

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


End Type

