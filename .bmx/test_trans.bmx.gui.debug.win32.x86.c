#include "test_trans.bmx.gui.debug.win32.x86.h"
static BBString _s1={
	&bbStringClass,
	4,
	{46,98,109,112}
};
static BBString _s0={
	&bbStringClass,
	16,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,97,114,116}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
BBARRAY _m_test_trans_imagelist=&bbEmptyArray;
BBINT _m_test_trans_noi=0;
BBINT _m_test_trans_create_block_image(){
	struct brl_max2d_image_TImage_obj* volatile bbt_blockart=&bbNullObject;
	BBINT bbt_chem=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_block_image",
		{
			{
				BBDEBUGDECL_LOCAL,
				"blockart",
				":TImage",
				.var_address=&bbt_blockart
			},
			{
				BBDEBUGDECL_LOCAL,
				"chem",
				"i",
				.var_address=&bbt_chem
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_blockart=&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 30, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_chem=brl_random_Rand(0,8);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 32, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_blockart=brl_max2d_LoadImage(bbStringConcat(bbStringConcat(&_s0,bbStringFromInt(bbt_chem)),&_s1),-1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_GrabImage(bbt_blockart,0,0,0);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 34, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_test_trans_imagelist),(_m_test_trans_imagelist)->dims,((BBUINT)_m_test_trans_noi)))[((BBUINT)_m_test_trans_noi)]=brl_max2d_CreateImage(30,30,1,0);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_GrabImage(((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_test_trans_imagelist),(_m_test_trans_imagelist)->dims,((BBUINT)_m_test_trans_noi)))[((BBUINT)_m_test_trans_noi)],0,0,0);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 37, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_test_trans_noi=(_m_test_trans_noi+1);
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
		BBINT bbt_i=0;
		BBINT bbt_j=0;
		struct brl_max2d_image_TImage_obj* volatile bbt_im=&bbNullObject;
		struct BBDebugScope_5 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"test_trans",
			{
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
					"im",
					":TImage",
					.var_address=&bbt_im
				},
				{
					BBDEBUGDECL_GLOBAL,
					"imagelist",
					"[]:TImage",
					&_m_test_trans_imagelist
				},
				{
					BBDEBUGDECL_GLOBAL,
					"noi",
					"i",
					&_m_test_trans_noi
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 1, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(800,600,0,60,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 4, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=0;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 4, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=0;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 5, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_im=&bbNullObject;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 6, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_test_trans_imagelist=bbArrayNew1D(":TImage", 60);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 7, 0};
		bbOnDebugEnterStm(&__stmt_5);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 9, 0};
		bbOnDebugEnterStm(&__stmt_6);
		for(bbt_i=0;(bbt_i<=30);bbt_i=(bbt_i+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 10, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_test_trans_create_block_image();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 16, 0};
		bbOnDebugEnterStm(&__stmt_7);
		brl_max2d_SetBlend(2);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 19, 0};
		bbOnDebugEnterStm(&__stmt_8);
		brl_graphics_Flip(-1);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 21, 0};
		bbOnDebugEnterStm(&__stmt_9);
		while(1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 22, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/test_trans.bmx", 22, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				break;
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}