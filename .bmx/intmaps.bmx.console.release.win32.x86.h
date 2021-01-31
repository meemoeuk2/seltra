#ifndef SELTRA_INTMAPS_BMX_CONSOLE_RELEASE_WIN32_X86_H
#define SELTRA_INTMAPS_BMX_CONSOLE_RELEASE_WIN32_X86_H

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
struct _m_intmaps_TIntMap_obj;
struct _m_intmaps_t_obj;
struct _m_intmaps_TIntNode_obj;
struct _m_intmaps_TIntKey_obj;
struct _m_intmaps_TIntNodeEnumerator_obj;
struct _m_intmaps_TIntKeyEnumerator_obj;
struct _m_intmaps_TIntValueEnumerator_obj;
struct _m_intmaps_TIntMapEnumerator_obj;
extern struct brl_map_TMap_obj* _m_intmaps_mymap;
void __m_intmaps_TIntMap_New(struct _m_intmaps_TIntMap_obj* o);
void __m_intmaps_TIntMap_Delete(struct _m_intmaps_TIntMap_obj* o);
typedef BBINT (*_m_intmaps_TIntMap_Clear_m)(struct _m_intmaps_TIntMap_obj*);
BBINT __m_intmaps_TIntMap_Clear(struct _m_intmaps_TIntMap_obj*);
typedef BBINT (*_m_intmaps_TIntMap_IsEmpty_m)(struct _m_intmaps_TIntMap_obj*);
BBINT __m_intmaps_TIntMap_IsEmpty(struct _m_intmaps_TIntMap_obj*);
typedef BBINT (*_m_intmaps_TIntMap_Insert_iTObject_m)(struct _m_intmaps_TIntMap_obj*,BBINT,BBOBJECT);
BBINT __m_intmaps_TIntMap_Insert_iTObject(struct _m_intmaps_TIntMap_obj*,BBINT,BBOBJECT);
typedef BBINT (*_m_intmaps_TIntMap_Contains_i_m)(struct _m_intmaps_TIntMap_obj*,BBINT);
BBINT __m_intmaps_TIntMap_Contains_i(struct _m_intmaps_TIntMap_obj*,BBINT);
typedef BBOBJECT (*_m_intmaps_TIntMap_ValueForKey_i_m)(struct _m_intmaps_TIntMap_obj*,BBINT);
BBOBJECT __m_intmaps_TIntMap_ValueForKey_i(struct _m_intmaps_TIntMap_obj*,BBINT);
typedef BBINT (*_m_intmaps_TIntMap_Remove_i_m)(struct _m_intmaps_TIntMap_obj*,BBINT);
BBINT __m_intmaps_TIntMap_Remove_i(struct _m_intmaps_TIntMap_obj*,BBINT);
typedef struct _m_intmaps_TIntNode_obj* (*_m_intmaps_TIntMap__FirstNode_m)(struct _m_intmaps_TIntMap_obj*);
struct _m_intmaps_TIntNode_obj* __m_intmaps_TIntMap__FirstNode(struct _m_intmaps_TIntMap_obj*);
typedef struct _m_intmaps_TIntMapEnumerator_obj* (*_m_intmaps_TIntMap_Keys_m)(struct _m_intmaps_TIntMap_obj*);
struct _m_intmaps_TIntMapEnumerator_obj* __m_intmaps_TIntMap_Keys(struct _m_intmaps_TIntMap_obj*);
typedef struct _m_intmaps_TIntMapEnumerator_obj* (*_m_intmaps_TIntMap_Values_m)(struct _m_intmaps_TIntMap_obj*);
struct _m_intmaps_TIntMapEnumerator_obj* __m_intmaps_TIntMap_Values(struct _m_intmaps_TIntMap_obj*);
typedef struct _m_intmaps_TIntMap_obj* (*_m_intmaps_TIntMap_Copy_m)(struct _m_intmaps_TIntMap_obj*);
struct _m_intmaps_TIntMap_obj* __m_intmaps_TIntMap_Copy(struct _m_intmaps_TIntMap_obj*);
typedef struct _m_intmaps_TIntNodeEnumerator_obj* (*_m_intmaps_TIntMap_ObjectEnumerator_m)(struct _m_intmaps_TIntMap_obj*);
struct _m_intmaps_TIntNodeEnumerator_obj* __m_intmaps_TIntMap_ObjectEnumerator(struct _m_intmaps_TIntMap_obj*);
struct BBClass__m_intmaps_TIntMap {
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
	_m_intmaps_TIntMap_Clear_m m_Clear;
	_m_intmaps_TIntMap_IsEmpty_m m_IsEmpty;
	_m_intmaps_TIntMap_Insert_iTObject_m m_Insert_iTObject;
	_m_intmaps_TIntMap_Contains_i_m m_Contains_i;
	_m_intmaps_TIntMap_ValueForKey_i_m m_ValueForKey_i;
	_m_intmaps_TIntMap_Remove_i_m m_Remove_i;
	_m_intmaps_TIntMap__FirstNode_m m__FirstNode;
	_m_intmaps_TIntMap_Keys_m m_Keys;
	_m_intmaps_TIntMap_Values_m m_Values;
	_m_intmaps_TIntMap_Copy_m m_Copy;
	_m_intmaps_TIntMap_ObjectEnumerator_m m_ObjectEnumerator;
};

