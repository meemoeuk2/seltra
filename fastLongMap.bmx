Type fastLongMap

Field v:Long[3000000] ' index is the keys, value is the value
Field k:Int [3000000] ' index is ordered , value is key
Field le:Int  ' length
Field nl:Int=0 ' null value

Method fetch:Long(key) ' or just type v[key] 
 Return v[key]
End Method


Method vfetch:Long(index) ' array fetch
 Return v[k[index]]
End Method


Method kfetch:Int(index) ' return key
 Return k[index]
End Method


Method put(key,val:Long) ' also replace 

 If v[key]=nl
  k[le]=key
  le=le+1 
 EndIf
 v[key]=val 
 
End Method


Method remove(key) ' or just type v[key]=0
 v[key]=nl
End Method


Method bump(key,val:Long)
 If v[key]=nl
  k[le]=key
  le=le+1
 EndIf
 v[key]=v[key]+val
End Method

' template function
Method iter()
 
 Local i:Int
 While i<le

  If v[k[i]]=nl ' look for holes and fill them
   k[i]=k[le-1]
   le=le-1
  Else

' *** put your iteration code here ***

'   Print k[i]+" "+v[k[i]] 
   Local a:Int=v[k[i]]

' ***
   i=i+1
  EndIf

 Wend

EndMethod



Method fastsort() ' fast but disorders the list

Local i:Int
While i<le
 If v[k[i]]=nl
  k[i]=k[le-1]
  le=le-1
 Else
  i=i+1
 EndIf
Wend

End Method



Method orderedsort() ' maintains order of list, but slower than fastsort

Local i,j:Int
While j<le
 If v[k[j]]=nl 
  le=le-1  
 Else
  k[i]=k[j]
  i=i+1
 EndIf

 j=j+1
Wend

le=i

End Method


Method set_null_value(n:Long)

Local i:Int
nl=n
While i<3000000
 v[i]=n
 i=i+1
Wend

End Method

End Type