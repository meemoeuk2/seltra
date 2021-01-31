

Type block
Field x
End Type

Type blockarray
Field barr:block[3000000]
Field le:Int

Method add(b:block)
 barr[le]=b
 le=le+1
End Method

Method ordered_sort(n:Int,i:Int=0)
 If n=0 Then n=le
 Local j=i

 While j<le 
  barr[i]=barr[j]
  If barr[i] Then i=i+1
  j=j+1
 Wend
 le=i

End Method

End Type


Function test_st_array()
 Local i:Int
 Local ba:barry=New barry
 Local b:block,b2:block

 Local t= MilliSecs()
 While i<3000000
  b=New block
  b.x=i
'  ba.barr[i]=b ' manual add, about 10% faster
'  ba.le=ba.le+1
  ba.add(b)
  i=i+1
 Wend

 i=0
 While i<1000000
  ba.barr[Rand(0,2999999)]=Null
  i=i+1
 Wend

 ba.ordered_sort(0,0)

 i=0
 While i<3000000
  b2=ba.barr[i]
  i=i+1
 Wend

 Local t2= MilliSecs()
 Print "static array test millisecs "+ (t2-t)

End Function 



Function test_tlist()
Local tb:TList=New TList
Local i=0

Local t=MilliSecs()
While i<3000000
 Local b:block=New block
 b.x=i
 tb.addlast(b)
 i=i+1
Wend

Local m:TLink = tb.firstlink() 'root
 
While m 
 Local b2:block=block(m.value)
 m = m.Nextlink()
Wend
Local t2=MilliSecs()

Print "tlist test millisecs " +(t2-t)
End Function


test_st_array()
test_tlist()