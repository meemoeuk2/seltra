Type fastlongmap

Field mnk:ULong=1049999
Field mnv:ULong=499999

Field k:ULong[mnk]    ' this is the key map
Field v:ULong[mnv] ' value of moving block

Field le ' active thing counter
Field ze ' inactive(static) thing counter e.g. walls and arrows
Field nkv=0 ' null key value

Method initKeyMap()

Local i

While i<mnk
 k[i]=nkv
 i=i+1
 If i Mod 1000000=0 Then Print"initiated" + i/1000000 + " million keys "
Wend

End Method

Method fetch:ULong(key:ULong) ' first layer
 Return v[k[key] Mod (1 Shl 19)]
End Method

Method fetch2:ULong(key) ' second layer ( the quiet layer )
 Local kd:ULong = k[key]
 Local k1:ULong = kd Mod (1 Shl 19)
 Local k2:ULong = (kd Shr 18) Mod (1 Shl 19)
 If dblog Then If k2 Then Print " fetch2 quiet key is "+k2
 Return v[(k[key] Shr 18) Mod (1 Shl 19)] 
End Method

Method fetchAK:ULong(key) ' return all 3 layer keys
 Return v[k[key]] 
End Method

'Method vfetch:ULong(key) ' or just type .v[ .k[key]]
' Return v[k[key]]
'End Method

Method ifetch(key) ' or just type .k[key]
 Return k[key]     ' returns the thing index
End Method

Method kfetch(i) ' given an index, return the key
 Return getkey(v[i])
End Method

Method getkey(val:ULong) ' keys are stored in thing values, heck they are 64bits and keys are 20bits, gotta use em
 Return (val & keyrefflags) Shr keyrfSh
End Method


Method fastput(key,val:ULong,index)
 v[index]=val
 k[key]=index
End Method


Method put(key,val:ULong)
' slow , has to do a check, consider doing a put without a check
 If k[key]=nkv
  le=le+1
  v[le]=val
  k[key]=le
 Else
  DebugStop
  v[k[key]]=val ' doesn't cuurently work with active and inactive lists
 EndIf

End Method


Method putq(key,val:ULong) ' quiet put: adds thing to end of thing list: for static things 
 Local a:ULong = ((1:ULong Shl 19)-1) Shl 18 
 Local b:ULong = k[key] &~ a
 Local c:ULong = (mnv-(1+ze)) Shl 18
 Local d:ULong = (b | c)

 v[mnv-(1+ze)]=val        ' that don't need processing every turn
 k[key]=(k[key] &~ (((1:ULong Shl 19)-1) Shl 18)) | ( (mnv-(1+ze)) Shl 18 )
 ze=ze+1
End Method					'  such as arrows and walls 


Method put(key,val:ULong,ow) 
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


