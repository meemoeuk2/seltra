#include "rand_array_test.bmx.gui.debug.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	35,
	{78,111,32,115,112,97,99,101,32,116,111,32,105,110,99,114,101
	,97,115,101,32,100,101,113,117,101,32,99,97,112,97,99,105
	,116,121}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
void __m_rand_array_test_a_New(struct _m_rand_array_test_a_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_rand_array_test_a;
	((struct _m_rand_array_test_a_obj*)bbNullObjectTest(o))->__m_rand_array_test_a_b = 0;
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 11, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_rand_array_test_a_obj*)bbNullObjectTest(o))->__m_rand_array_test_a_b =brl_random_Rand(9999,1);
	bbOnDebugLeaveScope();
}
struct BBDebugScope_2 _m_rand_array_test_a_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"a",
	{
		{
			BBDEBUGDECL_FIELD,
			"b",
			"i",
			.field_offset=offsetof(struct _m_rand_array_test_a_obj,__m_rand_array_test_a_b)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_rand_array_test_a_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_rand_array_test_a _m_rand_array_test_a={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_rand_array_test_a_scope,
	sizeof(struct _m_rand_array_test_a_obj),
	(void (*)(BBOBJECT))__m_rand_array_test_a_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_rand_array_test_a_obj,__m_rand_array_test_a_b) - sizeof(void*) + sizeof(BBINT)
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
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_crypto_crypto();
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
		__bb_brl_json_json();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxutil_maxutil();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_brl_xml_xml();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_macos_macos();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_rand_array_test_a);
		BBARRAY volatile bbt_al=(&bbEmptyArray);
		BBINT bbt_i=0;
		BBINT bbt_t=0;
		BBARRAY volatile bbt_al2=(&bbEmptyArray);
		BBARRAY volatile bbt_al3=(&bbEmptyArray);
		struct BBDebugScope_5 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"rand_array_test",
			{
				{
					BBDEBUGDECL_LOCAL,
					"al",
					"[]:a",
					.var_address=&bbt_al
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
					"al2",
					"[]:a",
					.var_address=&bbt_al2
				},
				{
					BBDEBUGDECL_LOCAL,
					"al3",
					"[]:a",
					.var_address=&bbt_al3
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 16, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_al=bbArrayNew1D(":a", 5000000);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 17, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=0;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 20, 0};
		bbOnDebugEnterStm(&__stmt_2);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 21, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al),(bbt_al)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]=(struct _m_rand_array_test_a_obj*)(struct _m_rand_array_test_a_obj*)bbObjectAtomicNew((BBClass *)&_m_rand_array_test_a);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 25, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_t=bbMilliSecs();
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_4);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 27, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al),(bbt_al)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b =(((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al),(bbt_al)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b +1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 29, 0};
		bbOnDebugEnterStm(&__stmt_5);
		brl_standardio_Print(bbStringFromInt(bbMilliSecs()-bbt_t));
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 32, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_al2=bbArrayNew1D(":a", 5000000);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 34, 0};
		bbOnDebugEnterStm(&__stmt_7);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			BBINT bbt_p=0;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"p",
						"i",
						.var_address=&bbt_p
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 35, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_p=brl_random_Rand(4999999,1);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 36, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al2),(bbt_al2)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]=(struct _m_rand_array_test_a_obj*)((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al),(bbt_al)->dims,((BBUINT)bbt_p)))[((BBUINT)bbt_p)];
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_t=bbMilliSecs();
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_9);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 42, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al2),(bbt_al2)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b =(((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al2),(bbt_al2)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b +1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_10);
		brl_standardio_Print(bbStringFromInt(bbMilliSecs()-bbt_t));
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_11);
		bbt_al3=bbArrayNew1D(":a", 5000000);
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_12);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 50, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al3),(bbt_al3)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]=(struct _m_rand_array_test_a_obj*)((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al),(bbt_al)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))];
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 54, 0};
		bbOnDebugEnterStm(&__stmt_13);
		bbt_t=bbMilliSecs();
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 55, 0};
		bbOnDebugEnterStm(&__stmt_14);
		for(bbt_i=1;(bbt_i<=5000000);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al3),(bbt_al3)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b =(((struct _m_rand_array_test_a_obj*)bbNullObjectTest(((struct _m_rand_array_test_a_obj**)BBARRAYDATAINDEX((bbt_al3),(bbt_al3)->dims,((BBUINT)(bbt_i-1))))[((BBUINT)(bbt_i-1))]))->__m_rand_array_test_a_b +1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/rand_array_test.bmx", 58, 0};
		bbOnDebugEnterStm(&__stmt_15);
		brl_standardio_Print(bbStringFromInt(bbMilliSecs()-bbt_t));
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}