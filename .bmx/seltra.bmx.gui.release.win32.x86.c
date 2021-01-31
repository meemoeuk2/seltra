#include "seltra.bmx.gui.release.win32.x86.h"
static BBString _s17={
	&bbStringClass,
	1,
	{32}
};
static BBString _s16={
	&bbStringClass,
	2,
	{32,32}
};
static BBString _s21={
	&bbStringClass,
	8,
	{32,108,101,32,102,105,110,32}
};
static BBString _s19={
	&bbStringClass,
	4,
	{46,112,110,103}
};
static BBString _s25={
	&bbStringClass,
	1,
	{49}
};
static BBString _s0={
	&bbStringClass,
	35,
	{78,111,32,115,112,97,99,101,32,116,111,32,105,110,99,114,101
	,97,115,101,32,100,101,113,117,101,32,99,97,112,97,99,105
	,116,121}
};
static BBString _s13={
	&bbStringClass,
	10,
	{97,114,114,111,119,101,46,112,110,103}
};
static BBString _s14={
	&bbStringClass,
	10,
	{97,114,114,111,119,110,46,112,110,103}
};
static BBString _s15={
	&bbStringClass,
	10,
	{97,114,114,111,119,115,46,112,110,103}
};
static BBString _s12={
	&bbStringClass,
	10,
	{97,114,114,111,119,119,46,112,110,103}
};
static BBString _s11={
	&bbStringClass,
	9,
	{98,108,97,110,107,46,112,110,103}
};
static BBString _s18={
	&bbStringClass,
	16,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,97,114,116}
};
static BBString _s8={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,98,46,112,110
	,103}
};
static BBString _s3={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,99,46,112,110
	,103}
};
static BBString _s7={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,100,46,112,110
	,103}
};
static BBString _s2={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,111,46,112,110
	,103}
};
static BBString _s5={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,113,46,112,110
	,103}
};
static BBString _s4={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,115,46,112,110
	,103}
};
static BBString _s1={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,119,46,112,110
	,103}
};
static BBString _s6={
	&bbStringClass,
	18,
	{98,108,111,99,107,115,50,92,98,108,111,99,107,120,46,112,110
	,103}
};
static BBString _s20={
	&bbStringClass,
	8,
	{102,105,110,105,115,104,101,100}
};
static BBString _s23={
	&bbStringClass,
	5,
	{104,105,104,105,104}
};
static BBString _s9={
	&bbStringClass,
	9,
	{109,111,117,115,101,46,112,110,103}
};
static BBString _s10={
	&bbStringClass,
	13,
	{109,111,117,115,101,99,101,108,108,46,112,110,103}
};
static BBString _s22={
	&bbStringClass,
	8,
	{115,117,98,48,46,112,110,103}
};
static BBString _s24={
	&bbStringClass,
	7,
	{115,117,112,32,110,111,103}
};
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_20{int kind; const char *name; BBDebugDecl decls[21]; };
struct BBDebugScope_23{int kind; const char *name; BBDebugDecl decls[24]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
BBINT _m_seltra_gw=0;
BBINT _m_seltra_gh=0;
BBARRAY _m_seltra_imagelist=&bbEmptyArray;
BBARRAY _m_seltra_blockart=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_blockw=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra_noi=0;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage3(BBSTRING bbt_fn){
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),255,255,255),-1);
	_m_seltra_noi=(_m_seltra_noi+1);
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)(_m_seltra_noi-1))];
}
struct brl_max2d_image_TImage_obj* _m_seltra_blocko=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blockc=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blocks=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blockq=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blockx=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blockd=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blockb=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
void __m_seltra_btemplate_New(struct _m_seltra_btemplate_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_btemplate;
	o->__m_seltra_btemplate_btype = 0;
	o->__m_seltra_btemplate_ch = 0;
	o->__m_seltra_btemplate_id = 0;
}
BBINT __m_seltra_btemplate_create_block_image(struct _m_seltra_btemplate_obj* o){
	BBINT bbt_bred=0;
	BBINT bbt_bgre=0;
	BBINT bbt_bblu=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	bbt_bred=((BBINT)(((100.0f*_m_seltra_colfunc(((BBFLOAT)o->__m_seltra_btemplate_ch )/7.0f))+((BBFLOAT)brl_random_Rand(20,1)))+120.000000f));
	bbt_bgre=((BBINT)((150.0f*_m_seltra_colfunc((2.3f+((BBFLOAT)o->__m_seltra_btemplate_ch ))/7.0f))+30.0000000f));
	bbt_bblu=((BBINT)((150.0f*_m_seltra_colfunc((4.7f+((BBFLOAT)o->__m_seltra_btemplate_ch ))/7.0f))+50.0000000f));
	brl_max2d_SetViewport(0,0,30,30);
	brl_max2d_SetMaskColor(0,0,0);
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbStringConcat(bbStringConcat(&_s18,bbStringFromInt(o->__m_seltra_btemplate_ch )),&_s19)),255,255,255),-1);
	brl_max2d_SetColor((bbt_bred+20),(bbt_bgre+40),(bbt_bblu+40));
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	brl_max2d_SetMaskColor(0,0,0);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0,0,0);
	brl_max2d_Cls();
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(30,30,1,0);
	brl_max2d_SetColor(bbt_bred,bbt_bgre,bbt_bblu);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)o->__m_seltra_btemplate_btype )],0.000000000f,0.000000000f,0);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_noi)],0,0,0);
	_m_seltra_noi=(_m_seltra_noi+1);
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_btemplate_createsingleblock_iiii(struct _m_seltra_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv){
	if(((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10))))!= &bbNullObject){
		return (struct _m_seltra_bgroup_obj*)&bbNullObject;
	}
	if(o->__m_seltra_btemplate_btype ==0){
		_m_seltra_wallblock(bbt_x,bbt_y,o->__m_seltra_btemplate_id );
		return (struct _m_seltra_bgroup_obj*)&bbNullObject;
	}
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	bbt_bg->__m_seltra_bgroup_xv =bbt_xv;
	bbt_bg->__m_seltra_bgroup_yv =bbt_yv;
	bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba =bbArraySlice(":block",bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,0,10);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	bbt_b->__m_seltra_block_x =bbt_x;
	bbt_b->__m_seltra_block_y =bbt_y;
	bbt_b->__m_seltra_block_btype =o->__m_seltra_btemplate_btype ;
	bbt_b->__m_seltra_block_ch =o->__m_seltra_btemplate_ch ;
	bbt_b->__m_seltra_block_mch =o->__m_seltra_btemplate_ch ;
	bbt_b->__m_seltra_block_bt =o->__m_seltra_btemplate_id ;
	bbt_b->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)o->__m_seltra_btemplate_id )];
	(bbt_bg)->clas->m_add_Tblock((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_block_obj*)bbt_b);
	(_m_seltra_garray)->clas->m_add_Tbgroup((struct _m_seltra_grouparray_obj*)_m_seltra_garray,(struct _m_seltra_bgroup_obj*)bbt_bg);
	(_m_seltra_barray)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_barray,(struct _m_seltra_block_obj*)bbt_b);
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
	return (struct _m_seltra_bgroup_obj*)bbt_bg;
}
BBINT __m_seltra_btemplate_setbindingblock_ii(struct _m_seltra_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	if(bbt_b==&bbNullObject){
		bbt_bg=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_btemplate_obj*)o)->clas->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)o,bbt_x,bbt_y,0,0);
	}else{
		bbt_bg=(struct _m_seltra_bgroup_obj*)bbt_b->__m_seltra_block_group ;
	}
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	if(bbt_x>0){
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_x-1)+(bbt_y<<10)));
	}
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)bbt_b2->__m_seltra_block_group );
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
	}
	if(bbt_y>0){
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+((bbt_y-1)<<10)));
	}
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)bbt_b2->__m_seltra_block_group );
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
	}
	bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_x+1)+(bbt_y<<10)));
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)bbt_b2->__m_seltra_block_group );
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
	}
	bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+((bbt_y+1)<<10)));
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)bbt_b2->__m_seltra_block_group );
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
	}
	return 0;
}
struct BBDebugScope_7 _m_seltra_btemplate_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"btemplate",
	{
		{
			BBDEBUGDECL_FIELD,
			"btype",
			"i",
			.field_offset=offsetof(struct _m_seltra_btemplate_obj,__m_seltra_btemplate_btype)
		},
		{
			BBDEBUGDECL_FIELD,
			"ch",
			"i",
			.field_offset=offsetof(struct _m_seltra_btemplate_obj,__m_seltra_btemplate_ch)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_btemplate_obj,__m_seltra_btemplate_id)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_btemplate_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"create_block_image",
			"()i",
			.var_address=(void*)&__m_seltra_btemplate_create_block_image
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"createsingleblock",
			"(i,i,i,i):bgroup",
			.var_address=(void*)&__m_seltra_btemplate_createsingleblock_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"setbindingblock",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_btemplate_setbindingblock_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_btemplate _m_seltra_btemplate={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_btemplate_scope,
	sizeof(struct _m_seltra_btemplate_obj),
	(void (*)(BBOBJECT))__m_seltra_btemplate_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_btemplate_obj,__m_seltra_btemplate_id) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_btemplate_create_block_image
	,__m_seltra_btemplate_createsingleblock_iiii
	,__m_seltra_btemplate_setbindingblock_ii
};

BBARRAY _m_seltra_btarray=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_mousep=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_mousec=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_blank=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arroww=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrowe=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrown=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_arrows=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBBYTE _m_seltra_frame=0;
BBINT _m_seltra_mox=0;
BBINT _m_seltra_moy=0;
BBINT _m_seltra_moz=0;
BBARRAY _m_seltra_moxo=&bbEmptyArray;
BBARRAY _m_seltra_moyo=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_smi=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra_smt=0;
BBFLOAT _m_seltra_zoom=30.0f;
BBINT _m_seltra_mozo=0;
BBFLOAT _m_seltra_mozu=.00000000f;
BBINT _m_seltra_moxc=0;
BBINT _m_seltra_moyc=0;
BBARRAY _m_seltra_moxco=&bbEmptyArray;
BBARRAY _m_seltra_moyco=&bbEmptyArray;
BBINT _m_seltra_redraw_map=3;
BBINT _m_seltra_bi=0;
BBINT _m_seltra_bgc=0;
BBINT _m_seltra_camposx=0;
BBINT _m_seltra_camposy=0;
BBINT _m_seltra_time=0;
void __m_seltra_grouparray_New(struct _m_seltra_grouparray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_grouparray;
	o->__m_seltra_grouparray_ga = bbArrayNew1D(":bgroup", 2000000);
	o->__m_seltra_grouparray_le = 0;
}
BBINT __m_seltra_grouparray_add_Tbgroup(struct _m_seltra_grouparray_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_grouparray_ga ,1))[((BBUINT)o->__m_seltra_grouparray_le )]=(struct _m_seltra_bgroup_obj*)bbt_g;
	bbt_g->__m_seltra_bgroup_id =o->__m_seltra_grouparray_le ;
	o->__m_seltra_grouparray_le =(o->__m_seltra_grouparray_le +1);
	return 0;
}
BBINT __m_seltra_grouparray_ordered_sort_ii(struct _m_seltra_grouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_seltra_grouparray_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_seltra_grouparray_le ){
		((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_j)];
		if(((BBObject*)((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_i)])!= &bbNullObject){
			((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_i)]->__m_seltra_bgroup_id =bbt_i;
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_grouparray_le =bbt_i;
	return 0;
}
struct BBDebugScope_5 _m_seltra_grouparray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"grouparray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ga",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_ga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_grouparray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:bgroup)i",
			.var_address=(void*)&__m_seltra_grouparray_add_Tbgroup
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_grouparray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_grouparray _m_seltra_grouparray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_grouparray_scope,
	sizeof(struct _m_seltra_grouparray_obj),
	(void (*)(BBOBJECT))__m_seltra_grouparray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_grouparray_obj,__m_seltra_grouparray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_grouparray_add_Tbgroup
	,__m_seltra_grouparray_ordered_sort_ii
};

