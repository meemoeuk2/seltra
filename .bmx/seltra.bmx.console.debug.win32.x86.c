#include "seltra.bmx.console.debug.win32.x86.h"
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
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_20{int kind; const char *name; BBDebugDecl decls[21]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_38{int kind; const char *name; BBDebugDecl decls[39]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
BBINT _m_seltra_gw=0;
BBINT _m_seltra_gh=0;
BBARRAY _m_seltra_imagelist=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_block1=&bbNullObject;
BBINT _m_seltra_noi=0;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"loadimage2",
		{
			{
				BBDEBUGDECL_LOCAL,
				"fn",
				"$",
				.var_address=&bbt_fn
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 32, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_noi)))[((BBUINT)_m_seltra_noi)]=brl_max2d_LoadImage(bbt_fn,-1);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_noi=(_m_seltra_noi+1);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 34, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return ((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)(_m_seltra_noi-1))))[((BBUINT)(_m_seltra_noi-1))];
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
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga = bbArrayNew1D(":bgroup", 2000000);
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le = 0;
}
BBINT __m_seltra_grouparray_add_Tbgroup(struct _m_seltra_grouparray_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":grouparray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":bgroup",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le )))[((BBUINT)((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le )]=bbt_g;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_id =((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 155, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le =(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_grouparray_ordered_sort_ii(struct _m_seltra_grouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":grouparray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_n==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 159, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 160, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 162, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 163, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 164, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 164, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 165, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 167, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le =bbt_i;
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba = bbArrayNew1D(":block", 3000000);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le = 0;
}
BBINT __m_seltra_blockarray_add_Tblock(struct _m_seltra_blockarray_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":blockarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 126, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le )))[((BBUINT)((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le )]=bbt_b;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 127, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id =((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 128, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le =(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_blockarray_ordered_sort_ii(struct _m_seltra_blockarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":blockarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 132, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_n==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 132, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 133, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 136, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 137, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 137, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 138, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le =bbt_i;
	bbOnDebugLeaveScope();
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
void __m_seltra_redrawarray_New(struct _m_seltra_redrawarray_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_redrawarray;
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra = bbArrayNew1D(":redraw", 1000);
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le = 0;
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn = 0;
}
BBINT __m_seltra_redrawarray_add_Tredraw(struct _m_seltra_redrawarray_obj* o,struct _m_seltra_redraw_obj* bbt_r){
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":redrawarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				":redraw",
				.var_address=&bbt_r
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 211, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le )))[((BBUINT)((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le )]=bbt_r;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 212, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le =(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_redrawarray_do_redraws(struct _m_seltra_redrawarray_obj* o){
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o));
	struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
	struct _m_seltra_redraw_obj* volatile bbt_r=&bbNullObject;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"do_redraws",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":redrawarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				":redraw",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 218, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_im=&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 219, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_r=&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 220, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_v=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 220, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_i=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 221, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_b=&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 223, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(_m_seltra_rarray))->__m_seltra_redrawarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 224, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_r=((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 225, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_r!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 226, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i(_m_seltra_thingmap,(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_x +(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_y <<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 227, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_v!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 228, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBINT bbt_=bbt_v;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(bbt_==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 229, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=_m_seltra_arrown;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 230, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==2){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 230, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=_m_seltra_arrows;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 231, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==3){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 231, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=_m_seltra_arroww;
							bbOnDebugLeaveScope();
						}else{
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 232, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_==4){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 232, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_im=_m_seltra_arrowe;
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 234, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_max2d_DrawImage(bbt_im,(((BBFLOAT)(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_y -_m_seltra_camposy))*_m_seltra_zoom),0);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 237, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_x +(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_y <<10)));
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 238, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if(bbt_b!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 238, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 240, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if(!(bbt_b!= &bbNullObject) && !(bbt_v!=0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 240, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_y -_m_seltra_camposy))*_m_seltra_zoom),0);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 242, 0};
			bbOnDebugEnterStm(&__stmt_5);
			((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws =((BBBYTE)(((BBINT)((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws )-1));
			struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 243, 0};
			bbOnDebugEnterStm(&__stmt_6);
			if(((BBINT)((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws )<=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 243, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=&bbNullObject;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 243, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn =(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn +1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 246, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 249, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn ==((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 249, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le =0;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 249, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn =0;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_6 _m_seltra_redrawarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redrawarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ra",
			"[]:redraw",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_ra)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"drawn",
			"i",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_drawn)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_redrawarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:redraw)i",
			&__m_seltra_redrawarray_add_Tredraw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"do_redraws",
			"()i",
			&__m_seltra_redrawarray_do_redraws
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_redrawarray _m_seltra_redrawarray={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_redrawarray_scope,
	sizeof(struct _m_seltra_redrawarray_obj),
	__m_seltra_redrawarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_drawn) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_redrawarray_add_Tredraw
	,__m_seltra_redrawarray_do_redraws
};

struct _m_seltra_redrawarray_obj* _m_seltra_rarray=&bbNullObject;
void __m_seltra_fastblockmap_New(struct _m_seltra_fastblockmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_fastblockmap;
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le = 0;
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc = 0;
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_fetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 13, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_vfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"vfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 18, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastblockmap_kfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"kfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 23, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastblockmap_insert_iTblock(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"insert",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 30, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le )))[((BBUINT)((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 31, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=bbt_b;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_remove_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 39, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_iter(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"iter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 47, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 51, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 52, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 61, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_fastsort(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fastsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 73, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 75, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 76, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 78, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_orderedsort(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"orderedsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 93, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 95, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 96, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =bbt_i;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le = 0;
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl = 0;
}
BBINT __m_seltra_fastintmap_fetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
BBINT __m_seltra_fastintmap_vfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"vfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 14, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastintmap_kfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"kfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 19, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastintmap_insert_ii(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"insert",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"i",
				.var_address=&bbt_val
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 25, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le )))[((BBUINT)((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=bbt_val;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_remove_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_iter(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"iter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 42, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 43, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 46, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 47, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			BBINT bbt_a=0;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"a",
						"i",
						.var_address=&bbt_a
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 53, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_a=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_fastsort(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fastsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 69, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 70, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 71, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 73, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_orderedsort(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"orderedsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 83, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 83, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 86, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 88, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 89, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_set_null_value_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_n){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"set_null_value",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl =bbt_n;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 104, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<3000000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 105, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=bbt_n;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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

struct _m_seltra_fastintmap_obj* _m_seltra_thingmap=&bbNullObject;
void __m_seltra_block_New(struct _m_seltra_block_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_block;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_btype = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image = &bbNullObject;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bit_tags = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_id = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx = bbArrayNew1D("i", 2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy = bbArrayNew1D("i", 2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group = &bbNullObject;
}
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 93, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawImage(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x ;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 100, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x <1) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x >1000)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <1)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y >1000)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 100, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"spawn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=bbObjectNew(&_m_seltra_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_btype ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_bit_tags =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_bit_tags -1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 108, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image ;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 109, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +bbt_xs);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 110, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +bbt_ys);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 111, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_seltra_bi=(_m_seltra_bi+1);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 112, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra_barray)->clas->m_add_Tblock(_m_seltra_barray,bbt_b);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_8);
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),bbt_b);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 114, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbOnDebugLeaveScope();
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
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"wallblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 645, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=bbObjectNew(&_m_seltra_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 646, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =bbt_x;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 647, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =bbt_y;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 648, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =1;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 649, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =_m_seltra_wall1;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 650, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(bbt_x+(bbt_y<<10)),bbt_b);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 651, 0};
	bbOnDebugEnterStm(&__stmt_6);
	(_m_seltra_wallgroup)->clas->m_AddLast_TObject(_m_seltra_wallgroup,bbt_b);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my){
	BBARRAY bbt_m=&bbEmptyArray;
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
	BBARRAY bbt_xs2=&bbEmptyArray;
	BBARRAY bbt_ys2=&bbEmptyArray;
	struct BBDebugScope_20 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"gen_maze_map",
		{
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"xf",
				"i",
				.var_address=&bbt_xf
			},
			{
				BBDEBUGDECL_LOCAL,
				"yf",
				"i",
				.var_address=&bbt_yf
			},
			{
				BBDEBUGDECL_LOCAL,
				"mx",
				"i",
				.var_address=&bbt_mx
			},
			{
				BBDEBUGDECL_LOCAL,
				"my",
				"i",
				.var_address=&bbt_my
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				"[]b",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"d",
				"i",
				.var_address=&bbt_d
			},
			{
				BBDEBUGDECL_LOCAL,
				"ok",
				"i",
				.var_address=&bbt_ok
			},
			{
				BBDEBUGDECL_LOCAL,
				"k",
				"b",
				.var_address=&bbt_k
			},
			{
				BBDEBUGDECL_LOCAL,
				"xv",
				"i",
				.var_address=&bbt_xv
			},
			{
				BBDEBUGDECL_LOCAL,
				"yv",
				"i",
				.var_address=&bbt_yv
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"x2",
				"i",
				.var_address=&bbt_x2
			},
			{
				BBDEBUGDECL_LOCAL,
				"y2",
				"i",
				.var_address=&bbt_y2
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs2",
				"[]i",
				.var_address=&bbt_xs2
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys2",
				"[]i",
				.var_address=&bbt_ys2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 585, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=bbArrayNew1D("b", (bbt_mx*bbt_my));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 586, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_d=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 586, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ok=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 586, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_k=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_xv=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_yv=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_y=0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_x2=0;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_y2=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_i=0;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 587, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_j=0;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 588, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_xs2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 589, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_ys2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 590, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,0U))[0U]=bbt_xs;
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 590, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,0U))[0U]=bbt_ys;
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 591, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,1U))[1U]=bbt_xf;
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 591, 0};
	bbOnDebugEnterStm(&__stmt_17);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,1U))[1U]=bbt_yf;
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 593, 0};
	bbOnDebugEnterStm(&__stmt_20);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,3U))[3U]=(bbt_mx-1);
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 593, 0};
	bbOnDebugEnterStm(&__stmt_21);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,3U))[3U]=1;
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 594, 0};
	bbOnDebugEnterStm(&__stmt_22);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,4U))[4U]=1;
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 594, 0};
	bbOnDebugEnterStm(&__stmt_23);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,4U))[4U]=(bbt_my-1);
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 595, 0};
	bbOnDebugEnterStm(&__stmt_24);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,5U))[5U]=(bbt_mx-1);
	struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 595, 0};
	bbOnDebugEnterStm(&__stmt_25);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,5U))[5U]=(bbt_my-1);
	struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 597, 0};
	bbOnDebugEnterStm(&__stmt_26);
	bbt_x=bbt_xs;
	struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 597, 0};
	bbOnDebugEnterStm(&__stmt_27);
	bbt_y=bbt_ys;
	struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 599, 0};
	bbOnDebugEnterStm(&__stmt_28);
	while(((BBINT)bbt_k)<6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 600, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 600, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 601, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=0;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 601, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_j=0;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 603, 0};
		bbOnDebugEnterStm(&__stmt_4);
		while(((bbt_i<100) || (bbt_ok==0)) && (bbt_j<1024)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 605, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_d=brl_random_Rand(0,3);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 606, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBINT bbt_=bbt_d;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 607, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 607, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_xv=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 607, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_yv=0;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 608, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 608, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_xv=-1;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 608, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt_yv=0;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 609, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==2){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 609, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_xv=0;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 609, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_yv=1;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 610, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==3){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 610, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_xv=0;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 610, 0};
							bbOnDebugEnterStm(&__stmt_1);
							bbt_yv=-1;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 613, 0};
			bbOnDebugEnterStm(&__stmt_3);
			while(1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 614, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)(bbt_x+(bbt_y*bbt_mx)))))[((BBUINT)(bbt_x+(bbt_y*bbt_mx)))]=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 616, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_x2=(bbt_x+bbt_xv);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 617, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_y2=(bbt_y+bbt_yv);
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 619, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if((((bbt_x2>0) && (bbt_x2<(bbt_mx-1))) && (bbt_y2>0)) && (bbt_y2<(bbt_my-1))){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 620, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if((((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))))[((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))])==0) || (((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))))[((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))])==1)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 620, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_x=(bbt_x+bbt_xv);
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 620, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_y=(bbt_y+bbt_yv);
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 622, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 625, 0};
				bbOnDebugEnterStm(&__stmt_4);
				if((bbt_x==bbt_xf) && (bbt_y==bbt_yf)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 625, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ok=1;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 627, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_i=(bbt_i+1);
				struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 628, 0};
				bbOnDebugEnterStm(&__stmt_6);
				if(brl_random_Rand(0,2)==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 628, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 631, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_j=(bbt_j+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 633, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_k=((BBBYTE)(((BBINT)bbt_k)+1));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 636, 0};
	bbOnDebugEnterStm(&__stmt_29);
	BBINT bbt_2=((bbt_mx*bbt_my)-1);
	for(bbt_i=0;(bbt_i<=bbt_2);bbt_i=(bbt_i+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 637, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 637, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_wallblock((bbt_i % bbt_mx),(bbt_i/bbt_mx));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_bgroup;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist = &bbNullObject;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_bittags = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id = 0;
}
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b2=&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"xt",
				"i",
				.var_address=&bbt_xt
			},
			{
				BBDEBUGDECL_LOCAL,
				"yt",
				"i",
				.var_address=&bbt_yt
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 264, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 265, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 266, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b2=&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 267, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_xt=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 267, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_yt=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 268, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_n=((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(_m_seltra_bmap))->__m_seltra_fastblockmap_le ;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 270, 0};
	bbOnDebugEnterStm(&__stmt_6);
	while(bbt_b!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 271, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_xt=(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 272, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_yt=(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 274, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((bbt_xt>=0) && (bbt_yt>=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 274, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(bbt_xt+(bbt_yt<<10)));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 275, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if((bbt_b2!=&bbNullObject) && (bbt_b2!=bbt_b)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 275, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 277, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 278, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 281, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 282, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 284, 0};
	bbOnDebugEnterStm(&__stmt_9);
	while(bbt_b!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 285, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_bmap)->clas->m_remove_i(_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 286, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 287, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv );
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 288, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10))<0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 288, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_blitz_DebugStop();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 289, 0};
		bbOnDebugEnterStm(&__stmt_4);
		(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),bbt_b);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 291, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 292, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 300, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 301, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast((bbt_tl)->clas->m_Value(bbt_tl),&_m_seltra_block));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 303, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_b!= &bbNullObject){
		struct _m_seltra_redraw_obj* volatile bbt_re=&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"re",
					":redraw",
					.var_address=&bbt_re
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 304, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_bmap)->clas->m_remove_i(_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 306, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_re=bbObjectAtomicNew(&_m_seltra_redraw);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 307, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 308, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 309, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 310, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(_m_seltra_rarray)->clas->m_add_Tredraw(_m_seltra_rarray,bbt_re);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 311, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_re=bbObjectAtomicNew(&_m_seltra_redraw);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 312, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 313, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 314, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 315, 0};
		bbOnDebugEnterStm(&__stmt_10);
		(_m_seltra_rarray)->clas->m_add_Tredraw(_m_seltra_rarray,bbt_re);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 317, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )]=&bbNullObject;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 318, 0};
		bbOnDebugEnterStm(&__stmt_12);
		bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 319, 0};
		bbOnDebugEnterStm(&__stmt_13);
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 321, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id )))[((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id )]=&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 322, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(_m_seltra_garray)->clas->m_ordered_sort_ii(_m_seltra_garray,0,0);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bgn=&bbNullObject;
	BBINT bbt_i=0;
	struct brl_linkedlist_TLink_obj* volatile bbt_m=&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"spawn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"bgn",
				":bgroup",
				.var_address=&bbt_bgn
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				":TLink",
				.var_address=&bbt_m
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 328, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bgn=bbObjectNew(&_m_seltra_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 329, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 330, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_m=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 332, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(bbt_m!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 333, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct brl_linkedlist_TList_obj* bbt_;
		struct _m_seltra_block_obj* bbt_2;
		(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bgn))->__m_seltra_bgroup_blist ))))->clas)->m_AddLast_TObject(bbt_,(((struct _m_seltra_block_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_block_obj*)bbObjectDowncast((bbt_m)->clas->m_Value(bbt_m),&_m_seltra_block))))))->clas)->m_spawn_ii(bbt_2,bbt_xs,bbt_ys));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 334, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_m=(bbt_m)->clas->m_NextLink(bbt_m);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 336, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bgn))->__m_seltra_bgroup_id =_m_seltra_bgc;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	bbOnDebugLeaveScope();
	return &bbNullObject;
}
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkarrows",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 343, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 344, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 346, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_b!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 347, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 348, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=(_m_seltra_thingmap)->clas->m_fetch_i(_m_seltra_thingmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 349, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 349, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 349, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =-1;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 350, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==2){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 350, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 350, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =1;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 351, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==3){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 351, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =-1;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 351, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 352, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 352, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =1;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 352, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 356, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 357, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 365, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 366, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 367, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_b!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 372, 0};
		bbOnDebugEnterStm(&__stmt_0);
		do{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 369, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(!((bbt_b)->clas->m_out_of_bounds(bbt_b)!=0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 369, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 370, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 371, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 375, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return 1;
}
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 382, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_FirstLink(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist );
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 383, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 385, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_b!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_0);
		do{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 387, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_b)->clas->m_draw(bbt_b);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 388, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 389, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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

void __m_seltra_redraw_New(struct _m_seltra_redraw_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_redraw;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_x = 0;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_y = 0;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_redraws = 0;
}
struct BBDebugScope_4 _m_seltra_redraw_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redraw",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"redraws",
			"b",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_redraws)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_seltra_redraw_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_redraw _m_seltra_redraw={
	&bbObjectClass,
	bbObjectFree,
	&_m_seltra_redraw_scope,
	sizeof(struct _m_seltra_redraw_obj),
	__m_seltra_redraw_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_redraws) - sizeof(void*) + sizeof(BBBYTE)
};

