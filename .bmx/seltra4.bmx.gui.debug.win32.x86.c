#include "seltra4.bmx.gui.debug.win32.x86.h"
static BBString _s0={
	&bbStringClass,
	35,
	{78,111,32,115,112,97,99,101,32,116,111,32,105,110,99,114,101
	,97,115,101,32,100,101,113,117,101,32,99,97,112,97,99,105
	,116,121}
};
static BBString _s1={
	&bbStringClass,
	13,
	{98,108,111,99,107,97,114,116,48,46,112,110,103}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
void __m_seltra4_btemplate_New(struct _m_seltra4_btemplate_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra4_btemplate;
}
BBINT __m_seltra4_btemplate_create_block_image(struct _m_seltra4_btemplate_obj* o){
	((struct _m_seltra4_btemplate_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* volatile bbt_party=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_block_image",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":btemplate",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"party",
				":TPixmap",
				.var_address=&bbt_party
			},
			{
				BBDEBUGDECL_LOCAL,
				"blockart",
				":TImage",
				.var_address=&bbt_blockart
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 5, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_party=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 6, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 7, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s1,-1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 11, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_2 _m_seltra4_btemplate_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"btemplate",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra4_btemplate_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"create_block_image",
			"()i",
			.var_address=(void*)&__m_seltra4_btemplate_create_block_image
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra4_btemplate _m_seltra4_btemplate={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra4_btemplate_scope,
	sizeof(struct _m_seltra4_btemplate_obj),
	(void (*)(BBOBJECT))__m_seltra4_btemplate_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,__m_seltra4_btemplate_create_block_image
};

BBOBJECT _m_seltra4_thread2(BBOBJECT bbt_data){
	struct _m_seltra4_btemplate_obj* volatile bbt_bt=(struct _m_seltra4_btemplate_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"thread2",
		{
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			{
				BBDEBUGDECL_LOCAL,
				"bt",
				":btemplate",
				.var_address=&bbt_bt
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 30, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_graphics_Graphics(1024,768,0,60,0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 31, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bt=(struct _m_seltra4_btemplate_obj*)(struct _m_seltra4_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra4_btemplate);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 32, 0};
	bbOnDebugEnterStm(&__stmt_2);
	(bbt_bt)->clas->m_create_block_image((struct _m_seltra4_btemplate_obj*)bbt_bt);
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
BBOBJECT _m_seltra4_thread1(BBOBJECT bbt_data){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"thread1",
		{
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 21, 0};
	bbOnDebugEnterStm(&__stmt_0);
	while(!(brl_polledinput_KeyDown(27)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
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
		__bb_brl_collections_collections();
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
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_macos_macos();
		__bb_pub_opengles_opengles();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_seltra4_btemplate);
		BBARRAY bbt_threads=&bbEmptyArray;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"seltra4",
			{
				{
					BBDEBUGDECL_LOCAL,
					"threads",
					"[]:TThread",
					.var_address=&bbt_threads
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_threads=bbArrayNew1D(":TThread", 2);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct brl_threads_TThread_obj**)BBARRAYDATAINDEX((bbt_threads),(bbt_threads)->dims,1U))[1U]=(struct brl_threads_TThread_obj*)brl_threads_CreateThread(_m_seltra4_thread2,(BBOBJECT)&bbEmptyString);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra4.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_threads_WaitThread((struct brl_threads_TThread_obj*)((struct brl_threads_TThread_obj**)BBARRAYDATAINDEX((bbt_threads),(bbt_threads)->dims,1U))[1U]);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}