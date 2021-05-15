Type fastlongmap

Const mnk=9999999
Const mnv=499999

Field v:Long[mnv] ' value of moving block
Field k[mnk]
Field le
Field nkv=0 ' null key value

Method initKeyMap()

Local i

While i<mnk
 k[i]=nkv
 i=i+1
 If i Mod 1000000=0 Then Print"initiated" + i/1000000 + " million keys "
Wend

End Method

Method fetch:Long(key) ' or just type .v[ .k[key]]
 Return v[k[key]]
End Method

Method vfetch:Long(key) ' or just type .v[ .k[key]]
 Return v[k[key]]
End Method

Method ifetch(key) ' or just type .k[key]
 Return k[key]
End Method

Method kfetch(i) ' given an index, return the key
 Return getkey(v[i])
End Method

Method getkey(val:Long)
 ' to do, this will be in the value somewhere
 Return (val & keyrefflags) Shr keyrfSh
End Method


Method fastput(key,val,index:Long)

 v[index]=val
 k[key]=index

End Method


Method put(key,val:Long)
' slow , has to do a check, consider doing a put without a check
 If k[key]=nkv
  le=le+1
  v[le]=val
  k[key]=le
 Else
  v[k[key]]=val
 EndIf

End Method


Method put(key,val:Long,ow) 
 ' overwrite 

 If v[le]=nkv
  le=le+1
  v[le]=val
  k[key]=le
 ElseIf ow ' overwrite
  v[k[key]]=val
 Else
  Return 0
 EndIf

 Return k[key] ' returns the index

End Method


Method remove(key)
 ' this prompts a question : blocks often move off underlying material. we need a block remove more 
 ' as is, this function is highly run-error prone, and is supplied only for legacy compatilibility
 v[k[key]]=0
 k[key]=0

End Method


End Type


