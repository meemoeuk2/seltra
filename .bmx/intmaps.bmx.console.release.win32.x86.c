#include "intmaps.bmx.console.release.win32.x86.h"
static BBString _s3={
	&bbStringClass,
	12,
	{32,32,32,44,32,102,101,116,99,104,115,32}
};
static BBString _s1={
	&bbStringClass,
	26,
	{32,101,108,101,109,101,110,116,115,32,115,101,114,97,99,104,101
	,100,32,115,111,32,102,97,114,32}
};
static BBString _s4={
	&bbStringClass,
	7,
	{32,104,101,108,108,111,32}
};
static BBString _s2={
	&bbStringClass,
	9,
	{32,105,110,115,101,114,116,115,32}
};
static BBString _s0={
	&bbStringClass,
	10,
	{108,105,115,116,32,116,101,115,116,32}
};
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct brl_map_TMap_obj* _m_intmaps_mymap=&bbNullObject;
void __m_intmaps_TIntMap_New(struct _m_intmaps_TIntMap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_TIntMap;
	o->__m_intmaps_tintmap__root = 0;
}
void __m_intmaps_TIntMap_Delete(struct _m_intmaps_TIntMap_obj* o) {
	((struct _m_intmaps_TIntMap_obj*)o)->clas->m_Clear(o);
	bbObjectDtor(o);
}
BBINT __m_intmaps_TIntMap_Clear(struct _m_intmaps_TIntMap_obj* o){
	bmx_map_intmap_clear((BBBYTE**)(&o->__m_intmaps_tintmap__root ));
	return 0;
}
BBINT __m_intmaps_TIntMap_IsEmpty(struct _m_intmaps_TIntMap_obj* o){
	return bmx_map_intmap_isempty((BBBYTE**)(&o->__m_intmaps_tintmap__root ));
}
BBINT __m_intmaps_TIntMap_Insert_iTObject(struct _m_intmaps_TIntMap_obj* o,BBINT bbt_key,BBOBJECT bbt_value){
	bmx_map_intmap_insert(bbt_key,bbt_value,((BBBYTE**)(&o->__m_intmaps_tintmap__root )));
	return 0;
}
BBINT __m_intmaps_TIntMap_Contains_i(struct _m_intmaps_TIntMap_obj* o,BBINT bbt_key){
	return bmx_map_intmap_contains(bbt_key,((BBBYTE**)(&o->__m_intmaps_tintmap__root )));
}
BBOBJECT __m_intmaps_TIntMap_ValueForKey_i(struct _m_intmaps_TIntMap_obj* o,BBINT bbt_key){
	return bmx_map_intmap_valueforkey(bbt_key,((BBBYTE**)(&o->__m_intmaps_tintmap__root )));
}
BBINT __m_intmaps_TIntMap_Remove_i(struct _m_intmaps_TIntMap_obj* o,BBINT bbt_key){
	return bmx_map_intmap_remove(bbt_key,((BBBYTE**)(&o->__m_intmaps_tintmap__root )));
}
struct _m_intmaps_TIntNode_obj* __m_intmaps_TIntMap__FirstNode(struct _m_intmaps_TIntMap_obj* o){
	if(!(((struct _m_intmaps_TIntMap_obj*)o)->clas->m_IsEmpty(o)!=0)){
		struct _m_intmaps_TIntNode_obj* volatile bbt_node=bbObjectAtomicNew(&_m_intmaps_TIntNode);
		bbt_node->__m_intmaps_tintnode__root =o->__m_intmaps_tintmap__root ;
		return bbt_node;
	}else{
		return &bbNullObject;
	}
}
struct _m_intmaps_TIntMapEnumerator_obj* __m_intmaps_TIntMap_Keys(struct _m_intmaps_TIntMap_obj* o){
	struct _m_intmaps_TIntNodeEnumerator_obj* volatile bbt_nodeenum=((struct _m_intmaps_TIntNodeEnumerator_obj*)bbObjectDowncast(bbObjectNew(&_m_intmaps_TIntKeyEnumerator),&_m_intmaps_TIntNodeEnumerator));
	bbt_nodeenum->__m_intmaps_tintnodeenumerator__node =((struct _m_intmaps_TIntMap_obj*)o)->clas->m__FirstNode(o);
	struct _m_intmaps_TIntMapEnumerator_obj* volatile bbt_mapenum=bbObjectNew(&_m_intmaps_TIntMapEnumerator);
	bbt_mapenum->__m_intmaps_tintmapenumerator__enumerator =bbt_nodeenum;
	return bbt_mapenum;
}
struct _m_intmaps_TIntMapEnumerator_obj* __m_intmaps_TIntMap_Values(struct _m_intmaps_TIntMap_obj* o){
	struct _m_intmaps_TIntNodeEnumerator_obj* volatile bbt_nodeenum=((struct _m_intmaps_TIntNodeEnumerator_obj*)bbObjectDowncast(bbObjectNew(&_m_intmaps_TIntValueEnumerator),&_m_intmaps_TIntNodeEnumerator));
	bbt_nodeenum->__m_intmaps_tintnodeenumerator__node =((struct _m_intmaps_TIntMap_obj*)o)->clas->m__FirstNode(o);
	struct _m_intmaps_TIntMapEnumerator_obj* volatile bbt_mapenum=bbObjectNew(&_m_intmaps_TIntMapEnumerator);
	bbt_mapenum->__m_intmaps_tintmapenumerator__enumerator =bbt_nodeenum;
	return bbt_mapenum;
}
struct _m_intmaps_TIntMap_obj* __m_intmaps_TIntMap_Copy(struct _m_intmaps_TIntMap_obj* o){
	struct _m_intmaps_TIntMap_obj* volatile bbt_map=bbObjectAtomicNew(&_m_intmaps_TIntMap);
	bmx_map_intmap_copy(((BBBYTE**)(&bbt_map->__m_intmaps_tintmap__root )),o->__m_intmaps_tintmap__root );
	return bbt_map;
}
struct _m_intmaps_TIntNodeEnumerator_obj* __m_intmaps_TIntMap_ObjectEnumerator(struct _m_intmaps_TIntMap_obj* o){
	struct _m_intmaps_TIntNodeEnumerator_obj* volatile bbt_nodeenum=bbObjectNew(&_m_intmaps_TIntNodeEnumerator);
	bbt_nodeenum->__m_intmaps_tintnodeenumerator__node =((struct _m_intmaps_TIntMap_obj*)o)->clas->m__FirstNode(o);
	return bbt_nodeenum;
}
struct BBDebugScope_13 _m_intmaps_TIntMap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntMap",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct _m_intmaps_TIntMap_obj,__m_intmaps_tintmap__root)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntMap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			&__m_intmaps_TIntMap_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IsEmpty",
			"()i",
			&__m_intmaps_TIntMap_IsEmpty
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Insert",
			"(i,:Object)i",
			&__m_intmaps_TIntMap_Insert_iTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Contains",
			"(i)i",
			&__m_intmaps_TIntMap_Contains_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ValueForKey",
			"(i):Object",
			&__m_intmaps_TIntMap_ValueForKey_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Remove",
			"(i)i",
			&__m_intmaps_TIntMap_Remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_FirstNode",
			"():TIntNode",
			&__m_intmaps_TIntMap__FirstNode
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Keys",
			"():TIntMapEnumerator",
			&__m_intmaps_TIntMap_Keys
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Values",
			"():TIntMapEnumerator",
			&__m_intmaps_TIntMap_Values
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Copy",
			"():TIntMap",
			&__m_intmaps_TIntMap_Copy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TIntNodeEnumerator",
			&__m_intmaps_TIntMap_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntMap _m_intmaps_TIntMap={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_TIntMap_scope,
	sizeof(struct _m_intmaps_TIntMap_obj),
	__m_intmaps_TIntMap_New,
	__m_intmaps_TIntMap_Delete,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntMap_obj,__m_intmaps_tintmap__root) - sizeof(void*) + sizeof(BBBYTE*)
	,__m_intmaps_TIntMap_Clear
	,__m_intmaps_TIntMap_IsEmpty
	,__m_intmaps_TIntMap_Insert_iTObject
	,__m_intmaps_TIntMap_Contains_i
	,__m_intmaps_TIntMap_ValueForKey_i
	,__m_intmaps_TIntMap_Remove_i
	,__m_intmaps_TIntMap__FirstNode
	,__m_intmaps_TIntMap_Keys
	,__m_intmaps_TIntMap_Values
	,__m_intmaps_TIntMap_Copy
	,__m_intmaps_TIntMap_ObjectEnumerator
};

