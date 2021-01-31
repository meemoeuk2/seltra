#include "seltra.bmx.console.release.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	1,
	{32}
};
static BBString _s12={
	&bbStringClass,
	22,
	{32,100,117,101,32,116,111,32,111,117,116,32,111,102,32,98,111
	,117,110,100,115,32}
};
static BBString _s7={
	&bbStringClass,
	10,
	{97,114,114,111,119,101,46,112,110,103}
};
static BBString _s8={
	&bbStringClass,
	10,
	{97,114,114,111,119,110,46,112,110,103}
};
static BBString _s9={
	&bbStringClass,
	10,
	{97,114,114,111,119,115,46,112,110,103}
};
static BBString _s6={
	&bbStringClass,
	10,
	{97,114,114,111,119,119,46,112,110,103}
};
static BBString _s3={
	&bbStringClass,
	9,
	{98,108,97,110,107,46,112,110,103}
};
static BBString _s0={
	&bbStringClass,
	9,
	{98,108,111,99,107,46,112,110,103}
};
static BBString _s1={
	&bbStringClass,
	12,
	{99,111,108,100,119,97,108,108,46,112,110,103}
};
static BBString _s11={
	&bbStringClass,
	15,
	{100,101,108,101,116,101,100,32,98,103,114,111,117,112,32}
};
static BBString _s2={
	&bbStringClass,
	8,
	{103,101,110,101,46,112,110,103}
};
static BBString _s4={
	&bbStringClass,
	9,
	{109,111,117,115,101,46,112,110,103}
};
static BBString _s5={
	&bbStringClass,
	13,
	{109,111,117,115,101,99,101,108,108,46,98,109,112}
};
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
BBINT _m_seltra_gw=0;
BBINT _m_seltra_gh=0;
BBARRAY _m_seltra_imagelist=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_block1=&bbNullObject;
BBINT _m_seltra_noi=0;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn){
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[((BBUINT)_m_seltra_noi)]=brl_max2d_LoadImage(bbt_fn,-1);
	_m_seltra_noi=(_m_seltra_noi+1);
	return ((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[((BBUINT)(_m_seltra_noi-1))];
}
struct brl_max2d_image_TImage_obj* _m_seltra_wall1=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_gene=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blank=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_mousep=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_mousec=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arroww=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrowe=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrown=&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrows=&bbNullObject;
BBBYTE _m_seltra_frame=0;
BBINT _m_seltra_mox=0;
BBINT _m_seltra_moy=0;
BBINT _m_seltra_moz=0;
struct brl_max2d_image_TImage_obj* _m_seltra_smi=&bbNullObject;
BBINT _m_seltra_smt=0;
BBFLOAT _m_seltra_zoom=30.0f;
BBINT _m_seltra_mozo=0;
BBFLOAT _m_seltra_mozu=.0f;
BBINT _m_seltra_moxc=0;
BBINT _m_seltra_moyc=0;
BBARRAY _m_seltra_moxco=&bbEmptyArray;
BBARRAY _m_seltra_moyco=&bbEmptyArray;
BBINT _m_seltra_redraw_map=3;
BBINT _m_seltra_bi=0;
BBINT _m_seltra_bgc=0;
BBINT _m_seltra_camposx=0;
BBINT _m_seltra_camposy=0;
void __m_seltra_grouparray_New(struct _m_seltra_grouparray_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_grouparray;
	o->__m_seltra_grouparray_ga = bbArrayNew1D(":bgroup", 2000000);
	o->__m_seltra_grouparray_le = 0;
}
BBINT __m_seltra_grouparray_add_Tbgroup(struct _m_seltra_grouparray_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	((struct _m_seltra_bgroup_obj**)BBARRAYDATA((o->__m_seltra_grouparray_ga ),(o->__m_seltra_grouparray_ga )->dims))[((BBUINT)o->__m_seltra_grouparray_le )]=bbt_g;
	o->__m_seltra_grouparray_le =(o->__m_seltra_grouparray_le +1);
	return 0;
}
BBINT __m_seltra_grouparray_ordered_sort_ii(struct _m_seltra_grouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_seltra_grouparray_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_seltra_grouparray_le ){
		((struct _m_seltra_bgroup_obj**)BBARRAYDATA((o->__m_seltra_grouparray_ga ),(o->__m_seltra_grouparray_ga )->dims))[((BBUINT)bbt_i)]=((struct _m_seltra_bgroup_obj**)BBARRAYDATA((o->__m_seltra_grouparray_ga ),(o->__m_seltra_grouparray_ga )->dims))[((BBUINT)bbt_j)];
		if(((struct _m_seltra_bgroup_obj**)BBARRAYDATA((o->__m_seltra_grouparray_ga ),(o->__m_seltra_grouparray_ga )->dims))[((BBUINT)bbt_i)]!= &bbNullObject){
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_grouparray_le =bbt_i;
	return 0;
}
struct BBDebugScope_5 _m_seltra_grouparray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"grouparray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ga",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_ga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_grouparray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:bgroup)i",
			&__m_seltra_grouparray_add_Tbgroup
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			&__m_seltra_grouparray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_grouparray _m_seltra_grouparray={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_grouparray_scope,
	sizeof(struct _m_seltra_grouparray_obj),
	__m_seltra_grouparray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_grouparray_add_Tbgroup
	,__m_seltra_grouparray_ordered_sort_ii
};

struct _m_seltra_grouparray_obj* _m_seltra_garray=&bbNullObject;
void __m_seltra_blockarray_New(struct _m_seltra_blockarray_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_blockarray;
	o->__m_seltra_blockarray_ba = bbArrayNew1D(":block", 3000000);
	o->__m_seltra_blockarray_le = 0;
}
BBINT __m_seltra_blockarray_add_Tblock(struct _m_seltra_blockarray_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_blockarray_ba ),(o->__m_seltra_blockarray_ba )->dims))[((BBUINT)o->__m_seltra_blockarray_le )]=bbt_b;
	o->__m_seltra_blockarray_le =(o->__m_seltra_blockarray_le +1);
	return 0;
}
BBINT __m_seltra_blockarray_ordered_sort_ii(struct _m_seltra_blockarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_seltra_blockarray_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_seltra_blockarray_le ){
		((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_blockarray_ba ),(o->__m_seltra_blockarray_ba )->dims))[((BBUINT)bbt_i)]=((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_blockarray_ba ),(o->__m_seltra_blockarray_ba )->dims))[((BBUINT)bbt_j)];
		if(((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_blockarray_ba ),(o->__m_seltra_blockarray_ba )->dims))[((BBUINT)bbt_i)]!= &bbNullObject){
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_blockarray_le =bbt_i;
	return 0;
}
struct BBDebugScope_5 _m_seltra_blockarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"blockarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ba",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_ba)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_blockarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			&__m_seltra_blockarray_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			&__m_seltra_blockarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_blockarray _m_seltra_blockarray={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_blockarray_scope,
	sizeof(struct _m_seltra_blockarray_obj),
	__m_seltra_blockarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_blockarray_add_Tblock
	,__m_seltra_blockarray_ordered_sort_ii
};