struct _m_seltra_grouparray_obj* _m_seltra_garray=(struct _m_seltra_grouparray_obj*)&bbNullObject;
void __m_seltra_blockarray_New(struct _m_seltra_blockarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_blockarray;
	o->__m_seltra_blockarray_ba = bbArrayNew1D(":block", 50);
	o->__m_seltra_blockarray_le = 0;
}
BBINT __m_seltra_blockarray_add_Tblock(struct _m_seltra_blockarray_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_blockarray_ba ,1))[((BBUINT)o->__m_seltra_blockarray_le )]=(struct _m_seltra_block_obj*)bbt_b;
	if(o==_m_seltra_barray){
		bbt_b->__m_seltra_block_id =o->__m_seltra_blockarray_le ;
	}
	o->__m_seltra_blockarray_le =(o->__m_seltra_blockarray_le +1);
	return 0;
}
BBINT __m_seltra_blockarray_ordered_sort_ii(struct _m_seltra_blockarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_seltra_blockarray_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_seltra_blockarray_le ){
		((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_j)];
		if(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)])!= &bbNullObject){
			((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]->__m_seltra_block_id =bbt_i;
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_blockarray_le =bbt_i;
	return 0;
}
struct BBDebugScope_5 _m_seltra_blockarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"blockarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ba",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_ba)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_blockarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			.var_address=(void*)&__m_seltra_blockarray_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_blockarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_blockarray _m_seltra_blockarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_blockarray_scope,
	sizeof(struct _m_seltra_blockarray_obj),
	(void (*)(BBOBJECT))__m_seltra_blockarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_blockarray_obj,__m_seltra_blockarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_blockarray_add_Tblock
	,__m_seltra_blockarray_ordered_sort_ii
};

struct _m_seltra_blockarray_obj* _m_seltra_barray=(struct _m_seltra_blockarray_obj*)&bbNullObject;
struct _m_seltra_blockarray_obj* _m_seltra_sarray=(struct _m_seltra_blockarray_obj*)&bbNullObject;
void __m_seltra_block_New(struct _m_seltra_block_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_block;
	o->__m_seltra_block_btype = 0;
	o->__m_seltra_block_image = (struct brl_max2d_image_TImage_obj*)&bbNullObject;
	o->__m_seltra_block_x = 0;
	o->__m_seltra_block_y = 0;
	o->__m_seltra_block_bit_tags = 0;
	o->__m_seltra_block_id = 0;
	o->__m_seltra_block_oldx = bbArrayNew1D("i", 2);
	o->__m_seltra_block_oldy = bbArrayNew1D("i", 2);
	o->__m_seltra_block_group = (struct _m_seltra_bgroup_obj*)&bbNullObject;
	o->__m_seltra_block_ch = 0;
	o->__m_seltra_block_mch = 0;
	o->__m_seltra_block_bt = 0;
}
BBINT __m_seltra_block_Del(struct _m_seltra_block_obj* o){
	(o->__m_seltra_block_group )->clas->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)o->__m_seltra_block_group ,(struct _m_seltra_block_obj*)o);
	((struct _m_seltra_block_obj**)BBARRAYDATA(_m_seltra_barray->__m_seltra_blockarray_ba ,1))[((BBUINT)o->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
	(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +(o->__m_seltra_block_y <<10)));
	struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	bbt_re->__m_seltra_redraw_x =((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)];
	bbt_re->__m_seltra_redraw_y =((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)];
	bbt_re->__m_seltra_redraw_redraws =2;
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	bbt_re->__m_seltra_redraw_x =((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldx ,1))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	bbt_re->__m_seltra_redraw_y =((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldy ,1))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	bbt_re->__m_seltra_redraw_redraws =2;
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	return 0;
}
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj* o){
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)o->__m_seltra_block_image ,(((BBFLOAT)(o->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(o->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
	((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)]=o->__m_seltra_block_x ;
	((BBINT*)BBARRAYDATA(o->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]=o->__m_seltra_block_y ;
	return 0;
}
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj* o){
	if((((o->__m_seltra_block_x <1) || (o->__m_seltra_block_x >1000)) || (o->__m_seltra_block_y <1)) || (o->__m_seltra_block_y >1000)){
		return 1;
	}
	return 0;
}
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	bbt_b->__m_seltra_block_btype =o->__m_seltra_block_btype ;
	bbt_b->__m_seltra_block_bit_tags =(bbt_b->__m_seltra_block_bit_tags -1);
	bbt_b->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)o->__m_seltra_block_image ;
	bbt_b->__m_seltra_block_x =(o->__m_seltra_block_x +bbt_xs);
	bbt_b->__m_seltra_block_y =(o->__m_seltra_block_y +bbt_ys);
	_m_seltra_bi=(_m_seltra_bi+1);
	(_m_seltra_barray)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_barray,(struct _m_seltra_block_obj*)bbt_b);
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
	return (struct _m_seltra_block_obj*)bbt_b;
}
BBINT __m_seltra_block_checkchem_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	BBFLOAT bbt_d1=((BBFLOAT)_m_seltra_chem_dist(o->__m_seltra_block_ch ));
	BBFLOAT bbt_d2=((BBFLOAT)_m_seltra_chem_dist(bbt_b2->__m_seltra_block_ch ));
	BBFLOAT bbt_dc=((BBFLOAT)_m_seltra_chem_dist(o->__m_seltra_block_ch +bbt_b2->__m_seltra_block_ch ));
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromFloat(bbt_d1),&_s16),bbStringFromFloat(bbt_d2)),&_s16),bbStringFromFloat(bbt_dc)),&_s16),bbStringFromFloat((bbt_d1+bbt_d2)/2.0f)));
	if(bbt_dc<(bbt_d1+bbt_d2)){
		return 1;
	}
	return 0;
}
BBINT __m_seltra_block_get_moli_chem(struct _m_seltra_block_obj* o){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	o->__m_seltra_block_mch =o->__m_seltra_block_ch ;
	if(o->__m_seltra_block_x >0){
		bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x -1)+(o->__m_seltra_block_y <<10)));
	}
	if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_group ==o->__m_seltra_block_group )){
		o->__m_seltra_block_mch =(o->__m_seltra_block_mch +bbt_b->__m_seltra_block_ch );
	}
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x +1)+(o->__m_seltra_block_y <<10)));
	if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_group ==o->__m_seltra_block_group )){
		o->__m_seltra_block_mch =(o->__m_seltra_block_mch +bbt_b->__m_seltra_block_ch );
	}
	if(o->__m_seltra_block_y >0){
		bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y -1)<<10)));
	}
	if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_group ==o->__m_seltra_block_group )){
		o->__m_seltra_block_mch =(o->__m_seltra_block_mch +bbt_b->__m_seltra_block_ch );
	}
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y +1)<<10)));
	if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_group ==o->__m_seltra_block_group )){
		o->__m_seltra_block_mch =(o->__m_seltra_block_mch +bbt_b->__m_seltra_block_ch );
	}
	return 0;
}
BBINT __m_seltra_block_checkchem2_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	BBINT bbt_ud=0;
	BBINT bbt_sd=0;
	bbt_ud=bbIntAbs(_m_seltra_chem_dist(o->__m_seltra_block_mch ));
	bbt_sd=bbIntAbs(_m_seltra_chem_dist(bbt_b2->__m_seltra_block_ch +o->__m_seltra_block_mch ));
	if(bbt_sd<bbt_ud){
		bbt_ud=bbIntAbs(_m_seltra_chem_dist(bbt_b2->__m_seltra_block_mch ));
		bbt_sd=bbIntAbs(_m_seltra_chem_dist(o->__m_seltra_block_ch +bbt_b2->__m_seltra_block_mch ));
	}
	if(bbt_sd<bbt_ud){
		return 1;
	}
	return 0;
}
BBARRAY __m_seltra_block_checkchem3_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	BBINT bbt_d=0;
	BBINT bbt_mch2=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b3=(struct _m_seltra_block_obj*)&bbNullObject;
	BBARRAY bbt_ba=bbArrayNew1D(":block", 5);
	struct _m_seltra_block_obj* volatile bbt_bw=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_be=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_bn=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_bs=(struct _m_seltra_block_obj*)&bbNullObject;
	bbt_mch2=o->__m_seltra_block_mch ;
	if(((BBObject*)bbt_b2)!= &bbNullObject){
		bbt_mch2=(o->__m_seltra_block_mch +bbt_b2->__m_seltra_block_ch );
	}
	BBINT bbt_ldsf=_m_seltra_chem_dist(bbt_mch2);
	if(o->__m_seltra_block_x >0){
		bbt_bw=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x -1)+(o->__m_seltra_block_y <<10)));
	}
	bbt_be=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x +1)+(o->__m_seltra_block_y <<10)));
	if(o->__m_seltra_block_y >0){
		bbt_bn=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y -1)<<10)));
	}
	bbt_bs=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y +1)<<10)));
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (bbt_bw->__m_seltra_block_group !=o->__m_seltra_block_group )){
		bbt_bw=(struct _m_seltra_block_obj*)&bbNullObject;
	}
	if((((BBObject*)bbt_be)!= &bbNullObject) && (bbt_be->__m_seltra_block_group !=o->__m_seltra_block_group )){
		bbt_be=(struct _m_seltra_block_obj*)&bbNullObject;
	}
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (bbt_bn->__m_seltra_block_group !=o->__m_seltra_block_group )){
		bbt_bn=(struct _m_seltra_block_obj*)&bbNullObject;
	}
	if((((BBObject*)bbt_bs)!= &bbNullObject) && (bbt_bs->__m_seltra_block_group !=o->__m_seltra_block_group )){
		bbt_bs=(struct _m_seltra_block_obj*)&bbNullObject;
	}
	if(((BBObject*)bbt_bw)!= &bbNullObject){
		bbt_d=_m_seltra_chem_dist(bbt_mch2-bbt_bw->__m_seltra_block_ch );
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			bbt_ldsf=bbt_d;
		}
	}
	if(((BBObject*)bbt_be)!= &bbNullObject){
		bbt_d=_m_seltra_chem_dist(bbt_mch2-bbt_be->__m_seltra_block_ch );
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_be;
			bbt_ldsf=bbt_d;
		}
	}
	if(((BBObject*)bbt_bn)!= &bbNullObject){
		bbt_d=_m_seltra_chem_dist(bbt_mch2-bbt_bn->__m_seltra_block_ch );
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			bbt_ldsf=bbt_d;
		}
	}
	if(((BBObject*)bbt_bs)!= &bbNullObject){
		bbt_d=_m_seltra_chem_dist(bbt_mch2-bbt_bs->__m_seltra_block_ch );
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bs;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bw->__m_seltra_block_ch +bbt_be->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bw->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_be->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_bn)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bw->__m_seltra_block_ch +bbt_bn->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bw->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_bn->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_bn;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_bs)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bw->__m_seltra_block_ch +bbt_bs->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bw->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_bs->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_bs;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bn->__m_seltra_block_ch +bbt_be->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bn->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_be->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (((BBObject*)bbt_bs)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bn->__m_seltra_block_ch +bbt_bs->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bn->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_bs->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_bs;
			bbt_ldsf=bbt_d;
		}
	}
	if((((BBObject*)bbt_bs)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(bbt_bs->__m_seltra_block_ch +bbt_be->__m_seltra_block_ch )))+_m_seltra_chem_dist(bbt_bs->__m_seltra_block_mch -o->__m_seltra_block_ch ))+_m_seltra_chem_dist(bbt_be->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		if(bbt_ldsf>bbt_d){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bs;
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			bbt_ldsf=bbt_d;
		}
	}
	BBINT bbt_ch2=0;
	BBINT bbt_i=0;
	if(((BBObject*)bbt_bw)!= &bbNullObject){
		bbt_ch2=_m_seltra_chem_dist(bbt_bw->__m_seltra_block_mch -o->__m_seltra_block_ch );
		bbt_mch2=(bbt_mch2-bbt_bw->__m_seltra_block_ch );
	}
	if(((BBObject*)bbt_be)!= &bbNullObject){
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(bbt_be->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		bbt_mch2=(bbt_mch2-bbt_be->__m_seltra_block_ch );
	}
	if(((BBObject*)bbt_bn)!= &bbNullObject){
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(bbt_bn->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		bbt_mch2=(bbt_mch2-bbt_bn->__m_seltra_block_ch );
	}
	if(((BBObject*)bbt_bs)!= &bbNullObject){
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(bbt_bs->__m_seltra_block_mch -o->__m_seltra_block_ch ));
		bbt_mch2=(bbt_mch2-bbt_bs->__m_seltra_block_ch );
	}
	bbt_d=(bbt_ch2+_m_seltra_chem_dist(bbt_mch2));
	if(bbt_ldsf>bbt_d){
		bbt_ba=bbArraySlice(":block",bbt_ba,0,5);
		if(((BBObject*)bbt_bw)!= &bbNullObject){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			bbt_i=(bbt_i+1);
		}
		if(((BBObject*)bbt_be)!= &bbNullObject){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_be;
			bbt_i=(bbt_i+1);
		}
		if(((BBObject*)bbt_bn)!= &bbNullObject){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_bn;
			bbt_i=(bbt_i+1);
		}
		if(((BBObject*)bbt_bs)!= &bbNullObject){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_bs;
			bbt_i=(bbt_i+1);
		}
	}
	if(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U])!= &bbNullObject){
		bbt_i=0;
		while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)])!= &bbNullObject){
			((struct _m_seltra_block_obj*)o)->clas->m_try_flood_split_Tblock((struct _m_seltra_block_obj*)o,(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)]);
			struct _m_seltra_block_obj* bbt_;
			((bbt_ = ((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)])->clas)->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_);
			bbt_i=(bbt_i+1);
		}
		((struct _m_seltra_block_obj*)o)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)o);
	}
	return &bbEmptyArray;
}
BBINT __m_seltra_block_try_flood_split_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b){
	BBINT bbt_i=0;
	BBINT bbt_m=1;
	BBARRAY bbt_ba=bbArrayNew1D(":block", 100);
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[0U]=(struct _m_seltra_block_obj*)bbt_b;
	if(!(bbt_b->__m_seltra_block_group ==o->__m_seltra_block_group )){
		return 0;
	}
	while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)])!= &bbNullObject){
		if(bbt_b->__m_seltra_block_x >0){
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_b->__m_seltra_block_x -1)+(bbt_b->__m_seltra_block_y <<10)));
			if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_group ==o->__m_seltra_block_group )) && (bbt_b2!=o)){
				((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
				struct _m_seltra_bgroup_obj* bbt_;
				(((struct _m_seltra_bgroup_obj*)(bbt_ = bbt_b2->__m_seltra_block_group ))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_,(struct _m_seltra_block_obj*)bbt_b2);
				bbt_m=(bbt_m+1);
			}
		}
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_b->__m_seltra_block_x +1)+(bbt_b->__m_seltra_block_y <<10)));
		if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_group ==o->__m_seltra_block_group )) && (bbt_b2!=o)){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
			struct _m_seltra_bgroup_obj* bbt_2;
			(((struct _m_seltra_bgroup_obj*)(bbt_2 = bbt_b2->__m_seltra_block_group ))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_2,(struct _m_seltra_block_obj*)bbt_b2);
			bbt_m=(bbt_m+1);
		}
		if(bbt_b->__m_seltra_block_y >0){
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +((bbt_b->__m_seltra_block_y -1)<<10)));
			if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_group ==o->__m_seltra_block_group )) && (bbt_b2!=o)){
				((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
				struct _m_seltra_bgroup_obj* bbt_3;
				(((struct _m_seltra_bgroup_obj*)(bbt_3 = bbt_b2->__m_seltra_block_group ))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_3,(struct _m_seltra_block_obj*)bbt_b2);
				bbt_m=(bbt_m+1);
			}
		}
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +((bbt_b->__m_seltra_block_y +1)<<10)));
		if(((((BBObject*)bbt_b2)!= &bbNullObject) && (bbt_b2->__m_seltra_block_group ==o->__m_seltra_block_group )) && (bbt_b2!=o)){
			((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
			struct _m_seltra_bgroup_obj* bbt_4;
			(((struct _m_seltra_bgroup_obj*)(bbt_4 = bbt_b2->__m_seltra_block_group ))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_4,(struct _m_seltra_block_obj*)bbt_b2);
			bbt_m=(bbt_m+1);
		}
		bbt_i=(bbt_i+1);
	}
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	bbt_i=0;
	struct _m_seltra_bgroup_obj* bbt_5;
	(((struct _m_seltra_bgroup_obj*)(bbt_5 = bbt_b->__m_seltra_block_group ))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_5,(struct _m_seltra_block_obj*)bbt_b);
	while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)])!= &bbNullObject){
		(bbt_bg)->clas->m_add_Tblock((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_ba,1))[((BBUINT)bbt_i)]);
		bbt_i=(bbt_i+1);
	}
	(_m_seltra_garray)->clas->m_add_Tbgroup((struct _m_seltra_grouparray_obj*)_m_seltra_garray,(struct _m_seltra_bgroup_obj*)bbt_bg);
	return 0;
}
BBINT __m_seltra_block_repblock(struct _m_seltra_block_obj* o){
	BBINT bbt_ok=0;
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	if(o->__m_seltra_block_group ->__m_seltra_bgroup_xv !=0){
		if(o->__m_seltra_block_y >0){
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y -1)<<10)));
			if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
				bbt_ok=1;
			}
		}
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(o->__m_seltra_block_x +((o->__m_seltra_block_y +1)<<10)));
		if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
			bbt_ok=(bbt_ok+1);
		}
	}
	if(o->__m_seltra_block_group ->__m_seltra_bgroup_yv !=0){
		if(o->__m_seltra_block_x >0){
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x -1)+(o->__m_seltra_block_y <<10)));
			if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
				bbt_ok=1;
			}
		}
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((o->__m_seltra_block_x +1)+(o->__m_seltra_block_y <<10)));
		if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
			bbt_ok=(bbt_ok+1);
		}
	}
	if(bbt_ok==2){
		if(((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)o->__m_seltra_block_bt )]->__m_seltra_btemplate_btype ==o->__m_seltra_block_btype ){
			if(o->__m_seltra_block_group ->__m_seltra_bgroup_xv !=0){
				struct _m_seltra_btemplate_obj* bbt_;
				((bbt_ = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)o->__m_seltra_block_bt )])->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_,o->__m_seltra_block_x ,(o->__m_seltra_block_y -1),0,-1);
				struct _m_seltra_btemplate_obj* bbt_2;
				((bbt_2 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)o->__m_seltra_block_bt )])->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_2,o->__m_seltra_block_x ,(o->__m_seltra_block_y +1),0,1);
			}
			if(o->__m_seltra_block_group ->__m_seltra_bgroup_yv !=0){
				struct _m_seltra_btemplate_obj* bbt_3;
				((bbt_3 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)o->__m_seltra_block_bt )])->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_3,(o->__m_seltra_block_x -1),o->__m_seltra_block_y ,-1,0);
				struct _m_seltra_btemplate_obj* bbt_4;
				((bbt_4 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)o->__m_seltra_block_bt )])->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_4,(o->__m_seltra_block_x +1),o->__m_seltra_block_y ,1,0);
			}
		}
		((struct _m_seltra_block_obj*)o)->clas->m_Del((struct _m_seltra_block_obj*)o);
	}
	return 0;
}
struct BBDebugScope_23 _m_seltra_block_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"block",
	{
		{
			BBDEBUGDECL_FIELD,
			"btype",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_btype)
		},
		{
			BBDEBUGDECL_FIELD,
			"image",
			":TImage",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_image)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bit_tags",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_bit_tags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldx",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_oldx)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldy",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_oldy)
		},
		{
			BBDEBUGDECL_FIELD,
			"group",
			":bgroup",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_group)
		},
		{
			BBDEBUGDECL_FIELD,
			"ch",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_ch)
		},
		{
			BBDEBUGDECL_FIELD,
			"mch",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_mch)
		},
		{
			BBDEBUGDECL_FIELD,
			"bt",
			"i",
			.field_offset=offsetof(struct _m_seltra_block_obj,__m_seltra_block_bt)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_block_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Del",
			"()i",
			.var_address=(void*)&__m_seltra_block_Del
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra_block_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			.var_address=(void*)&__m_seltra_block_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):block",
			.var_address=(void*)&__m_seltra_block_spawn_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkchem",
			"(:block)i",
			.var_address=(void*)&__m_seltra_block_checkchem_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"get_moli_chem",
			"()i",
			.var_address=(void*)&__m_seltra_block_get_moli_chem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkchem2",
			"(:block)i",
			.var_address=(void*)&__m_seltra_block_checkchem2_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkchem3",
			"(:block)[]:block",
			.var_address=(void*)&__m_seltra_block_checkchem3_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"try_flood_split",
			"(:block)i",
			.var_address=(void*)&__m_seltra_block_try_flood_split_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"repblock",
			"()i",
			.var_address=(void*)&__m_seltra_block_repblock
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_block _m_seltra_block={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_block_scope,
	sizeof(struct _m_seltra_block_obj),
	(void (*)(BBOBJECT))__m_seltra_block_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_block_obj,__m_seltra_block_bt) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_block_Del
	,__m_seltra_block_draw
	,__m_seltra_block_out_of_bounds
	,__m_seltra_block_spawn_ii
	,__m_seltra_block_checkchem_Tblock
	,__m_seltra_block_get_moli_chem
	,__m_seltra_block_checkchem2_Tblock
	,__m_seltra_block_checkchem3_Tblock
	,__m_seltra_block_try_flood_split_Tblock
	,__m_seltra_block_repblock
};