struct _m_intmaps_TIntMap_obj* _m_intmaps_myintmap=&bbNullObject;
struct brl_linkedlist_TList_obj* _m_intmaps_mylist=&bbNullObject;
void __m_intmaps_t_New(struct _m_intmaps_t_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_t;
	o->__m_intmaps_t_y = 0;
}
struct BBDebugScope_2 _m_intmaps_t_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"t",
	{
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_intmaps_t_obj,__m_intmaps_t_y)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_t_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_t _m_intmaps_t={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_t_scope,
	sizeof(struct _m_intmaps_t_obj),
	__m_intmaps_t_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_t_obj,__m_intmaps_t_y) - sizeof(void*) + sizeof(BBINT)
};

BBINT _m_intmaps_gen_tintmap_test(){
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	BBINT bbt_i=0;
	BBINT bbt_key=0;
	while(bbt_i<2999999){
		struct _m_intmaps_t_obj* volatile bbt_z2=bbObjectAtomicNew(&_m_intmaps_t);
		bbt_z2->__m_intmaps_t_y =5;
		bbt_key=(bbt_key+bbt_z2->__m_intmaps_t_y );
		(_m_intmaps_myintmap)->clas->m_Insert_iTObject(_m_intmaps_myintmap,bbt_key,bbt_z2);
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_ref_tintmap_test(){
	BBINT bbt_i=0;
	BBINT bbt_y=0;
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	while(bbt_i<2999999){
		bbt_y=bbt_y;
		bbt_z=((struct _m_intmaps_t_obj*)bbObjectDowncast((_m_intmaps_myintmap)->clas->m_ValueForKey_i(_m_intmaps_myintmap,bbt_y),&_m_intmaps_t));
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_test_intmap(){
	BBINT bbt_time=bbMilliSecs();
	_m_intmaps_gen_tintmap_test();
	BBINT bbt_time2=(bbMilliSecs()-bbt_time);
	_m_intmaps_ref_tintmap_test();
	BBINT bbt_time3=(bbMilliSecs()-bbt_time);
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(&_s2,bbStringFromInt(bbt_time2)),&_s3),bbStringFromInt(bbt_time3)));
	return 0;
}
BBINT _m_intmaps_Create_world(){
	BBSTRING bbt_s=&bbEmptyString;
	BBINT bbt_i=0;
	bbt_s=&_s4;
	(_m_intmaps_myintmap)->clas->m_Insert_iTObject(_m_intmaps_myintmap,bbt_i,bbt_s);
	return 0;
}
void __m_intmaps_TIntNode_New(struct _m_intmaps_TIntNode_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_TIntNode;
	o->__m_intmaps_tintnode__root = 0;
	o->__m_intmaps_tintnode__nodeptr = 0;
}
BBINT __m_intmaps_TIntNode_Key(struct _m_intmaps_TIntNode_obj* o){
	return bmx_map_intmap_key(o->__m_intmaps_tintnode__nodeptr );
}
BBOBJECT __m_intmaps_TIntNode_Value(struct _m_intmaps_TIntNode_obj* o){
	return bmx_map_intmap_value(o->__m_intmaps_tintnode__nodeptr );
}
BBINT __m_intmaps_TIntNode_HasNext(struct _m_intmaps_TIntNode_obj* o){
	return bmx_map_intmap_hasnext(o->__m_intmaps_tintnode__nodeptr ,o->__m_intmaps_tintnode__root );
}
struct _m_intmaps_TIntNode_obj* __m_intmaps_TIntNode_NextNode(struct _m_intmaps_TIntNode_obj* o){
	if(!(o->__m_intmaps_tintnode__nodeptr )){
		o->__m_intmaps_tintnode__nodeptr =bmx_map_intmap_firstnode(o->__m_intmaps_tintnode__root );
	}else{
		o->__m_intmaps_tintnode__nodeptr =bmx_map_intmap_nextnode(o->__m_intmaps_tintnode__nodeptr );
	}
	return o;
}
struct BBDebugScope_7 _m_intmaps_TIntNode_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntNode",
	{
		{
			BBDEBUGDECL_FIELD,
			"_root",
			"*b",
			.field_offset=offsetof(struct _m_intmaps_TIntNode_obj,__m_intmaps_tintnode__root)
		},
		{
			BBDEBUGDECL_FIELD,
			"_nodePtr",
			"*b",
			.field_offset=offsetof(struct _m_intmaps_TIntNode_obj,__m_intmaps_tintnode__nodeptr)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntNode_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Key",
			"()i",
			&__m_intmaps_TIntNode_Key
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Value",
			"():Object",
			&__m_intmaps_TIntNode_Value
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			&__m_intmaps_TIntNode_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextNode",
			"():TIntNode",
			&__m_intmaps_TIntNode_NextNode
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntNode _m_intmaps_TIntNode={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_TIntNode_scope,
	sizeof(struct _m_intmaps_TIntNode_obj),
	__m_intmaps_TIntNode_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntNode_obj,__m_intmaps_tintnode__nodeptr) - sizeof(void*) + sizeof(BBBYTE*)
	,__m_intmaps_TIntNode_Key
	,__m_intmaps_TIntNode_Value
	,__m_intmaps_TIntNode_HasNext
	,__m_intmaps_TIntNode_NextNode
};

void __m_intmaps_TIntKey_New(struct _m_intmaps_TIntKey_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_TIntKey;
	o->__m_intmaps_tintkey_value = 0;
}
struct BBDebugScope_2 _m_intmaps_TIntKey_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntKey",
	{
		{
			BBDEBUGDECL_FIELD,
			"value",
			"i",
			.field_offset=offsetof(struct _m_intmaps_TIntKey_obj,__m_intmaps_tintkey_value)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntKey_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntKey _m_intmaps_TIntKey={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_TIntKey_scope,
	sizeof(struct _m_intmaps_TIntKey_obj),
	__m_intmaps_TIntKey_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntKey_obj,__m_intmaps_tintkey_value) - sizeof(void*) + sizeof(BBINT)
};

void __m_intmaps_TIntNodeEnumerator_New(struct _m_intmaps_TIntNodeEnumerator_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_TIntNodeEnumerator;
	o->__m_intmaps_tintnodeenumerator__node = &bbNullObject;
}
BBINT __m_intmaps_TIntNodeEnumerator_HasNext(struct _m_intmaps_TIntNodeEnumerator_obj* o){
	return (o->__m_intmaps_tintnodeenumerator__node )->clas->m_HasNext(o->__m_intmaps_tintnodeenumerator__node );
}
BBOBJECT __m_intmaps_TIntNodeEnumerator_NextObject(struct _m_intmaps_TIntNodeEnumerator_obj* o){
	struct _m_intmaps_TIntNode_obj* volatile bbt_node=o->__m_intmaps_tintnodeenumerator__node ;
	o->__m_intmaps_tintnodeenumerator__node =(o->__m_intmaps_tintnodeenumerator__node )->clas->m_NextNode(o->__m_intmaps_tintnodeenumerator__node );
	return bbt_node;
}
struct BBDebugScope_4 _m_intmaps_TIntNodeEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntNodeEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_node",
			":TIntNode",
			.field_offset=offsetof(struct _m_intmaps_TIntNodeEnumerator_obj,__m_intmaps_tintnodeenumerator__node)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntNodeEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"HasNext",
			"()i",
			&__m_intmaps_TIntNodeEnumerator_HasNext
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			&__m_intmaps_TIntNodeEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntNodeEnumerator _m_intmaps_TIntNodeEnumerator={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_TIntNodeEnumerator_scope,
	sizeof(struct _m_intmaps_TIntNodeEnumerator_obj),
	__m_intmaps_TIntNodeEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntNodeEnumerator_obj,__m_intmaps_tintnodeenumerator__node) - sizeof(void*) + sizeof(struct _m_intmaps_TIntNode_obj*)
	,__m_intmaps_TIntNodeEnumerator_HasNext
	,__m_intmaps_TIntNodeEnumerator_NextObject
};

void __m_intmaps_TIntKeyEnumerator_New(struct _m_intmaps_TIntKeyEnumerator_obj* o) {
	__m_intmaps_TIntNodeEnumerator_New(o);
	o->clas = (BBClass*)&_m_intmaps_TIntKeyEnumerator;
	o->__m_intmaps_tintkeyenumerator__key = bbObjectAtomicNew(&_m_intmaps_TIntKey);
}
BBOBJECT __m_intmaps_TIntKeyEnumerator_NextObject(struct _m_intmaps_TIntKeyEnumerator_obj* o){
	struct _m_intmaps_TIntNode_obj* volatile bbt_node=o->__m_intmaps_tintnodeenumerator__node ;
	o->__m_intmaps_tintnodeenumerator__node =(o->__m_intmaps_tintnodeenumerator__node )->clas->m_NextNode(o->__m_intmaps_tintnodeenumerator__node );
	o->__m_intmaps_tintkeyenumerator__key ->__m_intmaps_tintkey_value =(bbt_node)->clas->m_Key(bbt_node);
	return o->__m_intmaps_tintkeyenumerator__key ;
}
struct BBDebugScope_3 _m_intmaps_TIntKeyEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntKeyEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_key",
			":TIntKey",
			.field_offset=offsetof(struct _m_intmaps_TIntKeyEnumerator_obj,__m_intmaps_tintkeyenumerator__key)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntKeyEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			&__m_intmaps_TIntKeyEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntKeyEnumerator _m_intmaps_TIntKeyEnumerator={
	&_m_intmaps_TIntNodeEnumerator,
	bbObjectFree,
	&_m_intmaps_TIntKeyEnumerator_scope,
	sizeof(struct _m_intmaps_TIntKeyEnumerator_obj),
	__m_intmaps_TIntKeyEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntKeyEnumerator_obj,__m_intmaps_tintkeyenumerator__key) - sizeof(void*) + sizeof(struct _m_intmaps_TIntKey_obj*)
	,__m_intmaps_TIntNodeEnumerator_HasNext
	,__m_intmaps_TIntKeyEnumerator_NextObject
};

void __m_intmaps_TIntValueEnumerator_New(struct _m_intmaps_TIntValueEnumerator_obj* o) {
	__m_intmaps_TIntNodeEnumerator_New(o);
	o->clas = (BBClass*)&_m_intmaps_TIntValueEnumerator;
}
BBOBJECT __m_intmaps_TIntValueEnumerator_NextObject(struct _m_intmaps_TIntValueEnumerator_obj* o){
	struct _m_intmaps_TIntNode_obj* volatile bbt_node=o->__m_intmaps_tintnodeenumerator__node ;
	o->__m_intmaps_tintnodeenumerator__node =(o->__m_intmaps_tintnodeenumerator__node )->clas->m_NextNode(o->__m_intmaps_tintnodeenumerator__node );
	return (bbt_node)->clas->m_Value(bbt_node);
}
struct BBDebugScope_2 _m_intmaps_TIntValueEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntValueEnumerator",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntValueEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"NextObject",
			"():Object",
			&__m_intmaps_TIntValueEnumerator_NextObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntValueEnumerator _m_intmaps_TIntValueEnumerator={
	&_m_intmaps_TIntNodeEnumerator,
	bbObjectFree,
	&_m_intmaps_TIntValueEnumerator_scope,
	sizeof(struct _m_intmaps_TIntValueEnumerator_obj),
	__m_intmaps_TIntValueEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,__m_intmaps_TIntNodeEnumerator_HasNext
	,__m_intmaps_TIntValueEnumerator_NextObject
};

void __m_intmaps_TIntMapEnumerator_New(struct _m_intmaps_TIntMapEnumerator_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_intmaps_TIntMapEnumerator;
	o->__m_intmaps_tintmapenumerator__enumerator = &bbNullObject;
}
struct _m_intmaps_TIntNodeEnumerator_obj* __m_intmaps_TIntMapEnumerator_ObjectEnumerator(struct _m_intmaps_TIntMapEnumerator_obj* o){
	return o->__m_intmaps_tintmapenumerator__enumerator ;
}
struct BBDebugScope_3 _m_intmaps_TIntMapEnumerator_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIntMapEnumerator",
	{
		{
			BBDEBUGDECL_FIELD,
			"_enumerator",
			":TIntNodeEnumerator",
			.field_offset=offsetof(struct _m_intmaps_TIntMapEnumerator_obj,__m_intmaps_tintmapenumerator__enumerator)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_intmaps_TIntMapEnumerator_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ObjectEnumerator",
			"():TIntNodeEnumerator",
			&__m_intmaps_TIntMapEnumerator_ObjectEnumerator
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_intmaps_TIntMapEnumerator _m_intmaps_TIntMapEnumerator={
	&bbObjectClass,
	bbObjectFree,
	&_m_intmaps_TIntMapEnumerator_scope,
	sizeof(struct _m_intmaps_TIntMapEnumerator_obj),
	__m_intmaps_TIntMapEnumerator_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_intmaps_TIntMapEnumerator_obj,__m_intmaps_tintmapenumerator__enumerator) - sizeof(void*) + sizeof(struct _m_intmaps_TIntNodeEnumerator_obj*)
	,__m_intmaps_TIntMapEnumerator_ObjectEnumerator
};

BBINT _m_intmaps_gen_tmap_test(){
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	BBINT bbt_i=0;
	BBINT bbt_key=0;
	while(bbt_i<2999999){
		struct _m_intmaps_t_obj* volatile bbt_z2=bbObjectAtomicNew(&_m_intmaps_t);
		bbt_z2->__m_intmaps_t_y =brl_random_Rand(0,10);
		bbt_key=(bbt_key+bbt_z2->__m_intmaps_t_y );
		brl_map_MapInsert(_m_intmaps_mymap,bbStringFromInt(bbt_key),bbt_z2);
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_ref_tmap_test(){
	BBINT bbt_i=0;
	BBINT bbt_y=0;
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	while(bbt_i<2999999){
		bbt_y=(bbt_y+brl_random_Rand(0,10));
		bbt_z=((struct _m_intmaps_t_obj*)bbObjectDowncast(brl_map_MapValueForKey(_m_intmaps_mymap,bbStringFromInt(bbt_y)),&_m_intmaps_t));
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_gen_list_test(){
	BBINT bbt_i=0;
	BBINT bbt_y=0;
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	while(bbt_i<2999999){
		bbt_z=bbObjectAtomicNew(&_m_intmaps_t);
		bbt_y=(bbt_y+brl_random_Rand(0,10));
		bbt_z->__m_intmaps_t_y =bbt_y;
		(_m_intmaps_mylist)->clas->m_AddLast_TObject(_m_intmaps_mylist,bbt_z);
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_ref_list_test(){
	BBINT bbt_i=0;
	BBINT bbt_y=0;
	struct _m_intmaps_t_obj* volatile bbt_z=&bbNullObject;
	BBINT bbt_ok=0;
	while(bbt_i<2999999){
		struct brl_linkedlist_TLink_obj* volatile bbt_tl=(_m_intmaps_mylist)->clas->m_FirstLink(_m_intmaps_mylist);
		bbt_z=((struct _m_intmaps_t_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_intmaps_t));
		bbt_y=brl_random_Rand(0,300000000);
		if(bbt_z!=&bbNullObject){
			do{
				if(bbt_y==bbt_z->__m_intmaps_t_y ){
					bbt_ok=1;
				}
				bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
				bbt_z=((struct _m_intmaps_t_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_intmaps_t));
			}while(!(bbt_z==&bbNullObject));
		}
		if((bbt_i % 100)==0){
			brl_standardio_Print(bbStringConcat(bbStringConcat(&_s0,bbStringFromInt(bbt_i)),&_s1));
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_intmaps_test_map(){
	BBINT bbt_time=bbMilliSecs();
	_m_intmaps_gen_tmap_test();
	BBINT bbt_time2=(bbMilliSecs()-bbt_time);
	_m_intmaps_ref_tmap_test();
	BBINT bbt_time3=(bbMilliSecs()-bbt_time);
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(&_s2,bbStringFromInt(bbt_time2)),&_s3),bbStringFromInt(bbt_time3)));
	return 0;
}
BBINT _m_intmaps_test_list(){
	BBINT bbt_time=bbMilliSecs();
	_m_intmaps_gen_list_test();
	BBINT bbt_time2=(bbMilliSecs()-bbt_time);
	_m_intmaps_ref_list_test();
	BBINT bbt_time3=(bbMilliSecs()-bbt_time);
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(&_s2,bbStringFromInt(bbt_time2)),&_s3),bbStringFromInt(bbt_time3)));
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_data_data();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxutil_maxutil();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_pngloader_pngloader();
		__bb_brl_retro_retro();
		__bb_brl_stringbuilder_stringbuilder();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_threads_threads();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_macos_macos();
		__bb_pub_opengles_opengles();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType(&_m_intmaps_TIntMap);
		bbObjectRegisterType(&_m_intmaps_t);
		bbObjectRegisterType(&_m_intmaps_TIntNode);
		bbObjectRegisterType(&_m_intmaps_TIntKey);
		bbObjectRegisterType(&_m_intmaps_TIntNodeEnumerator);
		bbObjectRegisterType(&_m_intmaps_TIntKeyEnumerator);
		bbObjectRegisterType(&_m_intmaps_TIntValueEnumerator);
		bbObjectRegisterType(&_m_intmaps_TIntMapEnumerator);
		_m_intmaps_mymap=brl_map_CreateMap();
		_m_intmaps_myintmap=bbObjectAtomicNew(&_m_intmaps_TIntMap);
		_m_intmaps_mylist=brl_linkedlist_CreateList();
		_m_intmaps_test_intmap();
		_m_intmaps_Create_world();
		return 0;
	}
	return 0;
}