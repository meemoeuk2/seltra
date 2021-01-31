#ifndef SELTRA_SELTRA_BMX_CONSOLE_DEBUG_WIN32_X86_H
#define SELTRA_SELTRA_BMX_CONSOLE_DEBUG_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.debug.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.win32.x86.h>
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
#include <brl.mod/threads.mod/.bmx/threads.bmx.debug.win32.x86.h>
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
struct _m_seltra_grouparray_obj;
struct _m_seltra_blockarray_obj;
struct _m_seltra_redrawarray_obj;
struct _m_seltra_fastblockmap_obj;
struct _m_seltra_fastintmap_obj;
struct _m_seltra_block_obj;
struct _m_seltra_bgroup_obj;
struct _m_seltra_redraw_obj;
struct _m_seltra_gen_obj;
extern BBINT _m_seltra_gw;
extern BBINT _m_seltra_gh;
extern BBARRAY _m_seltra_imagelist;
extern struct brl_max2d_image_TImage_obj* _m_seltra_block1;
extern BBINT _m_seltra_noi;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn);
extern struct brl_max2d_image_TImage_obj* _m_seltra_wall1;
extern struct brl_max2d_image_TImage_obj* _m_seltra_gene;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blank;
extern struct brl_max2d_image_TImage_obj* _m_seltra_mousep;
extern struct brl_max2d_image_TImage_obj* _m_seltra_mousec;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arroww;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrowe;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrown;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrows;
extern BBBYTE _m_seltra_frame;
extern BBINT _m_seltra_mox;
extern BBINT _m_seltra_moy;
extern BBINT _m_seltra_moz;
extern struct brl_max2d_image_TImage_obj* _m_seltra_smi;
extern BBINT _m_seltra_smt;
extern BBFLOAT _m_seltra_zoom;
extern BBINT _m_seltra_mozo;
extern BBFLOAT _m_seltra_mozu;
extern BBINT _m_seltra_moxc;
extern BBINT _m_seltra_moyc;
extern BBARRAY _m_seltra_moxco;
extern BBARRAY _m_seltra_moyco;
extern BBINT _m_seltra_redraw_map;
extern BBINT _m_seltra_bi;
extern BBINT _m_seltra_bgc;
extern BBINT _m_seltra_camposx;
extern BBINT _m_seltra_camposy;
void __m_seltra_grouparray_New(struct _m_seltra_grouparray_obj* o);
typedef BBINT (*_m_seltra_grouparray_add_Tbgroup_m)(struct _m_seltra_grouparray_obj*,struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_grouparray_add_Tbgroup(struct _m_seltra_grouparray_obj*,struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_grouparray_ordered_sort_ii_m)(struct _m_seltra_grouparray_obj*,BBINT,BBINT);
BBINT __m_seltra_grouparray_ordered_sort_ii(struct _m_seltra_grouparray_obj*,BBINT,BBINT);
struct BBClass__m_seltra_grouparray {
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
	_m_seltra_grouparray_add_Tbgroup_m m_add_Tbgroup;
	_m_seltra_grouparray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra_grouparray_obj {
	struct BBClass__m_seltra_grouparray* clas;
	BBARRAY __m_seltra_grouparray_ga;
	BBINT __m_seltra_grouparray_le;
};
extern struct BBClass__m_seltra_grouparray _m_seltra_grouparray;
extern struct _m_seltra_grouparray_obj* _m_seltra_garray;
void __m_seltra_blockarray_New(struct _m_seltra_blockarray_obj* o);
typedef BBINT (*_m_seltra_blockarray_add_Tblock_m)(struct _m_seltra_blockarray_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_blockarray_add_Tblock(struct _m_seltra_blockarray_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_blockarray_ordered_sort_ii_m)(struct _m_seltra_blockarray_obj*,BBINT,BBINT);
BBINT __m_seltra_blockarray_ordered_sort_ii(struct _m_seltra_blockarray_obj*,BBINT,BBINT);
struct BBClass__m_seltra_blockarray {
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
	_m_seltra_blockarray_add_Tblock_m m_add_Tblock;
	_m_seltra_blockarray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra_blockarray_obj {
	struct BBClass__m_seltra_blockarray* clas;
	BBARRAY __m_seltra_blockarray_ba;
	BBINT __m_seltra_blockarray_le;
};
extern struct BBClass__m_seltra_blockarray _m_seltra_blockarray;
extern struct _m_seltra_blockarray_obj* _m_seltra_barray;
extern struct brl_linkedlist_TList_obj* _m_seltra_wallgroup;
void __m_seltra_redrawarray_New(struct _m_seltra_redrawarray_obj* o);
typedef BBINT (*_m_seltra_redrawarray_add_Tredraw_m)(struct _m_seltra_redrawarray_obj*,struct _m_seltra_redraw_obj*);
BBINT __m_seltra_redrawarray_add_Tredraw(struct _m_seltra_redrawarray_obj*,struct _m_seltra_redraw_obj*);
typedef BBINT (*_m_seltra_redrawarray_do_redraws_m)(struct _m_seltra_redrawarray_obj*);
BBINT __m_seltra_redrawarray_do_redraws(struct _m_seltra_redrawarray_obj*);
struct BBClass__m_seltra_redrawarray {
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
	_m_seltra_redrawarray_add_Tredraw_m m_add_Tredraw;
	_m_seltra_redrawarray_do_redraws_m m_do_redraws;
};

struct _m_seltra_redrawarray_obj {
	struct BBClass__m_seltra_redrawarray* clas;
	BBARRAY __m_seltra_redrawarray_ra;
	BBINT __m_seltra_redrawarray_le;
	BBINT __m_seltra_redrawarray_drawn;
};
extern struct BBClass__m_seltra_redrawarray _m_seltra_redrawarray;
extern struct _m_seltra_redrawarray_obj* _m_seltra_rarray;
void __m_seltra_fastblockmap_New(struct _m_seltra_fastblockmap_obj* o);
typedef struct _m_seltra_block_obj* (*_m_seltra_fastblockmap_fetch_i_m)(struct _m_seltra_fastblockmap_obj*,BBINT);
struct _m_seltra_block_obj* __m_seltra_fastblockmap_fetch_i(struct _m_seltra_fastblockmap_obj*,BBINT);
typedef struct _m_seltra_block_obj* (*_m_seltra_fastblockmap_vfetch_i_m)(struct _m_seltra_fastblockmap_obj*,BBINT);
struct _m_seltra_block_obj* __m_seltra_fastblockmap_vfetch_i(struct _m_seltra_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastblockmap_kfetch_i_m)(struct _m_seltra_fastblockmap_obj*,BBINT);
BBINT __m_seltra_fastblockmap_kfetch_i(struct _m_seltra_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastblockmap_insert_iTblock_m)(struct _m_seltra_fastblockmap_obj*,BBINT,struct _m_seltra_block_obj*);
BBINT __m_seltra_fastblockmap_insert_iTblock(struct _m_seltra_fastblockmap_obj*,BBINT,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_fastblockmap_remove_i_m)(struct _m_seltra_fastblockmap_obj*,BBINT);
BBINT __m_seltra_fastblockmap_remove_i(struct _m_seltra_fastblockmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastblockmap_iter_m)(struct _m_seltra_fastblockmap_obj*);
BBINT __m_seltra_fastblockmap_iter(struct _m_seltra_fastblockmap_obj*);
typedef BBINT (*_m_seltra_fastblockmap_fastsort_m)(struct _m_seltra_fastblockmap_obj*);
BBINT __m_seltra_fastblockmap_fastsort(struct _m_seltra_fastblockmap_obj*);
typedef BBINT (*_m_seltra_fastblockmap_orderedsort_m)(struct _m_seltra_fastblockmap_obj*);
BBINT __m_seltra_fastblockmap_orderedsort(struct _m_seltra_fastblockmap_obj*);
struct BBClass__m_seltra_fastblockmap {
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
	_m_seltra_fastblockmap_fetch_i_m m_fetch_i;
	_m_seltra_fastblockmap_vfetch_i_m m_vfetch_i;
	_m_seltra_fastblockmap_kfetch_i_m m_kfetch_i;
	_m_seltra_fastblockmap_insert_iTblock_m m_insert_iTblock;
	_m_seltra_fastblockmap_remove_i_m m_remove_i;
	_m_seltra_fastblockmap_iter_m m_iter;
	_m_seltra_fastblockmap_fastsort_m m_fastsort;
	_m_seltra_fastblockmap_orderedsort_m m_orderedsort;
};

struct _m_seltra_fastblockmap_obj {
	struct BBClass__m_seltra_fastblockmap* clas;
	BBARRAY __m_seltra_fastblockmap_v;
	BBARRAY __m_seltra_fastblockmap_k;
	BBINT __m_seltra_fastblockmap_le;
	BBINT __m_seltra_fastblockmap_rc;
};
extern struct BBClass__m_seltra_fastblockmap _m_seltra_fastblockmap;
extern struct _m_seltra_fastblockmap_obj* _m_seltra_bmap;
void __m_seltra_fastintmap_New(struct _m_seltra_fastintmap_obj* o);
typedef BBINT (*_m_seltra_fastintmap_fetch_i_m)(struct _m_seltra_fastintmap_obj*,BBINT);
BBINT __m_seltra_fastintmap_fetch_i(struct _m_seltra_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastintmap_vfetch_i_m)(struct _m_seltra_fastintmap_obj*,BBINT);
BBINT __m_seltra_fastintmap_vfetch_i(struct _m_seltra_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastintmap_kfetch_i_m)(struct _m_seltra_fastintmap_obj*,BBINT);
BBINT __m_seltra_fastintmap_kfetch_i(struct _m_seltra_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastintmap_insert_ii_m)(struct _m_seltra_fastintmap_obj*,BBINT,BBINT);
BBINT __m_seltra_fastintmap_insert_ii(struct _m_seltra_fastintmap_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra_fastintmap_remove_i_m)(struct _m_seltra_fastintmap_obj*,BBINT);
BBINT __m_seltra_fastintmap_remove_i(struct _m_seltra_fastintmap_obj*,BBINT);
typedef BBINT (*_m_seltra_fastintmap_iter_m)(struct _m_seltra_fastintmap_obj*);
BBINT __m_seltra_fastintmap_iter(struct _m_seltra_fastintmap_obj*);
typedef BBINT (*_m_seltra_fastintmap_fastsort_m)(struct _m_seltra_fastintmap_obj*);
BBINT __m_seltra_fastintmap_fastsort(struct _m_seltra_fastintmap_obj*);
typedef BBINT (*_m_seltra_fastintmap_orderedsort_m)(struct _m_seltra_fastintmap_obj*);
BBINT __m_seltra_fastintmap_orderedsort(struct _m_seltra_fastintmap_obj*);
typedef BBINT (*_m_seltra_fastintmap_set_null_value_i_m)(struct _m_seltra_fastintmap_obj*,BBINT);
BBINT __m_seltra_fastintmap_set_null_value_i(struct _m_seltra_fastintmap_obj*,BBINT);
struct BBClass__m_seltra_fastintmap {
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
	_m_seltra_fastintmap_fetch_i_m m_fetch_i;
	_m_seltra_fastintmap_vfetch_i_m m_vfetch_i;
	_m_seltra_fastintmap_kfetch_i_m m_kfetch_i;
	_m_seltra_fastintmap_insert_ii_m m_insert_ii;
	_m_seltra_fastintmap_remove_i_m m_remove_i;
	_m_seltra_fastintmap_iter_m m_iter;
	_m_seltra_fastintmap_fastsort_m m_fastsort;
	_m_seltra_fastintmap_orderedsort_m m_orderedsort;
	_m_seltra_fastintmap_set_null_value_i_m m_set_null_value_i;
};

struct _m_seltra_fastintmap_obj {
	struct BBClass__m_seltra_fastintmap* clas;
	BBARRAY __m_seltra_fastintmap_v;
	BBARRAY __m_seltra_fastintmap_k;
	BBINT __m_seltra_fastintmap_le;
	BBINT __m_seltra_fastintmap_nl;
};
extern struct BBClass__m_seltra_fastintmap _m_seltra_fastintmap;
extern struct _m_seltra_fastintmap_obj* _m_seltra_thingmap;
void __m_seltra_block_New(struct _m_seltra_block_obj* o);
typedef BBINT (*_m_seltra_block_draw_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_out_of_bounds_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj*);
typedef struct _m_seltra_block_obj* (*_m_seltra_block_spawn_ii_m)(struct _m_seltra_block_obj*,BBINT,BBINT);
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj*,BBINT,BBINT);
struct BBClass__m_seltra_block {
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
	_m_seltra_block_draw_m m_draw;
	_m_seltra_block_out_of_bounds_m m_out_of_bounds;
	_m_seltra_block_spawn_ii_m m_spawn_ii;
};

struct _m_seltra_block_obj {
	struct BBClass__m_seltra_block* clas;
	BBINT __m_seltra_block_btype;
	struct brl_max2d_image_TImage_obj* __m_seltra_block_image;
	BBINT __m_seltra_block_x;
	BBINT __m_seltra_block_y;
	BBINT __m_seltra_block_bit_tags;
	BBINT __m_seltra_block_id;
	BBARRAY __m_seltra_block_oldx;
	BBARRAY __m_seltra_block_oldy;
	struct _m_seltra_bgroup_obj* __m_seltra_block_group;
};
extern struct BBClass__m_seltra_block _m_seltra_block;
BBINT _m_seltra_wallblock(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my);
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o);
typedef BBINT (*_m_seltra_bgroup_move_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_remove_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj*);
typedef struct _m_seltra_bgroup_obj* (*_m_seltra_bgroup_spawn_ii_m)(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra_bgroup_checkarrows_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_out_of_bounds_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_draw_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj*);
struct BBClass__m_seltra_bgroup {
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
	_m_seltra_bgroup_move_m m_move;
	_m_seltra_bgroup_remove_m m_remove;
	_m_seltra_bgroup_spawn_ii_m m_spawn_ii;
	_m_seltra_bgroup_checkarrows_m m_checkarrows;
	_m_seltra_bgroup_out_of_bounds_m m_out_of_bounds;
	_m_seltra_bgroup_draw_m m_draw;
};

struct _m_seltra_bgroup_obj {
	struct BBClass__m_seltra_bgroup* clas;
	struct brl_linkedlist_TList_obj* __m_seltra_bgroup_blist;
	BBINT __m_seltra_bgroup_xv;
	BBINT __m_seltra_bgroup_yv;
	BBINT __m_seltra_bgroup_bittags;
	BBINT __m_seltra_bgroup_id;
};
extern struct BBClass__m_seltra_bgroup _m_seltra_bgroup;
void __m_seltra_redraw_New(struct _m_seltra_redraw_obj* o);
struct BBClass__m_seltra_redraw {
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

struct _m_seltra_redraw_obj {
	struct BBClass__m_seltra_redraw* clas;
	BBINT __m_seltra_redraw_x;
	BBINT __m_seltra_redraw_y;
	BBBYTE __m_seltra_redraw_redraws;
};
extern struct BBClass__m_seltra_redraw _m_seltra_redraw;
BBINT _m_seltra_update_bgroups();
BBINT _m_seltra_createsingleblock(BBINT bbt_btype,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv);
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o);
typedef BBINT (*_m_seltra_gen_genblock_m)(struct _m_seltra_gen_obj*);
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj*);
struct BBClass__m_seltra_gen {
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
	_m_seltra_gen_genblock_m m_genblock;
};

struct _m_seltra_gen_obj {
	struct BBClass__m_seltra_gen* clas;
	BBINT __m_seltra_gen_x;
	BBINT __m_seltra_gen_y;
	BBARRAY __m_seltra_gen_bglist;
	BBINT __m_seltra_gen_le;
	BBINT __m_seltra_gen_rate;
	BBINT __m_seltra_gen_n;
	BBINT __m_seltra_gen_t;
	BBINT __m_seltra_gen_bitflags;
};
extern struct BBClass__m_seltra_gen _m_seltra_gen;
BBINT _m_seltra_placegene(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_mouse_input_map();
BBINT _m_seltra_mouse_input_editbar();
BBINT _m_seltra_get_mouse_input();
BBINT _m_seltra_get_user_input();
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_draw_things();
BBINT _m_seltra_draw_barray();
BBINT _m_seltra_draw_walls();
BBINT _m_seltra_draw_editbar();
BBINT _m_seltra_update_display();
BBINT _m_seltra_Create_world();

#endif