BBINT _m_seltra_update_bgroups(){
	BBINT bbt_i=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_bgroups",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 531, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 533, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_le ){
		struct _m_seltra_bgroup_obj* volatile bbt_bg=&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"bg",
					":bgroup",
					.var_address=&bbt_bg
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 534, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bg=((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 535, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_bg!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 536, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_bg)->clas->m_checkarrows(bbt_bg);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 537, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(bbt_bg)->clas->m_move(bbt_bg);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 538, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if((bbt_bg)->clas->m_out_of_bounds(bbt_bg)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 540, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_standardio_Print(bbStringConcat(bbStringConcat(&_s11,bbStringFromInt(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_id )),&_s12));
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 541, 0};
				bbOnDebugEnterStm(&__stmt_1);
				(bbt_bg)->clas->m_remove(bbt_bg);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 546, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_createsingleblock(BBINT bbt_btype,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv){
	struct _m_seltra_bgroup_obj* volatile bbt_bg=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"createsingleblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"btype",
				"i",
				.var_address=&bbt_btype
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"xv",
				"i",
				.var_address=&bbt_xv
			},
			{
				BBDEBUGDECL_LOCAL,
				"yv",
				"i",
				.var_address=&bbt_yv
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg",
				":bgroup",
				.var_address=&bbt_bg
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 176, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bg=bbObjectNew(&_m_seltra_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_xv =bbt_xv;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_yv =bbt_yv;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 179, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 180, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist =bbObjectNew(&brl_linkedlist_TList);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 181, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_b=bbObjectNew(&_m_seltra_block);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =bbt_x;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 183, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =bbt_y;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 184, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =bbt_btype;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 185, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group =bbt_bg;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 186, 0};
	bbOnDebugEnterStm(&__stmt_10);
	BBINT bbt_=bbt_btype;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 187, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(bbt_==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 187, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =_m_seltra_block1;
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 188, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 188, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =_m_seltra_wall1;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 191, 0};
	bbOnDebugEnterStm(&__stmt_12);
	struct brl_linkedlist_TList_obj* bbt_2;
	(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))))->clas)->m_AddLast_TObject(bbt_2,bbt_b);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 192, 0};
	bbOnDebugEnterStm(&__stmt_13);
	(_m_seltra_garray)->clas->m_add_Tbgroup(_m_seltra_garray,bbt_bg);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 193, 0};
	bbOnDebugEnterStm(&__stmt_14);
	(_m_seltra_barray)->clas->m_add_Tblock(_m_seltra_barray,bbt_b);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_15);
	(_m_seltra_bmap)->clas->m_insert_iTblock(_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),bbt_b);
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_seltra_gen;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_x = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_y = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist = bbArrayNew1D(":bgroup", 100);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_rate = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_t = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bitflags = 0;
}
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj* o){
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bg=&bbNullObject;
	struct _m_seltra_bgroup_obj* volatile bbt_bg2=&bbNullObject;
	BBINT bbt_r=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"genblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":gen",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg",
				":bgroup",
				.var_address=&bbt_bg
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg2",
				":bgroup",
				.var_address=&bbt_bg2
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 69, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bg=bbObjectNew(&_m_seltra_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bg2=&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_r=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 74, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if((((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bitflags !=0) && 1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bg2=((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist ),(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist )->dims,((BBUINT)brl_random_Rand(0,((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le ))))[((BBUINT)brl_random_Rand(0,((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le ))];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 78, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n =(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n -1);
	bbOnDebugLeaveScope();
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

BBINT _m_seltra_placegene(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_gen_obj* volatile bbt_g=&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"placegene",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":gen",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 721, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(_m_seltra_thingmap)->clas->m_insert_ii(_m_seltra_thingmap,(bbt_x+(bbt_y<<10)),5);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 722, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_g=bbObjectNew(&_m_seltra_gen);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 723, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_x =bbt_x;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 724, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_y =bbt_y;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 725, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_rate =5;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 726, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_bitflags =4;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_mouse_input_map(){
	BBINT bbt_mozd=0;
	BBFLOAT bbt_mozn=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mouse_input_map",
		{
			{
				BBDEBUGDECL_LOCAL,
				"mozd",
				"i",
				.var_address=&bbt_mozd
			},
			{
				BBDEBUGDECL_LOCAL,
				"mozn",
				"f",
				.var_address=&bbt_mozn
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 682, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_mozd=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 682, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_mozn=.0f;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 684, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra_moxc=((BBINT)((((BBFLOAT)_m_seltra_mox)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposx)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 685, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_moyc=((BBINT)((((BBFLOAT)_m_seltra_moy)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposy)));
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_mozd=(_m_seltra_moz-_m_seltra_mozo);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 688, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if((_m_seltra_mozu+((BBFLOAT)bbt_mozd))<-9.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 688, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mozn=-9.00000000f;
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 688, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mozn=(_m_seltra_mozu+((BBFLOAT)bbt_mozd));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 690, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(_m_seltra_mozu!=bbt_mozn){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 691, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mozu=bbt_mozn;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 692, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_zoom=(30.0000000f*(1.0f+(_m_seltra_mozu/10.0f)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 693, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 694, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 695, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 696, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 697, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 700, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(_m_seltra_moxc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 700, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_moxc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 701, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(_m_seltra_moyc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 701, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_moyc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 703, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(brl_polledinput_MouseHit(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 704, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((_m_seltra_smt==0) && ((_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)))==&bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 704, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_createsingleblock(0,_m_seltra_moxc,_m_seltra_moyc,0,0);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 705, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((_m_seltra_smt==1) && ((_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)))==&bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 705, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_wallblock(_m_seltra_moxc,_m_seltra_moyc);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 706, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((_m_seltra_smt==2) && ((_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)))==&bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 706, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_placegene(_m_seltra_moxc,_m_seltra_moyc);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 708, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(brl_polledinput_MouseHit(3)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 709, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 710, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 711, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 712, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_mouse_input_editbar(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mouse_input_editbar",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 672, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(brl_polledinput_MouseHit(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 673, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(_m_seltra_mox<(_m_seltra_gw-70)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 673, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_smt=((_m_seltra_moy-5)/30);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 673, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra_smi=((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)];
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_get_mouse_input(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_mouse_input",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 659, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_seltra_mozo=_m_seltra_moz;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 660, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_mox=brl_polledinput_MouseX();
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 661, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra_moy=brl_polledinput_MouseY();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 662, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_moz=brl_polledinput_MouseZ();
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 664, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 664, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mouse_input_map();
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 664, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mouse_input_editbar();
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_get_user_input(){
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_user_input",
		{
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 734, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 736, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(!(bbt_b!= &bbNullObject) || ((bbt_b!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype !=1))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 737, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(brl_polledinput_KeyHit(87)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 737, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii(_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 738, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(brl_polledinput_KeyHit(83)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 738, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii(_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),2);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 739, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(brl_polledinput_KeyHit(65)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 739, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii(_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),3);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 740, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(brl_polledinput_KeyHit(68)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 740, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii(_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),4);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 741, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(brl_polledinput_KeyHit(32)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 742, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_remove_i(_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 743, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_b!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 743, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct _m_seltra_bgroup_obj* bbt_;
				(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))))->clas)->m_remove(bbt_);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 746, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_polledinput_FlushKeys();
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_x2=0;
	BBINT bbt_y2=0;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"redraw3x3",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"x2",
				"i",
				.var_address=&bbt_x2
			},
			{
				BBDEBUGDECL_LOCAL,
				"y2",
				"i",
				.var_address=&bbt_y2
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 427, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_x2=bbt_x;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 428, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_y2=bbt_y;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 429, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 430, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_im=&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 432, 0};
	bbOnDebugEnterStm(&__stmt_4);
	while(bbt_x2<(bbt_x+3)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 433, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_y2=bbt_y;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 434, 0};
		bbOnDebugEnterStm(&__stmt_1);
		while(bbt_y2<(bbt_y+3)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 435, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b=(_m_seltra_bmap)->clas->m_fetch_i(_m_seltra_bmap,(bbt_x2+(bbt_y2<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 436, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_b!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 437, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(bbt_x2-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y2-_m_seltra_camposy))*_m_seltra_zoom),0);
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 439, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(bbt_x2-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y2-_m_seltra_camposy))*_m_seltra_zoom),0);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 441, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_y2=(bbt_y2+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 443, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_x2=(bbt_x2+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_things(){
	BBINT bbt_m=0;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
	BBINT bbt_n=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_things",
		{
			{
				BBDEBUGDECL_LOCAL,
				"m",
				"i",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 401, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 401, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_v=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 401, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 403, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_im=&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 404, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(_m_seltra_thingmap))->__m_seltra_fastintmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 406, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<bbt_n){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 407, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_m=(_m_seltra_thingmap)->clas->m_kfetch_i(_m_seltra_thingmap,bbt_i);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 408, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i(_m_seltra_thingmap,bbt_m);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 409, 0};
		bbOnDebugEnterStm(&__stmt_2);
		BBINT bbt_=bbt_v;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 410, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(bbt_==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 410, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_im=_m_seltra_arrown;
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 411, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==2){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 411, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_im=_m_seltra_arrows;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 412, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==3){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 412, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=_m_seltra_arroww;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 413, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==4){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 413, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=_m_seltra_arrowe;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 414, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==5){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 414, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=_m_seltra_gene;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 417, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(bbt_v!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 417, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_DrawImage(bbt_im,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 418, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_barray(){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_barray",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 555, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 556, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 558, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 559, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 560, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_b!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 561, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 562, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 563, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 564, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 567, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_walls(){
	struct brl_linkedlist_TLink_obj* volatile bbt_tl=&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_walls",
		{
			{
				BBDEBUGDECL_LOCAL,
				"tl",
				":TLink",
				.var_address=&bbt_tl
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 507, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tl=(_m_seltra_wallgroup)->clas->m_FirstLink(_m_seltra_wallgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 508, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 510, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_tl!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 511, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 512, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_b!=&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 521, 0};
			bbOnDebugEnterStm(&__stmt_0);
			do{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 514, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage(_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 515, 0};
				bbOnDebugEnterStm(&__stmt_1);
				brl_max2d_DrawImage(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 516, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x ;
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 517, 0};
				bbOnDebugEnterStm(&__stmt_3);
				((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y ;
				struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 519, 0};
				bbOnDebugEnterStm(&__stmt_4);
				bbt_tl=((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__succ ;
				struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 520, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_b=((struct _m_seltra_block_obj*)bbObjectDowncast(((struct brl_linkedlist_TLink_obj*)bbNullObjectTest(bbt_tl))->_brl_linkedlist_tlink__value ,&_m_seltra_block));
				bbOnDebugLeaveScope();
			}while(!(bbt_b==&bbNullObject));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_editbar(){
	BBINT bbt_i=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_editbar",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 479, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 481, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 482, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_DrawRect(((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),90.0000000f,90.0000000f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 483, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 485, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_SetMaskColor(255,255,255);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 486, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 487, 0};
	bbOnDebugEnterStm(&__stmt_6);
	brl_max2d_SetScale(1.0f,1.0f);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 489, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_max2d_DrawLine(((BBFLOAT)(_m_seltra_gw-100)),0.000000000f,((BBFLOAT)(_m_seltra_gw-100)),((BBFLOAT)_m_seltra_gh),1);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 490, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 491, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-50)),100.000000f,20.0000000f);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 492, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 493, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(_m_seltra_moxc),&_s10),bbStringFromInt(_m_seltra_moyc)),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-50)));
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 495, 0};
	bbOnDebugEnterStm(&__stmt_12);
	while(((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 496, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage(((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)],((BBFLOAT)(_m_seltra_gw-95)),((BBFLOAT)((bbt_i*30)+10)),0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 497, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 499, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_update_display(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_display",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 452, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetViewport(0,0,(_m_seltra_gw-100),_m_seltra_gh);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 453, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_redraw3x3(((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxco),(_m_seltra_moxco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyco),(_m_seltra_moyco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 454, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(_m_seltra_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 454, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_Cls();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 455, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_draw_things();
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 456, 0};
	bbOnDebugEnterStm(&__stmt_4);
	_m_seltra_draw_barray();
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 457, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_DrawImage(_m_seltra_mousec,(((BBFLOAT)(_m_seltra_moxc-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(_m_seltra_moyc-_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 458, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(_m_seltra_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 458, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_draw_walls();
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 458, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_redraw_map=(_m_seltra_redraw_map-1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 459, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra_rarray)->clas->m_do_redraws(_m_seltra_rarray);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 461, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetViewport((_m_seltra_gw-100),0,_m_seltra_gw,_m_seltra_gh);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 462, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_seltra_draw_editbar();
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 464, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 465, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_max2d_DrawImage(_m_seltra_smi,((BBFLOAT)(_m_seltra_mox+15)),((BBFLOAT)(_m_seltra_moy+15)),0);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 466, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_DrawImage(_m_seltra_mousep,((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),0);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 467, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxco),(_m_seltra_moxco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_moxc;
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 468, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyco),(_m_seltra_moyco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_moyc;
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 470, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_graphics_Flip(0);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 471, 0};
	bbOnDebugEnterStm(&__stmt_16);
	_m_seltra_frame=((BBBYTE)(1-((BBINT)_m_seltra_frame)));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_Create_world(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create_world",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 576, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_seltra_createsingleblock(0,10,10,1,0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 577, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_createsingleblock(1,20,10,0,0);
	bbOnDebugLeaveScope();
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
		bbObjectRegisterType(&_m_seltra_redrawarray);
		bbObjectRegisterType(&_m_seltra_fastblockmap);
		bbObjectRegisterType(&_m_seltra_fastintmap);
		bbObjectRegisterType(&_m_seltra_block);
		bbObjectRegisterType(&_m_seltra_bgroup);
		bbObjectRegisterType(&_m_seltra_redraw);
		bbObjectRegisterType(&_m_seltra_gen);
		struct BBDebugScope_38 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"seltra",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"gw",
					"i",
					&_m_seltra_gw
				},
				{
					BBDEBUGDECL_GLOBAL,
					"gh",
					"i",
					&_m_seltra_gh
				},
				{
					BBDEBUGDECL_GLOBAL,
					"imagelist",
					"[]:TImage",
					&_m_seltra_imagelist
				},
				{
					BBDEBUGDECL_GLOBAL,
					"block1",
					":TImage",
					&_m_seltra_block1
				},
				{
					BBDEBUGDECL_GLOBAL,
					"wall1",
					":TImage",
					&_m_seltra_wall1
				},
				{
					BBDEBUGDECL_GLOBAL,
					"gene",
					":TImage",
					&_m_seltra_gene
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blank",
					":TImage",
					&_m_seltra_blank
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousep",
					":TImage",
					&_m_seltra_mousep
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousec",
					":TImage",
					&_m_seltra_mousec
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arroww",
					":TImage",
					&_m_seltra_arroww
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrowe",
					":TImage",
					&_m_seltra_arrowe
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrown",
					":TImage",
					&_m_seltra_arrown
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrows",
					":TImage",
					&_m_seltra_arrows
				},
				{
					BBDEBUGDECL_GLOBAL,
					"noi",
					"i",
					&_m_seltra_noi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"frame",
					"b",
					&_m_seltra_frame
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mox",
					"i",
					&_m_seltra_mox
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moy",
					"i",
					&_m_seltra_moy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moz",
					"i",
					&_m_seltra_moz
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smi",
					":TImage",
					&_m_seltra_smi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smt",
					"i",
					&_m_seltra_smt
				},
				{
					BBDEBUGDECL_GLOBAL,
					"zoom",
					"f",
					&_m_seltra_zoom
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozo",
					"i",
					&_m_seltra_mozo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozu",
					"f",
					&_m_seltra_mozu
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxc",
					"i",
					&_m_seltra_moxc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyc",
					"i",
					&_m_seltra_moyc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxco",
					"[]i",
					&_m_seltra_moxco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyco",
					"[]i",
					&_m_seltra_moyco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"redraw_map",
					"i",
					&_m_seltra_redraw_map
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bi",
					"i",
					&_m_seltra_bi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bgc",
					"i",
					&_m_seltra_bgc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposx",
					"i",
					&_m_seltra_camposx
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposy",
					"i",
					&_m_seltra_camposy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"garray",
					":grouparray",
					&_m_seltra_garray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"barray",
					":blockarray",
					&_m_seltra_barray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"wallgroup",
					":TList",
					&_m_seltra_wallgroup
				},
				{
					BBDEBUGDECL_GLOBAL,
					"rarray",
					":redrawarray",
					&_m_seltra_rarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bmap",
					":fastblockmap",
					&_m_seltra_bmap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"thingmap",
					":fastintmap",
					&_m_seltra_thingmap
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 9, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(1024,768,0,60,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 10, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_gw=brl_graphics_GraphicsWidth();
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 11, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_gh=brl_graphics_GraphicsHeight();
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 13, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_seltra_imagelist=bbArrayNew1D(":TImage", 100);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 15, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_seltra_block1=_m_seltra_loadimage2(&_s0);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 16, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra_wall1=_m_seltra_loadimage2(&_s1);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 17, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_seltra_gene=_m_seltra_loadimage2(&_s2);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 20, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_seltra_blank=brl_max2d_LoadImage(&_s3,-1);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 21, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_seltra_mousep=brl_max2d_LoadImage(&_s4,-1);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 22, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_seltra_mousec=brl_max2d_LoadImage(&_s5,-1);
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 24, 0};
		bbOnDebugEnterStm(&__stmt_10);
		_m_seltra_arroww=brl_max2d_LoadImage(&_s6,-1);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 25, 0};
		bbOnDebugEnterStm(&__stmt_11);
		_m_seltra_arrowe=brl_max2d_LoadImage(&_s7,-1);
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_12);
		_m_seltra_arrown=brl_max2d_LoadImage(&_s8,-1);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_13);
		_m_seltra_arrows=brl_max2d_LoadImage(&_s9,-1);
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 30, 0};
		bbOnDebugEnterStm(&__stmt_14);
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_15);
		struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 38, 0};
		bbOnDebugEnterStm(&__stmt_16);
		brl_random_SeedRnd(bbMilliSecs());
		struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_17);
		struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_18);
		struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_19);
		struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_20);
		_m_seltra_smi=((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,0U))[0U];
		struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_21);
		struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_22);
		struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_23);
		struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_24);
		struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_25);
		struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_26);
		struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 46, 0};
		bbOnDebugEnterStm(&__stmt_27);
		_m_seltra_moxco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_28);
		_m_seltra_moyco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_29);
		struct BBDebugStm __stmt_30 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_30);
		struct BBDebugStm __stmt_31 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_31);
		struct BBDebugStm __stmt_32 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_32);
		struct BBDebugStm __stmt_33 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_33);
		struct BBDebugStm __stmt_34 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 754, 0};
		bbOnDebugEnterStm(&__stmt_34);
		_m_seltra_garray=bbObjectNew(&_m_seltra_grouparray);
		struct BBDebugStm __stmt_35 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 755, 0};
		bbOnDebugEnterStm(&__stmt_35);
		_m_seltra_barray=bbObjectNew(&_m_seltra_blockarray);
		struct BBDebugStm __stmt_36 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 756, 0};
		bbOnDebugEnterStm(&__stmt_36);
		_m_seltra_wallgroup=bbObjectNew(&brl_linkedlist_TList);
		struct BBDebugStm __stmt_37 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 757, 0};
		bbOnDebugEnterStm(&__stmt_37);
		_m_seltra_rarray=bbObjectNew(&_m_seltra_redrawarray);
		struct BBDebugStm __stmt_38 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 759, 0};
		bbOnDebugEnterStm(&__stmt_38);
		_m_seltra_bmap=bbObjectNew(&_m_seltra_fastblockmap);
		struct BBDebugStm __stmt_39 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 760, 0};
		bbOnDebugEnterStm(&__stmt_39);
		_m_seltra_thingmap=bbObjectNew(&_m_seltra_fastintmap);
		struct BBDebugStm __stmt_40 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 763, 0};
		bbOnDebugEnterStm(&__stmt_40);
		_m_seltra_gen_maze_map(1,1,28,1,30,25);
		struct BBDebugStm __stmt_41 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 765, 0};
		bbOnDebugEnterStm(&__stmt_41);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 767, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(_m_seltra_bmap))->__m_seltra_fastblockmap_rc >1000){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 767, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra_bmap)->clas->m_orderedsort(_m_seltra_bmap);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 768, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra_update_bgroups();
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 769, 0};
			bbOnDebugEnterStm(&__stmt_2);
			_m_seltra_get_mouse_input();
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 770, 0};
			bbOnDebugEnterStm(&__stmt_3);
			_m_seltra_get_user_input();
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 772, 0};
			bbOnDebugEnterStm(&__stmt_4);
			_m_seltra_update_display();
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}