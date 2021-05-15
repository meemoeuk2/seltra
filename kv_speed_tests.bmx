Include "fastlongmap3.bmx"
Include "fastlongmap.bmx"

Const n = 99999999 ' number of elements / iterations
Const m = 9999999
Local i,t,z



Local fm1:fastlongmap = New fastlongmap

While i<m
 fm1.k[i]=Rand(m)
 fm1.v[fm1.k[i]]=Rand(n)
 i=i+1
Wend

t=MilliSecs()

i=0
While i<m
 fm1.v[fm1.k[i]]= fm1.v[fm1.k[i]]+1
 i=i+1
Wend

Print MilliSecs()-t



Local fm3:fastlongmap3 = New fastlongmap3

i=0
While i<m
 fm3.v[i]=Rand(n)
 fm3.k[Rand(n)]=i
 i=i+1
Wend

t=MilliSecs()

i=0
While i<m
' z=fm3.v[i] & %111111100000000
 fm3.getkey(fm3.v[i])
 i=i+1
Wend

Print MilliSecs()-t