struct _m_seltra_blockarray_obj* _m_seltra_barray=&bbNullObject;
struct brl_linkedlist_TList_obj* _m_seltra_wallgroup=&bbNullObject;
void __m_seltra_fastblockmap_New(struct _m_seltra_fastblockmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_fastblockmap;
	o->__m_seltra_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	o->__m_seltra_fastblockmap_k = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastblockmap_le = 0;
	o->__m_seltra_fastblockmap_rc = 0;
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_fetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	return ((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)bbt_key)];
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_vfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	return ((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastblockmap_kfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastblockmap_insert_iTblock(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key,struct _m_seltra_block_obj* bbt_b){
	if(((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)bbt_key)]==&bbNullObject){
		((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)o->__m_seltra_fastblockmap_le )]=bbt_key;
		o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le +1);
	}
	((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)bbt_key)]=bbt_b;
	return 0;
}
BBINT __m_seltra_fastblockmap_remove_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)bbt_key)]=&bbNullObject;
	o->__m_seltra_fastblockmap_rc =(o->__m_seltra_fastblockmap_rc +1);
	return 0;
}
BBINT __m_seltra_fastblockmap_iter(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)(o->__m_seltra_fastblockmap_le -1))];
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastblockmap_fastsort(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)(o->__m_seltra_fastblockmap_le -1))];
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	o->__m_seltra_fastblockmap_rc =0;
	return 0;
}
BBINT __m_seltra_fastblockmap_orderedsort(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA((o->__m_seltra_fastblockmap_v ),(o->__m_seltra_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_j)])]==&bbNullObject){
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastblockmap_k ),(o->__m_seltra_fastblockmap_k )->dims))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_fastblockmap_le =bbt_i;
	o->__m_seltra_fastblockmap_rc =0;
	return 0;
}
struct BBDebugScope_13 _m_seltra_fastblockmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastblockmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rc",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_rc)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_fastblockmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i):block",
			&__m_seltra_fastblockmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i):block",
			&__m_seltra_fastblockmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			&__m_seltra_fastblockmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,:block)i",
			&__m_seltra_fastblockmap_insert_iTblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			&__m_seltra_fastblockmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			&__m_seltra_fastblockmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			&__m_seltra_fastblockmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			&__m_seltra_fastblockmap_orderedsort
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_fastblockmap _m_seltra_fastblockmap={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_fastblockmap_scope,
	sizeof(struct _m_seltra_fastblockmap_obj),
	__m_seltra_fastblockmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_rc) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_fastblockmap_fetch_i
	,__m_seltra_fastblockmap_vfetch_i
	,__m_seltra_fastblockmap_kfetch_i
	,__m_seltra_fastblockmap_insert_iTblock
	,__m_seltra_fastblockmap_remove_i
	,__m_seltra_fastblockmap_iter
	,__m_seltra_fastblockmap_fastsort
	,__m_seltra_fastblockmap_orderedsort
};

