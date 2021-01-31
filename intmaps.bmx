Strict

Extern
	Function bmx_map_intmap_clear(root:Byte Ptr Ptr)
	Function bmx_map_intmap_isempty:Int(root:Byte Ptr Ptr)
	Function bmx_map_intmap_insert(key:Int, value:Object, root:Byte Ptr Ptr)
	Function bmx_map_intmap_contains:Int(key:Int, root:Byte Ptr Ptr)
	Function bmx_map_intmap_valueforkey:Object(key:Int, root:Byte Ptr Ptr)
	Function bmx_map_intmap_remove:Int(key:Int, root:Byte Ptr Ptr)
	Function bmx_map_intmap_firstnode:Byte Ptr(root:Byte Ptr)
	Function bmx_map_intmap_nextnode:Byte Ptr(node:Byte Ptr)
	Function bmx_map_intmap_key:Int(node:Byte Ptr)
	Function bmx_map_intmap_value:Object(node:Byte Ptr)
	Function bmx_map_intmap_hasnext:Int(node:Byte Ptr, root:Byte Ptr)
	Function bmx_map_intmap_copy(dst:Byte Ptr Ptr, _root:Byte Ptr)
End Extern


Type TIntMap

	Method Delete()
		Clear
	End Method

	Method Clear()
		bmx_map_intmap_clear(Varptr _root)
	End Method
	
	Method IsEmpty()
		Return bmx_map_intmap_isempty(Varptr _root)
	End Method
	
	Method Insert( key:Int,value:Object )
		bmx_map_intmap_insert(key, value, Varptr _root)
	End Method

	Method Contains:Int( key:Int )
		Return bmx_map_intmap_contains(key, Varptr _root)
	End Method
	
	Method ValueForKey:Object( key:Int )
		Return bmx_map_intmap_valueforkey(key, Varptr _root)
	End Method
	
	Method Remove( key:Int )
		Return bmx_map_intmap_remove(key, Varptr _root)
	End Method

	Method _FirstNode:TIntNode()
		If Not IsEmpty() Then
			Local node:TIntNode= New TIntNode
			node._root = _root
			Return node
		Else
			Return Null
		End If
	End Method
	
	Method Keys:TIntMapEnumerator()
		Local nodeenum:TIntNodeEnumerator=New TIntKeyEnumerator
		nodeenum._node=_FirstNode()
		Local mapenum:TIntMapEnumerator=New TIntMapEnumerator
		mapenum._enumerator=nodeenum
		Return mapenum
	End Method
	
	Method Values:TIntMapEnumerator()
		Local nodeenum:TIntNodeEnumerator=New TIntValueEnumerator
		nodeenum._node=_FirstNode()
		Local mapenum:TIntMapEnumerator=New TIntMapEnumerator
		mapenum._enumerator=nodeenum
		Return mapenum
	End Method
	
	Method Copy:TIntMap()
		Local map:TIntMap=New TIntMap
		bmx_map_intmap_copy(Varptr map._root, _root)
		Return map
	End Method
	
	Method ObjectEnumerator:TIntNodeEnumerator()
		Local nodeenum:TIntNodeEnumerator=New TIntNodeEnumerator
		nodeenum._node=_FirstNode()
		Return nodeenum
	End Method

	Field _root:Byte Ptr
	
End Type

Type TIntNode
	Field _root:Byte Ptr
	Field _nodePtr:Byte Ptr
	
	Method Key:Int()
		Return bmx_map_intmap_key(_nodePtr)
	End Method
	
	Method Value:Object()
		Return bmx_map_intmap_value(_nodePtr)
	End Method

	Method HasNext()
		Return bmx_map_intmap_hasnext(_nodePtr, _root)
	End Method
	
	Method NextNode:TIntNode()
		If Not _nodePtr Then
			_nodePtr = bmx_map_intmap_firstnode(_root)
		Else
			_nodePtr = bmx_map_intmap_nextnode(_nodePtr)
		End If

		Return Self
	End Method
	
End Type

Rem
bbdoc: Int holder for key returned by TIntMap.Keys() enumerator.
End Rem
Type TIntKey
	Field value:Int
