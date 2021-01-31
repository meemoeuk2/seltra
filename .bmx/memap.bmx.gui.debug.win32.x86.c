#include "memap.bmx.gui.debug.win32.x86.h"
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
void __m_memap_fastintmap_New(struct _m_memap_fastintmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_memap_fastintmap;
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v = bbArrayNew1D("i", 3000000);
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le = 0;
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl = 0;
}
BBINT __m_memap_fastintmap_fetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
BBINT __m_memap_fastintmap_vfetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_memap_fastintmap_kfetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_memap_fastintmap_insert_ii(struct _m_memap_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	if(((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl ){
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
		((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le )))[((BBUINT)((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le =(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=bbt_val;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_memap_fastintmap_remove_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_memap_fastintmap_iter(struct _m_memap_fastintmap_obj* o){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl ){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1))))[((BBUINT)(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 47, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le =(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1);
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
			bbt_a=((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])];
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
BBINT __m_memap_fastintmap_fastsort(struct _m_memap_fastintmap_obj* o){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl ){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1))))[((BBUINT)(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 71, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le =(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1);
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
BBINT __m_memap_fastintmap_orderedsort(struct _m_memap_fastintmap_obj* o){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_j<((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl ){
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
			((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le =(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le -1);
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
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
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_memap_fastintmap_set_null_value_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_n){
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o));
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
	((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_nl =bbt_n;
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
		((BBINT*)BBARRAYDATAINDEX((((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v ),(((struct _m_memap_fastintmap_obj*)bbNullObjectTest(o))->__m_memap_fastintmap_v )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=bbt_n;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_14 _m_memap_fastintmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastintmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]i",
			.field_offset=offsetof(struct _m_memap_fastintmap_obj,__m_memap_fastintmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_memap_fastintmap_obj,__m_memap_fastintmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_memap_fastintmap_obj,__m_memap_fastintmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"nl",
			"i",
			.field_offset=offsetof(struct _m_memap_fastintmap_obj,__m_memap_fastintmap_nl)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_memap_fastintmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i)i",
			&__m_memap_fastintmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i)i",
			&__m_memap_fastintmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			&__m_memap_fastintmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,i)i",
			&__m_memap_fastintmap_insert_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			&__m_memap_fastintmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			&__m_memap_fastintmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			&__m_memap_fastintmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			&__m_memap_fastintmap_orderedsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"set_null_value",
			"(i)i",
			&__m_memap_fastintmap_set_null_value_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_memap_fastintmap _m_memap_fastintmap={
	&bbObjectClass,
	bbObjectFree,
	&_m_memap_fastintmap_scope,
	sizeof(struct _m_memap_fastintmap_obj),
	__m_memap_fastintmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_memap_fastintmap_obj,__m_memap_fastintmap_nl) - sizeof(void*) + sizeof(BBINT)
	,__m_memap_fastintmap_fetch_i
	,__m_memap_fastintmap_vfetch_i
	,__m_memap_fastintmap_kfetch_i
	,__m_memap_fastintmap_insert_ii
	,__m_memap_fastintmap_remove_i
	,__m_memap_fastintmap_iter
	,__m_memap_fastintmap_fastsort
	,__m_memap_fastintmap_orderedsort
	,__m_memap_fastintmap_set_null_value_i
};

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
		bbObjectRegisterType(&_m_memap_fastintmap);
		struct _m_memap_fastintmap_obj* volatile bbt_m=&bbNullObject;
		BBINT bbt_i=0;
		BBINT bbt_n=0;
		struct BBDebugScope_3 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"memap",
			{
				{
					BBDEBUGDECL_LOCAL,
					"m",
					":fastintmap",
					.var_address=&bbt_m
				},
				{
					BBDEBUGDECL_LOCAL,
					"i",
					"i",
					.var_address=&bbt_i
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 114, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_m=bbObjectNew(&_m_memap_fastintmap);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 116, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(bbt_m)->clas->m_insert_ii(bbt_m,1,5);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 117, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_m)->clas->m_insert_ii(bbt_m,2,8);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_3);
		(bbt_m)->clas->m_remove_i(bbt_m,2);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 120, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_i=0;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 120, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_n=0;
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 121, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_n=((struct _m_memap_fastintmap_obj*)bbNullObjectTest(bbt_m))->__m_memap_fastintmap_le ;
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 122, 0};
		bbOnDebugEnterStm(&__stmt_7);
		while(bbt_i<bbt_n){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 123, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_standardio_Print(bbStringFromInt((bbt_m)->clas->m_vfetch_i(bbt_m,bbt_i)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 124, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}