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
grouparray^Object{
.ga:bgroup&[]&
.le%&
-New()="__m_seltra_grouparray_New"
-add%(g:bgroup)="_m_seltra_grouparray_add_Tbgroup"
-ordered_sort%(n%,i%)="_m_seltra_grouparray_ordered_sort_ii"
}="_m_seltra_grouparray"
blockarray^Object{
.ba:block&[]&
.le%&
-New()="__m_seltra_blockarray_New"
-add%(b:block)="_m_seltra_blockarray_add_Tblock"
-ordered_sort%(n%,i%=0)="_m_seltra_blockarray_ordered_sort_ii"
}="_m_seltra_blockarray"
redrawarray^Object{
.ra:redraw&[]&
.le%&
.drawn%&
-New()="__m_seltra_redrawarray_New"
-add%(r:redraw)="_m_seltra_redrawarray_add_Tredraw"
-do_redraws%()="_m_seltra_redrawarray_do_redraws"
}="_m_seltra_redrawarray"
fastblockmap^Object{
.v:block&[]&
.k%&[]&
.le%&
.rc%&
-New()="__m_seltra_fastblockmap_New"
-fetch:block(key%)="_m_seltra_fastblockmap_fetch_i"
-vfetch:block(index%)="_m_seltra_fastblockmap_vfetch_i"
-kfetch%(index%)="_m_seltra_fastblockmap_kfetch_i"
-insert%(key%,b:block)="_m_seltra_fastblockmap_insert_iTblock"
-remove%(key%)="_m_seltra_fastblockmap_remove_i"
-iter%()="_m_seltra_fastblockmap_iter"
-fastsort%()="_m_seltra_fastblockmap_fastsort"
-orderedsort%()="_m_seltra_fastblockmap_orderedsort"
}="_m_seltra_fastblockmap"
fastintmap^Object{
.v%&[]&
.k%&[]&
.le%&
.nl%&
-New()="__m_seltra_fastintmap_New"
-fetch%(key%)="_m_seltra_fastintmap_fetch_i"
-vfetch%(index%)="_m_seltra_fastintmap_vfetch_i"
-kfetch%(index%)="_m_seltra_fastintmap_kfetch_i"
-insert%(key%,val%)="_m_seltra_fastintmap_insert_ii"
-remove%(key%)="_m_seltra_fastintmap_remove_i"
-iter%()="_m_seltra_fastintmap_iter"
-fastsort%()="_m_seltra_fastintmap_fastsort"
-orderedsort%()="_m_seltra_fastintmap_orderedsort"
-set_null_value%(n%)="_m_seltra_fastintmap_set_null_value_i"
}="_m_seltra_fastintmap"
block^Object{
.btype%&
.image:TImage&
.x%&
.y%&
.bit_tags%&
.id%&
.oldx%&[]&
.oldy%&[]&
.group:bgroup&
-New()="__m_seltra_block_New"
-draw%()="_m_seltra_block_draw"
-out_of_bounds%()="_m_seltra_block_out_of_bounds"
-spawn:block(xs%,ys%)="_m_seltra_block_spawn_ii"
}="_m_seltra_block"
bgroup^Object{
.blist:TList&
.xv%&
.yv%&
.bittags%&
.id%&
-New()="__m_seltra_bgroup_New"
-move%()="_m_seltra_bgroup_move"
-remove%()="_m_seltra_bgroup_remove"
-spawn:bgroup(xs%,ys%)="_m_seltra_bgroup_spawn_ii"
-checkarrows%()="_m_seltra_bgroup_checkarrows"
-out_of_bounds%()="_m_seltra_bgroup_out_of_bounds"
-draw%()="_m_seltra_bgroup_draw"
}="_m_seltra_bgroup"
redraw^Object{
.x%&
.y%&
.redraws@&
-New()="__m_seltra_redraw_New"
}="_m_seltra_redraw"
gen^Object{
.x%&
.y%&
.bglist:bgroup&[]&
.le%&
.rate%&
.n%&
.t%&
.bitflags%&
-New()="__m_seltra_gen_New"
-genblock%()="_m_seltra_gen_genblock"
}="_m_seltra_gen"
loadimage2:TImage(fn$)="_m_seltra_loadimage2"
wallblock%(x%,y%)="_m_seltra_wallblock"
gen_maze_map%(xs%,ys%,xf%,yf%,mx%,my%)="_m_seltra_gen_maze_map"
update_bgroups%()="_m_seltra_update_bgroups"
createsingleblock%(btype%,x%,y%,xv%,yv%)="_m_seltra_createsingleblock"
placegene%(x%,y%)="_m_seltra_placegene"
mouse_input_map%()="_m_seltra_mouse_input_map"
mouse_input_editbar%()="_m_seltra_mouse_input_editbar"
get_mouse_input%()="_m_seltra_get_mouse_input"
get_user_input%()="_m_seltra_get_user_input"
redraw3x3%(x%,y%)="_m_seltra_redraw3x3"
draw_things%()="_m_seltra_draw_things"
draw_barray%()="_m_seltra_draw_barray"
draw_walls%()="_m_seltra_draw_walls"
draw_editbar%()="_m_seltra_draw_editbar"
update_display%()="_m_seltra_update_display"
Create_world%()="_m_seltra_Create_world"
gw%&=mem:p("_m_seltra_gw")
gh%&=mem:p("_m_seltra_gh")
imagelist:TImage&[]&=mem:p("_m_seltra_imagelist")
block1:TImage&=mem:p("_m_seltra_block1")
noi%&=mem:p("_m_seltra_noi")
wall1:TImage&=mem:p("_m_seltra_wall1")
gene:TImage&=mem:p("_m_seltra_gene")
blank:TImage&=mem:p("_m_seltra_blank")
mousep:TImage&=mem:p("_m_seltra_mousep")
mousec:TImage&=mem:p("_m_seltra_mousec")
arroww:TImage&=mem:p("_m_seltra_arroww")
arrowe:TImage&=mem:p("_m_seltra_arrowe")
arrown:TImage&=mem:p("_m_seltra_arrown")
arrows:TImage&=mem:p("_m_seltra_arrows")
frame@&=mem:p("_m_seltra_frame")
mox%&=mem:p("_m_seltra_mox")
moy%&=mem:p("_m_seltra_moy")
moz%&=mem:p("_m_seltra_moz")
smi:TImage&=mem:p("_m_seltra_smi")
smt%&=mem:p("_m_seltra_smt")
zoom#&=mem:p("_m_seltra_zoom")
mozo%&=mem:p("_m_seltra_mozo")
mozu#&=mem:p("_m_seltra_mozu")
moxc%&=mem:p("_m_seltra_moxc")
moyc%&=mem:p("_m_seltra_moyc")
moxco%&[]&=mem:p("_m_seltra_moxco")
moyco%&[]&=mem:p("_m_seltra_moyco")
redraw_map%&=mem:p("_m_seltra_redraw_map")
bi%&=mem:p("_m_seltra_bi")
bgc%&=mem:p("_m_seltra_bgc")
camposx%&=mem:p("_m_seltra_camposx")
camposy%&=mem:p("_m_seltra_camposy")
garray:grouparray&=mem:p("_m_seltra_garray")
barray:blockarray&=mem:p("_m_seltra_barray")
wallgroup:TList&=mem:p("_m_seltra_wallgroup")
rarray:redrawarray&=mem:p("_m_seltra_rarray")
bmap:fastblockmap&=mem:p("_m_seltra_bmap")
thingmap:fastintmap&=mem:p("_m_seltra_thingmap")