struct _m_seltra_blockarray_obj* _m_seltra_wallgroup=(struct _m_seltra_blockarray_obj*)&bbNullObject;
void __m_seltra_redrawarray_New(struct _m_seltra_redrawarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_redrawarray;
	o->__m_seltra_redrawarray_ra = bbArrayNew1D(":redraw", 1000);
	o->__m_seltra_redrawarray_le = 0;
	o->__m_seltra_redrawarray_drawn = 0;
}
BBINT __m_seltra_redrawarray_add_Tredraw(struct _m_seltra_redrawarray_obj* o,struct _m_seltra_redraw_obj* bbt_r){
	((struct _m_seltra_redraw_obj**)BBARRAYDATA(o->__m_seltra_redrawarray_ra ,1))[((BBUINT)o->__m_seltra_redrawarray_le )]=(struct _m_seltra_redraw_obj*)bbt_r;
	o->__m_seltra_redrawarray_le =(o->__m_seltra_redrawarray_le +1);
	return 0;
}
BBINT __m_seltra_redrawarray_do_redraws(struct _m_seltra_redrawarray_obj* o){
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct _m_seltra_redraw_obj* volatile bbt_r=(struct _m_seltra_redraw_obj*)&bbNullObject;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	while(bbt_i<_m_seltra_rarray->__m_seltra_redrawarray_le ){
		bbt_r=(struct _m_seltra_redraw_obj*)((struct _m_seltra_redraw_obj**)BBARRAYDATA(o->__m_seltra_redrawarray_ra ,1))[((BBUINT)bbt_i)];
		if(((BBObject*)bbt_r)!= &bbNullObject){
			_m_seltra_redraw_cell(bbt_r->__m_seltra_redraw_x ,bbt_r->__m_seltra_redraw_y );
			bbt_r->__m_seltra_redraw_redraws =((BBBYTE)(((BBINT)bbt_r->__m_seltra_redraw_redraws )-1));
			if(((BBINT)bbt_r->__m_seltra_redraw_redraws )<=0){
				((struct _m_seltra_redraw_obj**)BBARRAYDATA(o->__m_seltra_redrawarray_ra ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_redraw_obj*)&bbNullObject;
				o->__m_seltra_redrawarray_drawn =(o->__m_seltra_redrawarray_drawn +1);
			}
		}
		bbt_i=(bbt_i+1);
	}
	if(o->__m_seltra_redrawarray_drawn ==o->__m_seltra_redrawarray_le ){
		o->__m_seltra_redrawarray_le =0;
		o->__m_seltra_redrawarray_drawn =0;
	}
	return 0;
}
struct BBDebugScope_6 _m_seltra_redrawarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redrawarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ra",
			"[]:redraw",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_ra)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"drawn",
			"i",
			.field_offset=offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_drawn)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_redrawarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:redraw)i",
			.var_address=(void*)&__m_seltra_redrawarray_add_Tredraw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"do_redraws",
			"()i",
			.var_address=(void*)&__m_seltra_redrawarray_do_redraws
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_redrawarray _m_seltra_redrawarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_redrawarray_scope,
	sizeof(struct _m_seltra_redrawarray_obj),
	(void (*)(BBOBJECT))__m_seltra_redrawarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_redrawarray_obj,__m_seltra_redrawarray_drawn) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_redrawarray_add_Tredraw
	,__m_seltra_redrawarray_do_redraws
};

