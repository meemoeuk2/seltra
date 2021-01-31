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
fastblockmap^Object{
.v:block&[]&
.k%&[]&
.le%&
-New()="__m_blockmap_fastblockmap_New"
-fetch:block(key%)="_m_blockmap_fastblockmap_fetch_i"
-vfetch:block(index%)="_m_blockmap_fastblockmap_vfetch_i"
-kfetch%(index%)="_m_blockmap_fastblockmap_kfetch_i"
-insert%(key%,b:block)="_m_blockmap_fastblockmap_insert_iTblock"
-remove%(key%)="_m_blockmap_fastblockmap_remove_i"
-iter%()="_m_blockmap_fastblockmap_iter"
-fastsort%()="_m_blockmap_fastblockmap_fastsort"
-orderedsort%()="_m_blockmap_fastblockmap_orderedsort"
}="_m_blockmap_fastblockmap"
block^Object{
.x%&
-New()="__m_blockmap_block_New"
}="_m_blockmap_block"