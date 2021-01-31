#include "test_array.bmx.console.release.win32.x86.h"
static BBString _s0={
	&bbStringClass,
	28,
	{115,116,97,116,105,99,32,97,114,114,97,121,32,116,101,115,116
	,32,109,105,108,108,105,115,101,99,115,32}
};
static BBString _s1={
	&bbStringClass,
	21,
	{116,108,105,115,116,32,116,101,115,116,32,109,105,108,108,105,115
	,101,99,115,32}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
void __m_test_array_barry_New(struct _m_test_array_barry_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_test_array_barry;
	o->__m_test_array_barry_barr = bbArrayNew1D(":block", 3000000);
	o->__m_test_array_barry_le = 0;
}
BBINT __m_test_array_barry_add_Tblock(struct _m_test_array_barry_obj* o,struct _m_test_array_block_obj* bbt_b){
	((struct _m_test_array_block_obj**)BBARRAYDATA((o->__m_test_array_barry_barr ),(o->__m_test_array_barry_barr )->dims))[((BBUINT)o->__m_test_array_barry_le )]=bbt_b;
	o->__m_test_array_barry_le =(o->__m_test_array_barry_le +1);
	return 0;
}
BBINT __m_test_array_barry_ordered_sort_ii(struct _m_test_array_barry_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_test_array_barry_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_test_array_barry_le ){
		((struct _m_test_array_block_obj**)BBARRAYDATA((o->__m_test_array_barry_barr ),(o->__m_test_array_barry_barr )->dims))[((BBUINT)bbt_i)]=((struct _m_test_array_block_obj**)BBARRAYDATA((o->__m_test_array_barry_barr ),(o->__m_test_array_barry_barr )->dims))[((BBUINT)bbt_j)];
		if(((struct _m_test_array_block_obj**)BBARRAYDATA((o->__m_test_array_barry_barr ),(o->__m_test_array_barry_barr )->dims))[((BBUINT)bbt_i)]!= &bbNullObject){
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_test_array_barry_le =bbt_i;
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
	o->__m_test_array_block_x = 0;
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
	struct _m_test_array_barry_obj* volatile bbt_ba=bbObjectNew(&_m_test_array_barry);
	struct _m_test_array_block_obj* volatile bbt_b=&bbNullObject;
	struct _m_test_array_block_obj* volatile bbt_b2=&bbNullObject;
	BBINT bbt_t=bbMilliSecs();
	while(bbt_i<3000000){
		bbt_b=bbObjectAtomicNew(&_m_test_array_block);
		bbt_b->__m_test_array_block_x =bbt_i;
		((struct _m_test_array_block_obj**)BBARRAYDATA((bbt_ba->__m_test_array_barry_barr ),(bbt_ba->__m_test_array_barry_barr )->dims))[((BBUINT)bbt_i)]=bbt_b;
		bbt_ba->__m_test_array_barry_le =(bbt_ba->__m_test_array_barry_le +1);
		bbt_i=(bbt_i+1);
	}
	bbt_i=0;
	while(bbt_i<1000000){
		((struct _m_test_array_block_obj**)BBARRAYDATA((bbt_ba->__m_test_array_barry_barr ),(bbt_ba->__m_test_array_barry_barr )->dims))[((BBUINT)brl_random_Rand(0,2999999))]=&bbNullObject;
		bbt_i=(bbt_i+1);
	}
	bbt_i=0;
	while(bbt_i<3000000){
		bbt_b2=((struct _m_test_array_block_obj**)BBARRAYDATA((bbt_ba->__m_test_array_barry_barr ),(bbt_ba->__m_test_array_barry_barr )->dims))[((BBUINT)bbt_i)];
		bbt_i=(bbt_i+1);
	}
	BBINT bbt_t2=bbMilliSecs();
	brl_standardio_Print(bbStringConcat(&_s0,bbStringFromInt(bbt_t2-bbt_t)));
	return 0;
}
BBINT _m_test_array_test_tlist(){
	struct brl_linkedlist_TList_obj* volatile bbt_tb=bbObjectNew(&brl_linkedlist_TList);
	BBINT bbt_i=0;
	BBINT bbt_t=bbMilliSecs();
	while(bbt_i<3000000){
		struct _m_test_array_block_obj* volatile bbt_b=bbObjectAtomicNew(&_m_test_array_block);
		bbt_b->__m_test_array_block_x =bbt_i;
		(bbt_tb)->clas->m_AddLast_TObject(bbt_tb,bbt_b);
		bbt_i=(bbt_i+1);
	}
	struct brl_linkedlist_TLink_obj* volatile bbt_m=(bbt_tb)->clas->m_FirstLink(bbt_tb);
	while(bbt_m!= &bbNullObject){
		struct _m_test_array_block_obj* volatile bbt_b2=((struct _m_test_array_block_obj*)bbObjectDowncast((bbt_m)->clas->m_Value(bbt_m),&_m_test_array_block));
		bbt_m=(bbt_m)->clas->m_NextLink(bbt_m);
	}
	BBINT bbt_t2=bbMilliSecs();
	brl_standardio_Print(bbStringConcat(&_s1,bbStringFromInt(bbt_t2-bbt_t)));
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
		_m_test_array_test_st_array();
		_m_test_array_test_tlist();
		return 0;
	}
	return 0;
}