struct _m_seltra_fastblockmap_obj* _m_seltra_bmap=&bbNullObject;
void __m_seltra_fastintmap_New(struct _m_seltra_fastintmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_fastintmap;
	o->__m_seltra_fastintmap_v = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastintmap_k = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastintmap_le = 0;
	o->__m_seltra_fastintmap_nl = 0;
}
BBINT __m_seltra_fastintmap_fetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	return ((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)bbt_key)];
}
BBINT __m_seltra_fastintmap_vfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastintmap_kfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastintmap_insert_ii(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	if(((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)bbt_key)]==o->__m_seltra_fastintmap_nl ){
		((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)o->__m_seltra_fastintmap_le )]=bbt_key;
		o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le +1);
	}
	((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)bbt_key)]=bbt_val;
	return 0;
}
BBINT __m_seltra_fastintmap_remove_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)bbt_key)]=o->__m_seltra_fastintmap_nl ;
	return 0;
}
BBINT __m_seltra_fastintmap_iter(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)])]==o->__m_seltra_fastintmap_nl ){
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)(o->__m_seltra_fastintmap_le -1))];
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			BBINT bbt_a=((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)])];
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastintmap_fastsort(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)])]==o->__m_seltra_fastintmap_nl ){
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)(o->__m_seltra_fastintmap_le -1))];
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastintmap_orderedsort(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_j)])]==o->__m_seltra_fastintmap_nl ){
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_k ),(o->__m_seltra_fastintmap_k )->dims))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_fastintmap_le =bbt_i;
	return 0;
}
BBINT __m_seltra_fastintmap_set_null_value_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_n){
	BBINT bbt_i=0;
	o->__m_seltra_fastintmap_nl =bbt_n;
	while(bbt_i<3000000){
		((BBINT*)BBARRAYDATA((o->__m_seltra_fastintmap_v ),(o->__m_seltra_fastintmap_v )->dims))[((BBUINT)bbt_i)]=bbt_n;
		bbt_i=(bbt_i+1);
	}
	return 0;
}
struct BBDebugScope_14 _m_seltra_fastintmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastintmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"nl",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_nl)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_fastintmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i)i",
			&__m_seltra_fastintmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i)i",
			&__m_seltra_fastintmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			&__m_seltra_fastintmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,i)i",
			&__m_seltra_fastintmap_insert_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			&__m_seltra_fastintmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			&__m_seltra_fastintmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			&__m_seltra_fastintmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			&__m_seltra_fastintmap_orderedsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"set_null_value",
			"(i)i",
			&__m_seltra_fastintmap_set_null_value_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_fastintmap _m_seltra_fastintmap={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_fastintmap_scope,
	sizeof(struct _m_seltra_fastintmap_obj),
	__m_seltra_fastintmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_nl) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_fastintmap_fetch_i
	,__m_seltra_fastintmap_vfetch_i
	,__m_seltra_fastintmap_kfetch_i
	,__m_seltra_fastintmap_insert_ii
	,__m_seltra_fastintmap_remove_i
	,__m_seltra_fastintmap_iter
	,__m_seltra_fastintmap_fastsort
	,__m_seltra_fastintmap_orderedsort
	,__m_seltra_fastintmap_set_null_value_i
};

