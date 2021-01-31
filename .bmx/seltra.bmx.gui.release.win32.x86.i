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
-create_block_image%()="_m_seltra_btemplate_create_block_image"
-createsingleblock:bgroup(x%,y%,xv%,yv%)="_m_seltra_btemplate_createsingleblock_iiii"
-setbindingblock%(x%,y%)="_m_seltra_btemplate_setbindingblock_ii"
}="_m_seltra_btemplate"
grouparray^Object{
.ga:bgroup&[]&
.le%&
-add%(g:bgroup)="_m_seltra_grouparray_add_Tbgroup"
-ordered_sort%(n%,i%)="_m_seltra_grouparray_ordered_sort_ii"
}="_m_seltra_grouparray"
blockarray^Object{
.ba:block&[]&
.le%&
-add%(b:block)="_m_seltra_blockarray_add_Tblock"
-ordered_sort%(n%,i%=0)="_m_seltra_blockarray_ordered_sort_ii"
}="_m_seltra_blockarray"
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
.ch%&
.mch%&
.bt%&
-Del%()="_m_seltra_block_Del"
-draw%()="_m_seltra_block_draw"
-out_of_bounds%()="_m_seltra_block_out_of_bounds"
-spawn:block(xs%,ys%)="_m_seltra_block_spawn_ii"
-checkchem%(b2:block)="_m_seltra_block_checkchem_Tblock"
-get_moli_chem%()="_m_seltra_block_get_moli_chem"
-checkchem2%(b2:block)="_m_seltra_block_checkchem2_Tblock"
-checkchem3:block&[](b2:block)="_m_seltra_block_checkchem3_Tblock"
-try_flood_split%(b:block)="_m_seltra_block_try_flood_split_Tblock"
-repblock%()="_m_seltra_block_repblock"
}="_m_seltra_block"
redrawarray^Object{
.ra:redraw&[]&
.le%&
.drawn%&
-add%(r:redraw)="_m_seltra_redrawarray_add_Tredraw"
-do_redraws%()="_m_seltra_redrawarray_do_redraws"
}="_m_seltra_redrawarray"
generatorarray^Object{
.ga:gen&[]&
.le%&
-add%(g:gen)="_m_seltra_generatorarray_add_Tgen"
-ordered_sort%(n%,i%=0)="_m_seltra_generatorarray_ordered_sort_ii"
}="_m_seltra_generatorarray"
fastblockmap^Object{
.v:block&[]&
.k%&[]&
.le%&
.rc%&
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
bgroup^Object{
.blist:blockarray&
.xv%&
.yv%&
.bittags%&
.id%&
.xf%&
.yf%&
-add%(b:block)="_m_seltra_bgroup_add_Tblock"
-move%()="_m_seltra_bgroup_move"
+check_group_vel%()="_m_seltra_bgroup_check_group_vel_i"
-check_forces%()="_m_seltra_bgroup_check_forces"
-remove_block%(b:block)="_m_seltra_bgroup_remove_block_Tblock"
-remove%()="_m_seltra_bgroup_remove"
-split%(bl:block&[],xvn%,yvn%)="_m_seltra_bgroup_split_aTblockii"
-spawn:bgroup(xs%,ys%)="_m_seltra_bgroup_spawn_ii"
-checkarrows%()="_m_seltra_bgroup_checkarrows"
-out_of_bounds%()="_m_seltra_bgroup_out_of_bounds"
-draw%()="_m_seltra_bgroup_draw"
-merge%(g:bgroup)="_m_seltra_bgroup_merge_Tbgroup"
}="_m_seltra_bgroup"
redraw^Object{
.x%&
.y%&
.redraws@&
}="_m_seltra_redraw"
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
-genblock%()="_m_seltra_gen_genblock"
-update%()="_m_seltra_gen_update"
}="_m_seltra_gen"
loadimage3:TImage(fn$)="_m_seltra_loadimage3"
create_chem_numbers%()="_m_seltra_create_chem_numbers"
colfunc#(x#)="_m_seltra_colfunc"
create_block_mix%()="_m_seltra_create_block_mix"
remove_block_image_templates%()="_m_seltra_remove_block_image_templates"
wallblock%(x%,y%,u%)="_m_seltra_wallblock"
gen_maze_map%(xs%,ys%,xf%,yf%,mx%,my%)="_m_seltra_gen_maze_map"
loadimage2:TImage(fn$)="_m_seltra_loadimage2"
chem_dist%(x%)="_m_seltra_chem_dist"
update_bgroups%()="_m_seltra_update_bgroups"
update_gens%()="_m_seltra_update_gens"
core_engine_thread:Object(data:Object)="_m_seltra_core_engine_thread"
createsingleSubstrate%(x%,y%)="_m_seltra_createsingleSubstrate"
mouse_input_map%()="_m_seltra_mouse_input_map"
mouse_input_editbar%()="_m_seltra_mouse_input_editbar"
get_mouse_input%()="_m_seltra_get_mouse_input"
get_user_input%()="_m_seltra_get_user_input"
redraw_cell%(x%,y%)="_m_seltra_redraw_cell"
redraw3x3%(x%,y%)="_m_seltra_redraw3x3"
draw_things%()="_m_seltra_draw_things"
draw_barray%()="_m_seltra_draw_barray"
draw_walls%()="_m_seltra_draw_walls"
draw_editbar%()="_m_seltra_draw_editbar"
update_display%()="_m_seltra_update_display"
io_and_display_thread:Object(data:Object)="_m_seltra_io_and_display_thread"
Create_world%()="_m_seltra_Create_world"
placegene%(x%,y%)="_m_seltra_placegene"
colfuncx#(x#)="_m_seltra_colfuncx"
demo_color_spread%()="_m_seltra_demo_color_spread"
gw%&=mem:p("_m_seltra_gw")
gh%&=mem:p("_m_seltra_gh")
imagelist:TImage&[]&=mem:p("_m_seltra_imagelist")
blockart:TImage&[]&=mem:p("_m_seltra_blockart")
blockw:TImage&=mem:p("_m_seltra_blockw")
noi%&=mem:p("_m_seltra_noi")
blocko:TImage&=mem:p("_m_seltra_blocko")
blockc:TImage&=mem:p("_m_seltra_blockc")
blocks:TImage&=mem:p("_m_seltra_blocks")
blockq:TImage&=mem:p("_m_seltra_blockq")
blockx:TImage&=mem:p("_m_seltra_blockx")
blockd:TImage&=mem:p("_m_seltra_blockd")
blockb:TImage&=mem:p("_m_seltra_blockb")
btarray:btemplate&[]&=mem:p("_m_seltra_btarray")
mousep:TImage&=mem:p("_m_seltra_mousep")
mousec:TImage&=mem:p("_m_seltra_mousec")
blank:TImage&=mem:p("_m_seltra_blank")
arroww:TImage&=mem:p("_m_seltra_arroww")
arrowe:TImage&=mem:p("_m_seltra_arrowe")
arrown:TImage&=mem:p("_m_seltra_arrown")
arrows:TImage&=mem:p("_m_seltra_arrows")
frame@&=mem:p("_m_seltra_frame")
mox%&=mem:p("_m_seltra_mox")
moy%&=mem:p("_m_seltra_moy")
moz%&=mem:p("_m_seltra_moz")
moxo%&[]&=mem:p("_m_seltra_moxo")
moyo%&[]&=mem:p("_m_seltra_moyo")
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
time%&=mem:p("_m_seltra_time")
garray:grouparray&=mem:p("_m_seltra_garray")
barray:blockarray&=mem:p("_m_seltra_barray")
sarray:blockarray&=mem:p("_m_seltra_sarray")
wallgroup:blockarray&=mem:p("_m_seltra_wallgroup")
rarray:redrawarray&=mem:p("_m_seltra_rarray")
genarray:generatorarray&=mem:p("_m_seltra_genarray")
bmap:fastblockmap&=mem:p("_m_seltra_bmap")
thingmap:fastintmap&=mem:p("_m_seltra_thingmap")
chem%&[]&=mem:p("_m_seltra_chem")
sub0:TImage&=mem:p("_m_seltra_sub0")