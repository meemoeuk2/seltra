'Type block
' Field x:Int
'End Type

Type fastblockmap

Field v:block[3000000] ' index is the keys, value is the value
Field k[3000000] ' index is ordered , value is key
Field le:Int  ' length
Field rc:Int ' counts the number of removes since last sort 

Method fetch:block(key) ' or just type v[key] 
 Return v[key]
End Method


Method vfetch:block(index) ' array fetch
 Return v[k[index]]
End Method


Method kfetch:Int(index) ' return key
 Return k[index]
End Method


Method insert(key,b:block) ' also replace 

 If v[key]=Null
  k[le]=key
  le=le+1 
 EndIf
 v[key]=b
 
End Method


Method remove(key) ' or just type v[key]=0
 v[key]=Null
 rc=rc+1
End Method


' template function
Method iter()
 
 Local i:Int
 While i<le

  If v[k[i]]=Null ' look for holes and fill them
   k[i]=k[le-1]
   le=le-1
  Else

' *** put your iteration code here ***

'   Print k[i]+" "+v[k[i]] 
  ' Local a:Int=v[k[i]]

' ***
   i=i+1
  EndIf

 Wend

EndMethod



Method fastsort() ' fast but disorders the list

Local i:Int
While i<le
 If v[k[i]]=Null
  k[i]=k[le-1]
  le=le-1
 Else
  i=i+1
 EndIf
Wend

rc=0

End Method



Method orderedsort() ' maintains order of list, but slower than fastsort

Local i,j:Int
While j<le
 If v[k[j]]=Null
  le=le-1  
 Else
  k[i]=k[j]
  i=i+1
 EndIf

 j=j+1
Wend

le=i
rc=0

End Method

End Type



Type substratemap

Field v:substrate[3000000] ' index is the keys, value is the value
Field k[3000000] ' index is ordered , value is key
Field le:Int  ' length
Field rc:Int ' counts the number of removes since last sort 

Method fetch:substrate(key) ' or just type v[key] 
 Return v[key]
End Method


Method vfetch:substrate(index) ' array fetch
 Return v[k[index]]
End Method


Method kfetch:Int(index) ' return key
 Return k[index]
End Method


Method insert(key,s:substrate) ' also replace 

 If v[key]=Null
  k[le]=key
  le=le+1 
 EndIf
 v[key]=s
 
End Method


Method remove(key) ' or just type v[key]=0
 v[key]=Null
 rc=rc+1
End Method


' template function
Method iter()
 
 Local i:Int
 While i<le

  If v[k[i]]=Null ' look for holes and fill them
   k[i]=k[le-1]
   le=le-1
  Else

' *** put your iteration code here ***

'   Print k[i]+" "+v[k[i]] 
  ' Local a:Int=v[k[i]]

' ***
   i=i+1
  EndIf

 Wend

EndMethod


Method fastsort() ' fast but disorders the list

Local i:Int
While i<le
 If v[k[i]]=Null
  k[i]=k[le-1]
  le=le-1
 Else
  i=i+1
 EndIf
Wend

rc=0

End Method


Method orderedsort() ' maintains order of list, but slower than fastsort

Local i,j:Int
While j<le
 If v[k[j]]=Null
  le=le-1  
 Else
  k[i]=k[j]
  i=i+1
 EndIf

 j=j+1
Wend

le=i
rc=0

End Method

End Type

'Local bmap:fastblockmap=New fastblockmap
'Local b:block=New block
'bmap.insert(10,b)
'Local b2:block
'b2=bmap.vfetch(0)
'Print b2.x

'Local i:Int=1

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