struct _m_seltra_redrawarray_obj* _m_seltra_rarray=(struct _m_seltra_redrawarray_obj*)&bbNullObject;
void __m_seltra_generatorarray_New(struct _m_seltra_generatorarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_generatorarray;
	o->__m_seltra_generatorarray_ga = bbArrayNew1D(":gen", 3000);
	o->__m_seltra_generatorarray_le = 0;
}
BBINT __m_seltra_generatorarray_add_Tgen(struct _m_seltra_generatorarray_obj* o,struct _m_seltra_gen_obj* bbt_g){
	((struct _m_seltra_gen_obj**)BBARRAYDATA(o->__m_seltra_generatorarray_ga ,1))[((BBUINT)o->__m_seltra_generatorarray_le )]=(struct _m_seltra_gen_obj*)bbt_g;
	bbt_g->__m_seltra_gen_id =o->__m_seltra_generatorarray_le ;
	o->__m_seltra_generatorarray_le =(o->__m_seltra_generatorarray_le +1);
	return 0;
}
BBINT __m_seltra_generatorarray_ordered_sort_ii(struct _m_seltra_generatorarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	if(bbt_n==0){
		bbt_n=o->__m_seltra_generatorarray_le ;
	}
	BBINT bbt_j=bbt_i;
	while(bbt_j<o->__m_seltra_generatorarray_le ){
		((struct _m_seltra_gen_obj**)BBARRAYDATA(o->__m_seltra_generatorarray_ga ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_gen_obj*)((struct _m_seltra_gen_obj**)BBARRAYDATA(o->__m_seltra_generatorarray_ga ,1))[((BBUINT)bbt_j)];
		if(((BBObject*)((struct _m_seltra_gen_obj**)BBARRAYDATA(o->__m_seltra_generatorarray_ga ,1))[((BBUINT)bbt_i)])!= &bbNullObject){
			((struct _m_seltra_gen_obj**)BBARRAYDATA(o->__m_seltra_generatorarray_ga ,1))[((BBUINT)bbt_i)]->__m_seltra_gen_id =bbt_i;
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_generatorarray_le =bbt_i;
	return 0;
}
struct BBDebugScope_5 _m_seltra_generatorarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"generatorarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ga",
			"[]:gen",
			.field_offset=offsetof(struct _m_seltra_generatorarray_obj,__m_seltra_generatorarray_ga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_generatorarray_obj,__m_seltra_generatorarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_generatorarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:gen)i",
			.var_address=(void*)&__m_seltra_generatorarray_add_Tgen
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_generatorarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_generatorarray _m_seltra_generatorarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_generatorarray_scope,
	sizeof(struct _m_seltra_generatorarray_obj),
	(void (*)(BBOBJECT))__m_seltra_generatorarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_generatorarray_obj,__m_seltra_generatorarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_generatorarray_add_Tgen
	,__m_seltra_generatorarray_ordered_sort_ii
};

struct _m_seltra_generatorarray_obj* _m_seltra_genarray=(struct _m_seltra_generatorarray_obj*)&bbNullObject;
void __m_seltra_fastblockmap_New(struct _m_seltra_fastblockmap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_fastblockmap;
	o->__m_seltra_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	o->__m_seltra_fastblockmap_k = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastblockmap_le = 0;
	o->__m_seltra_fastblockmap_rc = 0;
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_fetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	return (struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)bbt_key)];
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_vfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	return (struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastblockmap_kfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastblockmap_insert_iTblock(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key,struct _m_seltra_block_obj* bbt_b){
	if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)bbt_key)]==&bbNullObject){
		((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)o->__m_seltra_fastblockmap_le )]=bbt_key;
		o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le +1);
	}
	((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)bbt_key)]=(struct _m_seltra_block_obj*)bbt_b;
	return 0;
}
BBINT __m_seltra_fastblockmap_remove_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)bbt_key)]=(struct _m_seltra_block_obj*)&bbNullObject;
	o->__m_seltra_fastblockmap_rc =(o->__m_seltra_fastblockmap_rc +1);
	return 0;
}
BBINT __m_seltra_fastblockmap_iter(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)(o->__m_seltra_fastblockmap_le -1))];
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastblockmap_fastsort(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_i)])]==&bbNullObject){
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)(o->__m_seltra_fastblockmap_le -1))];
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	o->__m_seltra_fastblockmap_rc =0;
	return 0;
}
BBINT __m_seltra_fastblockmap_orderedsort(struct _m_seltra_fastblockmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_seltra_fastblockmap_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_fastblockmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_j)])]==&bbNullObject){
			o->__m_seltra_fastblockmap_le =(o->__m_seltra_fastblockmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastblockmap_k ,1))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_fastblockmap_le =bbt_i;
	o->__m_seltra_fastblockmap_rc =0;
	return 0;
}
struct BBDebugScope_13 _m_seltra_fastblockmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastblockmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rc",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_rc)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_fastblockmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i):block",
			.var_address=(void*)&__m_seltra_fastblockmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i):block",
			.var_address=(void*)&__m_seltra_fastblockmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastblockmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,:block)i",
			.var_address=(void*)&__m_seltra_fastblockmap_insert_iTblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastblockmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			.var_address=(void*)&__m_seltra_fastblockmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			.var_address=(void*)&__m_seltra_fastblockmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			.var_address=(void*)&__m_seltra_fastblockmap_orderedsort
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_fastblockmap _m_seltra_fastblockmap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_fastblockmap_scope,
	sizeof(struct _m_seltra_fastblockmap_obj),
	(void (*)(BBOBJECT))__m_seltra_fastblockmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_fastblockmap_obj,__m_seltra_fastblockmap_rc) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_fastblockmap_fetch_i
	,__m_seltra_fastblockmap_vfetch_i
	,__m_seltra_fastblockmap_kfetch_i
	,__m_seltra_fastblockmap_insert_iTblock
	,__m_seltra_fastblockmap_remove_i
	,__m_seltra_fastblockmap_iter
	,__m_seltra_fastblockmap_fastsort
	,__m_seltra_fastblockmap_orderedsort
};

struct _m_seltra_fastblockmap_obj* _m_seltra_bmap=(struct _m_seltra_fastblockmap_obj*)&bbNullObject;
void __m_seltra_fastintmap_New(struct _m_seltra_fastintmap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_fastintmap;
	o->__m_seltra_fastintmap_v = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastintmap_k = bbArrayNew1D("i", 3000000);
	o->__m_seltra_fastintmap_le = 0;
	o->__m_seltra_fastintmap_nl = 0;
}
BBINT __m_seltra_fastintmap_fetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	return ((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)bbt_key)];
}
BBINT __m_seltra_fastintmap_vfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastintmap_kfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	return ((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastintmap_insert_ii(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	if(((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)bbt_key)]==o->__m_seltra_fastintmap_nl ){
		((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)o->__m_seltra_fastintmap_le )]=bbt_key;
		o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le +1);
	}
	((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)bbt_key)]=bbt_val;
	return 0;
}
BBINT __m_seltra_fastintmap_remove_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)bbt_key)]=o->__m_seltra_fastintmap_nl ;
	return 0;
}
BBINT __m_seltra_fastintmap_iter(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)])]==o->__m_seltra_fastintmap_nl ){
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)(o->__m_seltra_fastintmap_le -1))];
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			BBINT bbt_a=((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)])];
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastintmap_fastsort(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)])]==o->__m_seltra_fastintmap_nl ){
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)(o->__m_seltra_fastintmap_le -1))];
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			bbt_i=(bbt_i+1);
		}
	}
	return 0;
}
BBINT __m_seltra_fastintmap_orderedsort(struct _m_seltra_fastintmap_obj* o){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	while(bbt_j<o->__m_seltra_fastintmap_le ){
		if(((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_j)])]==o->__m_seltra_fastintmap_nl ){
			o->__m_seltra_fastintmap_le =(o->__m_seltra_fastintmap_le -1);
		}else{
			((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_k ,1))[((BBUINT)bbt_j)];
			bbt_i=(bbt_i+1);
		}
		bbt_j=(bbt_j+1);
	}
	o->__m_seltra_fastintmap_le =bbt_i;
	return 0;
}
BBINT __m_seltra_fastintmap_set_null_value_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_n){
	BBINT bbt_i=0;
	o->__m_seltra_fastintmap_nl =bbt_n;
	while(bbt_i<3000000){
		((BBINT*)BBARRAYDATA(o->__m_seltra_fastintmap_v ,1))[((BBUINT)bbt_i)]=bbt_n;
		bbt_i=(bbt_i+1);
	}
	return 0;
}
struct BBDebugScope_14 _m_seltra_fastintmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastintmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"nl",
			"i",
			.field_offset=offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_nl)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_fastintmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastintmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastintmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastintmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_fastintmap_insert_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastintmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			.var_address=(void*)&__m_seltra_fastintmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			.var_address=(void*)&__m_seltra_fastintmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			.var_address=(void*)&__m_seltra_fastintmap_orderedsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"set_null_value",
			"(i)i",
			.var_address=(void*)&__m_seltra_fastintmap_set_null_value_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_fastintmap _m_seltra_fastintmap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_fastintmap_scope,
	sizeof(struct _m_seltra_fastintmap_obj),
	(void (*)(BBOBJECT))__m_seltra_fastintmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_fastintmap_obj,__m_seltra_fastintmap_nl) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_fastintmap_fetch_i
	,__m_seltra_fastintmap_vfetch_i
	,__m_seltra_fastintmap_kfetch_i
	,__m_seltra_fastintmap_insert_ii
	,__m_seltra_fastintmap_remove_i
	,__m_seltra_fastintmap_iter
	,__m_seltra_fastintmap_fastsort
	,__m_seltra_fastintmap_orderedsort
	,__m_seltra_fastintmap_set_null_value_i
};

