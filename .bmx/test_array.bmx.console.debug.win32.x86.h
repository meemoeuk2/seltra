#ifndef SELTRA_TEST_ARRAY_BMX_CONSOLE_DEBUG_WIN32_X86_H
#define SELTRA_TEST_ARRAY_BMX_CONSOLE_DEBUG_WIN32_X86_H

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
struct _m_test_array_barry_obj;
struct _m_test_array_block_obj;
void __m_test_array_barry_New(struct _m_test_array_barry_obj* o);
typedef BBINT (*_m_test_array_barry_add_Tblock_m)(struct _m_test_array_barry_obj*,struct _m_test_array_block_obj*);
BBINT __m_test_array_barry_add_Tblock(struct _m_test_array_barry_obj*,struct _m_test_array_block_obj*);
typedef BBINT (*_m_test_array_barry_ordered_sort_ii_m)(struct _m_test_array_barry_obj*,BBINT,BBINT);
BBINT __m_test_array_barry_ordered_sort_ii(struct _m_test_array_barry_obj*,BBINT,BBINT);
struct BBClass__m_test_array_barry {
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
	_m_test_array_barry_add_Tblock_m m_add_Tblock;
	_m_test_array_barry_ordered_sort_ii_m m_ordered_sort_ii;
};

struct _m_test_array_barry_obj {
	struct BBClass__m_test_array_barry* clas;
	BBARRAY __m_test_array_barry_barr;
	BBINT __m_test_array_barry_le;
};
extern struct BBClass__m_test_array_barry _m_test_array_barry;
void __m_test_array_block_New(struct _m_test_array_block_obj* o);
struct BBClass__m_test_array_block {
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

struct _m_test_array_block_obj {
	struct BBClass__m_test_array_block* clas;
	BBINT __m_test_array_block_x;
};
extern struct BBClass__m_test_array_block _m_test_array_block;
BBINT _m_test_array_test_st_array();
BBINT _m_test_array_test_tlist();

#endif