End Type

Type TIntNodeEnumerator
	Method HasNext()
		Return _node.HasNext()
	End Method
	
	Method NextObject:Object()
		Local node:TIntNode=_node
		_node=_node.NextNode()
		Return node
	End Method

	'***** PRIVATE *****
		
	Field _node:TIntNode	
End Type

Type TIntKeyEnumerator Extends TIntNodeEnumerator
	Field _key:TIntKey = New TIntKey
	Method NextObject:Object()
		Local node:TIntNode=_node
		_node=_node.NextNode()
		_key.value = node.Key()
		Return _key
	End Method
End Type

Type TIntValueEnumerator Extends TIntNodeEnumerator
	Method NextObject:Object()
		Local node:TIntNode=_node
		_node=_node.NextNode()
		Return node.Value()
	End Method
End Type

Type TIntMapEnumerator
	Method ObjectEnumerator:TIntNodeEnumerator()
		Return _enumerator
	End Method
	Field _enumerator:TIntNodeEnumerator
End Type

Type t
 Field y:Int
End Type


Function gen_tintmap_test()

Local z:t
Local i:Int=0
Local key:Int=0

While i<2999999
 Local z:t=New t
 z.y=5'Rand(0,10)
 key=key+z.y ' move the key along a bit, might as well put the field in my_map to use
 myintmap.insert(key,z)
 i=i+1
Wend

End Function



Function ref_tintmap_test()

Local i:Int=0
Local y:Int=0
Local z:t

While i<2999999

 
 y=y'+Rand(0,10) ' move the key along a bit, might as well put the Field in my_map To use
 z=t(myintmap.valueforkey(y))
 
 i=i+1
Wend

End Function



Function gen_tmap_test()

Local z:t
Local i:Int=0
Local key:Int=0

While i<2999999
 Local z:t=New t
 z.y=Rand(0,10)
 key=key+z.y ' move the key along a bit, might as well put the field in my_map to use
 MapInsert(mymap,String(key),z)
 i=i+1
Wend

End Function



Function ref_tmap_test()

Local i:Int=0
Local y:Int=0
Local z:t

While i<2999999

 y=y+Rand(0,10) ' move the key along a bit, might as well put the Field in my_map To use
 z=t(MapValueForKey(mymap,String(y)))
 
 i=i+1
Wend

End Function


Function gen_list_test()

Local i:Int=0
Local y:Int=0
Local z:t

While i<2999999
 z:t=New t
 y=y+Rand(0,10) ' move the key along a bit, might as well put the Field in my_map To use
 z.y=y
 mylist.addlast(z)
 i=i+1
Wend

End Function



Function ref_list_test()

Local i:Int=0
Local y:Int=0
Local z:t=Null
Local ok:Int=0

While i<2999999
 
 Local tl:TLink=mylist.firstlink()
 z=t(tl._value)
 y=Rand(0,300000000) 
 If z<>Null
  Repeat
   If y=z.y Then ok=1 ' found a element with the correct value
   tl=tl._succ
   z=t(tl._value)
  Until z=Null
 EndIf

 If (i Mod 100 = 0) Then Print "list test "+i+" elements serached so far "
 i=i+1
Wend

End Function



Function test_intmap()

Local time=MilliSecs()
gen_tintmap_test()
Local time2=MilliSecs()-time
ref_tintmap_test()
Local time3=MilliSecs()-time

Print " inserts "+time2+"   , fetchs "+time3

End Function


Function test_map()

Local time=MilliSecs()
gen_tmap_test()
Local time2=MilliSecs()-time
ref_tmap_test()
Local time3=MilliSecs()-time

Print " inserts "+time2+"   , fetchs "+time3

End Function


Function test_list()

Local time=MilliSecs()
gen_list_test()
Local time2=MilliSecs()-time
ref_list_test()
Local time3=MilliSecs()-time

Print " inserts "+time2+"   , fetchs "+time3

End Function



'Global mymap:tmap = CreateMap()
'Global myintmap:TintMap = New tintmap()
'Global mylist:TList= CreateList()

'test_list()
'test_map()
'test_intmap()

'Global mymap:tintmap=New tintmap