struct _m_intmaps_TIntMap_obj {
	struct BBClass__m_intmaps_TIntMap* clas;
	BBBYTE* __m_intmaps_tintmap__root;
};
extern struct BBClass__m_intmaps_TIntMap _m_intmaps_TIntMap;
extern struct _m_intmaps_TIntMap_obj* _m_intmaps_myintmap;
extern struct brl_linkedlist_TList_obj* _m_intmaps_mylist;
void __m_intmaps_t_New(struct _m_intmaps_t_obj* o);
struct BBClass__m_intmaps_t {
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

struct _m_intmaps_t_obj {
	struct BBClass__m_intmaps_t* clas;
	BBINT __m_intmaps_t_y;
};
extern struct BBClass__m_intmaps_t _m_intmaps_t;
extern BBINT bmx_map_intmap_insert(BBINT bbt_key,BBOBJECT bbt_value,BBBYTE** bbt_root);
BBINT _m_intmaps_gen_tintmap_test();
extern BBOBJECT bmx_map_intmap_valueforkey(BBINT bbt_key,BBBYTE** bbt_root);
BBINT _m_intmaps_ref_tintmap_test();
BBINT _m_intmaps_test_intmap();
BBINT _m_intmaps_Create_world();
void __m_intmaps_TIntNode_New(struct _m_intmaps_TIntNode_obj* o);
typedef BBINT (*_m_intmaps_TIntNode_Key_m)(struct _m_intmaps_TIntNode_obj*);
BBINT __m_intmaps_TIntNode_Key(struct _m_intmaps_TIntNode_obj*);
typedef BBOBJECT (*_m_intmaps_TIntNode_Value_m)(struct _m_intmaps_TIntNode_obj*);
BBOBJECT __m_intmaps_TIntNode_Value(struct _m_intmaps_TIntNode_obj*);
typedef BBINT (*_m_intmaps_TIntNode_HasNext_m)(struct _m_intmaps_TIntNode_obj*);
BBINT __m_intmaps_TIntNode_HasNext(struct _m_intmaps_TIntNode_obj*);
typedef struct _m_intmaps_TIntNode_obj* (*_m_intmaps_TIntNode_NextNode_m)(struct _m_intmaps_TIntNode_obj*);
struct _m_intmaps_TIntNode_obj* __m_intmaps_TIntNode_NextNode(struct _m_intmaps_TIntNode_obj*);
struct BBClass__m_intmaps_TIntNode {
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
	_m_intmaps_TIntNode_Key_m m_Key;
	_m_intmaps_TIntNode_Value_m m_Value;
	_m_intmaps_TIntNode_HasNext_m m_HasNext;
	_m_intmaps_TIntNode_NextNode_m m_NextNode;
};

struct _m_intmaps_TIntNode_obj {
	struct BBClass__m_intmaps_TIntNode* clas;
	BBBYTE* __m_intmaps_tintnode__root;
	BBBYTE* __m_intmaps_tintnode__nodeptr;
};
extern struct BBClass__m_intmaps_TIntNode _m_intmaps_TIntNode;
void __m_intmaps_TIntKey_New(struct _m_intmaps_TIntKey_obj* o);
struct BBClass__m_intmaps_TIntKey {
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

struct _m_intmaps_TIntKey_obj {
	struct BBClass__m_intmaps_TIntKey* clas;
	BBINT __m_intmaps_tintkey_value;
};
extern struct BBClass__m_intmaps_TIntKey _m_intmaps_TIntKey;
void __m_intmaps_TIntNodeEnumerator_New(struct _m_intmaps_TIntNodeEnumerator_obj* o);
typedef BBINT (*_m_intmaps_TIntNodeEnumerator_HasNext_m)(struct _m_intmaps_TIntNodeEnumerator_obj*);
BBINT __m_intmaps_TIntNodeEnumerator_HasNext(struct _m_intmaps_TIntNodeEnumerator_obj*);
typedef BBOBJECT (*_m_intmaps_TIntNodeEnumerator_NextObject_m)(struct _m_intmaps_TIntNodeEnumerator_obj*);
BBOBJECT __m_intmaps_TIntNodeEnumerator_NextObject(struct _m_intmaps_TIntNodeEnumerator_obj*);
struct BBClass__m_intmaps_TIntNodeEnumerator {
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
	_m_intmaps_TIntNodeEnumerator_HasNext_m m_HasNext;
	_m_intmaps_TIntNodeEnumerator_NextObject_m m_NextObject;
};

struct _m_intmaps_TIntNodeEnumerator_obj {
	struct BBClass__m_intmaps_TIntNodeEnumerator* clas;
	struct _m_intmaps_TIntNode_obj* __m_intmaps_tintnodeenumerator__node;
};
extern struct BBClass__m_intmaps_TIntNodeEnumerator _m_intmaps_TIntNodeEnumerator;
void __m_intmaps_TIntKeyEnumerator_New(struct _m_intmaps_TIntKeyEnumerator_obj* o);
BBOBJECT __m_intmaps_TIntKeyEnumerator_NextObject(struct _m_intmaps_TIntKeyEnumerator_obj*);
struct BBClass__m_intmaps_TIntKeyEnumerator {
	struct BBClass__m_intmaps_TIntNodeEnumerator*  super;
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
	_m_intmaps_TIntNodeEnumerator_HasNext_m m_HasNext;
	_m_intmaps_TIntNodeEnumerator_NextObject_m m_NextObject;
};

struct _m_intmaps_TIntKeyEnumerator_obj {
	struct BBClass__m_intmaps_TIntKeyEnumerator* clas;
	struct _m_intmaps_TIntNode_obj* __m_intmaps_tintnodeenumerator__node;
	struct _m_intmaps_TIntKey_obj* __m_intmaps_tintkeyenumerator__key;
};
extern struct BBClass__m_intmaps_TIntKeyEnumerator _m_intmaps_TIntKeyEnumerator;
void __m_intmaps_TIntValueEnumerator_New(struct _m_intmaps_TIntValueEnumerator_obj* o);
BBOBJECT __m_intmaps_TIntValueEnumerator_NextObject(struct _m_intmaps_TIntValueEnumerator_obj*);
struct BBClass__m_intmaps_TIntValueEnumerator {
	struct BBClass__m_intmaps_TIntNodeEnumerator*  super;
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
	_m_intmaps_TIntNodeEnumerator_HasNext_m m_HasNext;
	_m_intmaps_TIntNodeEnumerator_NextObject_m m_NextObject;
};

struct _m_intmaps_TIntValueEnumerator_obj {
	struct BBClass__m_intmaps_TIntValueEnumerator* clas;
	struct _m_intmaps_TIntNode_obj* __m_intmaps_tintnodeenumerator__node;
};
extern struct BBClass__m_intmaps_TIntValueEnumerator _m_intmaps_TIntValueEnumerator;
void __m_intmaps_TIntMapEnumerator_New(struct _m_intmaps_TIntMapEnumerator_obj* o);
typedef struct _m_intmaps_TIntNodeEnumerator_obj* (*_m_intmaps_TIntMapEnumerator_ObjectEnumerator_m)(struct _m_intmaps_TIntMapEnumerator_obj*);
struct _m_intmaps_TIntNodeEnumerator_obj* __m_intmaps_TIntMapEnumerator_ObjectEnumerator(struct _m_intmaps_TIntMapEnumerator_obj*);
struct BBClass__m_intmaps_TIntMapEnumerator {
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
	_m_intmaps_TIntMapEnumerator_ObjectEnumerator_m m_ObjectEnumerator;
};

struct _m_intmaps_TIntMapEnumerator_obj {
	struct BBClass__m_intmaps_TIntMapEnumerator* clas;
	struct _m_intmaps_TIntNodeEnumerator_obj* __m_intmaps_tintmapenumerator__enumerator;
};
extern struct BBClass__m_intmaps_TIntMapEnumerator _m_intmaps_TIntMapEnumerator;
extern BBINT bmx_map_intmap_clear(BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_isempty(BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_contains(BBINT bbt_key,BBBYTE** bbt_root);
extern BBINT bmx_map_intmap_remove(BBINT bbt_key,BBBYTE** bbt_root);
extern BBBYTE* bmx_map_intmap_firstnode(BBBYTE* bbt_root);
extern BBBYTE* bmx_map_intmap_nextnode(BBBYTE* bbt_node);
extern BBINT bmx_map_intmap_key(BBBYTE* bbt_node);
extern BBOBJECT bmx_map_intmap_value(BBBYTE* bbt_node);
extern BBINT bmx_map_intmap_hasnext(BBBYTE* bbt_node,BBBYTE* bbt_root);
extern BBINT bmx_map_intmap_copy(BBBYTE** bbt_dst,BBBYTE* bbt__root);
BBINT _m_intmaps_gen_tmap_test();
BBINT _m_intmaps_ref_tmap_test();
BBINT _m_intmaps_gen_list_test();
BBINT _m_intmaps_ref_list_test();
BBINT _m_intmaps_test_map();
BBINT _m_intmaps_test_list();

#endif
