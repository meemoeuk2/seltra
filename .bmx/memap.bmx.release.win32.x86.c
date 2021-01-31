#include "memap.bmx.release.win32.x86.h"
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
void __m_memap_fastintmap_New(struct _m_memap_fastintmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_memap_fastintmap;
	o->__m_memap_fastintmap_v = bbArrayNew1D("i", 3000000);
	o->__m_memap_fastintmap_k = bbArrayNew1D("i", 3000000);
	o->__m_memap_fastintmap_le = 0;
	o->__m_memap_fastintmap_nl = 0;
}
BBINT __m_memap_fastintmap_fetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_key){
	return ((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)bbt_key)];
}
BBINT __m_memap_fastintmap_vfetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_index)])];
}
BBINT __m_memap_fastintmap_kfetch_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_index)];
}
BBINT __m_memap_fastintmap_insert_ii(struct _m_memap_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	if(((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)bbt_key)]==0){
		((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)o->__m_memap_fastintmap_le )]=bbt_key;
		o->__m_memap_fastintmap_le =(o->__m_memap_fastintmap_le +1);
	}
	((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)bbt_key)]=bbt_val;
	return 0;
}
BBINT __m_memap_fastintmap_remove_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_key){
	((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)bbt_key)]=o->__m_memap_fastintmap_nl ;
	return 0;
}
BBINT __m_memap_fastintmap_iter(struct _m_memap_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_memap_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)])]==o->__m_memap_fastintmap_nl ){
			((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)(o->__m_memap_fastintmap_le -1))];
			o->__m_memap_fastintmap_le =(o->__m_memap_fastintmap_le -1);
		}else{
			BBINT bbt_a=((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)])];
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_memap_fastintmap_fastsort(struct _m_memap_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_memap_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)])]==o->__m_memap_fastintmap_nl ){
			((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)(o->__m_memap_fastintmap_le -1))];
			o->__m_memap_fastintmap_le =(o->__m_memap_fastintmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_memap_fastintmap_orderedsort(struct _m_memap_fastintmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_memap_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_j)])]==o->__m_memap_fastintmap_nl ){
			o->__m_memap_fastintmap_le =(o->__m_memap_fastintmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_k ),(o->__m_memap_fastintmap_k )->dims))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_memap_fastintmap_le =bbt_i;
	return 0;
}
BBINT __m_memap_fastintmap_set_null_value_i(struct _m_memap_fastintmap_obj* o,BBINT bbt_n){
	BBINT bbt_i=0;
	o->__m_memap_fastintmap_nl =bbt_n;
	while(bbt_i<3000000){
		((BBINT*)BBARRAYDATA((o->__m_memap_fastintmap_v ),(o->__m_memap_fastintmap_v )->dims))[((BBUINT)bbt_i)]=bbt_n;
		bbt_i=(bbt_i+1);
	}
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

static int _bb_seltra_memap_inited = 0;
int _bb_seltra_memap(){
	if (!_bb_seltra_memap_inited) {
		_bb_seltra_memap_inited = 1;
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
		return 0;
	}
	return 0;
}