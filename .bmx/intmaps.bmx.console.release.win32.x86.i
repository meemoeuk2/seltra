import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.basic
import brl.bmploader
import brl.d3d7max2d
import brl.d3d9max2d
import brl.data
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.maxlua
import brl.maxutil
import brl.oggloader
import brl.openalaudio
import brl.pngloader
import brl.retro
import brl.stringbuilder
import brl.tgaloader
import brl.threadpool
import brl.threads
import brl.timer
import brl.timerdefault
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.macos
import pub.opengles
import pub.vulkan
import pub.xmmintrin
TIntMap^Object{
._root@*&
-New()="__m_intmaps_TIntMap_New"
-Delete()="__m_intmaps_TIntMap_Delete"
-Clear%()="_m_intmaps_TIntMap_Clear"
-IsEmpty%()="_m_intmaps_TIntMap_IsEmpty"
-Insert%(key%,value:Object)="_m_intmaps_TIntMap_Insert_iTObject"
-Contains%(key%)="_m_intmaps_TIntMap_Contains_i"
-ValueForKey:Object(key%)="_m_intmaps_TIntMap_ValueForKey_i"
-Remove%(key%)="_m_intmaps_TIntMap_Remove_i"
-_FirstNode:TIntNode()="_m_intmaps_TIntMap__FirstNode"
-Keys:TIntMapEnumerator()="_m_intmaps_TIntMap_Keys"
-Values:TIntMapEnumerator()="_m_intmaps_TIntMap_Values"
-Copy:TIntMap()="_m_intmaps_TIntMap_Copy"
-ObjectEnumerator:TIntNodeEnumerator()="_m_intmaps_TIntMap_ObjectEnumerator"
}="_m_intmaps_TIntMap"
t^Object{
.y%&
-New()="__m_intmaps_t_New"
}="_m_intmaps_t"
TIntNode^Object{
._root@*&
._nodePtr@*&
-New()="__m_intmaps_TIntNode_New"
-Key%()="_m_intmaps_TIntNode_Key"
-Value:Object()="_m_intmaps_TIntNode_Value"
-HasNext%()="_m_intmaps_TIntNode_HasNext"
-NextNode:TIntNode()="_m_intmaps_TIntNode_NextNode"
}="_m_intmaps_TIntNode"
TIntKey^Object{
.value%&
-New()="__m_intmaps_TIntKey_New"
}="_m_intmaps_TIntKey"
TIntNodeEnumerator^Object{
._node:TIntNode&
-New()="__m_intmaps_TIntNodeEnumerator_New"
-HasNext%()="_m_intmaps_TIntNodeEnumerator_HasNext"
-NextObject:Object()="_m_intmaps_TIntNodeEnumerator_NextObject"
}="_m_intmaps_TIntNodeEnumerator"
TIntKeyEnumerator^TIntNodeEnumerator{
._key:TIntKey&
-New()="__m_intmaps_TIntKeyEnumerator_New"
-NextObject:Object()="_m_intmaps_TIntKeyEnumerator_NextObject"
}="_m_intmaps_TIntKeyEnumerator"
TIntValueEnumerator^TIntNodeEnumerator{
-New()="__m_intmaps_TIntValueEnumerator_New"
-NextObject:Object()="_m_intmaps_TIntValueEnumerator_NextObject"
}="_m_intmaps_TIntValueEnumerator"
TIntMapEnumerator^Object{
._enumerator:TIntNodeEnumerator&
-New()="__m_intmaps_TIntMapEnumerator_New"
-ObjectEnumerator:TIntNodeEnumerator()="_m_intmaps_TIntMapEnumerator_ObjectEnumerator"
}="_m_intmaps_TIntMapEnumerator"
bmx_map_intmap_insert%(key%,value:Object,root@**)="bmx_map_intmap_insert"
gen_tintmap_test%()="_m_intmaps_gen_tintmap_test"
bmx_map_intmap_valueforkey:Object(key%,root@**)="bmx_map_intmap_valueforkey"
ref_tintmap_test%()="_m_intmaps_ref_tintmap_test"
test_intmap%()="_m_intmaps_test_intmap"
Create_world%()="_m_intmaps_Create_world"
bmx_map_intmap_clear%(root@**)="bmx_map_intmap_clear"
bmx_map_intmap_isempty%(root@**)="bmx_map_intmap_isempty"
bmx_map_intmap_contains%(key%,root@**)="bmx_map_intmap_contains"
bmx_map_intmap_remove%(key%,root@**)="bmx_map_intmap_remove"
bmx_map_intmap_firstnode@*(root@*)="bmx_map_intmap_firstnode"
bmx_map_intmap_nextnode@*(node@*)="bmx_map_intmap_nextnode"
bmx_map_intmap_key%(node@*)="bmx_map_intmap_key"
bmx_map_intmap_value:Object(node@*)="bmx_map_intmap_value"
bmx_map_intmap_hasnext%(node@*,root@*)="bmx_map_intmap_hasnext"
bmx_map_intmap_copy%(dst@**,_root@*)="bmx_map_intmap_copy"
gen_tmap_test%()="_m_intmaps_gen_tmap_test"
ref_tmap_test%()="_m_intmaps_ref_tmap_test"
gen_list_test%()="_m_intmaps_gen_list_test"
ref_list_test%()="_m_intmaps_ref_list_test"
test_map%()="_m_intmaps_test_map"
test_list%()="_m_intmaps_test_list"
mymap:TMap&=mem:p("_m_intmaps_mymap")
myintmap:TIntMap&=mem:p("_m_intmaps_myintmap")
mylist:TList&=mem:p("_m_intmaps_mylist")