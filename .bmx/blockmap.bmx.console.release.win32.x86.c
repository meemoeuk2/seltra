#include "blockmap.bmx.console.release.win32.x86.h"
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
void __m_blockmap_fastblockmap_New(struct _m_blockmap_fastblockmap_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_blockmap_fastblockmap;
	o->__m_blockmap_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	o->__m_blockmap_fastblockmap_k = bbArrayNew1D("i", 3000000);
	o->__m_blockmap_fastblockmap_le = 0;
}
struct _m_blockmap_block_obj* __m_blockmap_fastblockmap_fetch_i(struct _m_blockmap_fastblockmap_obj* o,BBINT bbt_key){
	return ((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)bbt_key)];
}
struct _m_blockmap_block_obj* __m_blockmap_fastblockmap_vfetch_i(struct _m_blockmap_fastblockmap_obj* o,BBINT bbt_index){
	return ((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_index)])];
}
BBINT __m_blockmap_fastblockmap_kfetch_i(struct _m_blockmap_fastblockmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_index)];
}
BBINT __m_blockmap_fastblockmap_insert_iTblock(struct _m_blockmap_fastblockmap_obj* o,BBINT bbt_key,struct _m_blockmap_block_obj* bbt_b){
	if(((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)bbt_key)]==&bbNullObject){
		((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)o->__m_blockmap_fastblockmap_le )]=bbt_key;
		o->__m_blockmap_fastblockmap_le =(o->__m_blockmap_fastblockmap_le +1);
	}
	((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)bbt_key)]=bbt_b;
	return 0;
}
BBINT __m_blockmap_fastblockmap_remove_i(struct _m_blockmap_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)bbt_key)]=&bbNullObject;
	return 0;
}
BBINT __m_blockmap_fastblockmap_iter(struct _m_blockmap_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_blockmap_fastblockmap_le ){
		if(((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)(o->__m_blockmap_fastblockmap_le -1))];
			o->__m_blockmap_fastblockmap_le =(o->__m_blockmap_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_blockmap_fastblockmap_fastsort(struct _m_blockmap_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_blockmap_fastblockmap_le ){
		if(((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)(o->__m_blockmap_fastblockmap_le -1))];
			o->__m_blockmap_fastblockmap_le =(o->__m_blockmap_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_blockmap_fastblockmap_orderedsort(struct _m_blockmap_fastblockmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_blockmap_fastblockmap_le ){
		if(((struct _m_blockmap_block_obj**)BBARRAYDATA((o->__m_blockmap_fastblockmap_v ),(o->__m_blockmap_fastblockmap_v )->dims))[((BBUINT)((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_j)])]==&bbNullObject){
			o->__m_blockmap_fastblockmap_le =(o->__m_blockmap_fastblockmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA((o->__m_blockmap_fastblockmap_k ),(o->__m_blockmap_fastblockmap_k )->dims))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_blockmap_fastblockmap_le =bbt_i;
	return 0;
}
struct BBDebugScope_12 _m_blockmap_fastblockmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastblockmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]:block",
			.field_offset=offsetof(struct _m_blockmap_fastblockmap_obj,__m_blockmap_fastblockmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_blockmap_fastblockmap_obj,__m_blockmap_fastblockmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_blockmap_fastblockmap_obj,__m_blockmap_fastblockmap_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_blockmap_fastblockmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i):block",
			&__m_blockmap_fastblockmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i):block",
			&__m_blockmap_fastblockmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			&__m_blockmap_fastblockmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,:block)i",
			&__m_blockmap_fastblockmap_insert_iTblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			&__m_blockmap_fastblockmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			&__m_blockmap_fastblockmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			&__m_blockmap_fastblockmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			&__m_blockmap_fastblockmap_orderedsort
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_blockmap_fastblockmap _m_blockmap_fastblockmap={
	&bbObjectClass,
	bbObjectFree,
	&_m_blockmap_fastblockmap_scope,
	sizeof(struct _m_blockmap_fastblockmap_obj),
	__m_blockmap_fastblockmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_blockmap_fastblockmap_obj,__m_blockmap_fastblockmap_le) - sizeof(void*) + sizeof(BBINT)
	,__m_blockmap_fastblockmap_fetch_i
	,__m_blockmap_fastblockmap_vfetch_i
	,__m_blockmap_fastblockmap_kfetch_i
	,__m_blockmap_fastblockmap_insert_iTblock
	,__m_blockmap_fastblockmap_remove_i
	,__m_blockmap_fastblockmap_iter
	,__m_blockmap_fastblockmap_fastsort
	,__m_blockmap_fastblockmap_orderedsort
};

void __m_blockmap_block_New(struct _m_blockmap_block_obj* o) {
	bbObjectCtor(o);
	o->clas = (BBClass*)&_m_blockmap_block;
	o->__m_blockmap_block_x = 0;
}
struct BBDebugScope_2 _m_blockmap_block_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"block",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_blockmap_block_obj,__m_blockmap_block_x)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			&__m_blockmap_block_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_blockmap_block _m_blockmap_block={
	&bbObjectClass,
	bbObjectFree,
	&_m_blockmap_block_scope,
	sizeof(struct _m_blockmap_block_obj),
	__m_blockmap_block_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_blockmap_block_obj,__m_blockmap_block_x) - sizeof(void*) + sizeof(BBINT)
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
		bbObjectRegisterType(&_m_blockmap_fastblockmap);
		bbObjectRegisterType(&_m_blockmap_block);
		struct _m_blockmap_fastblockmap_obj* volatile bbt_bmap=bbObjectNew(&_m_blockmap_fastblockmap);
		struct _m_blockmap_block_obj* volatile bbt_b=bbObjectAtomicNew(&_m_blockmap_block);
		(bbt_bmap)->clas->m_insert_iTblock(bbt_bmap,10,bbt_b);
		struct _m_blockmap_block_obj* volatile bbt_b2=&bbNullObject;
		bbt_b2=(bbt_bmap)->clas->m_vfetch_i(bbt_bmap,0);
		brl_standardio_Print(bbStringFromInt(bbt_b2->__m_blockmap_block_x ));
		return 0;
	}
	return 0;
}