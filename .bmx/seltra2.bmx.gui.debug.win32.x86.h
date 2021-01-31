#ifndef SELTRA_SELTRA2_BMX_GUI_DEBUG_WIN32_X86_H
#define SELTRA_SELTRA2_BMX_GUI_DEBUG_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.debug.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.win32.x86.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.win32.x86.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.win32.x86.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.win32.x86.h>
#include <brl.mod/data.mod/.bmx/data.bmx.debug.win32.x86.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.win32.x86.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.win32.x86.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.win32.x86.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.win32.x86.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.win32.x86.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.win32.x86.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.win32.x86.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.win32.x86.h>
#include <brl.mod/map.mod/.bmx/map.bmx.debug.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x86.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.win32.x86.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.win32.x86.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.win32.x86.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.win32.x86.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.win32.x86.h>
#include <brl.mod/stringbuilder.mod/.bmx/stringbuilder.bmx.debug.win32.x86.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.win32.x86.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.win32.x86.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.debug.win32.x86.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.win32.x86.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.win32.x86.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.win32.x86.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.win32.x86.h>
#include <pub.mod/macos.mod/.bmx/macos.bmx.debug.win32.x86.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.win32.x86.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.win32.x86.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.win32.x86.h>
int _bb_main();
struct _m_seltra2_btemplate_obj;
struct _m_seltra2_grouparray_obj;
struct _m_seltra2_blockarray_obj;
struct _m_seltra2_redrawarray_obj;
struct _m_seltra2_generatorarray_obj;
struct _m_seltra2_fastblockmap_obj;
struct _m_seltra2_fastintmap_obj;
struct _m_seltra2_block_obj;
struct _m_seltra2_bgroup_obj;
struct _m_seltra2_redraw_obj;
struct _m_seltra2_gen_obj;
extern BBINT _m_seltra2_gw;
extern BBINT _m_seltra2_gh;
extern BBARRAY _m_seltra2_imagelist;
extern BBARRAY _m_seltra2_blockart;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockw;
extern BBINT _m_seltra2_noi;
struct brl_max2d_image_TImage_obj* _m_seltra2_loadimage3(BBSTRING bbt_fn);
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blocko;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockc;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blocks;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockq;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockx;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockd;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blockb;
void __m_seltra2_btemplate_New(struct _m_seltra2_btemplate_obj* o);
typedef BBINT (*_m_seltra2_btemplate_create_block_image_m)(struct _m_seltra2_btemplate_obj*);
BBINT __m_seltra2_btemplate_create_block_image(struct _m_seltra2_btemplate_obj*);
typedef struct _m_seltra2_bgroup_obj* (*_m_seltra2_btemplate_createsingleblock_iiii_m)(struct _m_seltra2_btemplate_obj*,BBINT,BBINT,BBINT,BBINT);
struct _m_seltra2_bgroup_obj* __m_seltra2_btemplate_createsingleblock_iiii(struct _m_seltra2_btemplate_obj*,BBINT,BBINT,BBINT,BBINT);
typedef BBINT (*_m_seltra2_btemplate_createbindingblock_ii_m)(struct _m_seltra2_btemplate_obj*,BBINT,BBINT);
BBINT __m_seltra2_btemplate_createbindingblock_ii(struct _m_seltra2_btemplate_obj*,BBINT,BBINT);
struct BBClass__m_seltra2_btemplate {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_btemplate_create_block_image_m m_create_block_image;
	_m_seltra2_btemplate_createsingleblock_iiii_m m_createsingleblock_iiii;
	_m_seltra2_btemplate_createbindingblock_ii_m m_createbindingblock_ii;
};