struct _m_seltra_fastintmap_obj* _m_seltra_arrowmap=&bbNullObject;
void __m_seltra_block_New(struct _m_seltra_block_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_block;
	o->__m_seltra_block_btype = 0;
	o->__m_seltra_block_image = &bbNullObject;
	o->__m_seltra_block_x = 0;
	o->__m_seltra_block_y = 0;
	o->__m_seltra_block_bit_tags = 0;
	o->__m_seltra_block_id = 0;
	o->__m_seltra_block_oldx = bbArrayNew1D("i", 2);
	o->__m_seltra_block_oldy = bbArrayNew1D("i", 2);
	o->__m_seltra_block_group = &bbNullObject;
}
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj* o){
	brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATA((o->__m_seltra_block_oldx ),(o->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATA((o->__m_seltra_block_oldy ),(o->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
	brl_max2d_DrawImage(o->__m_seltra_block_image ,(((BBFLOAT)(o->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(o->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
	((BBINT*)BBARRAYDATA((o->__m_seltra_block_oldx ),(o->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]=o->__m_seltra_block_x ;
	((BBINT*)BBARRAYDATA((o->__m_seltra_block_oldy ),(o->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]=o->__m_seltra_block_y ;
	return 0;
}
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj* o){
	if((((o->__m_seltra_block_x <1) || (o->__m_seltra_block_x >1000)) || (o->__m_seltra_block_y <1)) || (o->__m_seltra_block_y >1000)){
		return 1;
	}
	return 0;
}
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	struct _m_seltra_block_obj* volatile bbt_b=bbObjectNew(&_m_seltra_block);
	bbt_b->__m_seltra_block_btype =o->__m_seltra_block_btype ;
	bbt_b->__m_seltra_block_bit_tags =(bbt_b->__m_seltra_block_bit_tags -1);
	bbt_b->__m_seltra_block_image =o->__m_seltra_block_image ;
	bbt_b->__m_seltra_block_x =(o->__m_seltra_block_x +bbt_xs);
	bbt_b->__m_seltra_block_y =(o->__m_seltra_block_y +bbt_ys);
	bbt_b->__m_seltra_block_id =_m_seltra_bi;
	_m_seltra_bi=(_m_seltra_bi+1);
	(_m_seltra_barray)->clas->m_add_Tblock(_m_seltra_barray,bbt_b);
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),bbt_b);
	return bbt_b;
}
struct BBDebugScope_13 _m_seltra_block_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"block",
	{
		{
			BBDEBUGDECL_FIELD,
			"btype",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_btype)
		},
		{
			BBDEBUGDECL_FIELD,
			"image",
			":TImage",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_image)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bit_tags",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_bit_tags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldx",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_oldx)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldy",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_oldy)
		},
		{
			BBDEBUGDECL_FIELD,
			"group",
			":bgroup",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_group)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_block_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			&__m_seltra_block_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			&__m_seltra_block_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):block",
			&__m_seltra_block_spawn_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_block _m_seltra_block={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_block_scope,
	sizeof(struct _m_seltra_block_obj),
	__m_seltra_block_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_block_obj,__m_seltra_block_group) - sizeof(void*) + sizeof(struct _m_seltra_bgroup_obj*)
	,__m_seltra_block_draw
	,__m_seltra_block_out_of_bounds
	,__m_seltra_block_spawn_ii
};

BBINT _m_seltra_wallblock(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_block_obj* volatile bbt_b=bbObjectNew(&_m_seltra_block);
	bbt_b->__m_seltra_block_x =bbt_x;
	bbt_b->__m_seltra_block_y =bbt_y;
	bbt_b->__m_seltra_block_btype =1;
	bbt_b->__m_seltra_block_image =_m_seltra_wall1;
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(bbt_x+(bbt_y<<10)),bbt_b);
	(_m_seltra_wallgroup)->clas->m_AddLast_TObject(_m_seltra_wallgroup,bbt_b);
	return 0;
}
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my){
	BBARRAY bbt_m=bbArrayNew1D("b", (bbt_mx*bbt_my));
	BBINT bbt_d=0;
	BBINT bbt_ok=0;
	BBBYTE bbt_k=0;
	BBINT bbt_xv=0;
	BBINT bbt_yv=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_x2=0;
	BBINT bbt_y2=0;
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBARRAY bbt_xs2=bbArrayNew1D("i", 6);
	BBARRAY bbt_ys2=bbArrayNew1D("i", 6);
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[0U]=bbt_xs;
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[0U]=bbt_ys;
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[1U]=bbt_xf;
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[1U]=bbt_yf;
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[2U]=1;
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[2U]=1;
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[3U]=(bbt_mx-1);
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[3U]=1;
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[4U]=1;
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[4U]=(bbt_my-1);
	((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[5U]=(bbt_mx-1);
	((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[5U]=(bbt_my-1);
	bbt_x=bbt_xs;
	bbt_y=bbt_ys;
	while(((BBINT)bbt_k)<6){
		bbt_x=((BBINT*)BBARRAYDATA((bbt_xs2),(bbt_xs2)->dims))[((BBUINT)bbt_k)];
		bbt_y=((BBINT*)BBARRAYDATA((bbt_ys2),(bbt_ys2)->dims))[((BBUINT)bbt_k)];
		bbt_i=0;
		bbt_j=0;
		while(((bbt_i<100) || (bbt_ok==0)) && (bbt_j<1024)){
			bbt_d=brl_random_Rand(0,3);
			BBINT bbt_=bbt_d;
			if(bbt_==0){
				bbt_xv=1;
				bbt_yv=0;
			}else{
				if(bbt_==1){
					bbt_xv=-1;
					bbt_yv=0;
				}else{
					if(bbt_==2){
						bbt_xv=0;
						bbt_yv=1;
					}else{
						if(bbt_==3){
							bbt_xv=0;
							bbt_yv=-1;
						}
					}
				}
			}
			while(1){
				((BBBYTE*)BBARRAYDATA((bbt_m),(bbt_m)->dims))[((BBUINT)(bbt_x+(bbt_y*bbt_mx)))]=1;
				bbt_x2=(bbt_x+bbt_xv);
				bbt_y2=(bbt_y+bbt_yv);
				if((((bbt_x2>0) && (bbt_x2<(bbt_mx-1))) && (bbt_y2>0)) && (bbt_y2<(bbt_my-1))){
					if((((BBINT)((BBBYTE*)BBARRAYDATA((bbt_m),(bbt_m)->dims))[((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))])==0) || (((BBINT)((BBBYTE*)BBARRAYDATA((bbt_m),(bbt_m)->dims))[((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))])==1)){
						bbt_x=(bbt_x+bbt_xv);
						bbt_y=(bbt_y+bbt_yv);
					}
				}else{
					break;
				}
				if((bbt_x==bbt_xf) && (bbt_y==bbt_yf)){
					bbt_ok=1;
				}
				bbt_i=(bbt_i+1);
				if(brl_random_Rand(0,2)==1){
					break;
				}
			}
			bbt_j=(bbt_j+1);
		}
		bbt_k=((BBBYTE)(((BBINT)bbt_k)+1));
	}
	BBINT bbt_2=((bbt_mx*bbt_my)-1);
	for(bbt_i=0;(bbt_i<=bbt_2);bbt_i=(bbt_i+1)){
		if(((BBINT)((BBBYTE*)BBARRAYDATA((bbt_m),(bbt_m)->dims))[((BBUINT)bbt_i)])==0){
			_m_seltra_wallblock((bbt_i % bbt_mx),(bbt_i/bbt_mx));
		}
	}
	return 0;
}
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_bgroup;
	o->__m_seltra_bgroup_blist = &bbNullObject;
	o->__m_seltra_bgroup_xv = 0;
	o->__m_seltra_bgroup_yv = 0;
	o->__m_seltra_bgroup_bittags = 0;
	o->__m_seltra_bgroup_id = 0;
}
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj* o){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	struct _m_seltra_block_obj* volatile bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct _m_seltra_block_obj* volatile bbt_b2=&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=_m_seltra_bmap->__m_seltra_fastblockmap_le ;
	while(bbt_b!= &bbNullObject){
		bbt_xt=(bbt_b->__m_seltra_block_x +o->__m_seltra_bgroup_xv );
		bbt_yt=(bbt_b->__m_seltra_block_y +o->__m_seltra_bgroup_yv );
		if((bbt_xt>=0) && (bbt_yt>=0)){
			bbt_b2=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(bbt_xt+(bbt_yt<<10)));
		}
		if((bbt_b2!=&bbNullObject) && (bbt_b2!=bbt_b)){
			return 0;
		}
		bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	}
	bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	while(bbt_b!= &bbNullObject){
		(_m_seltra_bmap)->clas->m_remove_i(_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
		bbt_b->__m_seltra_block_x =(bbt_b->__m_seltra_block_x +o->__m_seltra_bgroup_xv );
		bbt_b->__m_seltra_block_y =(bbt_b->__m_seltra_block_y +o->__m_seltra_bgroup_yv );
		(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),bbt_b);
		bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	}
	return 0;
}
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj* o){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	struct _m_seltra_block_obj* volatile bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast((bbt_tl)->clas->m_Value(bbt_tl),&_m_seltra_block));
	while(bbt_b!= &bbNullObject){
		(_m_seltra_bmap)->clas->m_remove_i(_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
		bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	}
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	struct _m_seltra_bgroup_obj* volatile bbt_bgn=bbObjectNew(&_m_seltra_bgroup);
	BBINT bbt_i=0;
	struct brl_linkedlist_TLink_obj* volatile bbt_m=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	while(bbt_m!= &bbNullObject){
		struct brl_linkedlist_TList_obj* bbt_;
		struct _m_seltra_block_obj* bbt_2;
		(((struct brl_linkedlist_TList_obj*)(bbt_ = bbt_bgn->__m_seltra_bgroup_blist ))->clas)->m_AddLast_TObject(bbt_,(((struct _m_seltra_block_obj*)(bbt_2 = ((struct _m_seltra_block_obj*)bbObjectDowncast((bbt_m)->clas->m_Value(bbt_m),&_m_seltra_block))))->clas)->m_spawn_ii(bbt_2,bbt_xs,bbt_ys));
		bbt_m=(bbt_m)->clas->m_NextLink(bbt_m);
	}
	bbt_bgn->__m_seltra_bgroup_id =_m_seltra_bgc;
	_m_seltra_bgc=(_m_seltra_bgc+1);
	return &bbNullObject;
}
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj* o){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	struct _m_seltra_block_obj* volatile bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	while(bbt_b!= &bbNullObject){
		if(bbt_b->__m_seltra_block_btype ==0){
			BBINT bbt_=(_m_seltra_arrowmap)->clas->m_fetch_i(_m_seltra_arrowmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
			if(bbt_==1){
				o->__m_seltra_bgroup_xv =0;
				o->__m_seltra_bgroup_yv =-1;
			}else{
				if(bbt_==2){
					o->__m_seltra_bgroup_xv =0;
					o->__m_seltra_bgroup_yv =1;
				}else{
					if(bbt_==3){
						o->__m_seltra_bgroup_xv =-1;
						o->__m_seltra_bgroup_yv =0;
					}else{
						if(bbt_==4){
							o->__m_seltra_bgroup_xv =1;
							o->__m_seltra_bgroup_yv =0;
						}
					}
				}
			}
		}
		bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	}
	return 0;
}
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj* o){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	struct _m_seltra_block_obj* volatile bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	if(bbt_b!=&bbNullObject){
		do{
			if(!((bbt_b)->clas->m_out_of_bounds(bbt_b)!=0)){
				return 0;
			}
			bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
			bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		}while(!(bbt_b==&bbNullObject));
	}
	return 1;
}
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj* o){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(o->__m_seltra_bgroup_blist )->clas->m_FirstLink(o->__m_seltra_bgroup_blist );
	struct _m_seltra_block_obj* volatile bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	if(bbt_b!=&bbNullObject){
		do{
			(bbt_b)->clas->m_draw(bbt_b);
			bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
			bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		}while(!(bbt_b==&bbNullObject));
	}
	return 0;
}
struct BBDebugScope_12 _m_seltra_bgroup_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"bgroup",
	{
		{
			BBDEBUGDECL_FIELD,
			"blist",
			":TList",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_blist)
		},
		{
			BBDEBUGDECL_FIELD,
			"xv",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_xv)
		},
		{
			BBDEBUGDECL_FIELD,
			"yv",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_yv)
		},
		{
			BBDEBUGDECL_FIELD,
			"bittags",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_bittags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_id)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_bgroup_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()i",
			&__m_seltra_bgroup_move
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"()i",
			&__m_seltra_bgroup_remove
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):bgroup",
			&__m_seltra_bgroup_spawn_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkarrows",
			"()i",
			&__m_seltra_bgroup_checkarrows
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			&__m_seltra_bgroup_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			&__m_seltra_bgroup_draw
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_bgroup _m_seltra_bgroup={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_bgroup_scope,
	sizeof(struct _m_seltra_bgroup_obj),
	__m_seltra_bgroup_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_id) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_bgroup_move
	,__m_seltra_bgroup_remove
	,__m_seltra_bgroup_spawn_ii
	,__m_seltra_bgroup_checkarrows
	,__m_seltra_bgroup_out_of_bounds
	,__m_seltra_bgroup_draw
};

