#include "test_maps.bmx.console.release.win32.x86.h"
static BBString _s0={
	&bbStringClass,
	5,
	{104,101,108,108,111}
};
struct brl_map_intmap_TIntMap_obj* _m_test_maps_mymap=&bbNullObject;
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		__bb_brl_map_map();
		_m_test_maps_mymap=bbObjectAtomicNew(&brl_map_intmap_TIntMap);
		(_m_test_maps_mymap)->clas->m_Insert_iTObject(_m_test_maps_mymap,1,&_s0);
		return 0;
	}
	return 0;
}