struct _m_seltra_fastintmap_obj* _m_seltra_thingmap=(struct _m_seltra_fastintmap_obj*)&bbNullObject;
BBARRAY _m_seltra_chem=&bbEmptyArray;
BBINT _m_seltra_create_chem_numbers(){
	((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[0U]=4;
	((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[1U]=10;
	((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[2U]=(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[1U]+brl_random_Rand(5,7));
	((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[3U]=(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[2U]+brl_random_Rand(6,8));
	return 0;
}
BBFLOAT _m_seltra_colfunc(BBFLOAT bbt_x){
	while(bbt_x>1.00000000f){
		bbt_x=(bbt_x-1.00000000f);
	}
	if(bbt_x<0.333333343f){
		return 0.0f;
	}
	bbt_x=(bbt_x-0.333333343f);
	if(bbt_x<0.0833333358f){
		return (bbt_x*9.0f);
	}
	bbt_x=(bbt_x-0.0833333358f);
	if(bbt_x<0.0833333358f){
		return (0.75f+(bbt_x*3.00000000f));
	}
	bbt_x=(bbt_x-0.0833333358f);
	if(bbt_x<0.333333343f){
		return 1.0f;
	}
	bbt_x=(bbt_x-0.333333343f);
	if(bbt_x<0.0833333358f){
		return (1.0f-(bbt_x*3.00000000f));
	}
	bbt_x=(bbt_x-0.0833333358f);
	return (0.75f-(bbt_x*9.0f));
}
BBINT _m_seltra_create_block_mix(){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBINT bbt_k=0;
	struct _m_seltra_btemplate_obj* volatile bbt_bt=(struct _m_seltra_btemplate_obj*)&bbNullObject;
	for(bbt_i=0;(bbt_i<=7);bbt_i=(bbt_i+1)){
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		bbt_bt->__m_seltra_btemplate_btype =bbt_i;
		bbt_j=1;
		bbt_bt->__m_seltra_btemplate_ch =bbt_j;
		((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		bbt_bt->__m_seltra_btemplate_id =bbt_k;
		bbt_k=(bbt_k+1);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		bbt_bt->__m_seltra_btemplate_btype =bbt_i;
		bbt_j=brl_random_Rand((bbt_j+1),6);
		bbt_bt->__m_seltra_btemplate_ch =bbt_j;
		((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		bbt_bt->__m_seltra_btemplate_id =bbt_k;
		bbt_k=(bbt_k+1);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		bbt_bt->__m_seltra_btemplate_btype =bbt_i;
		bbt_j=brl_random_Rand((bbt_j+1),7);
		bbt_bt->__m_seltra_btemplate_ch =bbt_j;
		((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		bbt_bt->__m_seltra_btemplate_id =bbt_k;
		bbt_k=(bbt_k+1);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		bbt_bt->__m_seltra_btemplate_btype =bbt_i;
		bbt_bt->__m_seltra_btemplate_ch =brl_random_Rand((bbt_j+1),8);
		((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		bbt_bt->__m_seltra_btemplate_id =bbt_k;
		bbt_k=(bbt_k+1);
	}
	return 0;
}
BBINT _m_seltra_remove_block_image_templates(){
	BBINT bbt_i=0;
	for(bbt_i=0;(bbt_i<=60);bbt_i=(bbt_i+1)){
		((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)bbt_i)]=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)(bbt_i+8))];
	}
	bbt_i=0;
	while(((BBObject*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)bbt_i)])!= &bbNullObject){
		bbt_i=(bbt_i+1);
	}
	_m_seltra_noi=bbt_i;
	return 0;
}
BBINT _m_seltra_wallblock(BBINT bbt_x,BBINT bbt_y,BBINT bbt_u){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	bbt_b->__m_seltra_block_x =bbt_x;
	bbt_b->__m_seltra_block_y =bbt_y;
	bbt_b->__m_seltra_block_btype =0;
	bbt_b->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)bbt_u)];
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)),(struct _m_seltra_block_obj*)bbt_b);
	(_m_seltra_wallgroup)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_wallgroup,(struct _m_seltra_block_obj*)bbt_b);
	return 0;
}
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my){
	BBARRAY bbt_m=bbArrayNew1D("b", (bbt_mx*bbt_my));
	BBINT bbt_d=0;
	BBINT bbt_ok=0;
	BBBYTE bbt_k=0;
	BBINT bbt_xv=0;
	BBINT bbt_yv=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_x2=0;
	BBINT bbt_y2=0;
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBARRAY bbt_xs2=bbArrayNew1D("i", 6);
	BBARRAY bbt_ys2=bbArrayNew1D("i", 6);
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[0U]=bbt_xs;
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[0U]=bbt_ys;
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[1U]=bbt_xf;
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[1U]=bbt_yf;
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[2U]=1;
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[2U]=1;
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[3U]=(bbt_mx-1);
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[3U]=1;
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[4U]=1;
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[4U]=(bbt_my-1);
	((BBINT*)BBARRAYDATA(bbt_xs2,1))[5U]=(bbt_mx-1);
	((BBINT*)BBARRAYDATA(bbt_ys2,1))[5U]=(bbt_my-1);
	bbt_x=bbt_xs;
	bbt_y=bbt_ys;
	while(((BBINT)bbt_k)<6){
		bbt_x=((BBINT*)BBARRAYDATA(bbt_xs2,1))[((BBUINT)bbt_k)];
		bbt_y=((BBINT*)BBARRAYDATA(bbt_ys2,1))[((BBUINT)bbt_k)];
		bbt_i=0;
		bbt_j=0;
		while(((bbt_i<100) || (bbt_ok==0)) && (bbt_j<1024)){
			bbt_d=brl_random_Rand(0,3);
			BBINT bbt_=bbt_d;
			if(bbt_==0){
				bbt_xv=1;
				bbt_yv=0;
			}else{
				if(bbt_==1){
					bbt_xv=-1;
					bbt_yv=0;
				}else{
					if(bbt_==2){
						bbt_xv=0;
						bbt_yv=1;
					}else{
						if(bbt_==3){
							bbt_xv=0;
							bbt_yv=-1;
						}
					}
				}
			}
			while(1){
				((BBBYTE*)BBARRAYDATA(bbt_m,1))[((BBUINT)(bbt_x+(bbt_y*bbt_mx)))]=1;
				bbt_x2=(bbt_x+bbt_xv);
				bbt_y2=(bbt_y+bbt_yv);
				if((((bbt_x2>0) && (bbt_x2<(bbt_mx-1))) && (bbt_y2>0)) && (bbt_y2<(bbt_my-1))){
					if((((BBINT)((BBBYTE*)BBARRAYDATA(bbt_m,1))[((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))])==0) || (((BBINT)((BBBYTE*)BBARRAYDATA(bbt_m,1))[((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))])==1)){
						bbt_x=(bbt_x+bbt_xv);
						bbt_y=(bbt_y+bbt_yv);
					}
				}else{
					break;
				}
				if((bbt_x==bbt_xf) && (bbt_y==bbt_yf)){
					bbt_ok=1;
				}
				bbt_i=(bbt_i+1);
				if(brl_random_Rand(0,2)==1){
					break;
				}
			}
			bbt_j=(bbt_j+1);
		}
		bbt_k=((BBBYTE)(((BBINT)bbt_k)+1));
	}
	BBINT bbt_2=((bbt_mx*bbt_my)-1);
	for(bbt_i=0;(bbt_i<=bbt_2);bbt_i=(bbt_i+1)){
		if(((BBINT)((BBBYTE*)BBARRAYDATA(bbt_m,1))[((BBUINT)bbt_i)])==0){
			_m_seltra_wallblock((bbt_i % bbt_mx),(bbt_i/bbt_mx),0);
		}
	}
	return 0;
}
struct brl_max2d_image_TImage_obj* _m_seltra_sub0=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn){
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),0,0,0),-1);
	_m_seltra_noi=(_m_seltra_noi+1);
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)(_m_seltra_noi-1))];
}
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_bgroup;
	o->__m_seltra_bgroup_blist = (struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
	o->__m_seltra_bgroup_xv = 0;
	o->__m_seltra_bgroup_yv = 0;
	o->__m_seltra_bgroup_bittags = 0;
	o->__m_seltra_bgroup_id = 0;
	o->__m_seltra_bgroup_xf = 0;
	o->__m_seltra_bgroup_yf = 0;
}
BBINT __m_seltra_bgroup_add_Tblock(struct _m_seltra_bgroup_obj* o,struct _m_seltra_block_obj* bbt_b){
	(o->__m_seltra_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)o->__m_seltra_bgroup_blist ,(struct _m_seltra_block_obj*)bbt_b);
	bbt_b->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)o;
	return 0;
}
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj* o){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=_m_seltra_bmap->__m_seltra_fastblockmap_le ;
	BBINT bbt_cv=0;
	BBINT bbt_i=0;
	if((bbIntAbs(o->__m_seltra_bgroup_xv )+bbIntAbs(o->__m_seltra_bgroup_yv ))>1){
		brl_blitz_DebugStop();
	}
	while(((BBObject*)bbt_b)!= &bbNullObject){
		bbt_xt=(bbt_b->__m_seltra_block_x +o->__m_seltra_bgroup_xv );
		bbt_yt=(bbt_b->__m_seltra_block_y +o->__m_seltra_bgroup_yv );
		if((bbt_xt>=0) && (bbt_yt>=0)){
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_xt+(bbt_yt<<10)));
		}else{
			((struct _m_seltra_bgroup_obj*)o)->clas->m_remove((struct _m_seltra_bgroup_obj*)o);
			return 0;
		}
		if(((bbt_b2!=&bbNullObject) && (bbt_b2!=bbt_b)) && (bbt_b2->__m_seltra_block_group !=bbt_b->__m_seltra_block_group )){
			if(bbt_b2->__m_seltra_block_btype !=0){
				(bbt_b2)->clas->m_checkchem3_Tblock((struct _m_seltra_block_obj*)bbt_b2,(struct _m_seltra_block_obj*)bbt_b);
				if((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0){
					((struct _m_seltra_bgroup_obj*)o)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)o,(struct _m_seltra_bgroup_obj*)bbt_b2->__m_seltra_block_group );
				}
				(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
				(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
				return 0;
			}
			if((bbt_b->__m_seltra_block_btype ==2) && (bbt_b2->__m_seltra_block_btype ==0)){
				(bbt_b)->clas->m_repblock((struct _m_seltra_block_obj*)bbt_b);
			}
			if(((BBObject*)bbt_b)!= &bbNullObject){
				if((bbt_b->__m_seltra_block_btype ==3) && (bbt_b2->__m_seltra_block_btype ==0)){
					o->__m_seltra_bgroup_xv =-o->__m_seltra_bgroup_xv ;
					o->__m_seltra_bgroup_yv =-o->__m_seltra_bgroup_yv ;
				}
				if((bbt_b->__m_seltra_block_btype ==4) && (bbt_b2->__m_seltra_block_btype ==0)){
					bbt_cv=o->__m_seltra_bgroup_xv ;
					o->__m_seltra_bgroup_xv =-o->__m_seltra_bgroup_yv ;
					o->__m_seltra_bgroup_yv =bbt_cv;
				}
				if((bbt_b->__m_seltra_block_btype ==5) && (bbt_b2->__m_seltra_block_btype ==0)){
					bbt_cv=o->__m_seltra_bgroup_xv ;
					o->__m_seltra_bgroup_xv =o->__m_seltra_bgroup_yv ;
					o->__m_seltra_bgroup_yv =-bbt_cv;
				}
				if((bbt_b->__m_seltra_block_btype ==6) && (bbt_b2->__m_seltra_block_btype ==0)){
					o->__m_seltra_bgroup_xv =0;
					o->__m_seltra_bgroup_yv =0;
				}
				if(((BBObject*)bbt_b2->__m_seltra_block_group )!= &bbNullObject){
					if((((bbt_b2->__m_seltra_block_btype ==1) || (bbt_b2->__m_seltra_block_btype ==3)) || (bbt_b2->__m_seltra_block_btype ==6)) || (bbt_b2->__m_seltra_block_btype ==7)){
						bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf +(o->__m_seltra_bgroup_xv *1));
						bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf +(o->__m_seltra_bgroup_yv *1));
					}else{
						if(bbt_b2->__m_seltra_block_btype ==4){
							bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf +(o->__m_seltra_bgroup_yv *1));
							bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf -(o->__m_seltra_bgroup_xv *1));
						}else{
							if(bbt_b2->__m_seltra_block_btype ==5){
								bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_xf -(o->__m_seltra_bgroup_yv *1));
								bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b2->__m_seltra_block_group ->__m_seltra_bgroup_yf +(o->__m_seltra_bgroup_xv *1));
							}
						}
					}
					if((((bbt_b->__m_seltra_block_btype ==1) || (bbt_b->__m_seltra_block_btype ==3)) || (bbt_b->__m_seltra_block_btype ==6)) || (bbt_b2->__m_seltra_block_btype ==7)){
						bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf -(o->__m_seltra_bgroup_xv *1));
						bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf -(o->__m_seltra_bgroup_yv *1));
					}else{
						if(bbt_b->__m_seltra_block_btype ==4){
							bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf -(o->__m_seltra_bgroup_yv *1));
							bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf +(o->__m_seltra_bgroup_xv *1));
						}else{
							if(bbt_b->__m_seltra_block_btype ==5){
								bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_xf +(o->__m_seltra_bgroup_yv *1));
								bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf =(bbt_b->__m_seltra_block_group ->__m_seltra_bgroup_yf -(o->__m_seltra_bgroup_xv *1));
							}
						}
					}
				}
			}
			return 0;
		}
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	bbt_i=0;
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	while(((BBObject*)bbt_b)!= &bbNullObject){
		if((_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)))==bbt_b){
			(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
		}
		bbt_b->__m_seltra_block_x =(bbt_b->__m_seltra_block_x +o->__m_seltra_bgroup_xv );
		bbt_b->__m_seltra_block_y =(bbt_b->__m_seltra_block_y +o->__m_seltra_bgroup_yv );
		(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	bbt_i=0;
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	while(((BBObject*)bbt_b)!= &bbNullObject){
		if(bbt_b->__m_seltra_block_btype !=7){
			return 0;
		}
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	o->__m_seltra_bgroup_xv =0;
	o->__m_seltra_bgroup_yv =0;
	return 0;
}
BBINT _m_seltra_bgroup_check_group_vel_i(){
	BBINT bbt_i=0;
	struct _m_seltra_bgroup_obj* volatile bbt_g=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	while(bbt_i<_m_seltra_garray->__m_seltra_grouparray_le ){
		bbt_g=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATA(_m_seltra_garray->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_i)];
		if((bbIntAbs(bbt_g->__m_seltra_bgroup_xv )+bbIntAbs(bbt_g->__m_seltra_bgroup_yv ))>1){
			brl_blitz_DebugStop();
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT __m_seltra_bgroup_check_forces(struct _m_seltra_bgroup_obj* o){
	BBINT bbt_xvo=o->__m_seltra_bgroup_xv ;
	BBINT bbt_yvo=o->__m_seltra_bgroup_yv ;
	if(bbIntAbs(o->__m_seltra_bgroup_xf )>=1){
		o->__m_seltra_bgroup_xv =(o->__m_seltra_bgroup_xv +bbIntSgn(o->__m_seltra_bgroup_xf ));
		if((bbIntAbs(o->__m_seltra_bgroup_xv )>0) && (bbt_xvo==0)){
			o->__m_seltra_bgroup_yv =0;
		}
	}
	if(bbIntAbs(o->__m_seltra_bgroup_yf )>=1){
		o->__m_seltra_bgroup_yv =(o->__m_seltra_bgroup_yv +bbIntSgn(o->__m_seltra_bgroup_yf ));
		if((bbIntAbs(o->__m_seltra_bgroup_yv )>0) && (bbt_yvo==0)){
			o->__m_seltra_bgroup_xv =0;
		}
	}
	o->__m_seltra_bgroup_xv =bbIntSgn(o->__m_seltra_bgroup_xv );
	o->__m_seltra_bgroup_yv =bbIntSgn(o->__m_seltra_bgroup_yv );
	if((bbIntAbs(o->__m_seltra_bgroup_xv )+bbIntAbs(o->__m_seltra_bgroup_yv ))>1){
		if(bbIntAbs(o->__m_seltra_bgroup_xv +o->__m_seltra_bgroup_xf )>=bbIntAbs(o->__m_seltra_bgroup_yv +o->__m_seltra_bgroup_yf )){
			o->__m_seltra_bgroup_yv =0;
		}else{
			o->__m_seltra_bgroup_xv =0;
		}
	}
	o->__m_seltra_bgroup_xf =0;
	o->__m_seltra_bgroup_yf =0;
	return 0;
}
BBINT __m_seltra_bgroup_remove_block_Tblock(struct _m_seltra_bgroup_obj* o,struct _m_seltra_block_obj* bbt_b){
	BBINT bbt_i=0;
	while(bbt_i<o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]==bbt_b){
			((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)&bbNullObject;
		}
		bbt_i=(bbt_i+1);
	}
	bbt_b->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)&bbNullObject;
	return 0;
}
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj* o){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	BBINT bbt_i=0;
	while(((BBObject*)bbt_b)!= &bbNullObject){
		(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
		struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		bbt_re->__m_seltra_redraw_x =((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)];
		bbt_re->__m_seltra_redraw_y =((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)];
		bbt_re->__m_seltra_redraw_redraws =2;
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		bbt_re->__m_seltra_redraw_x =((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		bbt_re->__m_seltra_redraw_y =((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		bbt_re->__m_seltra_redraw_redraws =2;
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		((struct _m_seltra_block_obj**)BBARRAYDATA(_m_seltra_barray->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_b->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	((struct _m_seltra_bgroup_obj**)BBARRAYDATA(_m_seltra_garray->__m_seltra_grouparray_ga ,1))[((BBUINT)o->__m_seltra_bgroup_id )]=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	(_m_seltra_garray)->clas->m_ordered_sort_ii((struct _m_seltra_grouparray_obj*)_m_seltra_garray,0,0);
	return 0;
}
BBINT __m_seltra_bgroup_split_aTblockii(struct _m_seltra_bgroup_obj* o,BBARRAY bbt_bl,BBINT bbt_xvn,BBINT bbt_yvn){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	while(bbt_i<o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_le ){
		if(((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]==bbt_b){
			((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)&bbNullObject;
			break;
		}
		bbt_i=(bbt_i+1);
	}
	bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	bbt_bg->__m_seltra_bgroup_xv =bbt_xvn;
	bbt_bg->__m_seltra_bgroup_yv =bbt_yvn;
	bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba =bbArraySlice(":block",bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,0,10);
	bbt_bg->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba =bbt_bl;
	_m_seltra_bgc=(_m_seltra_bgc+1);
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	struct _m_seltra_bgroup_obj* volatile bbt_bgn=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_m=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	while(((BBObject*)bbt_m)!= &bbNullObject){
		bbt_i=(bbt_i+1);
		bbt_m=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	bbt_bgn->__m_seltra_bgroup_id =_m_seltra_bgc;
	_m_seltra_bgc=(_m_seltra_bgc+1);
	return (struct _m_seltra_bgroup_obj*)&bbNullObject;
}
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj* o){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	BBINT bbt_i=0;
	while(((BBObject*)bbt_b)!= &bbNullObject){
		if(bbt_b->__m_seltra_block_btype !=0){
			BBINT bbt_=((_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10))) % 5);
			if(bbt_==1){
				o->__m_seltra_bgroup_xv =0;
				o->__m_seltra_bgroup_yv =-1;
			}else{
				if(bbt_==2){
					o->__m_seltra_bgroup_xv =0;
					o->__m_seltra_bgroup_yv =1;
				}else{
					if(bbt_==3){
						o->__m_seltra_bgroup_xv =-1;
						o->__m_seltra_bgroup_yv =0;
					}else{
						if(bbt_==4){
							o->__m_seltra_bgroup_xv =1;
							o->__m_seltra_bgroup_yv =0;
						}
					}
				}
			}
		}
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	return 0;
}
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj* o){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	if(bbt_b!=&bbNullObject){
		do{
			if(!((bbt_b)->clas->m_out_of_bounds((struct _m_seltra_block_obj*)bbt_b)!=0)){
				return 0;
			}
			bbt_i=(bbt_i+1);
			bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
		}while(!(bbt_b==&bbNullObject));
	}
	return 1;
}
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj* o){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	BBINT bbt_i=0;
	if(bbt_b!=&bbNullObject){
		do{
			(bbt_b)->clas->m_draw((struct _m_seltra_block_obj*)bbt_b);
			bbt_i=(bbt_i+1);
			bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(o->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
		}while(!(bbt_b==&bbNullObject));
	}
	return 0;
}
BBINT __m_seltra_bgroup_merge_Tbgroup(struct _m_seltra_bgroup_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	if(bbt_g==o){
		return 0;
	}
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_g->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[0U];
	BBINT bbt_i=0;
	while(bbt_i<bbt_g->__m_seltra_bgroup_blist ->__m_seltra_blockarray_le ){
		if(((BBObject*)bbt_b)!= &bbNullObject){
			(o->__m_seltra_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)o->__m_seltra_bgroup_blist ,(struct _m_seltra_block_obj*)bbt_b);
			bbt_b->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)o;
		}
		bbt_i=(bbt_i+1);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(bbt_g->__m_seltra_bgroup_blist ->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
	}
	((struct _m_seltra_bgroup_obj**)BBARRAYDATA(_m_seltra_garray->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_g->__m_seltra_bgroup_id )]=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	return 0;
}
struct BBDebugScope_20 _m_seltra_bgroup_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"bgroup",
	{
		{
			BBDEBUGDECL_FIELD,
			"blist",
			":blockarray",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_blist)
		},
		{
			BBDEBUGDECL_FIELD,
			"xv",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_xv)
		},
		{
			BBDEBUGDECL_FIELD,
			"yv",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_yv)
		},
		{
			BBDEBUGDECL_FIELD,
			"bittags",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_bittags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"xf",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_xf)
		},
		{
			BBDEBUGDECL_FIELD,
			"yf",
			"i",
			.field_offset=offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_yf)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			.var_address=(void*)&__m_seltra_bgroup_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_move
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"check_group_vel",
			"()i",
			.var_address=(void*)&_m_seltra_bgroup_check_group_vel_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"check_forces",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_check_forces
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove_block",
			"(:block)i",
			.var_address=(void*)&__m_seltra_bgroup_remove_block_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_remove
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"split",
			"([]:block,i,i)i",
			.var_address=(void*)&__m_seltra_bgroup_split_aTblockii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):bgroup",
			.var_address=(void*)&__m_seltra_bgroup_spawn_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkarrows",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_checkarrows
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"merge",
			"(:bgroup)i",
			.var_address=(void*)&__m_seltra_bgroup_merge_Tbgroup
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_bgroup _m_seltra_bgroup={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_bgroup_scope,
	sizeof(struct _m_seltra_bgroup_obj),
	(void (*)(BBOBJECT))__m_seltra_bgroup_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_bgroup_obj,__m_seltra_bgroup_yf) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_bgroup_add_Tblock
	,__m_seltra_bgroup_move
	,_m_seltra_bgroup_check_group_vel_i
	,__m_seltra_bgroup_check_forces
	,__m_seltra_bgroup_remove_block_Tblock
	,__m_seltra_bgroup_remove
	,__m_seltra_bgroup_split_aTblockii
	,__m_seltra_bgroup_spawn_ii
	,__m_seltra_bgroup_checkarrows
	,__m_seltra_bgroup_out_of_bounds
	,__m_seltra_bgroup_draw
	,__m_seltra_bgroup_merge_Tbgroup
};

void __m_seltra_redraw_New(struct _m_seltra_redraw_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_redraw;
	o->__m_seltra_redraw_x = 0;
	o->__m_seltra_redraw_y = 0;
	o->__m_seltra_redraw_redraws = 0;
}
struct BBDebugScope_4 _m_seltra_redraw_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redraw",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"redraws",
			"b",
			.field_offset=offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_redraws)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_redraw_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_redraw _m_seltra_redraw={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_redraw_scope,
	sizeof(struct _m_seltra_redraw_obj),
	(void (*)(BBOBJECT))__m_seltra_redraw_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_redraw_obj,__m_seltra_redraw_redraws) - sizeof(void*) + sizeof(BBBYTE)
};

BBINT _m_seltra_chem_dist(BBINT bbt_x){
	BBINT bbt_d2=0;
	BBINT bbt_i=0;
	BBINT bbt_d=0;
	BBINT bbt_s=0;
	bbt_d2=9999;
	while(bbt_i<4){
		bbt_d=bbIntAbs(bbt_x-((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[((BBUINT)bbt_i)]);
		if(bbt_d<bbIntAbs(bbt_d2)){
			bbt_d2=bbt_d;
		}
		bbt_i=(bbt_i+1);
	}
	return bbt_d2;
}
BBINT _m_seltra_update_bgroups(){
	BBINT bbt_i=0;
	while(bbt_i<_m_seltra_garray->__m_seltra_grouparray_le ){
		struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATA(_m_seltra_garray->__m_seltra_grouparray_ga ,1))[((BBUINT)bbt_i)];
		if(((BBObject*)bbt_bg)!= &bbNullObject){
			(bbt_bg)->clas->m_check_forces((struct _m_seltra_bgroup_obj*)bbt_bg);
			(bbt_bg)->clas->m_checkarrows((struct _m_seltra_bgroup_obj*)bbt_bg);
			(bbt_bg)->clas->m_move((struct _m_seltra_bgroup_obj*)bbt_bg);
			if((bbt_bg)->clas->m_out_of_bounds((struct _m_seltra_bgroup_obj*)bbt_bg)!=0){
				(bbt_bg)->clas->m_remove((struct _m_seltra_bgroup_obj*)bbt_bg);
			}
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_gen;
	o->__m_seltra_gen_x = 0;
	o->__m_seltra_gen_y = 0;
	o->__m_seltra_gen_bglist = bbArrayNew1D(":bgroup", 100);
	o->__m_seltra_gen_le = 0;
	o->__m_seltra_gen_rate = 0;
	o->__m_seltra_gen_n = 0;
	o->__m_seltra_gen_t = 0;
	o->__m_seltra_gen_id = 0;
	o->__m_seltra_gen_bitflags = 0;
}
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj* o){
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct _m_seltra_bgroup_obj* volatile bbt_bg2=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	BBINT bbt_r=0;
	BBINT bbt_xv=0;
	BBINT bbt_yv=0;
	BBINT bbt_tm=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(o->__m_seltra_gen_x +(o->__m_seltra_gen_y <<10)));
	if((bbt_tm<10) && (bbt_tm>0)){
		BBINT bbt_=(bbt_tm % 5);
		if(bbt_==1){
			bbt_yv=-1;
		}else{
			if(bbt_==2){
				bbt_yv=1;
			}else{
				if(bbt_==3){
					bbt_xv=-1;
				}else{
					if(bbt_==4){
						bbt_xv=1;
					}
				}
			}
		}
		if((o->__m_seltra_gen_bitflags !=0) && 1){
			bbt_bg2=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATA(o->__m_seltra_gen_bglist ,1))[((BBUINT)brl_random_Rand(0,o->__m_seltra_gen_le ))];
		}
	}
	o->__m_seltra_gen_n =(o->__m_seltra_gen_n -1);
	return 0;
}
BBINT __m_seltra_gen_update(struct _m_seltra_gen_obj* o){
	if((_m_seltra_time % o->__m_seltra_gen_rate )==o->__m_seltra_gen_t ){
		((struct _m_seltra_gen_obj*)o)->clas->m_genblock((struct _m_seltra_gen_obj*)o);
	}
	return 0;
}
struct BBDebugScope_12 _m_seltra_gen_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"gen",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bglist",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bglist)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rate",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_rate)
		},
		{
			BBDEBUGDECL_FIELD,
			"n",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_n)
		},
		{
			BBDEBUGDECL_FIELD,
			"t",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_t)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"bitflags",
			"i",
			.field_offset=offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bitflags)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_gen_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"genblock",
			"()i",
			.var_address=(void*)&__m_seltra_gen_genblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"update",
			"()i",
			.var_address=(void*)&__m_seltra_gen_update
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_gen _m_seltra_gen={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_gen_scope,
	sizeof(struct _m_seltra_gen_obj),
	(void (*)(BBOBJECT))__m_seltra_gen_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_gen_obj,__m_seltra_gen_bitflags) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_gen_genblock
	,__m_seltra_gen_update
};

