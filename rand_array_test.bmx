' a program to investigate speed of processing an array of consecctively created objects 
'   vs an array of randomly located objects that are put in an array

' conclusion : randomly located object array takes about 80% longer to process
' how fix?

Type a
 Field b[100]

 Method New()
  
  Local i

  For i=0 To 99
   b[i]=Rand(9999)
  Next
 End Method

End Type

Local n=5000000
Local al:a[n]
Local i


For i=0 To n-1
 al[i]=New a()
Next


Local t=MilliSecs()
For i=0 To n-1
 al[i].b[5]=al[i].b[5]+1
Next
Print MilliSecs()-t


Local al2:a[n]

For i=0 To n-1
 Local p=Rand(n-1)
 al2[i]=al[p]
Next


t=MilliSecs()
For i=0 To n-1
 al2[i].b[5]=al2[i].b[5]+1
Next
Print MilliSecs()-t
