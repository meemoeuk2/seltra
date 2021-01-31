#include "rand_array_test.bmx.gui.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	35,
	{78,111,32,115,112,97,99,101,32,116,111,32,105,110,99,114,101
	,97,115,101,32,100,101,113,117,101,32,99,97,112,97,99,105
	,116,121}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
void __m_rand_array_test_a_New(struct _m_rand_array_test_a_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_rand_array_test_a;
	o->__m_rand_array_test_a_b = bbArrayNew1D("i", 100);
	BBINT bbt_i=0;
	for(bbt_i=0;(bbt_i<=99);bbt_i=(bbt_i+1)){
		((BBINT*)BBARRAYDATA(o->__m_rand_array_test_a_b ,1))[((BBUINT)bbt_i)]=brl_random_Rand(9999,1);
	}
}
struct BBDebugScope_2 _m_rand_array_test_a_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"a",
	{
		{
			BBDEBUGDECL_FIELD,
			"b",
			"[]i",
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
	offsetof(struct _m_rand_array_test_a_obj,__m_rand_array_test_a_b) - sizeof(void*) + sizeof(BBARRAY)
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
		BBINT bbt_n=5000000;
		BBARRAY volatile bbt_al=bbArrayNew1D(":a", bbt_n);
		BBINT bbt_i2=0;
		BBINT bbt_=(bbt_n-1);
		for(bbt_i2=0;(bbt_i2<=bbt_);bbt_i2=(bbt_i2+1)){
			((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al,1))[((BBUINT)bbt_i2)]=(struct _m_rand_array_test_a_obj*)(struct _m_rand_array_test_a_obj*)bbObjectNew((BBClass *)&_m_rand_array_test_a);
		}
		BBINT bbt_t=bbMilliSecs();
		BBINT bbt_2=(bbt_n-1);
		for(bbt_i2=0;(bbt_i2<=bbt_2);bbt_i2=(bbt_i2+1)){
			((BBINT*)BBARRAYDATA(((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al,1))[((BBUINT)bbt_i2)]->__m_rand_array_test_a_b ,1))[5U]=(((BBINT*)BBARRAYDATA(((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al,1))[((BBUINT)bbt_i2)]->__m_rand_array_test_a_b ,1))[5U]+1);
		}
		brl_standardio_Print(bbStringFromInt(bbMilliSecs()-bbt_t));
		BBARRAY volatile bbt_al2=bbArrayNew1D(":a", bbt_n);
		BBINT bbt_3=(bbt_n-1);
		for(bbt_i2=0;(bbt_i2<=bbt_3);bbt_i2=(bbt_i2+1)){
			BBINT bbt_p=brl_random_Rand((bbt_n-1),1);
			((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al2,1))[((BBUINT)bbt_i2)]=(struct _m_rand_array_test_a_obj*)((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al,1))[((BBUINT)bbt_p)];
		}
		bbt_t=bbMilliSecs();
		BBINT bbt_4=(bbt_n-1);
		for(bbt_i2=0;(bbt_i2<=bbt_4);bbt_i2=(bbt_i2+1)){
			((BBINT*)BBARRAYDATA(((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al2,1))[((BBUINT)bbt_i2)]->__m_rand_array_test_a_b ,1))[5U]=(((BBINT*)BBARRAYDATA(((struct _m_rand_array_test_a_obj**)BBARRAYDATA(bbt_al2,1))[((BBUINT)bbt_i2)]->__m_rand_array_test_a_b ,1))[5U]+1);
		}
		brl_standardio_Print(bbStringFromInt(bbMilliSecs()-bbt_t));
		return 0;
	}
	return 0;
}