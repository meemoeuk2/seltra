#ifndef SELTRA_SELTRA_BMX_GUI_RELEASE_WIN32_X64_H
#define SELTRA_SELTRA_BMX_GUI_RELEASE_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.win32.x64.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.release.win32.x64.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.release.win32.x64.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.win32.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.release.win32.x64.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.release.win32.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.release.win32.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.release.win32.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.release.win32.x64.h>
#include <brl.mod/crypto.mod/.bmx/crypto.bmx.release.win32.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.release.win32.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.release.win32.x64.h>
#include <brl.mod/data.mod/.bmx/data.bmx.release.win32.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.release.win32.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.release.win32.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.release.win32.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.release.win32.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.win32.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.win32.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.release.win32.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.release.win32.x64.h>
#include <brl.mod/json.mod/.bmx/json.bmx.release.win32.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.win32.x64.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.release.win32.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.win32.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.win32.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.release.win32.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.release.win32.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.release.win32.x64.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.release.win32.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.release.win32.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.release.win32.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.release.win32.x64.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.release.win32.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.release.win32.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.release.win32.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.release.win32.x64.h>
#include <brl.mod/xml.mod/.bmx/xml.bmx.release.win32.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.release.win32.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.win32.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.release.win32.x64.h>
#include <pub.mod/macos.mod/.bmx/macos.bmx.release.win32.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.release.win32.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.release.win32.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.release.win32.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.release.win32.x64.h>
int _bb_main();
struct _m_seltra_btemplate_obj;
struct _m_seltra_grouparray_obj;
struct _m_seltra_blockarray_obj;
struct _m_seltra_subarray_obj;
struct _m_seltra_subgrouparray_obj;
struct _m_seltra_block_obj;
struct _m_seltra_redrawarray_obj;
struct _m_seltra_generatorarray_obj;
struct _m_seltra_fastblockmap_obj;
struct _m_seltra_fastintmap_obj;
struct _m_seltra_substratemap_obj;
struct _m_seltra_sgroup_obj;
struct _m_seltra_substrate_obj;
struct _m_seltra_redraw_obj;
struct _m_seltra_bgroup_obj;
struct _m_seltra_gen_obj;
extern BBINT _m_seltra_gw;
extern BBINT _m_seltra_gh;
extern BBARRAY _m_seltra_imagelist;
extern BBARRAY _m_seltra_blockart;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockw;
extern BBINT _m_seltra_noi;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage3(BBSTRING bbt_fn);
extern struct brl_max2d_image_TImage_obj* _m_seltra_blocko;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockc;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blocks;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockq;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockx;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockd;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blockb;
void __m_seltra_btemplate_New(struct _m_seltra_btemplate_obj* o);
typedef BBINT (*_m_seltra_btemplate_create_block_image_m)(struct _m_seltra_btemplate_obj*);
BBINT __m_seltra_btemplate_create_block_image(struct _m_seltra_btemplate_obj*);
typedef struct _m_seltra_bgroup_obj* (*_m_seltra_btemplate_createsingleblock_iiii_m)(struct _m_seltra_btemplate_obj*,BBINT,BBINT,BBINT,BBINT);
struct _m_seltra_bgroup_obj* __m_seltra_btemplate_createsingleblock_iiii(struct _m_seltra_btemplate_obj*,BBINT,BBINT,BBINT,BBINT);
typedef BBINT (*_m_seltra_btemplate_setbindingblock_ii_m)(struct _m_seltra_btemplate_obj*,BBINT,BBINT);
BBINT __m_seltra_btemplate_setbindingblock_ii(struct _m_seltra_btemplate_obj*,BBINT,BBINT);
struct BBClass__m_seltra_btemplate {
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
	_m_seltra_btemplate_create_block_image_m m_create_block_image;
	_m_seltra_btemplate_createsingleblock_iiii_m m_createsingleblock_iiii;
	_m_seltra_btemplate_setbindingblock_ii_m m_setbindingblock_ii;
};

