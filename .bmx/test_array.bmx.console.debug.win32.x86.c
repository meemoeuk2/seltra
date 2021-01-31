#include "test_array.bmx.console.debug.win32.x86.h"
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
void __m_test_array_barry_New(struct _m_test_array_barry_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_test_array_barry;
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr = bbArrayNew1D(":block", 3000000);
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le = 0;
}
BBINT __m_test_array_barry_add_Tblock(struct _m_test_array_barry_obj* o,struct _m_test_array_block_obj* bbt_b){
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":barry",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 12, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr )->dims,((BBUINT)((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le )))[((BBUINT)((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le )]=bbt_b;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 13, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le =(((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_test_array_barry_ordered_sort_ii(struct _m_test_array_barry_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":barry",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 17, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 17, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 18, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 20, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 21, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 22, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_barr )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 22, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 23, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 25, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_test_array_barry_obj*)bbNullObjectTest(o))->__m_test_array_barry_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_test_array_barry_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"barry",
	{
		{
			BBDEBUGDECL_FIELD,
			"barr",
			"[]:block",
			.field_offset=offsetof(struct _m_test_array_barry_obj,__m_test_array_barry_barr)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_test_array_barry_obj,__m_test_array_barry_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_test_array_barry_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			&__m_test_array_barry_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			&__m_test_array_barry_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_test_array_barry _m_test_array_barry={
	&bbObjectClass,
	bbObjectFree,
	&_m_test_array_barry_scope,
	sizeof(struct _m_test_array_barry_obj),
	__m_test_array_barry_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_test_array_barry_obj,__m_test_array_barry_le) - sizeof(void*) + sizeof(BBINT)
	,__m_test_array_barry_add_Tblock
	,__m_test_array_barry_ordered_sort_ii
};

void __m_test_array_block_New(struct _m_test_array_block_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_test_array_block;
	((struct _m_test_array_block_obj*)bbNullObjectTest(o))->__m_test_array_block_x = 0;
}
struct BBDebugScope_2 _m_test_array_block_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"block",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_test_array_block_obj,__m_test_array_block_x)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_test_array_block_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_test_array_block _m_test_array_block={
	&bbObjectClass,
	bbObjectFree,
	&_m_test_array_block_scope,
	sizeof(struct _m_test_array_block_obj),
	__m_test_array_block_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_test_array_block_obj,__m_test_array_block_x) - sizeof(void*) + sizeof(BBINT)
};

BBINT _m_test_array_test_st_array(){
	BBINT bbt_i=0;
	struct _m_test_array_barry_obj* volatile bbt_ba=&bbNullObject;
	struct _m_test_array_block_obj* volatile bbt_b=&bbNullObject;
	struct _m_test_array_block_obj* volatile bbt_b2=&bbNullObject;
	BBINT bbt_t=0;
	BBINT bbt_t2=0;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"test_st_array",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"ba",
				":barry",
				.var_address=&bbt_ba
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
				"t",
				"i",
				.var_address=&bbt_t
			},
			{
				BBDEBUGDECL_LOCAL,
				"t2",
				"i",
				.var_address=&bbt_t2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 34, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_ba=bbObjectNew(&_m_test_array_barry);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b2=&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 37, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_t=bbMilliSecs();
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 38, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<3000000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 39, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=bbObjectAtomicNew(&_m_test_array_block);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_test_array_block_obj*)bbNullObjectTest(bbt_b))->__m_test_array_block_x =bbt_i;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_ba)->clas->m_add_Tblock(bbt_ba,bbt_b);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 45, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_i=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 46, 0};
	bbOnDebugEnterStm(&__stmt_7);
	while(bbt_i<1000000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(bbt_ba))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(bbt_ba))->__m_test_array_barry_barr )->dims,((BBUINT)brl_random_Rand(0,2999999))))[((BBUINT)brl_random_Rand(0,2999999))]=&bbNullObject;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 51, 0};
	bbOnDebugEnterStm(&__stmt_8);
	(bbt_ba)->clas->m_ordered_sort_ii(bbt_ba,0,0);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 53, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_i=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 54, 0};
	bbOnDebugEnterStm(&__stmt_10);
	while(bbt_i<3000000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 55, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=((struct _m_test_array_block_obj**)BBARRAYDATAINDEX((((struct _m_test_array_barry_obj*)bbNullObjectTest(bbt_ba))->__m_test_array_barry_barr ),(((struct _m_test_array_barry_obj*)bbNullObjectTest(bbt_ba))->__m_test_array_barry_barr )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 56, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 59, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_t2=bbMilliSecs();
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 60, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_standardio_Print(bbStringFromInt(bbt_t2-bbt_t));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_test_array_test_tlist(){
	struct brl_linkedlist_TList_obj* volatile bbt_tb=&bbNullObject;
	BBINT bbt_i=0;
	BBINT bbt_t=0;
	struct brl_linkedlist_TLink_obj* volatile bbt_m=&bbNullObject;
	BBINT bbt_t2=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"test_tlist",
		{
			{
				BBDEBUGDECL_LOCAL,
				"tb",
				":TList",
				.var_address=&bbt_tb
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"t",
				"i",
				.var_address=&bbt_t
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				":TLink",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"t2",
				"i",
				.var_address=&bbt_t2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tb=bbObjectNew(&brl_linkedlist_TList);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_t=bbMilliSecs();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(bbt_i<3000000){
		struct _m_test_array_block_obj* volatile bbt_b=&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=bbObjectAtomicNew(&_m_test_array_block);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_test_array_block_obj*)bbNullObjectTest(bbt_b))->__m_test_array_block_x =bbt_i;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_tb)->clas->m_AddLast_TObject(bbt_tb,bbt_b);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 78, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_m=(bbt_tb)->clas->m_FirstLink(bbt_tb);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 80, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_m!= &bbNullObject){
		struct _m_test_array_block_obj* volatile bbt_b2=&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"b2",
					":block",
					.var_address=&bbt_b2
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 81, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=((struct _m_test_array_block_obj*)bbObjectDowncast((bbt_m)->clas->m_Value(bbt_m),&_m_test_array_block));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 82, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_m=(bbt_m)->clas->m_NextLink(bbt_m);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_t2=bbMilliSecs();
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_standardio_Print(bbStringFromInt(bbt_t2-bbt_t));
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
		bbObjectRegisterType(&_m_test_array_barry);
		bbObjectRegisterType(&_m_test_array_block);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"test_array",
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_array.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_test_array_test_st_array();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}