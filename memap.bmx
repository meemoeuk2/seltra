Type fastintmap ' on a 64 bit machine, longs64 are slightly faster than ints32 , so try to avoid these

Field v[3000000] ' index is the keys, value is the value
Field k[3000000] ' index is ordered , value is key
Field le:Int  ' length
Field nl:Int=0 ' null value

Method fetch:Int(key) ' or just type v[key] 
 Return v[key]
End Method


Method vfetch:Int(index) ' array fetch
 Return v[k[index]]
End Method


Method kfetch:Int(index) ' return key
 Return k[index]
End Method


Method insert(key,val) ' also replace 

 If v[key]=nl
  k[le]=key
  le=le+1 
 EndIf
 v[key]=val 
 
End Method


Method remove(key) ' or just type v[key]=0
 v[key]=nl
End Method


Method bump(key,val)
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


Method set_null_value(n:Int)

Local i:Int
nl=n
While i<3000000
 v[i]=n
 i=i+1
Wend

End Method

End Type


'Local m:fastintmap=New fastintmap
'Local i:Int=1
'm.insert(1,5)
'm.insert(2,8)
'm.remove(2)

'Local i,n:Int
'n=m.le
'While i<n
' Print m.vfetch(i)
' i=i+1
'Wend


'Local t=MilliSecs()
'i=0
'While i<3000000-200
' m.insert(1*i+Rand(100),10*i)
' i=i+1
'Wend
'Local t2=MilliSecs()
'Print t2-t


'For Local i:Int=0 To 10
'Print m.fetch(10*i)
'Next
'While i<2000000
' m.remove(Rand(2999999))
' i=i+1
'Wend




'm.insert(33,1234)


'm.iter()



'End