struct _m_seltra_btemplate_obj {
	struct BBClass__m_seltra_btemplate* clas;
	BBINT __m_seltra_btemplate_btype;
	BBINT __m_seltra_btemplate_ch;
	BBINT __m_seltra_btemplate_id;
	BBINT __m_seltra_btemplate_maxbonds;
};
extern struct BBClass__m_seltra_btemplate _m_seltra_btemplate;
extern BBARRAY _m_seltra_btarray;
extern struct brl_max2d_image_TImage_obj* _m_seltra_mousep;
extern struct brl_max2d_image_TImage_obj* _m_seltra_mousec;
extern struct brl_max2d_image_TImage_obj* _m_seltra_blank;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arroww;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrowe;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrown;
extern struct brl_max2d_image_TImage_obj* _m_seltra_arrows;
extern BBBYTE _m_seltra_frame;
extern BBINT _m_seltra_mox;
extern BBINT _m_seltra_moy;
extern BBINT _m_seltra_moz;
extern BBARRAY _m_seltra_moxo;
extern BBARRAY _m_seltra_moyo;
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
extern BBINT _m_seltra_bgc;
extern BBINT _m_seltra_bc;
extern BBINT _m_seltra_sgc;
extern BBINT _m_seltra_sc;
extern BBINT _m_seltra_camposx;
extern BBINT _m_seltra_camposy;
extern BBINT _m_seltra_time;
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
void __m_seltra_subarray_New(struct _m_seltra_subarray_obj* o);
typedef BBINT (*_m_seltra_subarray_add_Tsubstrate_m)(struct _m_seltra_subarray_obj*,struct _m_seltra_substrate_obj*);
BBINT __m_seltra_subarray_add_Tsubstrate(struct _m_seltra_subarray_obj*,struct _m_seltra_substrate_obj*);
typedef BBINT (*_m_seltra_subarray_ordered_sort_ii_m)(struct _m_seltra_subarray_obj*,BBINT,BBINT);
BBINT __m_seltra_subarray_ordered_sort_ii(struct _m_seltra_subarray_obj*,BBINT,BBINT);
struct BBClass__m_seltra_subarray {
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
	_m_seltra_subarray_add_Tsubstrate_m m_add_Tsubstrate;
	_m_seltra_subarray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra_subarray_obj {
	struct BBClass__m_seltra_subarray* clas;
	BBARRAY __m_seltra_subarray_sa;
	BBINT __m_seltra_subarray_le;
};
extern struct BBClass__m_seltra_subarray _m_seltra_subarray;
extern struct _m_seltra_subarray_obj* _m_seltra_sarray;
void __m_seltra_subgrouparray_New(struct _m_seltra_subgrouparray_obj* o);
typedef BBINT (*_m_seltra_subgrouparray_add_Tsgroup_m)(struct _m_seltra_subgrouparray_obj*,struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_subgrouparray_add_Tsgroup(struct _m_seltra_subgrouparray_obj*,struct _m_seltra_sgroup_obj*);
typedef BBINT (*_m_seltra_subgrouparray_ordered_sort_ii_m)(struct _m_seltra_subgrouparray_obj*,BBINT,BBINT);
BBINT __m_seltra_subgrouparray_ordered_sort_ii(struct _m_seltra_subgrouparray_obj*,BBINT,BBINT);
struct BBClass__m_seltra_subgrouparray {
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
	_m_seltra_subgrouparray_add_Tsgroup_m m_add_Tsgroup;
	_m_seltra_subgrouparray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra_subgrouparray_obj {
	struct BBClass__m_seltra_subgrouparray* clas;
	BBARRAY __m_seltra_subgrouparray_sga;
	BBINT __m_seltra_subgrouparray_le;
};
extern struct BBClass__m_seltra_subgrouparray _m_seltra_subgrouparray;
extern struct _m_seltra_subgrouparray_obj* _m_seltra_sgarray;
void __m_seltra_block_New(struct _m_seltra_block_obj* o);
typedef BBINT (*_m_seltra_block_Del_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_Del(struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_draw_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_out_of_bounds_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj*);
typedef struct _m_seltra_block_obj* (*_m_seltra_block_spawn_ii_m)(struct _m_seltra_block_obj*,BBINT,BBINT);
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra_block_checkchem_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_block_checkchem_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_get_moli_chem_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_get_moli_chem(struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_bondcheck_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_block_bondcheck_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_checkchem2_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_block_checkchem2_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBARRAY (*_m_seltra_block_checkchem_detach_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBARRAY __m_seltra_block_checkchem_detach_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBARRAY (*_m_seltra_block_checkchem3_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBARRAY __m_seltra_block_checkchem3_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_try_flood_split_Tblock_m)(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_block_try_flood_split_Tblock(struct _m_seltra_block_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_block_repblock_m)(struct _m_seltra_block_obj*);
BBINT __m_seltra_block_repblock(struct _m_seltra_block_obj*);
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
	_m_seltra_block_Del_m m_Del;
	_m_seltra_block_draw_m m_draw;
	_m_seltra_block_out_of_bounds_m m_out_of_bounds;
	_m_seltra_block_spawn_ii_m m_spawn_ii;
	_m_seltra_block_checkchem_Tblock_m m_checkchem_Tblock;
	_m_seltra_block_get_moli_chem_m m_get_moli_chem;
	_m_seltra_block_bondcheck_Tblock_m m_bondcheck_Tblock;
	_m_seltra_block_checkchem2_Tblock_m m_checkchem2_Tblock;
	_m_seltra_block_checkchem_detach_Tblock_m m_checkchem_detach_Tblock;
	_m_seltra_block_checkchem3_Tblock_m m_checkchem3_Tblock;
	_m_seltra_block_try_flood_split_Tblock_m m_try_flood_split_Tblock;
	_m_seltra_block_repblock_m m_repblock;
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
	BBINT __m_seltra_block_ch;
	BBINT __m_seltra_block_mch;
	BBINT __m_seltra_block_bt;
	BBINT __m_seltra_block_bonds;
	BBINT __m_seltra_block_maxbonds;
	BBARRAY __m_seltra_block_bond;
};
extern struct BBClass__m_seltra_block _m_seltra_block;
extern struct _m_seltra_blockarray_obj* _m_seltra_wallgroup;
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
void __m_seltra_generatorarray_New(struct _m_seltra_generatorarray_obj* o);
typedef BBINT (*_m_seltra_generatorarray_add_Tgen_m)(struct _m_seltra_generatorarray_obj*,struct _m_seltra_gen_obj*);
BBINT __m_seltra_generatorarray_add_Tgen(struct _m_seltra_generatorarray_obj*,struct _m_seltra_gen_obj*);
typedef BBINT (*_m_seltra_generatorarray_ordered_sort_ii_m)(struct _m_seltra_generatorarray_obj*,BBINT,BBINT);
BBINT __m_seltra_generatorarray_ordered_sort_ii(struct _m_seltra_generatorarray_obj*,BBINT,BBINT);
struct BBClass__m_seltra_generatorarray {
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
	_m_seltra_generatorarray_add_Tgen_m m_add_Tgen;
	_m_seltra_generatorarray_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_seltra_generatorarray_obj {
	struct BBClass__m_seltra_generatorarray* clas;
	BBARRAY __m_seltra_generatorarray_ga;
	BBINT __m_seltra_generatorarray_le;
};
extern struct BBClass__m_seltra_generatorarray _m_seltra_generatorarray;
extern struct _m_seltra_generatorarray_obj* _m_seltra_genarray;
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
void __m_seltra_substratemap_New(struct _m_seltra_substratemap_obj* o);
typedef struct _m_seltra_substrate_obj* (*_m_seltra_substratemap_fetch_i_m)(struct _m_seltra_substratemap_obj*,BBINT);
struct _m_seltra_substrate_obj* __m_seltra_substratemap_fetch_i(struct _m_seltra_substratemap_obj*,BBINT);
typedef struct _m_seltra_substrate_obj* (*_m_seltra_substratemap_vfetch_i_m)(struct _m_seltra_substratemap_obj*,BBINT);
struct _m_seltra_substrate_obj* __m_seltra_substratemap_vfetch_i(struct _m_seltra_substratemap_obj*,BBINT);
typedef BBINT (*_m_seltra_substratemap_kfetch_i_m)(struct _m_seltra_substratemap_obj*,BBINT);
BBINT __m_seltra_substratemap_kfetch_i(struct _m_seltra_substratemap_obj*,BBINT);
typedef BBINT (*_m_seltra_substratemap_insert_iTsubstrate_m)(struct _m_seltra_substratemap_obj*,BBINT,struct _m_seltra_substrate_obj*);
BBINT __m_seltra_substratemap_insert_iTsubstrate(struct _m_seltra_substratemap_obj*,BBINT,struct _m_seltra_substrate_obj*);
typedef BBINT (*_m_seltra_substratemap_remove_i_m)(struct _m_seltra_substratemap_obj*,BBINT);
BBINT __m_seltra_substratemap_remove_i(struct _m_seltra_substratemap_obj*,BBINT);
typedef BBINT (*_m_seltra_substratemap_iter_m)(struct _m_seltra_substratemap_obj*);
BBINT __m_seltra_substratemap_iter(struct _m_seltra_substratemap_obj*);
typedef BBINT (*_m_seltra_substratemap_fastsort_m)(struct _m_seltra_substratemap_obj*);
BBINT __m_seltra_substratemap_fastsort(struct _m_seltra_substratemap_obj*);
typedef BBINT (*_m_seltra_substratemap_orderedsort_m)(struct _m_seltra_substratemap_obj*);
BBINT __m_seltra_substratemap_orderedsort(struct _m_seltra_substratemap_obj*);
struct BBClass__m_seltra_substratemap {
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
	_m_seltra_substratemap_fetch_i_m m_fetch_i;
	_m_seltra_substratemap_vfetch_i_m m_vfetch_i;
	_m_seltra_substratemap_kfetch_i_m m_kfetch_i;
	_m_seltra_substratemap_insert_iTsubstrate_m m_insert_iTsubstrate;
	_m_seltra_substratemap_remove_i_m m_remove_i;
	_m_seltra_substratemap_iter_m m_iter;
	_m_seltra_substratemap_fastsort_m m_fastsort;
	_m_seltra_substratemap_orderedsort_m m_orderedsort;
};

struct _m_seltra_substratemap_obj {
	struct BBClass__m_seltra_substratemap* clas;
	BBARRAY __m_seltra_substratemap_v;
	BBARRAY __m_seltra_substratemap_k;
	BBINT __m_seltra_substratemap_le;
	BBINT __m_seltra_substratemap_rc;
};
extern struct BBClass__m_seltra_substratemap _m_seltra_substratemap;
extern struct _m_seltra_substratemap_obj* _m_seltra_smap;
extern BBARRAY _m_seltra_chem;
BBINT _m_seltra_create_chem_numbers();
BBFLOAT _m_seltra_colfunc(BBFLOAT bbt_x);
BBINT _m_seltra_create_block_mix();
BBINT _m_seltra_remove_block_image_templates();
extern struct brl_max2d_image_TImage_obj* _m_seltra_sub0;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn);
extern struct brl_max2d_image_TImage_obj* _m_seltra_subd;
BBINT _m_seltra_wallblock(BBINT bbt_x,BBINT bbt_y,BBINT bbt_u);
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my);
void __m_seltra_sgroup_New(struct _m_seltra_sgroup_obj* o);
typedef BBINT (*_m_seltra_sgroup_add_Tsubstrate_m)(struct _m_seltra_sgroup_obj*,struct _m_seltra_substrate_obj*);
BBINT __m_seltra_sgroup_add_Tsubstrate(struct _m_seltra_sgroup_obj*,struct _m_seltra_substrate_obj*);
typedef BBINT (*_m_seltra_sgroup_move_m)(struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_sgroup_move(struct _m_seltra_sgroup_obj*);
typedef BBINT (*_m_seltra_sgroup_remove_m)(struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_sgroup_remove(struct _m_seltra_sgroup_obj*);
typedef BBINT (*_m_seltra_sgroup_out_of_bounds_check_m)(struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_sgroup_out_of_bounds_check(struct _m_seltra_sgroup_obj*);
typedef BBINT (*_m_seltra_sgroup_checkarrows_m)(struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_sgroup_checkarrows(struct _m_seltra_sgroup_obj*);
typedef BBINT (*_m_seltra_sgroup_draw_m)(struct _m_seltra_sgroup_obj*);
BBINT __m_seltra_sgroup_draw(struct _m_seltra_sgroup_obj*);
struct BBClass__m_seltra_sgroup {
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
	_m_seltra_sgroup_add_Tsubstrate_m m_add_Tsubstrate;
	_m_seltra_sgroup_move_m m_move;
	_m_seltra_sgroup_remove_m m_remove;
	_m_seltra_sgroup_out_of_bounds_check_m m_out_of_bounds_check;
	_m_seltra_sgroup_checkarrows_m m_checkarrows;
	_m_seltra_sgroup_draw_m m_draw;
};

struct _m_seltra_sgroup_obj {
	struct BBClass__m_seltra_sgroup* clas;
	struct _m_seltra_subarray_obj* __m_seltra_sgroup_slist;
	BBINT __m_seltra_sgroup_xv;
	BBINT __m_seltra_sgroup_yv;
	BBINT __m_seltra_sgroup_bittags;
	BBINT __m_seltra_sgroup_id;
};
extern struct BBClass__m_seltra_sgroup _m_seltra_sgroup;
void __m_seltra_substrate_New_iiTTImageTsgroup(struct _m_seltra_substrate_obj* o,BBINT bbt_xs,BBINT bbt_ys,struct brl_max2d_image_TImage_obj* bbt_im,struct _m_seltra_sgroup_obj* bbt_sg);
struct _m_seltra_substrate_obj* __m_seltra_substrate_New_iiTTImageTsgroup_ObjectNew(BBClass * clas,BBINT bbt_xs,BBINT bbt_ys,struct brl_max2d_image_TImage_obj* bbt_im,struct _m_seltra_sgroup_obj* bbt_sg);
void __m_seltra_substrate_New(struct _m_seltra_substrate_obj* o);
typedef BBINT (*_m_seltra_substrate_out_of_bounds_m)(struct _m_seltra_substrate_obj*);
BBINT __m_seltra_substrate_out_of_bounds(struct _m_seltra_substrate_obj*);
typedef BBINT (*_m_seltra_substrate_draw_m)(struct _m_seltra_substrate_obj*);
BBINT __m_seltra_substrate_draw(struct _m_seltra_substrate_obj*);
typedef BBINT (*_m_seltra_substrate_Del_m)(struct _m_seltra_substrate_obj*);
BBINT __m_seltra_substrate_Del(struct _m_seltra_substrate_obj*);
struct BBClass__m_seltra_substrate {
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
	_m_seltra_substrate_out_of_bounds_m m_out_of_bounds;
	_m_seltra_substrate_draw_m m_draw;
	_m_seltra_substrate_Del_m m_Del;
};

struct _m_seltra_substrate_obj {
	struct BBClass__m_seltra_substrate* clas;
	struct brl_max2d_image_TImage_obj* __m_seltra_substrate_image;
	BBINT __m_seltra_substrate_x;
	BBINT __m_seltra_substrate_y;
	BBINT __m_seltra_substrate_bit_tags;
	BBINT __m_seltra_substrate_id;
	BBARRAY __m_seltra_substrate_oldx;
	BBARRAY __m_seltra_substrate_oldy;
	struct _m_seltra_sgroup_obj* __m_seltra_substrate_group;
};
extern struct BBClass__m_seltra_substrate _m_seltra_substrate;
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
BBINT _m_seltra_update_sgroups();
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o);
typedef BBINT (*_m_seltra_bgroup_add_Tblock_m)(struct _m_seltra_bgroup_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_bgroup_add_Tblock(struct _m_seltra_bgroup_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_bgroup_move_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_move_ii_m)(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
BBINT __m_seltra_bgroup_move_ii(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra_bgroup_check_group_vel_i_f)();
BBINT _m_seltra_bgroup_check_group_vel_i();
typedef BBINT (*_m_seltra_bgroup_check_substrates_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_check_substrates(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_check_forces_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_check_forces(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_remove_block_Tblock_m)(struct _m_seltra_bgroup_obj*,struct _m_seltra_block_obj*);
BBINT __m_seltra_bgroup_remove_block_Tblock(struct _m_seltra_bgroup_obj*,struct _m_seltra_block_obj*);
typedef BBINT (*_m_seltra_bgroup_remove_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_split_aTblockii_m)(struct _m_seltra_bgroup_obj*,BBARRAY,BBINT,BBINT);
BBINT __m_seltra_bgroup_split_aTblockii(struct _m_seltra_bgroup_obj*,BBARRAY,BBINT,BBINT);
typedef struct _m_seltra_bgroup_obj* (*_m_seltra_bgroup_spawn_ii_m)(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj*,BBINT,BBINT);
typedef BBINT (*_m_seltra_bgroup_checkarrows_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_out_of_bounds_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_draw_m)(struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj*);
typedef BBINT (*_m_seltra_bgroup_merge_Tbgroup_m)(struct _m_seltra_bgroup_obj*,struct _m_seltra_bgroup_obj*);
BBINT __m_seltra_bgroup_merge_Tbgroup(struct _m_seltra_bgroup_obj*,struct _m_seltra_bgroup_obj*);
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
	_m_seltra_bgroup_add_Tblock_m m_add_Tblock;
	_m_seltra_bgroup_move_m m_move;
	_m_seltra_bgroup_move_ii_m m_move_ii;
	_m_seltra_bgroup_check_group_vel_i_f f_check_group_vel_i;
	_m_seltra_bgroup_check_substrates_m m_check_substrates;
	_m_seltra_bgroup_check_forces_m m_check_forces;
	_m_seltra_bgroup_remove_block_Tblock_m m_remove_block_Tblock;
	_m_seltra_bgroup_remove_m m_remove;
	_m_seltra_bgroup_split_aTblockii_m m_split_aTblockii;
	_m_seltra_bgroup_spawn_ii_m m_spawn_ii;
	_m_seltra_bgroup_checkarrows_m m_checkarrows;
	_m_seltra_bgroup_out_of_bounds_m m_out_of_bounds;
	_m_seltra_bgroup_draw_m m_draw;
	_m_seltra_bgroup_merge_Tbgroup_m m_merge_Tbgroup;
};

struct _m_seltra_bgroup_obj {
	struct BBClass__m_seltra_bgroup* clas;
	struct _m_seltra_blockarray_obj* __m_seltra_bgroup_blist;
	BBINT __m_seltra_bgroup_xv;
	BBINT __m_seltra_bgroup_yv;
	BBINT __m_seltra_bgroup_bittags;
	BBINT __m_seltra_bgroup_id;
	BBINT __m_seltra_bgroup_xf;
	BBINT __m_seltra_bgroup_yf;
};
extern struct BBClass__m_seltra_bgroup _m_seltra_bgroup;
BBINT _m_seltra_update_bgroups();
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o);
typedef BBINT (*_m_seltra_gen_genblock_m)(struct _m_seltra_gen_obj*);
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj*);
typedef BBINT (*_m_seltra_gen_update_m)(struct _m_seltra_gen_obj*);
BBINT __m_seltra_gen_update(struct _m_seltra_gen_obj*);
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
	_m_seltra_gen_update_m m_update;
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
	BBINT __m_seltra_gen_id;
	BBINT __m_seltra_gen_bitflags;
};
extern struct BBClass__m_seltra_gen _m_seltra_gen;
BBINT _m_seltra_update_gens();
BBOBJECT _m_seltra_core_engine_thread(BBOBJECT bbt_data);
struct _m_seltra_sgroup_obj* _m_seltra_createsingleSubstrate(BBINT bbt_x,BBINT bbt_y);
struct _m_seltra_sgroup_obj* _m_seltra_placeSubstrateGuide(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_chem_dist(BBINT bbt_x);
BBINT _m_seltra_mergeSingleSubstrate(BBINT bbt_x,BBINT bbt_y,struct brl_max2d_image_TImage_obj* bbt_image);
BBINT _m_seltra_mouse_input_map();
BBINT _m_seltra_mouse_input_editbar();
BBINT _m_seltra_get_mouse_input();
BBINT _m_seltra_get_user_input();
BBINT _m_seltra_redraw_cell(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y);
BBINT _m_seltra_draw_things();
BBINT _m_seltra_draw_sarray();
BBINT _m_seltra_draw_barray();
BBINT _m_seltra_draw_walls();
BBINT _m_seltra_draw_editbar();
BBINT _m_seltra_update_display();
BBINT _m_seltra_placeBigSubstrate(BBINT bbt_x1,BBINT bbt_y1,BBINT bbt_x2,BBINT bbt_y2);
BBINT _m_seltra_placegene(BBINT bbt_x,BBINT bbt_y);
BBFLOAT _m_seltra_colfuncx(BBFLOAT bbt_x);
BBINT _m_seltra_demo_color_spread();
BBOBJECT _m_seltra_io_and_display_thread(BBOBJECT bbt_data);

#endif