BBINT _m_seltra_update_bgroups(){
	BBINT bbt_i=0;
	while(bbt_i<_m_seltra_garray->__m_seltra_grouparray_le ){
		struct _m_seltra_bgroup_obj* volatile bbt_bg=((struct _m_seltra_bgroup_obj**)BBARRAYDATA((_m_seltra_garray->__m_seltra_grouparray_ga ),(_m_seltra_garray->__m_seltra_grouparray_ga )->dims))[((BBUINT)bbt_i)];
		if(bbt_bg!= &bbNullObject){
			(bbt_bg)->clas->m_checkarrows(bbt_bg);
			(bbt_bg)->clas->m_move(bbt_bg);
			if((bbt_bg)->clas->m_out_of_bounds(bbt_bg)!=0){
				brl_standardio_Print(bbStringConcat(bbStringConcat(&_s11,bbStringFromInt(bbt_bg->__m_seltra_bgroup_id )),&_s12));
				(bbt_bg)->clas->m_remove(bbt_bg);
				((struct _m_seltra_bgroup_obj**)BBARRAYDATA((_m_seltra_garray->__m_seltra_grouparray_ga ),(_m_seltra_garray->__m_seltra_grouparray_ga )->dims))[((BBUINT)bbt_i)]=&bbNullObject;
			}
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_createsingleblock(BBINT bbt_btype,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv){
	struct _m_seltra_bgroup_obj* volatile bbt_bg=bbObjectNew(&_m_seltra_bgroup);
	bbt_bg->__m_seltra_bgroup_xv =bbt_xv;
	bbt_bg->__m_seltra_bgroup_yv =bbt_yv;
	bbt_bg->__m_seltra_bgroup_id =_m_seltra_bgc;
	_m_seltra_bgc=(_m_seltra_bgc+1);
	bbt_bg->__m_seltra_bgroup_blist =bbObjectNew(&brl_linkedlist_TList);
	struct _m_seltra_block_obj* volatile bbt_b=bbObjectNew(&_m_seltra_block);
	bbt_b->__m_seltra_block_x =bbt_x;
	bbt_b->__m_seltra_block_y =bbt_y;
	bbt_b->__m_seltra_block_btype =bbt_btype;
	bbt_b->__m_seltra_block_group =bbt_bg;
	BBINT bbt_=bbt_btype;
	if(bbt_==0){
		bbt_b->__m_seltra_block_image =_m_seltra_block1;
	}else{
		if(bbt_==1){
			bbt_b->__m_seltra_block_image =_m_seltra_wall1;
		}
	}
	struct brl_linkedlist_TList_obj* bbt_2;
	(((struct brl_linkedlist_TList_obj*)(bbt_2 = bbt_bg->__m_seltra_bgroup_blist ))->clas)->m_AddLast_TObject(bbt_2,bbt_b);
	(_m_seltra_garray)->clas->m_add_Tbgroup(_m_seltra_garray,bbt_bg);
	(_m_seltra_barray)->clas->m_add_Tblock(_m_seltra_barray,bbt_b);
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),bbt_b);
	return 0;
}
BBINT _m_seltra_mouse_input_map(){
	BBINT bbt_mozd=0;
	BBFLOAT bbt_mozn=.0f;
	_m_seltra_moxc=((BBINT)((((BBFLOAT)_m_seltra_mox)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposx)));
	_m_seltra_moyc=((BBINT)((((BBFLOAT)_m_seltra_moy)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposy)));
	bbt_mozd=(_m_seltra_moz-_m_seltra_mozo);
	if((_m_seltra_mozu+((BBFLOAT)bbt_mozd))<-9.00000000f){
		bbt_mozn=-9.00000000f;
	}else{
		bbt_mozn=(_m_seltra_mozu+((BBFLOAT)bbt_mozd));
	}
	if(_m_seltra_mozu!=bbt_mozn){
		_m_seltra_mozu=bbt_mozn;
		_m_seltra_zoom=(30.0000000f*(1.0f+(_m_seltra_mozu/10.0f)));
		_m_seltra_redraw_map=2;
		brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
	}
	if(_m_seltra_moxc<0){
		_m_seltra_moxc=0;
	}
	if(_m_seltra_moyc<0){
		_m_seltra_moyc=0;
	}
	if(brl_polledinput_MouseHit(1)!=0){
		if((_m_seltra_smt==0) && ((_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)))==&bbNullObject)){
			_m_seltra_createsingleblock(0,_m_seltra_moxc,_m_seltra_moyc,0,0);
		}
	}
	if(brl_polledinput_MouseHit(3)!=0){
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		_m_seltra_redraw_map=2;
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
	}
	return 0;
}
BBINT _m_seltra_mouse_input_editbar(){
	if(brl_polledinput_MouseHit(1)!=0){
		if(_m_seltra_mox<(_m_seltra_gw-70)){
			_m_seltra_smt=((_m_seltra_moy-5)/30);
			_m_seltra_smi=((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[((BBUINT)_m_seltra_smt)];
		}
	}
	return 0;
}
BBINT _m_seltra_get_mouse_input(){
	_m_seltra_mozo=_m_seltra_moz;
	_m_seltra_mox=brl_polledinput_MouseX();
	_m_seltra_moy=brl_polledinput_MouseY();
	_m_seltra_moz=brl_polledinput_MouseZ();
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		_m_seltra_mouse_input_map();
	}else{
		_m_seltra_mouse_input_editbar();
	}
	return 0;
}
BBINT _m_seltra_get_user_input(){
	struct _m_seltra_block_obj* volatile bbt_b=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	if(!(bbt_b!= &bbNullObject) || ((bbt_b!= &bbNullObject) && (bbt_b->__m_seltra_block_btype !=1))){
		if(brl_polledinput_KeyHit(87)!=0){
			(_m_seltra_arrowmap)->clas->m_insert_ii(_m_seltra_arrowmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),1);
		}
		if(brl_polledinput_KeyHit(83)!=0){
			(_m_seltra_arrowmap)->clas->m_insert_ii(_m_seltra_arrowmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),2);
		}
		if(brl_polledinput_KeyHit(65)!=0){
			(_m_seltra_arrowmap)->clas->m_insert_ii(_m_seltra_arrowmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),3);
		}
		if(brl_polledinput_KeyHit(68)!=0){
			(_m_seltra_arrowmap)->clas->m_insert_ii(_m_seltra_arrowmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),4);
		}
		if(brl_polledinput_KeyHit(32)!=0){
			(_m_seltra_arrowmap)->clas->m_remove_i(_m_seltra_arrowmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
			if(bbt_b!= &bbNullObject){
				bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_bittags =((bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_bittags !=0) || 1);
			}
		}
	}else{
		brl_polledinput_FlushKeys();
	}
	return 0;
}
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_x2=bbt_x;
	BBINT bbt_y2=bbt_y;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
	while(bbt_x2<(bbt_x+3)){
		bbt_y2=bbt_y;
		while(bbt_y2<(bbt_y+3)){
			bbt_b=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(bbt_x2+(bbt_y2<<10)));
			if(bbt_b!= &bbNullObject){
				brl_max2d_DrawImage(bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_x2-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y2-_m_seltra_camposy))*_m_seltra_zoom),0);
			}else{
				brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(bbt_x2-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y2-_m_seltra_camposy))*_m_seltra_zoom),0);
			}
			bbt_y2=(bbt_y2+1);
		}
		bbt_x2=(bbt_x2+1);
	}
	return 0;
}
BBINT _m_seltra_draw_arrows(){
	BBINT bbt_m=0;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
	BBINT bbt_n=_m_seltra_arrowmap->__m_seltra_fastintmap_le ;
	while(bbt_i<bbt_n){
		bbt_m=(_m_seltra_arrowmap)->clas->m_kfetch_i(_m_seltra_arrowmap,bbt_i);
		bbt_v=(_m_seltra_arrowmap)->clas->m_fetch_i(_m_seltra_arrowmap,bbt_m);
		BBINT bbt_=bbt_v;
		if(bbt_==1){
			bbt_im=_m_seltra_arrown;
		}else{
			if(bbt_==2){
				bbt_im=_m_seltra_arrows;
			}else{
				if(bbt_==3){
					bbt_im=_m_seltra_arroww;
				}else{
					if(bbt_==4){
						bbt_im=_m_seltra_arrowe;
					}
				}
			}
		}
		if(bbt_v!=0){
			brl_max2d_DrawImage(bbt_im,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_draw_barray(){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	while(bbt_i<_m_seltra_barray->__m_seltra_blockarray_le ){
		bbt_b=((struct _m_seltra_block_obj**)BBARRAYDATA((_m_seltra_barray->__m_seltra_blockarray_ba ),(_m_seltra_barray->__m_seltra_blockarray_ba )->dims))[((BBUINT)bbt_i)];
		if(bbt_b!= &bbNullObject){
			brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldx ),(bbt_b->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldy ),(bbt_b->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
			brl_max2d_DrawImage(bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_b->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_b->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldx ),(bbt_b->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_x ;
			((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldy ),(bbt_b->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_y ;
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_draw_walls(){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=(_m_seltra_wallgroup)->clas->m_FirstLink(_m_seltra_wallgroup);
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	if(bbt_tl!=&bbNullObject){
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		if(bbt_b!=&bbNullObject){
			do{
				brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldx ),(bbt_b->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldy ),(bbt_b->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
				brl_max2d_DrawImage(bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_b->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_b->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
				((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldx ),(bbt_b->__m_seltra_block_oldx )->dims))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_x ;
				((BBINT*)BBARRAYDATA((bbt_b->__m_seltra_block_oldy ),(bbt_b->__m_seltra_block_oldy )->dims))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_y ;
				bbt_tl=bbt_tl->_brl_linkedlist_tlink__succ ;
				bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(bbt_tl->_brl_linkedlist_tlink__value ,&_m_seltra_block));
			}while(!(bbt_b==&bbNullObject));
		}
	}
	return 0;
}
BBINT _m_seltra_draw_editbar(){
	BBINT bbt_i=0;
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),90.0000000f,90.0000000f);
	brl_max2d_SetMaskColor(0,0,0);
	brl_max2d_SetMaskColor(255,255,255);
	brl_max2d_SetColor(222,222,222);
	brl_max2d_SetScale(1.0f,1.0f);
	brl_max2d_DrawLine(((BBFLOAT)(_m_seltra_gw-100)),0.000000000f,((BBFLOAT)(_m_seltra_gw-100)),((BBFLOAT)_m_seltra_gh),1);
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-50)),100.000000f,20.0000000f);
	brl_max2d_SetColor(222,222,222);
	brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(_m_seltra_moxc),&_s10),bbStringFromInt(_m_seltra_moyc)),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-50)));
	while(((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[((BBUINT)bbt_i)]!= &bbNullObject){
		brl_max2d_DrawImage(((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[((BBUINT)bbt_i)],((BBFLOAT)(_m_seltra_gw-95)),((BBFLOAT)((bbt_i*30)+10)),0);
		bbt_i=(bbt_i+1);
	}
	brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
	return 0;
}
BBINT _m_seltra_update_display(){
	brl_max2d_SetViewport(0,0,(_m_seltra_gw-100),_m_seltra_gh);
	_m_seltra_redraw3x3(((BBINT*)BBARRAYDATA((_m_seltra_moxco),(_m_seltra_moxco)->dims))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATA((_m_seltra_moyco),(_m_seltra_moyco)->dims))[((BBUINT)_m_seltra_frame)]);
	if(_m_seltra_redraw_map>0){
		brl_max2d_Cls();
	}
	_m_seltra_draw_arrows();
	_m_seltra_draw_barray();
	brl_max2d_DrawImage(_m_seltra_mousec,(((BBFLOAT)(_m_seltra_moxc-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(_m_seltra_moyc-_m_seltra_camposy))*_m_seltra_zoom),0);
	if(_m_seltra_redraw_map>0){
		_m_seltra_draw_walls();
		_m_seltra_redraw_map=(_m_seltra_redraw_map-1);
	}
	brl_max2d_SetViewport((_m_seltra_gw-100),0,_m_seltra_gw,_m_seltra_gh);
	_m_seltra_draw_editbar();
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	brl_max2d_DrawImage(_m_seltra_smi,((BBFLOAT)(_m_seltra_mox+15)),((BBFLOAT)(_m_seltra_moy+15)),0);
	brl_max2d_DrawImage(_m_seltra_mousep,((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),0);
	((BBINT*)BBARRAYDATA((_m_seltra_moxco),(_m_seltra_moxco)->dims))[((BBUINT)_m_seltra_frame)]=_m_seltra_moxc;
	((BBINT*)BBARRAYDATA((_m_seltra_moyco),(_m_seltra_moyco)->dims))[((BBUINT)_m_seltra_frame)]=_m_seltra_moyc;
	brl_graphics_Flip(0);
	_m_seltra_frame=((BBBYTE)(1-((BBINT)_m_seltra_frame)));
	return 0;
}
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_gen;
	o->__m_seltra_gen_x = 0;
	o->__m_seltra_gen_y = 0;
	o->__m_seltra_gen_bglist = bbArrayNew1D(":bgroup", 100);
	o->__m_seltra_gen_le = 0;
	o->__m_seltra_gen_rate = 0;
	o->__m_seltra_gen_n = 0;
	o->__m_seltra_gen_t = 0;
	o->__m_seltra_gen_bitflags = 0;
}
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj* o){
	struct _m_seltra_bgroup_obj* volatile bbt_bg=bbObjectNew(&_m_seltra_bgroup);
	struct _m_seltra_bgroup_obj* volatile bbt_bg2=&bbNullObject;
	BBINT bbt_r=0;
	if((o->__m_seltra_gen_bitflags !=0) && 1){
		bbt_bg2=((struct _m_seltra_bgroup_obj**)BBARRAYDATA((o->__m_seltra_gen_bglist ),(o->__m_seltra_gen_bglist )->dims))[((BBUINT)brl_random_Rand(0,o->__m_seltra_gen_le ))];
	}
	o->__m_seltra_gen_n =(o->__m_seltra_gen_n -1);
	return 0;
}
struct BBDebugScope_10 _m_seltra_gen_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"gen",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bglist",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bglist)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rate",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_rate)
		},
		{
			BBDEBUGDECL_FIELD,
			"n",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_n)
		},
		{
			BBDEBUGDECL_FIELD,
			"t",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_t)
		},
		{
			BBDEBUGDECL_FIELD,
			"bitflags",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bitflags)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_gen_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"genblock",
			"()i",
			&__m_seltra_gen_genblock
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_gen _m_seltra_gen={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_gen_scope,
	sizeof(struct _m_seltra_gen_obj),
	__m_seltra_gen_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bitflags) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_gen_genblock
};

