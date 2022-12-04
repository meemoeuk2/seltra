Type fastLongMap

Field v:ULong[3000000] ' index is the keys, value is the value
Field k:Int [3000000] ' index is ordered , value is key
Field nl:ULong=0 ' null value
Field le

Method fetch:ULong(key) ' or just type v[key] 
 Return v[key]
End Method


Method vfetch:ULong(index) ' array fetch
 Return v[k[index]]
End Method


Method kfetch:Int(index) ' return key
 Return k[index]
End Method


Method putq(key,val:ULong) ' quiet put, a key index is not added, and the length of the key-array is not incremented
 v[key]=val
End Method

Method putq(index,key,val:ULong)
 k[index]=key
 v[key]=val
End Method


Method put:ULong(key,val:ULong) 
 k[le]=key
 le=le+1 
 v[key]=val
 Return le-1
End Method



Method Remove(key) ' or just type v[key]=0
 v[key]=nl
End Method


Method Removei(i:ULong)
 v[k[i]]=nl
 k[i]=0
End Method


Method bump(key,val:ULong)
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


Method set_null_value(n:ULong)

Local i:Int
nl=n
While i<3000000
 v[i]=n
 i=i+1
Wend

End Method

End Type