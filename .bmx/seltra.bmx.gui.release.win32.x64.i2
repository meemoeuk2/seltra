import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.bytebuffer
import brl.clipboard
import brl.collections
import brl.d3d7max2d
import brl.d3d9max2d
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxunit
import brl.maxutil
import brl.objectlist
import brl.oggloader
import brl.openalaudio
import brl.platform
import brl.pngloader
import brl.quaternion
import brl.randomdefault
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.uuid
import brl.volumes
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.nfd
import pub.nx
import pub.opengles
import pub.opengles3
import pub.vulkan
import pub.xmmintrin
isBlock%=16
UpArrow%=4
directionFlags%=224
movingUp%=224
DownArrow%=2
movingDown%=96
LeftArrow%=3
movingLeft%=160
RightArrow%=1
movingRight%=32
keyrefflags||=4294967040
keyrfSh%=8
isMovingBlock%=32
bondpSh%=32
bondpWestflag||=4294967296
bondpEastflag||=8589934592
bondaSh%=36
bondaWestflag||=68719476736
bondaEastflag||=137438953472
bondpNorthflag||=17179869184
bondpSouthflag||=34359738368
bondaNorthflag||=274877906944
bondaSouthflag||=549755813888
isWall%=8
blockflags||=17587891077360
btypeSh%=40
getBlockType||=7696581394432
blocktypeElastic||=2199023255552
bounce||=128
blocktypeMagClock||=3298534883328
getDirection%=224
blocktypeMagAntiC||=4398046511104
wallimageindex%=3
arrowflags%=7
bondpflags||=64424509440
gencode||=5
directionFlagsX%=192
clockRotate||=64
bondaflags||=1030792151040
blocktypeEngine||=0
blocktypePlastic||=1099511627776
btemplate^Object{
.btype%&
.ch%&
.id%&
.maxbonds%&
.bonds2%&
-New()="__m_seltra_btemplate_New"
-createBlockImage%(grey%)="_m_seltra_btemplate_createBlockImage_i"
-createsingleblock%%(x%,y%,xv%,yv%,bonds%%,btype%%)="_m_seltra_btemplate_createsingleblock_iiiill"
-setbindingblock%(x%,y%)="_m_seltra_btemplate_setbindingblock_ii"
}="_m_seltra_btemplate"
cellArray^Object{
.ca:cell&[]&
.le%&
-New()="__m_seltra_cellArray_New"
-add%(x%,y%)="_m_seltra_cellArray_add_ii"
-add%(c:cell)="_m_seltra_cellArray_add_Tcell"
-ordered_sort%(n%,i%=0)="_m_seltra_cellArray_ordered_sort_ii"
}="_m_seltra_cellArray"
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
-putLast%(i%)="_m_seltra_blockarray_putLast_i"
-ordered_sort%(n%,i%=0)="_m_seltra_blockarray_ordered_sort_ii"
}="_m_seltra_blockarray"
subarray^Object{
.sa:substrate&[]&
.le%&
-New()="__m_seltra_subarray_New"
-add%(s:substrate)="_m_seltra_subarray_add_Tsubstrate"
-ordered_sort%(n%,i%=0)="_m_seltra_subarray_ordered_sort_ii"
}="_m_seltra_subarray"
subgrouparray^Object{
.sga:sgroup&[]&
.le%&
-New()="__m_seltra_subgrouparray_New"
-add%(sg:sgroup)="_m_seltra_subgrouparray_add_Tsgroup"
-ordered_sort%(n%,i%)="_m_seltra_subgrouparray_ordered_sort_ii"
}="_m_seltra_subgrouparray"
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
.bonds%&
.maxbonds%&
.bond:block&[]&
.bonds2%&
-New()="__m_seltra_block_New"
-Del%()="_m_seltra_block_Del"
-draw%()="_m_seltra_block_draw"
-out_of_bounds%()="_m_seltra_block_out_of_bounds"
-spawn:block(xs%,ys%)="_m_seltra_block_spawn_ii"
-checkchem%(b2:block)="_m_seltra_block_checkchem_Tblock"
-get_moli_chem%()="_m_seltra_block_get_moli_chem"
-bondcheck%(b2:block)="_m_seltra_block_bondcheck_Tblock"
-checkchem2%(b2:block)="_m_seltra_block_checkchem2_Tblock"
-checkchem_detach:block&[](b2:block)="_m_seltra_block_checkchem_detach_Tblock"
-checkchem3:block&[](b2:block)="_m_seltra_block_checkchem3_Tblock"
-try_flood_split%(b:block)="_m_seltra_block_try_flood_split_Tblock"
-repblock%()="_m_seltra_block_repblock"
}="_m_seltra_block"
redrawarray^Object{
.ra:redraw&[]&
.le%&
.drawn%&
-New()="__m_seltra_redrawarray_New"
-add%(r:redraw)="_m_seltra_redrawarray_add_Tredraw"
-do_redraws%()="_m_seltra_redrawarray_do_redraws"
}="_m_seltra_redrawarray"
generatorarray^Object{
.ga:Ggroup&[]&
.le%&
-New()="__m_seltra_generatorarray_New"
-add%(g:Ggroup)="_m_seltra_generatorarray_add_TGgroup"
-ordered_sort%(n%,i%=0)="_m_seltra_generatorarray_ordered_sort_ii"
}="_m_seltra_generatorarray"
FastBlockMap^Object{
.v:block&[]&
.k%&[]&
.le%&
.rc%&
-New()="__m_seltra_FastBlockMap_New"
-fetch:block(key%)="_m_seltra_FastBlockMap_fetch_i"
-vfetch:block(index%)="_m_seltra_FastBlockMap_vfetch_i"
-kfetch%(index%)="_m_seltra_FastBlockMap_kfetch_i"
-insert%(key%,b:block)="_m_seltra_FastBlockMap_insert_iTblock"
-remove%(key%)="_m_seltra_FastBlockMap_remove_i"
-iter%()="_m_seltra_FastBlockMap_iter"
-fastsort%()="_m_seltra_FastBlockMap_fastsort"
-orderedsort%()="_m_seltra_FastBlockMap_orderedsort"
}="_m_seltra_FastBlockMap"
fastlongmap^Object{
mnk%=9999999
mnv%=499999
.k%&[]&
.v||&[]&
.le%&
.ze%&
.nkv%&
-New()="__m_seltra_fastlongmap_New"
-initKeyMap%()="_m_seltra_fastlongmap_initKeyMap"
-fetch||(key%)="_m_seltra_fastlongmap_fetch_i"
-vfetch||(key%)="_m_seltra_fastlongmap_vfetch_i"
-ifetch%(key%)="_m_seltra_fastlongmap_ifetch_i"
-kfetch%(i%)="_m_seltra_fastlongmap_kfetch_i"
-getkey%(val||)="_m_seltra_fastlongmap_getkey_y"
-fastput%(key%,val%,index||)="_m_seltra_fastlongmap_fastput_iiy"
-put%(key%,val||)="_m_seltra_fastlongmap_put_iy"
-putq%(key%,val||)="_m_seltra_fastlongmap_putq_iy"
-put%(key%,val||,ow%)="_m_seltra_fastlongmap_put_iyi"
-remove%(key%)="_m_seltra_fastlongmap_remove_i"
}="_m_seltra_fastlongmap"
substratemap^Object{
.v:substrate&[]&
.k%&[]&
.le%&
.rc%&
-New()="__m_seltra_substratemap_New"
-fetch:substrate(key%)="_m_seltra_substratemap_fetch_i"
-vfetch:substrate(index%)="_m_seltra_substratemap_vfetch_i"
-kfetch%(index%)="_m_seltra_substratemap_kfetch_i"
-insert%(key%,s:substrate)="_m_seltra_substratemap_insert_iTsubstrate"
-remove%(key%)="_m_seltra_substratemap_remove_i"
-iter%()="_m_seltra_substratemap_iter"
-fastsort%()="_m_seltra_substratemap_fastsort"
-orderedsort%()="_m_seltra_substratemap_orderedsort"
}="_m_seltra_substratemap"
sgroup^Object{
.slist:subarray&
.xv%&
.yv%&
.bittags%&
.id%&
-New()="__m_seltra_sgroup_New"
-add%(s:substrate)="_m_seltra_sgroup_add_Tsubstrate"
-move%()="_m_seltra_sgroup_move"
-remove%()="_m_seltra_sgroup_remove"
-out_of_bounds_check%()="_m_seltra_sgroup_out_of_bounds_check"
-checkarrows%()="_m_seltra_sgroup_checkarrows"
-draw%()="_m_seltra_sgroup_draw"
}="_m_seltra_sgroup"
substrate^Object{
.image:TImage&
.x%&
.y%&
.bit_tags%&
.id%&
.oldx%&[]&
.oldy%&[]&
.group:sgroup&
-New()="__m_seltra_substrate_New"
-New(xs%,ys%,im:TImage,sg:sgroup)="_m_seltra_substrate_New_iiTTImageTsgroup"
-out_of_bounds%()="_m_seltra_substrate_out_of_bounds"
-draw%()="_m_seltra_substrate_draw"
-Del%()="_m_seltra_substrate_Del"
}="_m_seltra_substrate"
bgroup^Object{
.blist:blockarray&
.xv%&
.yv%&
.bittags%&
.id%&
.lastmove%&
.bref:block&
.n%&
-New()="__m_seltra_bgroup_New"
-add%(b:block)="_m_seltra_bgroup_add_Tblock"
-addNewBlock%(x%,y%)="_m_seltra_bgroup_addNewBlock_ii"
-collide%(b:block,b2:block)="_m_seltra_bgroup_collide_TblockTblock"
-collision_manager%(b:block,b2:block)="_m_seltra_bgroup_collision_manager_TblockTblock"
-push%(k%)="_m_seltra_bgroup_push_i"
-kicked%()="_m_seltra_bgroup_kicked"
-check_collision:block(xm%,ym%)="_m_seltra_bgroup_check_collision_ii"
-move%()="_m_seltra_bgroup_move"
-move%(xm%,ym%)="_m_seltra_bgroup_move_ii"
+check_group_vel%()="_m_seltra_bgroup_check_group_vel_i"
-check_substrates%()="_m_seltra_bgroup_check_substrates"
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
-New()="__m_seltra_redraw_New"
}="_m_seltra_redraw"
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
-bump%(key%,val%)="_m_seltra_fastintmap_bump_ii"
-iter%()="_m_seltra_fastintmap_iter"
-fastsort%()="_m_seltra_fastintmap_fastsort"
-orderedsort%()="_m_seltra_fastintmap_orderedsort"
-set_null_value%(n%)="_m_seltra_fastintmap_set_null_value_i"
}="_m_seltra_fastintmap"
longArray^Object{
.la%&[]&
.le%&
-New()="__m_seltra_longArray_New"
-add%(key%)="_m_seltra_longArray_add_i"
-putLast%(i%)="_m_seltra_longArray_putLast_i"
-ordered_sort%(n%,i%)="_m_seltra_longArray_ordered_sort_ii"
}="_m_seltra_longArray"
genTile^Object{
.x%&
.y%&
.ggroup%&
-New()="__m_seltra_genTile_New"
-addRandomBlock%(bg:bgroup)="_m_seltra_genTile_addRandomBlock_Tbgroup"
-genRandomBlockGroup%(n%)="_m_seltra_genTile_genRandomBlockGroup_i"
}="_m_seltra_genTile"
Ggroup^Object{
.bglist:bgroup&[]&
.le%&
.rate%&
.t%&
.bitflags%&
.n%&
.id%&
.clist:cell&[]&
.time%&
-New()="__m_seltra_Ggroup_New"
-update%()="_m_seltra_Ggroup_update"
-genIsolatedBlock:bgroup(x%,y%)="_m_seltra_Ggroup_genIsolatedBlock_ii"
}="_m_seltra_Ggroup"
cell^Object{
.x%&
.y%&
-New()="__m_seltra_cell_New"
}="_m_seltra_cell"
loadimage3:TImage(fn$)="_m_seltra_loadimage3"
loadimage2:TImage(fn$)="_m_seltra_loadimage2"
create_chem_numbers%()="_m_seltra_create_chem_numbers"
colfunc#(x#)="_m_seltra_colfunc"
create_block_mix%()="_m_seltra_create_block_mix"
remove_block_image_templates%()="_m_seltra_remove_block_image_templates"
ThingBlockCheckArrows%()="_m_seltra_ThingBlockCheckArrows"
thingBlockCollisionManager%(i%,i2%)="_m_seltra_thingBlockCollisionManager"
thingblockRemove%(key%)="_m_seltra_thingblockRemove"
moveblock%(key1%,key2%,i1%,i2%,val1%%,val2%%)="_m_seltra_moveblock"
clockRotation||(in||)="_m_seltra_clockRotation"
antiCrotation||(in||)="_m_seltra_antiCrotation"
ThingBlockMove%()="_m_seltra_ThingBlockMove"
update_thingblocks%()="_m_seltra_update_thingblocks"
core_engine_thread:Object(data:Object)="_m_seltra_core_engine_thread"
createsingleSubstrate:sgroup(x%,y%)="_m_seltra_createsingleSubstrate"
placeSubstrateGuide:sgroup(x%,y%)="_m_seltra_placeSubstrateGuide"
wallblock%(x%,y%,u%)="_m_seltra_wallblock"
chem_dist%(x%)="_m_seltra_chem_dist"
mergeSingleSubstrate%(x%,y%,image:TImage)="_m_seltra_mergeSingleSubstrate"
mouse_input_map%()="_m_seltra_mouse_input_map"
mouse_input_editbar%()="_m_seltra_mouse_input_editbar"
get_mouse_input%()="_m_seltra_get_mouse_input"
save_map%()="_m_seltra_save_map"
load_map%()="_m_seltra_load_map"
gen_maze_map%(xs%,ys%,xf%,yf%,mx%,my%)="_m_seltra_gen_maze_map"
get_user_input%()="_m_seltra_get_user_input"
thingtoImage:TImage(t||)="_m_seltra_thingtoImage"
draw_map%()="_m_seltra_draw_map"
redraw_cell%(x%,y%)="_m_seltra_redraw_cell"
redraw3x3%(x%,y%)="_m_seltra_redraw3x3"
draw_walls%()="_m_seltra_draw_walls"
draw_editbar%()="_m_seltra_draw_editbar"
update_display%()="_m_seltra_update_display"
thingBlockDeleteCheck%()="_m_seltra_thingBlockDeleteCheck"
ThingBlockCheckCollision%%(key%)="_m_seltra_ThingBlockCheckCollision"
mergeBlocks%(key1%,key2%)="_m_seltra_mergeBlocks"
update_sgroups%()="_m_seltra_update_sgroups"
draw_things%()="_m_seltra_draw_things"
draw_everything%()="_m_seltra_draw_everything"
update_bgroups%()="_m_seltra_update_bgroups"
draw_barray%()="_m_seltra_draw_barray"
draw_sarray%()="_m_seltra_draw_sarray"
placeBigSubstrate%(x1%,y1%,x2%,y2%)="_m_seltra_placeBigSubstrate"
placeGenTile%(x%,y%)="_m_seltra_placeGenTile"
update_gens%()="_m_seltra_update_gens"
colfuncx#(x#)="_m_seltra_colfuncx"
demo_color_spread%()="_m_seltra_demo_color_spread"
io_and_display_thread:Object(data:Object)="_m_seltra_io_and_display_thread"
reForgeGenerators%()="_m_seltra_reForgeGenerators"
dblog%&=mem:p("_m_seltra_dblog")
gw%&=mem:p("_m_seltra_gw")
gh%&=mem:p("_m_seltra_gh")
editbarwidth%&=mem:p("_m_seltra_editbarwidth")
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
gencell:TImage&=mem:p("_m_seltra_gencell")
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
bgc%&=mem:p("_m_seltra_bgc")
bc%&=mem:p("_m_seltra_bc")
sgc%&=mem:p("_m_seltra_sgc")
sc%&=mem:p("_m_seltra_sc")
camposx%&=mem:p("_m_seltra_camposx")
camposy%&=mem:p("_m_seltra_camposy")
time%&=mem:p("_m_seltra_time")
gamespeedbrake%&=mem:p("_m_seltra_gamespeedbrake")
gamespeedbrake_setting%&=mem:p("_m_seltra_gamespeedbrake_setting")
unAllocatedGenTiles:cellArray&=mem:p("_m_seltra_unAllocatedGenTiles")
garray:grouparray&=mem:p("_m_seltra_garray")
barray:blockarray&=mem:p("_m_seltra_barray")
sarray:subarray&=mem:p("_m_seltra_sarray")
sgarray:subgrouparray&=mem:p("_m_seltra_sgarray")
wallgroup:blockarray&=mem:p("_m_seltra_wallgroup")
rarray:redrawarray&=mem:p("_m_seltra_rarray")
genarray:generatorarray&=mem:p("_m_seltra_genarray")
bmap:FastBlockMap&=mem:p("_m_seltra_bmap")
thingmap:fastlongmap&=mem:p("_m_seltra_thingmap")
v||&[]&=mem:p("_m_seltra_v")
k%&[]&=mem:p("_m_seltra_k")
smap:substratemap&=mem:p("_m_seltra_smap")
dbflag%&=mem:p("_m_seltra_dbflag")
chem%&[]&=mem:p("_m_seltra_chem")
sub0:TImage&=mem:p("_m_seltra_sub0")
subd:TImage&=mem:p("_m_seltra_subd")