BBINT _m_seltra_Create_world(){
	_m_seltra_createsingleblock(0,10,10,1,0);
	_m_seltra_createsingleblock(1,20,10,0,0);
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
		bbObjectRegisterType(&_m_seltra_grouparray);
		bbObjectRegisterType(&_m_seltra_blockarray);
		bbObjectRegisterType(&_m_seltra_fastblockmap);
		bbObjectRegisterType(&_m_seltra_fastintmap);
		bbObjectRegisterType(&_m_seltra_block);
		bbObjectRegisterType(&_m_seltra_bgroup);
		bbObjectRegisterType(&_m_seltra_gen);
		brl_graphics_Graphics(1024,768,0,60,0);
		_m_seltra_gw=brl_graphics_GraphicsWidth();
		_m_seltra_gh=brl_graphics_GraphicsHeight();
		_m_seltra_imagelist=bbArrayNew1D(":TImage", 100);
		_m_seltra_block1=_m_seltra_loadimage2(&_s0);
		_m_seltra_wall1=_m_seltra_loadimage2(&_s1);
		_m_seltra_gene=_m_seltra_loadimage2(&_s2);
		_m_seltra_blank=brl_max2d_LoadImage(&_s3,-1);
		_m_seltra_mousep=brl_max2d_LoadImage(&_s4,-1);
		_m_seltra_mousec=brl_max2d_LoadImage(&_s5,-1);
		_m_seltra_arroww=brl_max2d_LoadImage(&_s6,-1);
		_m_seltra_arrowe=brl_max2d_LoadImage(&_s7,-1);
		_m_seltra_arrown=brl_max2d_LoadImage(&_s8,-1);
		_m_seltra_arrows=brl_max2d_LoadImage(&_s9,-1);
		brl_random_SeedRnd(bbMilliSecs());
		_m_seltra_smi=((struct brl_max2d_image_TImage_obj**)BBARRAYDATA((_m_seltra_imagelist),(_m_seltra_imagelist)->dims))[0U];
		_m_seltra_moxco=bbArrayNew1D("i", 2);
		_m_seltra_moyco=bbArrayNew1D("i", 2);
		_m_seltra_garray=bbObjectNew(&_m_seltra_grouparray);
		_m_seltra_barray=bbObjectNew(&_m_seltra_blockarray);
		_m_seltra_wallgroup=bbObjectNew(&brl_linkedlist_TList);
		_m_seltra_bmap=bbObjectNew(&_m_seltra_fastblockmap);
		_m_seltra_arrowmap=bbObjectNew(&_m_seltra_fastintmap);
		_m_seltra_gen_maze_map(1,1,28,1,30,25);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			if(_m_seltra_bmap->__m_seltra_fastblockmap_rc >1000){
				(_m_seltra_bmap)->clas->m_orderedsort(_m_seltra_bmap);
			}
			_m_seltra_update_bgroups();
			_m_seltra_get_mouse_input();
			_m_seltra_get_user_input();
			_m_seltra_update_display();
		}
		return 0;
	}
	return 0;
}