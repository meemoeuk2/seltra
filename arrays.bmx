Type cellArray
Field ca:cell[50]
Field le

Method add(x,y)
 Local c:cell = New cell
 c.x=x
 c.y=y
 ca[le]=c
 le=le+1
End Method

Method add(c:cell)
 ca[le]=c
 le=le+1
End Method

Method ordered_sort(n:Int,i:Int=0)
 If n=0 Then n=le
 Local j=i

 While j<le 
  ca[i]=ca[j]
  If ca[i] Then i=i+1
  j=j+1
 Wend
 le=i
End Method

End Type



Type blockarray
Field ba:block[50]
Field le:Int

Method add(b:block)
 ba[le]=b
 If Self=barray Then b.id=le  ' id is for global blockarray, currently block has no group id
 'If b.image<>imagelist[0] Then DebugStop
 le=le+1
End Method


Method putLast(i)
 ba[le]=ba[i]
 ba[i]=Null
 le=le+1
End Method


Method ordered_sort(n:Int,i:Int=0)
 If n=0 Then n=le
 Local j=i

 While j<le 
  ba[i]=ba[j]
  If ba[i] Then ba[i].id=i ;i=i+1
  j=j+1
 Wend
 le=i

End Method

End Type



Type generatorarray
Field ga:ggroup[3000]
Field le:Int

Method add(g:ggroup)
 ga[le]=g
 g.id=le
 le=le+1
End Method

Method ordered_sort(n:Int,i:Int=0)
 If n=0 Then n=le
 Local j=i

 While j<le 
  ga[i]=ga[j]
  If ga[i] Then ga[i].id=i ;i=i+1
  j=j+1
 Wend
 le=i

End Method

End Type



Type grouparray
Field ga:bgroup[2000000]
Field le

Method add(g:bgroup)
 ga[le]=g
 g.id=le
 le=le+1
End Method

Method ordered_sort(n,i)
 If n=0 Then n=le
 Local j=i

 While j<le
  ga[i]=ga[j]
  If ga[i] Then ga[i].id=i ;i=i+1
  j=j+1
 Wend
 le=i
End Method

End Type



Type redrawarray
Field ra:redraw[1000]
Field le,drawn ' le length of active array elements, drawn = number of elements completed drawn, used to reset le when all draws complete

Method add(r:redraw)
 ra[le]=r
 le=le+1
End Method

Method do_redraws()

Local im:TImage
Local r:redraw
Local v,i
Local b:block

While i<rarray.le
 r:redraw=ra[i]
 If r
  redraw_cell(r.x,r.y)
  r.redraws=r.redraws-1
  If r.redraws<=0 Then ra[i]=Null;drawn=drawn+1
 EndIf

 i=i+1
Wend

If drawn=le Then le=0;drawn=0

End Method

End Type



Type subarray
Field sa:substrate[50]
Field le:Int

Method add(s:substrate)
 sa[le]=s
 If Self=sarray Then s.id=le  ' id is for global blockarray, currently block has no group id
 'If b.image<>imagelist[0] Then DebugStop
 le=le+1
End Method

Method ordered_sort(n:Int,i:Int=0)
 If n=0 Then n=le
 Local j=i

 While j<le 
  sa[i]=sa[j]
  If sa[i] Then sa[i].id=i ;i=i+1
  j=j+1
 Wend
 le=i

End Method

End Type



Type subgrouparray

Field sga:sgroup[50]
Field le:Int

Method add(sg:sgroup)
 sga[le]=sg
 sg.id=le
 le=le+1
End Method

Method ordered_sort(n,i)
 If n=0 Then n=le
 Local j=i

 While j<le
  sga[i]=sga[j]
  If sga[i] Then sga[i].id=i ;i=i+1
  j=j+1
 Wend
 le=i
End Method

End Type