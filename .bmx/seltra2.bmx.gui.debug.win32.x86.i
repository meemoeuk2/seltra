import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.basic
import brl.bmploader
import brl.collections
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
import brl.timer
import brl.timerdefault
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.macos
import pub.opengles
import pub.vulkan
import pub.xmmintrin
btemplate^Object{
.btype%&
.ch%&
.id%&
-create_block_image%()="_m_seltra2_btemplate_create_block_image"
-createsingleblock:bgroup(x%,y%,xv%,yv%)="_m_seltra2_btemplate_createsingleblock_iiii"
-createbindingblock%(x%,y%)="_m_seltra2_btemplate_createbindingblock_ii"
}="_m_seltra2_btemplate"
grouparray^Object{
.ga:bgroup&[]&
.le%&
-add%(g:bgroup)="_m_seltra2_grouparray_add_Tbgroup"
-ordered_sort%(n%,i%)="_m_seltra2_grouparray_ordered_sort_ii"
}="_m_seltra2_grouparray"
blockarray^Object{
.ba:block&[]&
.le%&
-add%(b:block)="_m_seltra2_blockarray_add_Tblock"
-ordered_sort%(n%,i%=0)="_m_seltra2_blockarray_ordered_sort_ii"
}="_m_seltra2_blockarray"
redrawarray^Object{
.ra:redraw&[]&
.le%&
.drawn%&
-add%(r:redraw)="_m_seltra2_redrawarray_add_Tredraw"
-do_redraws%()="_m_seltra2_redrawarray_do_redraws"
}="_m_seltra2_redrawarray"
generatorarray^Object{
.ga:gen&[]&
.le%&
-add%(g:gen)="_m_seltra2_generatorarray_add_Tgen"
-ordered_sort%(n%,i%=0)="_m_seltra2_generatorarray_ordered_sort_ii"
}="_m_seltra2_generatorarray"
fastblockmap^Object{
.v:block&[]&
.k%&[]&
.le%&
.rc%&
-fetch:block(key%)="_m_seltra2_fastblockmap_fetch_i"
-vfetch:block(index%)="_m_seltra2_fastblockmap_vfetch_i"
-kfetch%(index%)="_m_seltra2_fastblockmap_kfetch_i"
-insert%(key%,b:block)="_m_seltra2_fastblockmap_insert_iTblock"
-remove%(key%)="_m_seltra2_fastblockmap_remove_i"
-iter%()="_m_seltra2_fastblockmap_iter"
-fastsort%()="_m_seltra2_fastblockmap_fastsort"
-orderedsort%()="_m_seltra2_fastblockmap_orderedsort"
}="_m_seltra2_fastblockmap"
fastintmap^Object{
.v%&[]&
.k%&[]&
.le%&
.nl%&
-fetch%(key%)="_m_seltra2_fastintmap_fetch_i"
-vfetch%(index%)="_m_seltra2_fastintmap_vfetch_i"
-kfetch%(index%)="_m_seltra2_fastintmap_kfetch_i"
-insert%(key%,val%)="_m_seltra2_fastintmap_insert_ii"
-remove%(key%)="_m_seltra2_fastintmap_remove_i"
-iter%()="_m_seltra2_fastintmap_iter"
-fastsort%()="_m_seltra2_fastintmap_fastsort"
-orderedsort%()="_m_seltra2_fastintmap_orderedsort"
-set_null_value%(n%)="_m_seltra2_fastintmap_set_null_value_i"
}="_m_seltra2_fastintmap"
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
-draw%()="_m_seltra2_block_draw"
-out_of_bounds%()="_m_seltra2_block_out_of_bounds"
-spawn:block(xs%,ys%)="_m_seltra2_block_spawn_ii"
}="_m_seltra2_block"
bgroup^Object{
.blist:blockarray&
.xv%&
.yv%&
.bittags%&
.id%&
.xf%&
.yf%&
-add%(b:block)="_m_seltra2_bgroup_add_Tblock"
-move%()="_m_seltra2_bgroup_move"
+check_group_vel%()="_m_seltra2_bgroup_check_group_vel_i"
-check_forces%()="_m_seltra2_bgroup_check_forces"
-remove%()="_m_seltra2_bgroup_remove"
-spawn:bgroup(xs%,ys%)="_m_seltra2_bgroup_spawn_ii"
-checkarrows%()="_m_seltra2_bgroup_checkarrows"
-out_of_bounds%()="_m_seltra2_bgroup_out_of_bounds"
-draw%()="_m_seltra2_bgroup_draw"
-merge%(g:bgroup)="_m_seltra2_bgroup_merge_Tbgroup"
}="_m_seltra2_bgroup"
redraw^Object{
.x%&
.y%&
.redraws@&
}="_m_seltra2_redraw"
gen^Object{
.x%&
.y%&
.bglist:bgroup&[]&
.le%&
.rate%&
.n%&
.t%&
.id%&
.bitflags%&
-genblock%()="_m_seltra2_gen_genblock"
-update%()="_m_seltra2_gen_update"
}="_m_seltra2_gen"
loadimage3:TImage(fn$)="_m_seltra2_loadimage3"
colfunc#(x#)="_m_seltra2_colfunc"
create_block_mix%()="_m_seltra2_create_block_mix"
remove_block_image_templates%()="_m_seltra2_remove_block_image_templates"
wallblock%(x%,y%,u%)="_m_seltra2_wallblock"
gen_maze_map%(xs%,ys%,xf%,yf%,mx%,my%)="_m_seltra2_gen_maze_map"
update_bgroups%()="_m_seltra2_update_bgroups"
mouse_input_map%()="_m_seltra2_mouse_input_map"
mouse_input_editbar%()="_m_seltra2_mouse_input_editbar"
get_mouse_input%()="_m_seltra2_get_mouse_input"
get_user_input%()="_m_seltra2_get_user_input"
update_gens%()="_m_seltra2_update_gens"
redraw_cell%(x%,y%)="_m_seltra2_redraw_cell"
redraw3x3%(x%,y%)="_m_seltra2_redraw3x3"
draw_things%()="_m_seltra2_draw_things"
draw_barray%()="_m_seltra2_draw_barray"
draw_walls%()="_m_seltra2_draw_walls"
draw_editbar%()="_m_seltra2_draw_editbar"
update_display%()="_m_seltra2_update_display"
loadimage2:TImage(fn$)="_m_seltra2_loadimage2"
Create_world%()="_m_seltra2_Create_world"
placegene%(x%,y%)="_m_seltra2_placegene"
create_chem_numbers%()="_m_seltra2_create_chem_numbers"
colfuncx#(x#)="_m_seltra2_colfuncx"
demo_color_spread%()="_m_seltra2_demo_color_spread"
gw%&=mem:p("_m_seltra2_gw")
gh%&=mem:p("_m_seltra2_gh")
imagelist:TImage&[]&=mem:p("_m_seltra2_imagelist")
blockart:TImage&[]&=mem:p("_m_seltra2_blockart")
blockw:TImage&=mem:p("_m_seltra2_blockw")
noi%&=mem:p("_m_seltra2_noi")
blocko:TImage&=mem:p("_m_seltra2_blocko")
blockc:TImage&=mem:p("_m_seltra2_blockc")
blocks:TImage&=mem:p("_m_seltra2_blocks")
blockq:TImage&=mem:p("_m_seltra2_blockq")
blockx:TImage&=mem:p("_m_seltra2_blockx")
blockd:TImage&=mem:p("_m_seltra2_blockd")
blockb:TImage&=mem:p("_m_seltra2_blockb")
btarray:btemplate&[]&=mem:p("_m_seltra2_btarray")
mousep:TImage&=mem:p("_m_seltra2_mousep")
mousec:TImage&=mem:p("_m_seltra2_mousec")
blank:TImage&=mem:p("_m_seltra2_blank")
arroww:TImage&=mem:p("_m_seltra2_arroww")
arrowe:TImage&=mem:p("_m_seltra2_arrowe")
arrown:TImage&=mem:p("_m_seltra2_arrown")
arrows:TImage&=mem:p("_m_seltra2_arrows")
frame@&=mem:p("_m_seltra2_frame")
mox%&=mem:p("_m_seltra2_mox")
moy%&=mem:p("_m_seltra2_moy")
moz%&=mem:p("_m_seltra2_moz")
moxo%&[]&=mem:p("_m_seltra2_moxo")
moyo%&[]&=mem:p("_m_seltra2_moyo")
smi:TImage&=mem:p("_m_seltra2_smi")
smt%&=mem:p("_m_seltra2_smt")
zoom#&=mem:p("_m_seltra2_zoom")
mozo%&=mem:p("_m_seltra2_mozo")
mozu#&=mem:p("_m_seltra2_mozu")
moxc%&=mem:p("_m_seltra2_moxc")
moyc%&=mem:p("_m_seltra2_moyc")
moxco%&[]&=mem:p("_m_seltra2_moxco")
moyco%&[]&=mem:p("_m_seltra2_moyco")
redraw_map%&=mem:p("_m_seltra2_redraw_map")
bi%&=mem:p("_m_seltra2_bi")
bgc%&=mem:p("_m_seltra2_bgc")
camposx%&=mem:p("_m_seltra2_camposx")
camposy%&=mem:p("_m_seltra2_camposy")
time%&=mem:p("_m_seltra2_time")
garray:grouparray&=mem:p("_m_seltra2_garray")
barray:blockarray&=mem:p("_m_seltra2_barray")
wallgroup:blockarray&=mem:p("_m_seltra2_wallgroup")
rarray:redrawarray&=mem:p("_m_seltra2_rarray")
genarray:generatorarray&=mem:p("_m_seltra2_genarray")
bmap:fastblockmap&=mem:p("_m_seltra2_bmap")
thingmap:fastintmap&=mem:p("_m_seltra2_thingmap")
chem%&[]&=mem:p("_m_seltra2_chem")