struct _m_seltra2_btemplate_obj {
	struct BBClass__m_seltra2_btemplate* clas;
	BBINT __m_seltra2_btemplate_btype;
	BBINT __m_seltra2_btemplate_ch;
	BBINT __m_seltra2_btemplate_id;
};
extern struct BBClass__m_seltra2_btemplate _m_seltra2_btemplate;
extern BBARRAY _m_seltra2_btarray;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_mousep;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_mousec;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_blank;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_arroww;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_arrowe;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_arrown;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_arrows;
extern BBBYTE _m_seltra2_frame;
extern BBINT _m_seltra2_mox;
extern BBINT _m_seltra2_moy;
extern BBINT _m_seltra2_moz;
extern BBARRAY _m_seltra2_moxo;
extern BBARRAY _m_seltra2_moyo;
extern struct brl_max2d_image_TImage_obj* _m_seltra2_smi;
extern BBINT _m_seltra2_smt;
extern BBFLOAT _m_seltra2_zoom;
extern BBINT _m_seltra2_mozo;
extern BBFLOAT _m_seltra2_mozu;
extern BBINT _m_seltra2_moxc;
extern BBINT _m_seltra2_moyc;
extern BBARRAY _m_seltra2_moxco;
extern BBARRAY _m_seltra2_moyco;
extern BBINT _m_seltra2_redraw_map;
extern BBINT _m_seltra2_bi;
extern BBINT _m_seltra2_bgc;
extern BBINT _m_seltra2_camposx;
extern BBINT _m_seltra2_camposy;
extern BBINT _m_seltra2_time;
void __m_seltra2_grouparray_New(struct _m_seltra2_grouparray_obj* o);
typedef BBINT (*_m_seltra2_grouparray_add_Tbgroup_m)(struct _m_seltra2_grouparray_obj*,struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_grouparray_add_Tbgroup(struct _m_seltra2_grouparray_obj*,struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_grouparray_ordered_sort_ii_m)(struct _m_seltra2_grouparray_obj*,BBINT,BBINT);
BBINT __m_seltra2_grouparray_ordered_sort_ii(struct _m_seltra2_grouparray_obj*,BBINT,BBINT);
struct BBClass__m_seltra2_grouparray {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_grouparray_add_Tbgroup_m m_add_Tbgroup;
	_m_seltra2_grouparray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra2_grouparray_obj {
	struct BBClass__m_seltra2_grouparray* clas;
	BBARRAY __m_seltra2_grouparray_ga;
	BBINT __m_seltra2_grouparray_le;
};
extern struct BBClass__m_seltra2_grouparray _m_seltra2_grouparray;
extern struct _m_seltra2_grouparray_obj* _m_seltra2_garray;
void __m_seltra2_blockarray_New(struct _m_seltra2_blockarray_obj* o);
typedef BBINT (*_m_seltra2_blockarray_add_Tblock_m)(struct _m_seltra2_blockarray_obj*,struct _m_seltra2_block_obj*);
BBINT __m_seltra2_blockarray_add_Tblock(struct _m_seltra2_blockarray_obj*,struct _m_seltra2_block_obj*);
typedef BBINT (*_m_seltra2_blockarray_ordered_sort_ii_m)(struct _m_seltra2_blockarray_obj*,BBINT,BBINT);
BBINT __m_seltra2_blockarray_ordered_sort_ii(struct _m_seltra2_blockarray_obj*,BBINT,BBINT);
struct BBClass__m_seltra2_blockarray {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_blockarray_add_Tblock_m m_add_Tblock;
	_m_seltra2_blockarray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra2_blockarray_obj {
	struct BBClass__m_seltra2_blockarray* clas;
	BBARRAY __m_seltra2_blockarray_ba;
	BBINT __m_seltra2_blockarray_le;
};
extern struct BBClass__m_seltra2_blockarray _m_seltra2_blockarray;
extern struct _m_seltra2_blockarray_obj* _m_seltra2_barray;
extern struct _m_seltra2_blockarray_obj* _m_seltra2_wallgroup;
void __m_seltra2_redrawarray_New(struct _m_seltra2_redrawarray_obj* o);
typedef BBINT (*_m_seltra2_redrawarray_add_Tredraw_m)(struct _m_seltra2_redrawarray_obj*,struct _m_seltra2_redraw_obj*);
BBINT __m_seltra2_redrawarray_add_Tredraw(struct _m_seltra2_redrawarray_obj*,struct _m_seltra2_redraw_obj*);
typedef BBINT (*_m_seltra2_redrawarray_do_redraws_m)(struct _m_seltra2_redrawarray_obj*);
BBINT __m_seltra2_redrawarray_do_redraws(struct _m_seltra2_redrawarray_obj*);
struct BBClass__m_seltra2_redrawarray {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_redrawarray_add_Tredraw_m m_add_Tredraw;
	_m_seltra2_redrawarray_do_redraws_m m_do_redraws;
};

struct _m_seltra2_redrawarray_obj {
	struct BBClass__m_seltra2_redrawarray* clas;
	BBARRAY __m_seltra2_redrawarray_ra;
	BBINT __m_seltra2_redrawarray_le;
	BBINT __m_seltra2_redrawarray_drawn;
};
extern struct BBClass__m_seltra2_redrawarray _m_seltra2_redrawarray;
extern struct _m_seltra2_redrawarray_obj* _m_seltra2_rarray;
void __m_seltra2_generatorarray_New(struct _m_seltra2_generatorarray_obj* o);
typedef BBINT (*_m_seltra2_generatorarray_add_Tgen_m)(struct _m_seltra2_generatorarray_obj*,struct _m_seltra2_gen_obj*);
BBINT __m_seltra2_generatorarray_add_Tgen(struct _m_seltra2_generatorarray_obj*,struct _m_seltra2_gen_obj*);
typedef BBINT (*_m_seltra2_generatorarray_ordered_sort_ii_m)(struct _m_seltra2_generatorarray_obj*,BBINT,BBINT);
BBINT __m_seltra2_generatorarray_ordered_sort_ii(struct _m_seltra2_generatorarray_obj*,BBINT,BBINT);
struct BBClass__m_seltra2_generatorarray {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_generatorarray_add_Tgen_m m_add_Tgen;
	_m_seltra2_generatorarray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra2_generatorarray_obj {
	struct BBClass__m_seltra2_generatorarray* clas;
	BBARRAY __m_seltra2_generatorarray_ga;
	BBINT __m_seltra2_generatorarray_le;
};
extern struct BBClass__m_seltra2_generatorarray _m_seltra2_generatorarray;
extern struct _m_seltra2_generatorarray_obj* _m_seltra2_genarray;
void __m_seltra2_fastblockmap_New(struct _m_seltra2_fastblockmap_obj* o);
typedef struct _m_seltra2_block_obj* (*_m_seltra2_fastblockmap_fetch_i_m)(struct _m_seltra2_fastblockmap_obj*,BBINT);
struct _m_seltra2_block_obj* __m_seltra2_fastblockmap_fetch_i(struct _m_seltra2_fastblockmap_obj*,BBINT);
typedef struct _m_seltra2_block_obj* (*_m_seltra2_fastblockmap_vfetch_i_m)(struct _m_seltra2_fastblockmap_obj*,BBINT);
struct _m_seltra2_block_obj* __m_seltra2_fastblockmap_vfetch_i(struct _m_seltra2_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastblockmap_kfetch_i_m)(struct _m_seltra2_fastblockmap_obj*,BBINT);
BBINT __m_seltra2_fastblockmap_kfetch_i(struct _m_seltra2_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastblockmap_insert_iTblock_m)(struct _m_seltra2_fastblockmap_obj*,BBINT,struct _m_seltra2_block_obj*);
BBINT __m_seltra2_fastblockmap_insert_iTblock(struct _m_seltra2_fastblockmap_obj*,BBINT,struct _m_seltra2_block_obj*);
typedef BBINT (*_m_seltra2_fastblockmap_remove_i_m)(struct _m_seltra2_fastblockmap_obj*,BBINT);
BBINT __m_seltra2_fastblockmap_remove_i(struct _m_seltra2_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastblockmap_iter_m)(struct _m_seltra2_fastblockmap_obj*);
BBINT __m_seltra2_fastblockmap_iter(struct _m_seltra2_fastblockmap_obj*);
typedef BBINT (*_m_seltra2_fastblockmap_fastsort_m)(struct _m_seltra2_fastblockmap_obj*);
BBINT __m_seltra2_fastblockmap_fastsort(struct _m_seltra2_fastblockmap_obj*);
typedef BBINT (*_m_seltra2_fastblockmap_orderedsort_m)(struct _m_seltra2_fastblockmap_obj*);
BBINT __m_seltra2_fastblockmap_orderedsort(struct _m_seltra2_fastblockmap_obj*);
struct BBClass__m_seltra2_fastblockmap {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_fastblockmap_fetch_i_m m_fetch_i;
	_m_seltra2_fastblockmap_vfetch_i_m m_vfetch_i;
	_m_seltra2_fastblockmap_kfetch_i_m m_kfetch_i;
	_m_seltra2_fastblockmap_insert_iTblock_m m_insert_iTblock;
	_m_seltra2_fastblockmap_remove_i_m m_remove_i;
	_m_seltra2_fastblockmap_iter_m m_iter;
	_m_seltra2_fastblockmap_fastsort_m m_fastsort;
	_m_seltra2_fastblockmap_orderedsort_m m_orderedsort;
};

struct _m_seltra2_fastblockmap_obj {
	struct BBClass__m_seltra2_fastblockmap* clas;
	BBARRAY __m_seltra2_fastblockmap_v;
	BBARRAY __m_seltra2_fastblockmap_k;
	BBINT __m_seltra2_fastblockmap_le;
	BBINT __m_seltra2_fastblockmap_rc;
};
extern struct BBClass__m_seltra2_fastblockmap _m_seltra2_fastblockmap;
extern struct _m_seltra2_fastblockmap_obj* _m_seltra2_bmap;
void __m_seltra2_fastintmap_New(struct _m_seltra2_fastintmap_obj* o);
typedef BBINT (*_m_seltra2_fastintmap_fetch_i_m)(struct _m_seltra2_fastintmap_obj*,BBINT);
BBINT __m_seltra2_fastintmap_fetch_i(struct _m_seltra2_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastintmap_vfetch_i_m)(struct _m_seltra2_fastintmap_obj*,BBINT);
BBINT __m_seltra2_fastintmap_vfetch_i(struct _m_seltra2_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastintmap_kfetch_i_m)(struct _m_seltra2_fastintmap_obj*,BBINT);
BBINT __m_seltra2_fastintmap_kfetch_i(struct _m_seltra2_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastintmap_insert_ii_m)(struct _m_seltra2_fastintmap_obj*,BBINT,BBINT);
BBINT __m_seltra2_fastintmap_insert_ii(struct _m_seltra2_fastintmap_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra2_fastintmap_remove_i_m)(struct _m_seltra2_fastintmap_obj*,BBINT);
BBINT __m_seltra2_fastintmap_remove_i(struct _m_seltra2_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra2_fastintmap_iter_m)(struct _m_seltra2_fastintmap_obj*);
BBINT __m_seltra2_fastintmap_iter(struct _m_seltra2_fastintmap_obj*);
typedef BBINT (*_m_seltra2_fastintmap_fastsort_m)(struct _m_seltra2_fastintmap_obj*);
BBINT __m_seltra2_fastintmap_fastsort(struct _m_seltra2_fastintmap_obj*);
typedef BBINT (*_m_seltra2_fastintmap_orderedsort_m)(struct _m_seltra2_fastintmap_obj*);
BBINT __m_seltra2_fastintmap_orderedsort(struct _m_seltra2_fastintmap_obj*);
typedef BBINT (*_m_seltra2_fastintmap_set_null_value_i_m)(struct _m_seltra2_fastintmap_obj*,BBINT);
BBINT __m_seltra2_fastintmap_set_null_value_i(struct _m_seltra2_fastintmap_obj*,BBINT);
struct BBClass__m_seltra2_fastintmap {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_fastintmap_fetch_i_m m_fetch_i;
	_m_seltra2_fastintmap_vfetch_i_m m_vfetch_i;
	_m_seltra2_fastintmap_kfetch_i_m m_kfetch_i;
	_m_seltra2_fastintmap_insert_ii_m m_insert_ii;
	_m_seltra2_fastintmap_remove_i_m m_remove_i;
	_m_seltra2_fastintmap_iter_m m_iter;
	_m_seltra2_fastintmap_fastsort_m m_fastsort;
	_m_seltra2_fastintmap_orderedsort_m m_orderedsort;
	_m_seltra2_fastintmap_set_null_value_i_m m_set_null_value_i;
};

struct _m_seltra2_fastintmap_obj {
	struct BBClass__m_seltra2_fastintmap* clas;
	BBARRAY __m_seltra2_fastintmap_v;
	BBARRAY __m_seltra2_fastintmap_k;
	BBINT __m_seltra2_fastintmap_le;
	BBINT __m_seltra2_fastintmap_nl;
};
extern struct BBClass__m_seltra2_fastintmap _m_seltra2_fastintmap;
extern struct _m_seltra2_fastintmap_obj* _m_seltra2_thingmap;
extern BBARRAY _m_seltra2_chem;
BBFLOAT _m_seltra2_colfunc(BBFLOAT bbt_x);
BBINT _m_seltra2_create_block_mix();
BBINT _m_seltra2_remove_block_image_templates();
void __m_seltra2_block_New(struct _m_seltra2_block_obj* o);
typedef BBINT (*_m_seltra2_block_draw_m)(struct _m_seltra2_block_obj*);
BBINT __m_seltra2_block_draw(struct _m_seltra2_block_obj*);
typedef BBINT (*_m_seltra2_block_out_of_bounds_m)(struct _m_seltra2_block_obj*);
BBINT __m_seltra2_block_out_of_bounds(struct _m_seltra2_block_obj*);
typedef struct _m_seltra2_block_obj* (*_m_seltra2_block_spawn_ii_m)(struct _m_seltra2_block_obj*,BBINT,BBINT);
struct _m_seltra2_block_obj* __m_seltra2_block_spawn_ii(struct _m_seltra2_block_obj*,BBINT,BBINT);
struct BBClass__m_seltra2_block {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_block_draw_m m_draw;
	_m_seltra2_block_out_of_bounds_m m_out_of_bounds;
	_m_seltra2_block_spawn_ii_m m_spawn_ii;
};

struct _m_seltra2_block_obj {
	struct BBClass__m_seltra2_block* clas;
	BBINT __m_seltra2_block_btype;
	struct brl_max2d_image_TImage_obj* __m_seltra2_block_image;
	BBINT __m_seltra2_block_x;
	BBINT __m_seltra2_block_y;
	BBINT __m_seltra2_block_bit_tags;
	BBINT __m_seltra2_block_id;
	BBARRAY __m_seltra2_block_oldx;
	BBARRAY __m_seltra2_block_oldy;
	struct _m_seltra2_bgroup_obj* __m_seltra2_block_group;
};
extern struct BBClass__m_seltra2_block _m_seltra2_block;
BBINT _m_seltra2_wallblock(BBINT bbt_x,BBINT bbt_y,BBINT bbt_u);
BBINT _m_seltra2_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my);
void __m_seltra2_bgroup_New(struct _m_seltra2_bgroup_obj* o);
typedef BBINT (*_m_seltra2_bgroup_add_Tblock_m)(struct _m_seltra2_bgroup_obj*,struct _m_seltra2_block_obj*);
BBINT __m_seltra2_bgroup_add_Tblock(struct _m_seltra2_bgroup_obj*,struct _m_seltra2_block_obj*);
typedef BBINT (*_m_seltra2_bgroup_move_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_move(struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_bgroup_check_group_vel_i_f)();
BBINT _m_seltra2_bgroup_check_group_vel_i();
typedef BBINT (*_m_seltra2_bgroup_check_forces_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_check_forces(struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_bgroup_remove_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_remove(struct _m_seltra2_bgroup_obj*);
typedef struct _m_seltra2_bgroup_obj* (*_m_seltra2_bgroup_spawn_ii_m)(struct _m_seltra2_bgroup_obj*,BBINT,BBINT);
struct _m_seltra2_bgroup_obj* __m_seltra2_bgroup_spawn_ii(struct _m_seltra2_bgroup_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra2_bgroup_checkarrows_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_checkarrows(struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_bgroup_out_of_bounds_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_out_of_bounds(struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_bgroup_draw_m)(struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_draw(struct _m_seltra2_bgroup_obj*);
typedef BBINT (*_m_seltra2_bgroup_merge_Tbgroup_m)(struct _m_seltra2_bgroup_obj*,struct _m_seltra2_bgroup_obj*);
BBINT __m_seltra2_bgroup_merge_Tbgroup(struct _m_seltra2_bgroup_obj*,struct _m_seltra2_bgroup_obj*);
struct BBClass__m_seltra2_bgroup {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_bgroup_add_Tblock_m m_add_Tblock;
	_m_seltra2_bgroup_move_m m_move;
	_m_seltra2_bgroup_check_group_vel_i_f f_check_group_vel_i;
	_m_seltra2_bgroup_check_forces_m m_check_forces;
	_m_seltra2_bgroup_remove_m m_remove;
	_m_seltra2_bgroup_spawn_ii_m m_spawn_ii;
	_m_seltra2_bgroup_checkarrows_m m_checkarrows;
	_m_seltra2_bgroup_out_of_bounds_m m_out_of_bounds;
	_m_seltra2_bgroup_draw_m m_draw;
	_m_seltra2_bgroup_merge_Tbgroup_m m_merge_Tbgroup;
};

struct _m_seltra2_bgroup_obj {
	struct BBClass__m_seltra2_bgroup* clas;
	struct _m_seltra2_blockarray_obj* __m_seltra2_bgroup_blist;
	BBINT __m_seltra2_bgroup_xv;
	BBINT __m_seltra2_bgroup_yv;
	BBINT __m_seltra2_bgroup_bittags;
	BBINT __m_seltra2_bgroup_id;
	BBINT __m_seltra2_bgroup_xf;
	BBINT __m_seltra2_bgroup_yf;
};
extern struct BBClass__m_seltra2_bgroup _m_seltra2_bgroup;
void __m_seltra2_redraw_New(struct _m_seltra2_redraw_obj* o);
struct BBClass__m_seltra2_redraw {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
};

struct _m_seltra2_redraw_obj {
	struct BBClass__m_seltra2_redraw* clas;
	BBINT __m_seltra2_redraw_x;
	BBINT __m_seltra2_redraw_y;
	BBBYTE __m_seltra2_redraw_redraws;
};
extern struct BBClass__m_seltra2_redraw _m_seltra2_redraw;
BBINT _m_seltra2_update_bgroups();
BBINT _m_seltra2_mouse_input_map();
BBINT _m_seltra2_mouse_input_editbar();
BBINT _m_seltra2_get_mouse_input();
BBINT _m_seltra2_get_user_input();
void __m_seltra2_gen_New(struct _m_seltra2_gen_obj* o);
typedef BBINT (*_m_seltra2_gen_genblock_m)(struct _m_seltra2_gen_obj*);
BBINT __m_seltra2_gen_genblock(struct _m_seltra2_gen_obj*);
typedef BBINT (*_m_seltra2_gen_update_m)(struct _m_seltra2_gen_obj*);
BBINT __m_seltra2_gen_update(struct _m_seltra2_gen_obj*);
struct BBClass__m_seltra2_gen {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_seltra2_gen_genblock_m m_genblock;
	_m_seltra2_gen_update_m m_update;
};

struct _m_seltra2_gen_obj {
	struct BBClass__m_seltra2_gen* clas;
	BBINT __m_seltra2_gen_x;
	BBINT __m_seltra2_gen_y;
	BBARRAY __m_seltra2_gen_bglist;
	BBINT __m_seltra2_gen_le;
	BBINT __m_seltra2_gen_rate;
	BBINT __m_seltra2_gen_n;
	BBINT __m_seltra2_gen_t;
	BBINT __m_seltra2_gen_id;
	BBINT __m_seltra2_gen_bitflags;
};
extern struct BBClass__m_seltra2_gen _m_seltra2_gen;
BBINT _m_seltra2_update_gens();
BBINT _m_seltra2_redraw_cell(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra2_redraw3x3(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra2_draw_things();
BBINT _m_seltra2_draw_barray();
BBINT _m_seltra2_draw_walls();
BBINT _m_seltra2_draw_editbar();
BBINT _m_seltra2_update_display();
struct brl_max2d_image_TImage_obj* _m_seltra2_loadimage2(BBSTRING bbt_fn);
BBINT _m_seltra2_Create_world();
BBINT _m_seltra2_placegene(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra2_create_chem_numbers();
BBFLOAT _m_seltra2_colfuncx(BBFLOAT bbt_x);
BBINT _m_seltra2_demo_color_spread();

#endif