BBINT _m_seltra_update_gens(){
	BBINT bbt_i=0;
	while(bbt_i<_m_seltra_genarray->__m_seltra_generatorarray_le ){
		struct _m_seltra_gen_obj* bbt_;
		((bbt_ = ((struct _m_seltra_gen_obj**)BBARRAYDATA(_m_seltra_genarray->__m_seltra_generatorarray_ga ,1))[((BBUINT)bbt_i)])->clas)->m_update((struct _m_seltra_gen_obj*)bbt_);
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBOBJECT _m_seltra_core_engine_thread(BBOBJECT bbt_data){
	while(1){
		if(_m_seltra_bmap->__m_seltra_fastblockmap_rc >1000){
			(_m_seltra_bmap)->clas->m_orderedsort((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap);
		}
		_m_seltra_update_bgroups();
		_m_seltra_update_gens();
		_m_seltra_time=(_m_seltra_time+1);
	}
}
BBINT _m_seltra_createsingleSubstrate(BBINT bbt_x,BBINT bbt_y){
	(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_mox+(_m_seltra_moy<<10)),100);
	return 0;
}
BBINT _m_seltra_mouse_input_map(){
	BBINT bbt_mozd=0;
	BBFLOAT bbt_mozn=.00000000f;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	_m_seltra_moxc=((BBINT)((((BBFLOAT)_m_seltra_mox)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposx)));
	_m_seltra_moyc=((BBINT)((((BBFLOAT)_m_seltra_moy)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposy)));
	bbt_mozd=(_m_seltra_moz-_m_seltra_mozo);
	if((_m_seltra_mozu+((BBFLOAT)bbt_mozd))<-9.00000000f){
		bbt_mozn=-9.00000000f;
	}else{
		bbt_mozn=(_m_seltra_mozu+((BBFLOAT)bbt_mozd));
	}
	if(_m_seltra_mozu!=bbt_mozn){
		_m_seltra_mozu=bbt_mozn;
		_m_seltra_zoom=(30.0000000f*(1.0f+(_m_seltra_mozu/10.0f)));
		_m_seltra_redraw_map=2;
		brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
	}
	if(_m_seltra_moxc<0){
		_m_seltra_moxc=0;
	}
	if(_m_seltra_moyc<0){
		_m_seltra_moyc=0;
	}
	if(brl_polledinput_MouseHit(1)!=0){
		if(_m_seltra_smt<=32){
			bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
			if(!(((BBObject*)bbt_b)!= &bbNullObject)){
				struct _m_seltra_btemplate_obj* bbt_;
				((bbt_ = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)_m_seltra_smt)])->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_,_m_seltra_moxc,_m_seltra_moyc,0,0);
			}else{
				(bbt_b)->clas->m_checkchem3_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)&bbNullObject);
			}
		}
		if(_m_seltra_smi==_m_seltra_sub0){
			_m_seltra_createsingleSubstrate(_m_seltra_mox,_m_seltra_moy);
		}
	}
	if(brl_polledinput_MouseHit(2)!=0){
		if(_m_seltra_smt<=30){
			struct _m_seltra_btemplate_obj* bbt_2;
			((bbt_2 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATA(_m_seltra_btarray,1))[((BBUINT)_m_seltra_smt)])->clas)->m_setbindingblock_ii((struct _m_seltra_btemplate_obj*)bbt_2,_m_seltra_moxc,_m_seltra_moyc);
		}
	}
	if(brl_polledinput_MouseHit(3)!=0){
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		_m_seltra_redraw_map=2;
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
	}
	return 0;
}
BBINT _m_seltra_mouse_input_editbar(){
	if(brl_polledinput_MouseHit(1)!=0){
		if(_m_seltra_mox<(_m_seltra_gw-70)){
			_m_seltra_smt=((_m_seltra_moy-10)/20);
			_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_smt)];
			return 0;
		}
		if(_m_seltra_mox<(_m_seltra_gw-45)){
			_m_seltra_smt=(30+((_m_seltra_moy-10)/20));
			_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)_m_seltra_smt)];
			return 0;
		}
	}
	return 0;
}
BBINT _m_seltra_get_mouse_input(){
	_m_seltra_mozo=_m_seltra_moz;
	_m_seltra_mox=brl_polledinput_MouseX();
	_m_seltra_moy=brl_polledinput_MouseY();
	_m_seltra_moz=brl_polledinput_MouseZ();
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		_m_seltra_mouse_input_map();
	}else{
		_m_seltra_mouse_input_editbar();
	}
	return 0;
}
BBINT _m_seltra_get_user_input(){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	BBINT bbt_t=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	if(!(((BBObject*)bbt_b)!= &bbNullObject) || ((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_btype !=0))){
		if(bbt_t<10){
			bbt_t=(bbt_t-(bbt_t % 5));
			if(brl_polledinput_KeyHit(87)!=0){
				(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),(bbt_t+1));
			}
			if(brl_polledinput_KeyHit(83)!=0){
				(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),(bbt_t+2));
			}
			if(brl_polledinput_KeyHit(65)!=0){
				(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),(bbt_t+3));
			}
			if(brl_polledinput_KeyHit(68)!=0){
				(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),(bbt_t+4));
			}
		}
	}
	if(brl_polledinput_KeyHit(32)!=0){
		if((bbt_t>=5) && (bbt_t<=9)){
		}
		(_m_seltra_thingmap)->clas->m_remove_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
		if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_btype !=0)){
			struct _m_seltra_bgroup_obj* bbt_;
			(((struct _m_seltra_bgroup_obj*)(bbt_ = bbt_b->__m_seltra_block_group ))->clas)->m_remove((struct _m_seltra_bgroup_obj*)bbt_);
		}
		if((((BBObject*)bbt_b)!= &bbNullObject) && (bbt_b->__m_seltra_block_image ==((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[1U])){
			((struct _m_seltra_block_obj**)BBARRAYDATA(_m_seltra_wallgroup->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_b->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
			(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_b->__m_seltra_block_x +(bbt_b->__m_seltra_block_y <<10)));
		}
	}
	brl_polledinput_FlushKeys();
	return 0;
}
BBINT _m_seltra_redraw_cell(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	BBINT bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)));
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	if(((BBObject*)bbt_b)!= &bbNullObject){
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
		return 0;
	}
	if(!(bbt_v!=0)){
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
		return 0;
	}
	if(bbt_v!=0){
		if(bbt_v<10){
			BBINT bbt_=(bbt_v % 5);
			if(bbt_==1){
				bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrown;
			}else{
				if(bbt_==2){
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrows;
				}else{
					if(bbt_==3){
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arroww;
					}else{
						if(bbt_==4){
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrowe;
						}
					}
				}
			}
			if((bbt_v % 5)!=0){
				brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
			}
		}
	}
	return 0;
}
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_x2=bbt_x;
	BBINT bbt_y2=bbt_y;
	BBINT bbt_v=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	while(bbt_x2<(bbt_x+3)){
		bbt_y2=bbt_y;
		while(bbt_y2<(bbt_y+3)){
			_m_seltra_redraw_cell(bbt_x2,bbt_y2);
			bbt_y2=(bbt_y2+1);
		}
		bbt_x2=(bbt_x2+1);
	}
	return 0;
}
BBINT _m_seltra_draw_things(){
	BBINT bbt_m=0;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	BBINT bbt_n=_m_seltra_thingmap->__m_seltra_fastintmap_le ;
	while(bbt_i<bbt_n){
		bbt_m=(_m_seltra_thingmap)->clas->m_kfetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,bbt_i);
		bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,bbt_m);
		if(bbt_v!=0){
			if(bbt_v<10){
				BBINT bbt_=(bbt_v % 5);
				if(bbt_==1){
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrown;
				}else{
					if(bbt_==2){
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrows;
					}else{
						if(bbt_==3){
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arroww;
						}else{
							if(bbt_==4){
								bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrowe;
							}
						}
					}
				}
				brl_max2d_SetMaskColor(255,255,230);
				if((bbt_v % 5)!=0){
					brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
				}
			}
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_draw_barray(){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	while(bbt_i<_m_seltra_barray->__m_seltra_blockarray_le ){
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(_m_seltra_barray->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
		if(((BBObject*)bbt_b)!= &bbNullObject){
			_m_seltra_redraw_cell(((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_b->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_b->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_x ;
			((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_y ;
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_draw_walls(){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	while(bbt_i<_m_seltra_wallgroup->__m_seltra_blockarray_le ){
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATA(_m_seltra_wallgroup->__m_seltra_blockarray_ba ,1))[((BBUINT)bbt_i)];
		if(((BBObject*)bbt_b)!= &bbNullObject){
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_b->__m_seltra_block_image ,(((BBFLOAT)(bbt_b->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_b->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldx ,1))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_x ;
			((BBINT*)BBARRAYDATA(bbt_b->__m_seltra_block_oldy ,1))[((BBUINT)_m_seltra_frame)]=bbt_b->__m_seltra_block_y ;
		}
		bbt_i=(bbt_i+1);
	}
	return 0;
}
BBINT _m_seltra_draw_editbar(){
	BBINT bbt_i=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),90.0000000f,90.0000000f);
	brl_max2d_SetMaskColor(0,0,0);
	brl_max2d_SetMaskColor(255,255,230);
	brl_max2d_SetColor(222,222,222);
	brl_max2d_SetScale(1.0f,1.0f);
	brl_max2d_DrawLine(((BBFLOAT)(_m_seltra_gw-100)),0.000000000f,((BBFLOAT)(_m_seltra_gw-100)),((BBFLOAT)_m_seltra_gh),1);
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-70)),100.000000f,25.0000000f);
	brl_max2d_SetColor(222,222,222);
	brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(_m_seltra_moxc),&_s17),bbStringFromInt(_m_seltra_moyc)),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-65)));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	if(((BBObject*)bbt_b)!= &bbNullObject){
		brl_max2d_SetColor(0,0,0);
		brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-45)),100.000000f,40.0000000f);
		brl_max2d_SetColor(222,222,222);
		brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(bbt_b->__m_seltra_block_btype ),&_s17),bbStringFromInt(bbt_b->__m_seltra_block_ch )),&_s17),bbStringFromInt(bbt_b->__m_seltra_block_mch )),&_s17),bbStringFromInt(_m_seltra_chem_dist(bbt_b->__m_seltra_block_mch ))),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-45)));
		brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[0U]),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[1U])),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[2U])),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATA(_m_seltra_chem,1))[3U])),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-25)));
	}
	brl_max2d_SetScale(0.67f,0.67f);
	while(((BBObject*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)bbt_i)])!= &bbNullObject){
		bbt_x=(30*(bbt_i/30));
		bbt_y=((bbt_i*20) % 600);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[((BBUINT)bbt_i)],((BBFLOAT)((bbt_x+_m_seltra_gw)-95)),((BBFLOAT)(bbt_y+10)),0);
		bbt_i=(bbt_i+1);
	}
	brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
	return 0;
}
BBINT _m_seltra_update_display(){
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	brl_max2d_SetColor(0,0,0);
	brl_max2d_DrawRect(((BBFLOAT)((BBINT*)BBARRAYDATA(_m_seltra_moxo,1))[((BBUINT)_m_seltra_frame)]),((BBFLOAT)((BBINT*)BBARRAYDATA(_m_seltra_moyo,1))[((BBUINT)_m_seltra_frame)]),50.0000000f,50.0000000f);
	brl_max2d_SetColor(255,255,255);
	brl_max2d_SetViewport(0,0,(_m_seltra_gw-100),_m_seltra_gh);
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		_m_seltra_redraw3x3(((BBINT*)BBARRAYDATA(_m_seltra_moxco,1))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATA(_m_seltra_moyco,1))[((BBUINT)_m_seltra_frame)]);
	}
	if(_m_seltra_redraw_map>0){
		brl_max2d_Cls();
	}
	_m_seltra_draw_things();
	_m_seltra_draw_barray();
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_mousec,(((BBFLOAT)(_m_seltra_moxc-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(_m_seltra_moyc-_m_seltra_camposy))*_m_seltra_zoom),0);
	if(_m_seltra_redraw_map>0){
		_m_seltra_draw_walls();
		_m_seltra_redraw_map=(_m_seltra_redraw_map-1);
	}
	(_m_seltra_rarray)->clas->m_do_redraws((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray);
	brl_max2d_SetViewport((_m_seltra_gw-100),0,_m_seltra_gw,_m_seltra_gh);
	_m_seltra_draw_editbar();
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_smi,((BBFLOAT)(_m_seltra_mox+15)),((BBFLOAT)(_m_seltra_moy+15)),0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_mousep,((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),0);
	((BBINT*)BBARRAYDATA(_m_seltra_moxco,1))[((BBUINT)_m_seltra_frame)]=_m_seltra_moxc;
	((BBINT*)BBARRAYDATA(_m_seltra_moyco,1))[((BBUINT)_m_seltra_frame)]=_m_seltra_moyc;
	((BBINT*)BBARRAYDATA(_m_seltra_moxo,1))[((BBUINT)_m_seltra_frame)]=_m_seltra_mox;
	((BBINT*)BBARRAYDATA(_m_seltra_moyo,1))[((BBUINT)_m_seltra_frame)]=_m_seltra_moy;
	brl_graphics_Flip(-1);
	while((bbMilliSecs() % 100)!=0){
	}
	while((bbMilliSecs() % 100)!=1){
	}
	_m_seltra_frame=((BBBYTE)(1-((BBINT)_m_seltra_frame)));
	return 0;
}
BBOBJECT _m_seltra_io_and_display_thread(BBOBJECT bbt_data){
	while(!(brl_polledinput_KeyDown(27)!=0)){
		_m_seltra_get_mouse_input();
		_m_seltra_get_user_input();
		_m_seltra_update_display();
	}
	bbEnd();
	return (BBOBJECT)&_s21;
}
BBINT _m_seltra_Create_world(){
	return 0;
}
BBINT _m_seltra_placegene(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_tm=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)));
	if((bbt_tm>0) && (bbt_tm<5)){
		(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)),(1 || (bbt_tm!=0)));
	}
	struct _m_seltra_gen_obj* volatile bbt_g=(struct _m_seltra_gen_obj*)(struct _m_seltra_gen_obj*)bbObjectNew((BBClass *)&_m_seltra_gen);
	bbt_g->__m_seltra_gen_x =bbt_x;
	bbt_g->__m_seltra_gen_y =bbt_y;
	bbt_g->__m_seltra_gen_rate =5;
	bbt_g->__m_seltra_gen_bitflags =4;
	(_m_seltra_genarray)->clas->m_add_Tgen((struct _m_seltra_generatorarray_obj*)_m_seltra_genarray,(struct _m_seltra_gen_obj*)bbt_g);
	return 0;
}
BBFLOAT _m_seltra_colfuncx(BBFLOAT bbt_x){
	while(bbt_x>1.00000000f){
		bbt_x=(bbt_x-1.00000000f);
	}
	if(bbt_x<0.333333343f){
		return 0.0f;
	}
	bbt_x=(bbt_x-0.333333343f);
	if(bbt_x<0.166666672f){
		return (bbt_x*6.0f);
	}
	bbt_x=(bbt_x-0.166666672f);
	if(bbt_x<0.333333343f){
		return 1.0f;
	}
	bbt_x=(bbt_x-0.333333343f);
	return (1.0f-(bbt_x*6.0f));
}
BBINT _m_seltra_demo_color_spread(){
	BBFLOAT bbt_w=.00000000f;
	while(bbt_w<255.0f){
		BBFLOAT bbt_w2=(bbt_w/255.0f);
		BBFLOAT bbt_red=(255.0f*_m_seltra_colfunc(bbt_w2));
		BBFLOAT bbt_gre=(255.0f*_m_seltra_colfunc((85.0f+bbt_w)/255.0f));
		BBFLOAT bbt_blu=(255.0f*_m_seltra_colfunc((170.0f+bbt_w)/255.0f));
		brl_max2d_SetColor(((BBINT)bbt_red),((BBINT)bbt_gre),((BBINT)bbt_blu));
		brl_max2d_DrawRect(bbt_w,50.0000000f,1.00000000f,150.000000f);
		bbt_w=(bbt_w+1.00000000f);
	}
	brl_graphics_Flip(-1);
	while(!(brl_polledinput_MouseHit(1)!=0)){
	}
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_data_data();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxutil_maxutil();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_pngloader_pngloader();
		__bb_brl_retro_retro();
		__bb_brl_stringbuilder_stringbuilder();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_macos_macos();
		__bb_pub_opengles_opengles();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_seltra_btemplate);
		bbObjectRegisterType((BBCLASS)&_m_seltra_grouparray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_blockarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_block);
		bbObjectRegisterType((BBCLASS)&_m_seltra_redrawarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_generatorarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_fastblockmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra_fastintmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra_bgroup);
		bbObjectRegisterType((BBCLASS)&_m_seltra_redraw);
		bbObjectRegisterType((BBCLASS)&_m_seltra_gen);
		brl_graphics_Graphics(1024,768,0,60,0);
		_m_seltra_gw=brl_graphics_GraphicsWidth();
		_m_seltra_gh=brl_graphics_GraphicsHeight();
		_m_seltra_imagelist=bbArrayNew1D(":TImage", 200);
		brl_max2d_SetMaskColor(0,0,0);
		_m_seltra_blockart=bbArrayNew1D(":TImage", 10);
		brl_max2d_SetMaskColor(255,255,255);
		_m_seltra_blockw=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s1);
		_m_seltra_blocko=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s2);
		_m_seltra_blockc=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s3);
		_m_seltra_blocks=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s4);
		_m_seltra_blockq=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s5);
		_m_seltra_blockx=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s6);
		_m_seltra_blockd=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s7);
		_m_seltra_blockb=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s8);
		_m_seltra_btarray=bbArrayNew1D(":btemplate", 100);
		brl_max2d_SetMaskColor(0,0,0);
		_m_seltra_mousep=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s9),0,0,0),-1);
		_m_seltra_mousec=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s10),0,0,0),-1);
		brl_max2d_SetMaskColor(150,150,46);
		_m_seltra_blank=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		_m_seltra_arroww=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		_m_seltra_arrowe=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s13,-1);
		_m_seltra_arrown=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s14,-1);
		_m_seltra_arrows=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s15,-1);
		brl_random_SeedRnd(bbMilliSecs());
		_m_seltra_moxo=bbArrayNew1D("i", 2);
		_m_seltra_moyo=bbArrayNew1D("i", 2);
		_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATA(_m_seltra_imagelist,1))[0U];
		_m_seltra_moxco=bbArrayNew1D("i", 2);
		_m_seltra_moyco=bbArrayNew1D("i", 2);
		_m_seltra_garray=(struct _m_seltra_grouparray_obj*)(struct _m_seltra_grouparray_obj*)bbObjectNew((BBClass *)&_m_seltra_grouparray);
		_m_seltra_barray=(struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
		_m_seltra_sarray=(struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
		_m_seltra_barray->__m_seltra_blockarray_ba =bbArraySlice(":block",_m_seltra_barray->__m_seltra_blockarray_ba ,0,999999);
		_m_seltra_wallgroup=(struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
		_m_seltra_wallgroup->__m_seltra_blockarray_ba =bbArraySlice(":block",_m_seltra_wallgroup->__m_seltra_blockarray_ba ,0,999999);
		_m_seltra_rarray=(struct _m_seltra_redrawarray_obj*)(struct _m_seltra_redrawarray_obj*)bbObjectNew((BBClass *)&_m_seltra_redrawarray);
		_m_seltra_genarray=(struct _m_seltra_generatorarray_obj*)(struct _m_seltra_generatorarray_obj*)bbObjectNew((BBClass *)&_m_seltra_generatorarray);
		_m_seltra_bmap=(struct _m_seltra_fastblockmap_obj*)(struct _m_seltra_fastblockmap_obj*)bbObjectNew((BBClass *)&_m_seltra_fastblockmap);
		_m_seltra_thingmap=(struct _m_seltra_fastintmap_obj*)(struct _m_seltra_fastintmap_obj*)bbObjectNew((BBClass *)&_m_seltra_fastintmap);
		_m_seltra_chem=bbArrayNew1D("i", 4);
		_m_seltra_create_chem_numbers();
		_m_seltra_create_block_mix();
		_m_seltra_remove_block_image_templates();
		_m_seltra_gen_maze_map(1,1,40,1,40,40);
		_m_seltra_sub0=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage2(&_s22);
		BBARRAY bbt_threads=bbArrayNew1D(":TThread", 2);
		((struct brl_threads_TThread_obj**)BBARRAYDATA(bbt_threads,1))[0U]=(struct brl_threads_TThread_obj*)brl_threads_CreateThread(_m_seltra_core_engine_thread,(BBOBJECT)&_s23);
		((struct brl_threads_TThread_obj**)BBARRAYDATA(bbt_threads,1))[1U]=(struct brl_threads_TThread_obj*)brl_threads_CreateThread(_m_seltra_io_and_display_thread,(BBOBJECT)&_s24);
		return 0;
	}
	return 0;
}