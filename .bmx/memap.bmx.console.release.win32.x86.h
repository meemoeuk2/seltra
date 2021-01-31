#ifndef SELTRA_MEMAP_BMX_CONSOLE_RELEASE_WIN32_X86_H
#define SELTRA_MEMAP_BMX_CONSOLE_RELEASE_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.release.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.release.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.release.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.release.win32.x86.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.release.win32.x86.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.release.win32.x86.h>
#include <brl.mod/data.mod/.bmx/data.bmx.release.win32.x86.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.release.win32.x86.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.release.win32.x86.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.release.win32.x86.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.release.win32.x86.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.win32.x86.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.win32.x86.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.release.win32.x86.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.release.win32.x86.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.win32.x86.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.win32.x86.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.release.win32.x86.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.release.win32.x86.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.release.win32.x86.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.release.win32.x86.h>
#include <brl.mod/stringbuilder.mod/.bmx/stringbuilder.bmx.release.win32.x86.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.release.win32.x86.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.release.win32.x86.h>
#include <brl.mod/threads.mod/.bmx/threads.bmx.release.win32.x86.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.release.win32.x86.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.release.win32.x86.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.release.win32.x86.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.release.win32.x86.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.win32.x86.h>
#include <pub.mod/macos.mod/.bmx/macos.bmx.release.win32.x86.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.release.win32.x86.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.release.win32.x86.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.release.win32.x86.h>
int _bb_main();
struct _m_memap_fastintmap_obj;
void __m_memap_fastintmap_New(struct _m_memap_fastintmap_obj* o);
typedef BBINT (*_m_memap_fastintmap_fetch_i_m)(struct _m_memap_fastintmap_obj*,BBINT);
BBINT __m_memap_fastintmap_fetch_i(struct _m_memap_fastintmap_obj*,BBINT);
typedef BBINT (*_m_memap_fastintmap_insert_ii_m)(struct _m_memap_fastintmap_obj*,BBINT,BBINT);
BBINT __m_memap_fastintmap_insert_ii(struct _m_memap_fastintmap_obj*,BBINT,BBINT);
typedef BBINT (*_m_memap_fastintmap_remove_i_m)(struct _m_memap_fastintmap_obj*,BBINT);
BBINT __m_memap_fastintmap_remove_i(struct _m_memap_fastintmap_obj*,BBINT);
typedef BBINT (*_m_memap_fastintmap_iter_m)(struct _m_memap_fastintmap_obj*);
BBINT __m_memap_fastintmap_iter(struct _m_memap_fastintmap_obj*);
typedef BBINT (*_m_memap_fastintmap_fastsort_m)(struct _m_memap_fastintmap_obj*);
BBINT __m_memap_fastintmap_fastsort(struct _m_memap_fastintmap_obj*);
typedef BBINT (*_m_memap_fastintmap_orderedsort_m)(struct _m_memap_fastintmap_obj*);
BBINT __m_memap_fastintmap_orderedsort(struct _m_memap_fastintmap_obj*);
typedef BBINT (*_m_memap_fastintmap_set_null_value_i_m)(struct _m_memap_fastintmap_obj*,BBINT);
BBINT __m_memap_fastintmap_set_null_value_i(struct _m_memap_fastintmap_obj*,BBINT);
struct BBClass__m_memap_fastintmap {
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
	_m_memap_fastintmap_fetch_i_m m_fetch_i;
	_m_memap_fastintmap_insert_ii_m m_insert_ii;
	_m_memap_fastintmap_remove_i_m m_remove_i;
	_m_memap_fastintmap_iter_m m_iter;
	_m_memap_fastintmap_fastsort_m m_fastsort;
	_m_memap_fastintmap_orderedsort_m m_orderedsort;
	_m_memap_fastintmap_set_null_value_i_m m_set_null_value_i;
};

struct _m_memap_fastintmap_obj {
	struct BBClass__m_memap_fastintmap* clas;
	BBARRAY __m_memap_fastintmap_v;
	BBARRAY __m_memap_fastintmap_k;
	BBINT __m_memap_fastintmap_le;
	BBINT __m_memap_fastintmap_nl;
};
extern struct BBClass__m_memap_fastintmap _m_memap_fastintmap;

#endif
