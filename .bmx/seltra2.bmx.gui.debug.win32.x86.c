#include "seltra2.bmx.gui.debug.win32.x86.h"
static BBString _s16={
	&bbStringClass,
	1,
	{32}
};
static BBString _s18={
	&bbStringClass,
	4,
	{46,112,110,103}
};
static BBString _s19={
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
static BBString _s17={
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
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_18{int kind; const char *name; BBDebugDecl decls[19]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_20{int kind; const char *name; BBDebugDecl decls[21]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_50{int kind; const char *name; BBDebugDecl decls[51]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
BBINT _m_seltra2_gw=0;
BBINT _m_seltra2_gh=0;
BBARRAY _m_seltra2_imagelist=&bbEmptyArray;
BBARRAY _m_seltra2_blockart=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockw=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra2_noi=0;
struct brl_max2d_image_TImage_obj* _m_seltra2_loadimage3(BBSTRING bbt_fn){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"loadimage3",
		{
			{
				BBDEBUGDECL_LOCAL,
				"fn",
				"$",
				.var_address=&bbt_fn
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)_m_seltra2_noi)))[((BBUINT)_m_seltra2_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),255,255,255),-1);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra2_noi=(_m_seltra2_noi+1);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)(_m_seltra2_noi-1))))[((BBUINT)(_m_seltra2_noi-1))];
}
struct brl_max2d_image_TImage_obj* _m_seltra2_blocko=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockc=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blocks=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockq=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockx=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockd=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blockb=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
void __m_seltra2_btemplate_New(struct _m_seltra2_btemplate_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_btemplate;
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_btype = 0;
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_ch = 0;
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_id = 0;
}
BBINT __m_seltra2_btemplate_create_block_image(struct _m_seltra2_btemplate_obj* o){
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o));
	BBINT bbt_bred=0;
	BBINT bbt_bgre=0;
	BBINT bbt_bblu=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_block_image",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":btemplate",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"bred",
				"i",
				.var_address=&bbt_bred
			},
			{
				BBDEBUGDECL_LOCAL,
				"bgre",
				"i",
				.var_address=&bbt_bgre
			},
			{
				BBDEBUGDECL_LOCAL,
				"bblu",
				"i",
				.var_address=&bbt_bblu
			},
			{
				BBDEBUGDECL_LOCAL,
				"blockart",
				":TImage",
				.var_address=&bbt_blockart
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 908, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bred=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 908, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bgre=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 908, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_bblu=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 909, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 911, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_bred=((BBINT)(((100.0f*_m_seltra2_colfunc(((BBFLOAT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_ch )/7.0f))+((BBFLOAT)brl_random_Rand(20,1)))+120.000000f));
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 912, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_bgre=((BBINT)((150.0f*_m_seltra2_colfunc((2.3f+((BBFLOAT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_ch ))/7.0f))+30.0000000f));
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 913, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_bblu=((BBINT)((150.0f*_m_seltra2_colfunc((4.7f+((BBFLOAT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_ch ))/7.0f))+50.0000000f));
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 915, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_max2d_SetViewport(0,0,30,30);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 916, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 917, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 918, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 919, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbStringConcat(bbStringConcat(&_s17,bbStringFromInt(((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_ch )),&_s18)),255,255,255),-1);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 920, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_SetColor((bbt_bred+20),(bbt_bgre+40),(bbt_bblu+40));
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 921, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 923, 0};
	bbOnDebugEnterStm(&__stmt_14);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 924, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 925, 0};
	bbOnDebugEnterStm(&__stmt_16);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0,0,0);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 927, 0};
	bbOnDebugEnterStm(&__stmt_17);
	brl_max2d_Cls();
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 928, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)_m_seltra2_noi)))[((BBUINT)_m_seltra2_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(30,30,1,0);
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 929, 0};
	bbOnDebugEnterStm(&__stmt_19);
	brl_max2d_SetColor(bbt_bred,bbt_bgre,bbt_bblu);
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 930, 0};
	bbOnDebugEnterStm(&__stmt_20);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 931, 0};
	bbOnDebugEnterStm(&__stmt_21);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 932, 0};
	bbOnDebugEnterStm(&__stmt_22);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_btype )))[((BBUINT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_btype )],0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 933, 0};
	bbOnDebugEnterStm(&__stmt_23);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)_m_seltra2_noi)))[((BBUINT)_m_seltra2_noi)],0,0,0);
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 935, 0};
	bbOnDebugEnterStm(&__stmt_24);
	_m_seltra2_noi=(_m_seltra2_noi+1);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra2_bgroup_obj* __m_seltra2_btemplate_createsingleblock_iiii(struct _m_seltra2_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv){
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o));
	struct _m_seltra2_bgroup_obj* volatile bbt_bg=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"createsingleblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":btemplate",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"xv",
				"i",
				.var_address=&bbt_xv
			},
			{
				BBDEBUGDECL_LOCAL,
				"yv",
				"i",
				.var_address=&bbt_yv
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg",
				":bgroup",
				.var_address=&bbt_bg
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 942, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_x+(bbt_y<<10))))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 942, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra2_bgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 943, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_btype ==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 943, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_wallblock(bbt_x,bbt_y,((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_id );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 943, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra2_bgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 945, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_bg=(struct _m_seltra2_bgroup_obj*)(struct _m_seltra2_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra2_bgroup);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 946, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra2_bgroup_xv =bbt_xv;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 947, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra2_bgroup_yv =bbt_yv;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 948, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba =bbArraySlice(":block",((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ,0,10);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 949, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_seltra2_bgc=(_m_seltra2_bgc+1);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 950, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_b=(struct _m_seltra2_block_obj*)(struct _m_seltra2_block_obj*)bbObjectNew((BBClass *)&_m_seltra2_block);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 951, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x =bbt_x;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 952, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y =bbt_y;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 953, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype =((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_btype ;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 955, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_id )))[((BBUINT)((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o))->__m_seltra2_btemplate_id )];
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 956, 0};
	bbOnDebugEnterStm(&__stmt_12);
	(bbt_bg)->clas->m_add_Tblock((struct _m_seltra2_bgroup_obj*)bbt_bg,(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 957, 0};
	bbOnDebugEnterStm(&__stmt_13);
	(_m_seltra2_garray)->clas->m_add_Tbgroup((struct _m_seltra2_grouparray_obj*)_m_seltra2_garray,(struct _m_seltra2_bgroup_obj*)bbt_bg);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 958, 0};
	bbOnDebugEnterStm(&__stmt_14);
	(_m_seltra2_barray)->clas->m_add_Tblock((struct _m_seltra2_blockarray_obj*)_m_seltra2_barray,(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 959, 0};
	bbOnDebugEnterStm(&__stmt_15);
	(_m_seltra2_bmap)->clas->m_insert_iTblock((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)),(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 961, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbOnDebugLeaveScope();
	return (struct _m_seltra2_bgroup_obj*)bbt_bg;
}
BBINT __m_seltra2_btemplate_createbindingblock_ii(struct _m_seltra2_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y){
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o));
	struct _m_seltra2_bgroup_obj* volatile bbt_bg=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct _m_seltra2_block_obj* volatile bbt_b2=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_j=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"createbindingblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":btemplate",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg",
				":bgroup",
				.var_address=&bbt_bg
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 968, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(o));
	bbt_bg=(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_btemplate_obj*)o)->clas->m_createsingleblock_iiii((struct _m_seltra2_btemplate_obj*)o,bbt_x,bbt_y,0,0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 969, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b2=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 971, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_x>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 971, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,((bbt_x-1)+(bbt_y<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 972, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype >0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 972, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra2_bgroup_obj*)bbt_bg,(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 973, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_y>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 973, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_x+((bbt_y-1)<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 974, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype >0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 974, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra2_bgroup_obj*)bbt_bg,(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 975, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_b2=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,((bbt_x+1)+(bbt_y<<10)));
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 976, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype >0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 976, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra2_bgroup_obj*)bbt_bg,(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 977, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_b2=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_x+((bbt_y+1)<<10)));
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 978, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype >0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 978, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra2_bgroup_obj*)bbt_bg,(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 980, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_7 _m_seltra2_btemplate_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"btemplate",
	{
		{
			BBDEBUGDECL_FIELD,
			"btype",
			"i",
			.field_offset=offsetof(struct _m_seltra2_btemplate_obj,__m_seltra2_btemplate_btype)
		},
		{
			BBDEBUGDECL_FIELD,
			"ch",
			"i",
			.field_offset=offsetof(struct _m_seltra2_btemplate_obj,__m_seltra2_btemplate_ch)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra2_btemplate_obj,__m_seltra2_btemplate_id)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_btemplate_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"create_block_image",
			"()i",
			.var_address=(void*)&__m_seltra2_btemplate_create_block_image
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"createsingleblock",
			"(i,i,i,i):bgroup",
			.var_address=(void*)&__m_seltra2_btemplate_createsingleblock_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"createbindingblock",
			"(i,i)i",
			.var_address=(void*)&__m_seltra2_btemplate_createbindingblock_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_btemplate _m_seltra2_btemplate={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_btemplate_scope,
	sizeof(struct _m_seltra2_btemplate_obj),
	(void (*)(BBOBJECT))__m_seltra2_btemplate_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_btemplate_obj,__m_seltra2_btemplate_id) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_btemplate_create_block_image
	,__m_seltra2_btemplate_createsingleblock_iiii
	,__m_seltra2_btemplate_createbindingblock_ii
};

BBARRAY _m_seltra2_btarray=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra2_mousep=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_mousec=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_blank=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_arroww=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_arrowe=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_arrown=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra2_arrows=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBBYTE _m_seltra2_frame=0;
BBINT _m_seltra2_mox=0;
BBINT _m_seltra2_moy=0;
BBINT _m_seltra2_moz=0;
BBARRAY _m_seltra2_moxo=&bbEmptyArray;
BBARRAY _m_seltra2_moyo=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra2_smi=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra2_smt=0;
BBFLOAT _m_seltra2_zoom=30.0f;
BBINT _m_seltra2_mozo=0;
BBFLOAT _m_seltra2_mozu=.00000000f;
BBINT _m_seltra2_moxc=0;
BBINT _m_seltra2_moyc=0;
BBARRAY _m_seltra2_moxco=&bbEmptyArray;
BBARRAY _m_seltra2_moyco=&bbEmptyArray;
BBINT _m_seltra2_redraw_map=3;
BBINT _m_seltra2_bi=0;
BBINT _m_seltra2_bgc=0;
BBINT _m_seltra2_camposx=0;
BBINT _m_seltra2_camposy=0;
BBINT _m_seltra2_time=0;
void __m_seltra2_grouparray_New(struct _m_seltra2_grouparray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_grouparray;
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga = bbArrayNew1D(":bgroup", 2000000);
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le = 0;
}
BBINT __m_seltra2_grouparray_add_Tbgroup(struct _m_seltra2_grouparray_obj* o,struct _m_seltra2_bgroup_obj* bbt_g){
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":grouparray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":bgroup",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 61, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga )->dims,((BBUINT)((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le )))[((BBUINT)((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le )]=(struct _m_seltra2_bgroup_obj*)bbt_g;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_id =((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 63, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le =(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_grouparray_ordered_sort_ii(struct _m_seltra2_grouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":grouparray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_n==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 67, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 71, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 72, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra2_bgroup_id =bbt_i;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 72, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 75, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(o))->__m_seltra2_grouparray_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_seltra2_grouparray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"grouparray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ga",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra2_grouparray_obj,__m_seltra2_grouparray_ga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_grouparray_obj,__m_seltra2_grouparray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_grouparray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:bgroup)i",
			.var_address=(void*)&__m_seltra2_grouparray_add_Tbgroup
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra2_grouparray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_grouparray _m_seltra2_grouparray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_grouparray_scope,
	sizeof(struct _m_seltra2_grouparray_obj),
	(void (*)(BBOBJECT))__m_seltra2_grouparray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_grouparray_obj,__m_seltra2_grouparray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_grouparray_add_Tbgroup
	,__m_seltra2_grouparray_ordered_sort_ii
};

struct _m_seltra2_grouparray_obj* _m_seltra2_garray=(struct _m_seltra2_grouparray_obj*)&bbNullObject;
void __m_seltra2_blockarray_New(struct _m_seltra2_blockarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_blockarray;
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba = bbArrayNew1D(":block", 50);
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le = 0;
}
BBINT __m_seltra2_blockarray_add_Tblock(struct _m_seltra2_blockarray_obj* o,struct _m_seltra2_block_obj* bbt_b){
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":blockarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 6, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba )->dims,((BBUINT)((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le )))[((BBUINT)((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le )]=(struct _m_seltra2_block_obj*)bbt_b;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 7, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(o==_m_seltra2_barray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 7, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_id =((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le =(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_blockarray_ordered_sort_ii(struct _m_seltra2_blockarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":blockarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 13, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_n==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 13, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 14, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 16, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 17, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 18, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 18, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_block_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra2_block_id =bbt_i;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 18, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 19, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 21, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(o))->__m_seltra2_blockarray_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_seltra2_blockarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"blockarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ba",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra2_blockarray_obj,__m_seltra2_blockarray_ba)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_blockarray_obj,__m_seltra2_blockarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_blockarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			.var_address=(void*)&__m_seltra2_blockarray_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra2_blockarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_blockarray _m_seltra2_blockarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_blockarray_scope,
	sizeof(struct _m_seltra2_blockarray_obj),
	(void (*)(BBOBJECT))__m_seltra2_blockarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_blockarray_obj,__m_seltra2_blockarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_blockarray_add_Tblock
	,__m_seltra2_blockarray_ordered_sort_ii
};

struct _m_seltra2_blockarray_obj* _m_seltra2_barray=(struct _m_seltra2_blockarray_obj*)&bbNullObject;
struct _m_seltra2_blockarray_obj* _m_seltra2_wallgroup=(struct _m_seltra2_blockarray_obj*)&bbNullObject;
void __m_seltra2_redrawarray_New(struct _m_seltra2_redrawarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_redrawarray;
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra = bbArrayNew1D(":redraw", 1000);
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le = 0;
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_drawn = 0;
}
BBINT __m_seltra2_redrawarray_add_Tredraw(struct _m_seltra2_redrawarray_obj* o,struct _m_seltra2_redraw_obj* bbt_r){
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":redrawarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				":redraw",
				.var_address=&bbt_r
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra ),(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra )->dims,((BBUINT)((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le )))[((BBUINT)((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le )]=(struct _m_seltra2_redraw_obj*)bbt_r;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le =(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_redrawarray_do_redraws(struct _m_seltra2_redrawarray_obj* o){
	((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o));
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct _m_seltra2_redraw_obj* volatile bbt_r=(struct _m_seltra2_redraw_obj*)&bbNullObject;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"do_redraws",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":redrawarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				":redraw",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 93, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_r=(struct _m_seltra2_redraw_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_v=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_i=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(_m_seltra2_rarray))->__m_seltra2_redrawarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_r=(struct _m_seltra2_redraw_obj*)((struct _m_seltra2_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra ),(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 100, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_r)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 101, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra2_redraw_cell(((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra2_redraw_x ,((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra2_redraw_y );
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 102, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra2_redraw_redraws =((BBBYTE)(((BBINT)((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra2_redraw_redraws )-1));
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 103, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(((BBINT)((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra2_redraw_redraws )<=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 103, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra2_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra ),(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra2_redraw_obj*)&bbNullObject;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 103, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_drawn =(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_drawn +1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 109, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_drawn ==((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_le =0;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra2_redrawarray_drawn =0;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_6 _m_seltra2_redrawarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redrawarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ra",
			"[]:redraw",
			.field_offset=offsetof(struct _m_seltra2_redrawarray_obj,__m_seltra2_redrawarray_ra)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_redrawarray_obj,__m_seltra2_redrawarray_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"drawn",
			"i",
			.field_offset=offsetof(struct _m_seltra2_redrawarray_obj,__m_seltra2_redrawarray_drawn)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_redrawarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:redraw)i",
			.var_address=(void*)&__m_seltra2_redrawarray_add_Tredraw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"do_redraws",
			"()i",
			.var_address=(void*)&__m_seltra2_redrawarray_do_redraws
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_redrawarray _m_seltra2_redrawarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_redrawarray_scope,
	sizeof(struct _m_seltra2_redrawarray_obj),
	(void (*)(BBOBJECT))__m_seltra2_redrawarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_redrawarray_obj,__m_seltra2_redrawarray_drawn) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_redrawarray_add_Tredraw
	,__m_seltra2_redrawarray_do_redraws
};

struct _m_seltra2_redrawarray_obj* _m_seltra2_rarray=(struct _m_seltra2_redrawarray_obj*)&bbNullObject;
void __m_seltra2_generatorarray_New(struct _m_seltra2_generatorarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_generatorarray;
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga = bbArrayNew1D(":gen", 3000);
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le = 0;
}
BBINT __m_seltra2_generatorarray_add_Tgen(struct _m_seltra2_generatorarray_obj* o,struct _m_seltra2_gen_obj* bbt_g){
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":generatorarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":gen",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 34, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le )))[((BBUINT)((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le )]=(struct _m_seltra2_gen_obj*)bbt_g;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_gen_id =((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 36, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le =(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_generatorarray_ordered_sort_ii(struct _m_seltra2_generatorarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":generatorarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_n==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 41, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 43, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra2_gen_obj*)((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 45, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_gen_obj*)bbNullObjectTest(((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra2_gen_id =bbt_i;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 45, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 46, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra2_generatorarray_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_seltra2_generatorarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"generatorarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"ga",
			"[]:gen",
			.field_offset=offsetof(struct _m_seltra2_generatorarray_obj,__m_seltra2_generatorarray_ga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_generatorarray_obj,__m_seltra2_generatorarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_generatorarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:gen)i",
			.var_address=(void*)&__m_seltra2_generatorarray_add_Tgen
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra2_generatorarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_generatorarray _m_seltra2_generatorarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_generatorarray_scope,
	sizeof(struct _m_seltra2_generatorarray_obj),
	(void (*)(BBOBJECT))__m_seltra2_generatorarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_generatorarray_obj,__m_seltra2_generatorarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_generatorarray_add_Tgen
	,__m_seltra2_generatorarray_ordered_sort_ii
};

struct _m_seltra2_generatorarray_obj* _m_seltra2_genarray=(struct _m_seltra2_generatorarray_obj*)&bbNullObject;
void __m_seltra2_fastblockmap_New(struct _m_seltra2_fastblockmap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_fastblockmap;
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le = 0;
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_rc = 0;
}
struct _m_seltra2_block_obj* __m_seltra2_fastblockmap_fetch_i(struct _m_seltra2_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 13, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
struct _m_seltra2_block_obj* __m_seltra2_fastblockmap_vfetch_i(struct _m_seltra2_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"vfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 18, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra2_fastblockmap_kfetch_i(struct _m_seltra2_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"kfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 23, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra2_fastblockmap_insert_iTblock(struct _m_seltra2_fastblockmap_obj* o,BBINT bbt_key,struct _m_seltra2_block_obj* bbt_b){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"insert",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 30, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le )))[((BBUINT)((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 31, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le =(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra2_block_obj*)bbt_b;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastblockmap_remove_i(struct _m_seltra2_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 39, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_rc =(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_rc +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastblockmap_iter(struct _m_seltra2_fastblockmap_obj* o){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"iter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 47, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 51, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 52, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le =(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 61, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastblockmap_fastsort(struct _m_seltra2_fastblockmap_obj* o){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fastsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 73, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 75, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 76, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le =(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 78, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastblockmap_orderedsort(struct _m_seltra2_fastblockmap_obj* o){
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"orderedsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastblockmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 93, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le =(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 95, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k ),(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 96, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_le =bbt_i;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_13 _m_seltra2_fastblockmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastblockmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]:block",
			.field_offset=offsetof(struct _m_seltra2_fastblockmap_obj,__m_seltra2_fastblockmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra2_fastblockmap_obj,__m_seltra2_fastblockmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_fastblockmap_obj,__m_seltra2_fastblockmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rc",
			"i",
			.field_offset=offsetof(struct _m_seltra2_fastblockmap_obj,__m_seltra2_fastblockmap_rc)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_fastblockmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i):block",
			.var_address=(void*)&__m_seltra2_fastblockmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i):block",
			.var_address=(void*)&__m_seltra2_fastblockmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastblockmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,:block)i",
			.var_address=(void*)&__m_seltra2_fastblockmap_insert_iTblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastblockmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			.var_address=(void*)&__m_seltra2_fastblockmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			.var_address=(void*)&__m_seltra2_fastblockmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			.var_address=(void*)&__m_seltra2_fastblockmap_orderedsort
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_fastblockmap _m_seltra2_fastblockmap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_fastblockmap_scope,
	sizeof(struct _m_seltra2_fastblockmap_obj),
	(void (*)(BBOBJECT))__m_seltra2_fastblockmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_fastblockmap_obj,__m_seltra2_fastblockmap_rc) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_fastblockmap_fetch_i
	,__m_seltra2_fastblockmap_vfetch_i
	,__m_seltra2_fastblockmap_kfetch_i
	,__m_seltra2_fastblockmap_insert_iTblock
	,__m_seltra2_fastblockmap_remove_i
	,__m_seltra2_fastblockmap_iter
	,__m_seltra2_fastblockmap_fastsort
	,__m_seltra2_fastblockmap_orderedsort
};

struct _m_seltra2_fastblockmap_obj* _m_seltra2_bmap=(struct _m_seltra2_fastblockmap_obj*)&bbNullObject;
void __m_seltra2_fastintmap_New(struct _m_seltra2_fastintmap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_fastintmap;
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v = bbArrayNew1D("i", 3000000);
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le = 0;
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl = 0;
}
BBINT __m_seltra2_fastintmap_fetch_i(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
BBINT __m_seltra2_fastintmap_vfetch_i(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"vfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 14, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra2_fastintmap_kfetch_i(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"kfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 19, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra2_fastintmap_insert_ii(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"insert",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"i",
				.var_address=&bbt_val
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 25, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le )))[((BBUINT)((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le =(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=bbt_val;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastintmap_remove_i(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"i",
				.var_address=&bbt_key
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastintmap_iter(struct _m_seltra2_fastintmap_obj* o){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"iter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 42, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 43, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 46, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 47, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le =(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			BBINT bbt_a=0;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"a",
						"i",
						.var_address=&bbt_a
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 53, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_a=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastintmap_fastsort(struct _m_seltra2_fastintmap_obj* o){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fastsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 69, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 70, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 71, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le =(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 73, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastintmap_orderedsort(struct _m_seltra2_fastintmap_obj* o){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"orderedsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 83, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 83, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 86, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le =(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le -1);
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 88, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 89, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_fastintmap_set_null_value_i(struct _m_seltra2_fastintmap_obj* o,BBINT bbt_n){
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"set_null_value",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":fastintmap",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_nl =bbt_n;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 104, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<3000000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 105, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v ),(((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra2_fastintmap_v )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=bbt_n;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_14 _m_seltra2_fastintmap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"fastintmap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]i",
			.field_offset=offsetof(struct _m_seltra2_fastintmap_obj,__m_seltra2_fastintmap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra2_fastintmap_obj,__m_seltra2_fastintmap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_fastintmap_obj,__m_seltra2_fastintmap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"nl",
			"i",
			.field_offset=offsetof(struct _m_seltra2_fastintmap_obj,__m_seltra2_fastintmap_nl)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_fastintmap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_insert_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			.var_address=(void*)&__m_seltra2_fastintmap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			.var_address=(void*)&__m_seltra2_fastintmap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			.var_address=(void*)&__m_seltra2_fastintmap_orderedsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"set_null_value",
			"(i)i",
			.var_address=(void*)&__m_seltra2_fastintmap_set_null_value_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_fastintmap _m_seltra2_fastintmap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_fastintmap_scope,
	sizeof(struct _m_seltra2_fastintmap_obj),
	(void (*)(BBOBJECT))__m_seltra2_fastintmap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_fastintmap_obj,__m_seltra2_fastintmap_nl) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_fastintmap_fetch_i
	,__m_seltra2_fastintmap_vfetch_i
	,__m_seltra2_fastintmap_kfetch_i
	,__m_seltra2_fastintmap_insert_ii
	,__m_seltra2_fastintmap_remove_i
	,__m_seltra2_fastintmap_iter
	,__m_seltra2_fastintmap_fastsort
	,__m_seltra2_fastintmap_orderedsort
	,__m_seltra2_fastintmap_set_null_value_i
};

struct _m_seltra2_fastintmap_obj* _m_seltra2_thingmap=(struct _m_seltra2_fastintmap_obj*)&bbNullObject;
BBARRAY _m_seltra2_chem=&bbEmptyArray;
BBFLOAT _m_seltra2_colfunc(BBFLOAT bbt_x){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"colfunc",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"f",
				.var_address=&bbt_x
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1078, 0};
	bbOnDebugEnterStm(&__stmt_0);
	while(bbt_x>1.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1079, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(bbt_x-1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1082, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_x<0.333333343f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1082, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0.0f;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1083, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1084, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_x<0.0833333358f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1084, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (bbt_x*9.0f);
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1085, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1086, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_x<0.0833333358f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1086, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (0.75f+(bbt_x*3.00000000f));
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1087, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1088, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(bbt_x<0.333333343f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1088, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1.0f;
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1089, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1090, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(bbt_x<0.0833333358f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1090, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (1.0f-(bbt_x*3.00000000f));
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1091, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1092, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbOnDebugLeaveScope();
	return (0.75f-(bbt_x*9.0f));
}
BBINT _m_seltra2_create_block_mix(){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBINT bbt_k=0;
	struct _m_seltra2_btemplate_obj* volatile bbt_bt=(struct _m_seltra2_btemplate_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_block_mix",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			{
				BBDEBUGDECL_LOCAL,
				"k",
				"i",
				.var_address=&bbt_k
			},
			{
				BBDEBUGDECL_LOCAL,
				"bt",
				":btemplate",
				.var_address=&bbt_bt
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1022, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1022, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1022, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_k=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1023, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_bt=(struct _m_seltra2_btemplate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1026, 0};
	bbOnDebugEnterStm(&__stmt_4);
	for(bbt_i=0;(bbt_i<=7);bbt_i=(bbt_i+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1027, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bt=(struct _m_seltra2_btemplate_obj*)(struct _m_seltra2_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra2_btemplate);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1028, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1029, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=brl_random_Rand(0,6);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1030, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_ch =bbt_j;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1031, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra2_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra2_btarray),(_m_seltra2_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra2_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1032, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra2_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1033, 0};
		bbOnDebugEnterStm(&__stmt_6);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1034, 0};
		bbOnDebugEnterStm(&__stmt_7);
		bbt_k=(bbt_k+1);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1036, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_bt=(struct _m_seltra2_btemplate_obj*)(struct _m_seltra2_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra2_btemplate);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1037, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1038, 0};
		bbOnDebugEnterStm(&__stmt_10);
		bbt_j=brl_random_Rand((bbt_j+1),7);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1039, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_ch =bbt_j;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1040, 0};
		bbOnDebugEnterStm(&__stmt_12);
		((struct _m_seltra2_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra2_btarray),(_m_seltra2_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra2_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1041, 0};
		bbOnDebugEnterStm(&__stmt_13);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra2_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1042, 0};
		bbOnDebugEnterStm(&__stmt_14);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1043, 0};
		bbOnDebugEnterStm(&__stmt_15);
		bbt_k=(bbt_k+1);
		struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1045, 0};
		bbOnDebugEnterStm(&__stmt_16);
		bbt_bt=(struct _m_seltra2_btemplate_obj*)(struct _m_seltra2_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra2_btemplate);
		struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1046, 0};
		bbOnDebugEnterStm(&__stmt_17);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1047, 0};
		bbOnDebugEnterStm(&__stmt_18);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_ch =brl_random_Rand((bbt_j+1),8);
		struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1048, 0};
		bbOnDebugEnterStm(&__stmt_19);
		((struct _m_seltra2_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra2_btarray),(_m_seltra2_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra2_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1049, 0};
		bbOnDebugEnterStm(&__stmt_20);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra2_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1050, 0};
		bbOnDebugEnterStm(&__stmt_21);
		((struct _m_seltra2_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra2_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1051, 0};
		bbOnDebugEnterStm(&__stmt_22);
		bbt_k=(bbt_k+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_remove_block_image_templates(){
	BBINT bbt_i=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove_block_image_templates",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1122, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1123, 0};
	bbOnDebugEnterStm(&__stmt_1);
	for(bbt_i=0;(bbt_i<=60);bbt_i=(bbt_i+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1124, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)(bbt_i+8))))[((BBUINT)(bbt_i+8))];
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra2_block_New(struct _m_seltra2_block_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_block;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_btype = 0;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_image = (struct brl_max2d_image_TImage_obj*)&bbNullObject;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x = 0;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y = 0;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_bit_tags = 0;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_id = 0;
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldx = bbArrayNew1D("i", 2);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldy = bbArrayNew1D("i", 2);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_group = (struct _m_seltra2_bgroup_obj*)&bbNullObject;
}
BBINT __m_seltra2_block_draw(struct _m_seltra2_block_obj* o){
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 158, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]-_m_seltra2_camposy))*_m_seltra2_zoom),0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_image ,(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x -_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y -_m_seltra2_camposy))*_m_seltra2_zoom),0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 160, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x ;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 161, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_block_out_of_bounds(struct _m_seltra2_block_obj* o){
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 165, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x <1) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x >1000)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y <1)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y >1000)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 165, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra2_block_obj* __m_seltra2_block_spawn_ii(struct _m_seltra2_block_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra2_block_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"spawn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)(struct _m_seltra2_block_obj*)bbObjectNew((BBClass *)&_m_seltra2_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype =((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_btype ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_bit_tags =(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_bit_tags -1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 173, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image =(struct brl_max2d_image_TImage_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_image ;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x =(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_x +bbt_xs);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 175, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y =(((struct _m_seltra2_block_obj*)bbNullObjectTest(o))->__m_seltra2_block_y +bbt_ys);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 176, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_seltra2_bi=(_m_seltra2_bi+1);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra2_barray)->clas->m_add_Tblock((struct _m_seltra2_blockarray_obj*)_m_seltra2_barray,(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_8);
	(_m_seltra2_bmap)->clas->m_insert_iTblock((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)),(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 179, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbOnDebugLeaveScope();
	return (struct _m_seltra2_block_obj*)bbt_b;
}
struct BBDebugScope_13 _m_seltra2_block_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"block",
	{
		{
			BBDEBUGDECL_FIELD,
			"btype",
			"i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_btype)
		},
		{
			BBDEBUGDECL_FIELD,
			"image",
			":TImage",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_image)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bit_tags",
			"i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_bit_tags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldx",
			"[]i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_oldx)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldy",
			"[]i",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_oldy)
		},
		{
			BBDEBUGDECL_FIELD,
			"group",
			":bgroup",
			.field_offset=offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_group)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_block_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra2_block_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			.var_address=(void*)&__m_seltra2_block_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):block",
			.var_address=(void*)&__m_seltra2_block_spawn_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_block _m_seltra2_block={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_block_scope,
	sizeof(struct _m_seltra2_block_obj),
	(void (*)(BBOBJECT))__m_seltra2_block_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_block_obj,__m_seltra2_block_group) - sizeof(void*) + sizeof(struct _m_seltra2_bgroup_obj*)
	,__m_seltra2_block_draw
	,__m_seltra2_block_out_of_bounds
	,__m_seltra2_block_spawn_ii
};

BBINT _m_seltra2_wallblock(BBINT bbt_x,BBINT bbt_y,BBINT bbt_u){
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"wallblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"u",
				"i",
				.var_address=&bbt_u
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 746, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)(struct _m_seltra2_block_obj*)bbObjectNew((BBClass *)&_m_seltra2_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 747, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x =bbt_x;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 748, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y =bbt_y;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 749, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype =0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 751, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)bbt_u)))[((BBUINT)bbt_u)];
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 752, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(_m_seltra2_bmap)->clas->m_insert_iTblock((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_x+(bbt_y<<10)),(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 753, 0};
	bbOnDebugEnterStm(&__stmt_6);
	(_m_seltra2_wallgroup)->clas->m_add_Tblock((struct _m_seltra2_blockarray_obj*)_m_seltra2_wallgroup,(struct _m_seltra2_block_obj*)bbt_b);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my){
	BBARRAY bbt_m=&bbEmptyArray;
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
	BBARRAY bbt_xs2=&bbEmptyArray;
	BBARRAY bbt_ys2=&bbEmptyArray;
	struct BBDebugScope_20 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"gen_maze_map",
		{
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"xf",
				"i",
				.var_address=&bbt_xf
			},
			{
				BBDEBUGDECL_LOCAL,
				"yf",
				"i",
				.var_address=&bbt_yf
			},
			{
				BBDEBUGDECL_LOCAL,
				"mx",
				"i",
				.var_address=&bbt_mx
			},
			{
				BBDEBUGDECL_LOCAL,
				"my",
				"i",
				.var_address=&bbt_my
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				"[]b",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"d",
				"i",
				.var_address=&bbt_d
			},
			{
				BBDEBUGDECL_LOCAL,
				"ok",
				"i",
				.var_address=&bbt_ok
			},
			{
				BBDEBUGDECL_LOCAL,
				"k",
				"b",
				.var_address=&bbt_k
			},
			{
				BBDEBUGDECL_LOCAL,
				"xv",
				"i",
				.var_address=&bbt_xv
			},
			{
				BBDEBUGDECL_LOCAL,
				"yv",
				"i",
				.var_address=&bbt_yv
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"x2",
				"i",
				.var_address=&bbt_x2
			},
			{
				BBDEBUGDECL_LOCAL,
				"y2",
				"i",
				.var_address=&bbt_y2
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"j",
				"i",
				.var_address=&bbt_j
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs2",
				"[]i",
				.var_address=&bbt_xs2
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys2",
				"[]i",
				.var_address=&bbt_ys2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 685, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=bbArrayNew1D("b", (bbt_mx*bbt_my));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 686, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_d=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 686, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ok=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 686, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_k=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_xv=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_yv=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_y=0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_x2=0;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_y2=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_i=0;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_j=0;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 688, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_xs2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 689, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_ys2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 690, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,0U))[0U]=bbt_xs;
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 690, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,0U))[0U]=bbt_ys;
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 691, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,1U))[1U]=bbt_xf;
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 691, 0};
	bbOnDebugEnterStm(&__stmt_17);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,1U))[1U]=bbt_yf;
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 692, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 692, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 693, 0};
	bbOnDebugEnterStm(&__stmt_20);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,3U))[3U]=(bbt_mx-1);
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 693, 0};
	bbOnDebugEnterStm(&__stmt_21);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,3U))[3U]=1;
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 694, 0};
	bbOnDebugEnterStm(&__stmt_22);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,4U))[4U]=1;
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 694, 0};
	bbOnDebugEnterStm(&__stmt_23);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,4U))[4U]=(bbt_my-1);
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 695, 0};
	bbOnDebugEnterStm(&__stmt_24);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,5U))[5U]=(bbt_mx-1);
	struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 695, 0};
	bbOnDebugEnterStm(&__stmt_25);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,5U))[5U]=(bbt_my-1);
	struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 697, 0};
	bbOnDebugEnterStm(&__stmt_26);
	bbt_x=bbt_xs;
	struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 697, 0};
	bbOnDebugEnterStm(&__stmt_27);
	bbt_y=bbt_ys;
	struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 699, 0};
	bbOnDebugEnterStm(&__stmt_28);
	while(((BBINT)bbt_k)<6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 700, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 700, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 701, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=0;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 701, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_j=0;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 703, 0};
		bbOnDebugEnterStm(&__stmt_4);
		while(((bbt_i<100) || (bbt_ok==0)) && (bbt_j<1024)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 705, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_d=brl_random_Rand(0,3);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 706, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBINT bbt_=bbt_d;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 707, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 707, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_xv=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 707, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_yv=0;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 708, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 708, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_xv=-1;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 708, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt_yv=0;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 709, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==2){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 709, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_xv=0;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 709, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_yv=1;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 710, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==3){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 710, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_xv=0;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 710, 0};
							bbOnDebugEnterStm(&__stmt_1);
							bbt_yv=-1;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 713, 0};
			bbOnDebugEnterStm(&__stmt_3);
			while(1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 714, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)(bbt_x+(bbt_y*bbt_mx)))))[((BBUINT)(bbt_x+(bbt_y*bbt_mx)))]=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 716, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_x2=(bbt_x+bbt_xv);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 717, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_y2=(bbt_y+bbt_yv);
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 719, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if((((bbt_x2>0) && (bbt_x2<(bbt_mx-1))) && (bbt_y2>0)) && (bbt_y2<(bbt_my-1))){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 720, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if((((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))))[((BBUINT)((bbt_x2+bbt_xv)+((bbt_y2+bbt_yv)*bbt_mx)))])==0) || (((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))))[((BBUINT)(bbt_x2+(bbt_y2*bbt_mx)))])==1)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 720, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_x=(bbt_x+bbt_xv);
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 720, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_y=(bbt_y+bbt_yv);
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 722, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 725, 0};
				bbOnDebugEnterStm(&__stmt_4);
				if((bbt_x==bbt_xf) && (bbt_y==bbt_yf)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 725, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ok=1;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 727, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_i=(bbt_i+1);
				struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 728, 0};
				bbOnDebugEnterStm(&__stmt_6);
				if(brl_random_Rand(0,2)==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 728, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 731, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_j=(bbt_j+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 733, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_k=((BBBYTE)(((BBINT)bbt_k)+1));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 736, 0};
	bbOnDebugEnterStm(&__stmt_29);
	BBINT bbt_2=((bbt_mx*bbt_my)-1);
	for(bbt_i=0;(bbt_i<=bbt_2);bbt_i=(bbt_i+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 737, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBINT)((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 737, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra2_wallblock((bbt_i % bbt_mx),(bbt_i/bbt_mx),0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra2_bgroup_New(struct _m_seltra2_bgroup_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_bgroup;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist = (struct _m_seltra2_blockarray_obj*)(struct _m_seltra2_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra2_blockarray);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv = 0;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv = 0;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_bittags = 0;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_id = 0;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xf = 0;
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yf = 0;
}
BBINT __m_seltra2_bgroup_add_Tblock(struct _m_seltra2_bgroup_obj* o,struct _m_seltra2_block_obj* bbt_b){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 204, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra2_blockarray_obj*)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ,(struct _m_seltra2_block_obj*)bbt_b);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 205, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group =(struct _m_seltra2_bgroup_obj*)o;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_bgroup_move(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct _m_seltra2_block_obj* volatile bbt_b2=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=0;
	BBINT bbt_cv=0;
	BBINT bbt_i=0;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"xt",
				"i",
				.var_address=&bbt_xt
			},
			{
				BBDEBUGDECL_LOCAL,
				"yt",
				"i",
				.var_address=&bbt_yt
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			{
				BBDEBUGDECL_LOCAL,
				"cv",
				"i",
				.var_address=&bbt_cv
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 213, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 214, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b2=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_xt=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_yt=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(_m_seltra2_bmap))->__m_seltra2_fastblockmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 217, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_cv=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 217, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_i=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 219, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if((bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv )+bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ))>1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 219, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_blitz_DebugStop();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 221, 0};
	bbOnDebugEnterStm(&__stmt_8);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 223, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_xt=(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 224, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_yt=(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 226, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((bbt_xt>=0) && (bbt_yt>=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 226, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_xt+(bbt_yt<<10)));
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 226, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
			((struct _m_seltra2_bgroup_obj*)o)->clas->m_remove((struct _m_seltra2_bgroup_obj*)o);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 226, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 227, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((bbt_b2!=&bbNullObject) && (bbt_b2!=bbt_b)) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group !=((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group )){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 229, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==3) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =-((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv ;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =-((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 230, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==4) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 230, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_cv=((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv ;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 230, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =-((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ;
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 230, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =bbt_cv;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 231, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==5) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 231, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_cv=((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv ;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 231, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ;
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 231, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =-bbt_cv;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 232, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==6) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 232, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 232, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 234, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if(((BBObject*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group )!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 235, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==1) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==3)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==6)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==7)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 236, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 237, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 238, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==4){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 239, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 240, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 241, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==5){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 242, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 243, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 246, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if((((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==1) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==3)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==6)) || (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra2_block_btype ==7)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 247, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 248, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 249, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==4){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 250, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 251, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 252, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ==5){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 253, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_xf +(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv *1));
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 254, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))->__m_seltra2_bgroup_yf -(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv *1));
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 257, 0};
			bbOnDebugEnterStm(&__stmt_5);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 260, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 261, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 264, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_i=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 265, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 269, 0};
	bbOnDebugEnterStm(&__stmt_11);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 270, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)))==bbt_b){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 270, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra2_bmap)->clas->m_remove_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 271, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x =(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 272, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y =(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv );
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 273, 0};
		bbOnDebugEnterStm(&__stmt_3);
		(_m_seltra2_bmap)->clas->m_insert_iTblock((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)),(struct _m_seltra2_block_obj*)bbt_b);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 275, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 276, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 279, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_i=0;
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 280, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 282, 0};
	bbOnDebugEnterStm(&__stmt_14);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 283, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype !=7){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 283, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 284, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 285, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 287, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 287, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_bgroup_check_group_vel_i(){
	BBINT bbt_i=0;
	struct _m_seltra2_bgroup_obj* volatile bbt_g=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"check_group_vel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":bgroup",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 294, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 294, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_g=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 296, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 297, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_g=(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 298, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_xv )+bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_yv ))>1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 298, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_blitz_DebugStop();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 299, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_bgroup_check_forces(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_xvo=0;
	BBINT bbt_yvo=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"check_forces",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"xvo",
				"i",
				.var_address=&bbt_xvo
			},
			{
				BBDEBUGDECL_LOCAL,
				"yvo",
				"i",
				.var_address=&bbt_yvo
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 308, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_xvo=((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv ;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 309, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_yvo=((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 311, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xf )>=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 312, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv +bbIntSgn(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xf ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 313, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv )>0) && (bbt_xvo==0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 313, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 315, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yf )>=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 316, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv +bbIntSgn(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yf ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 317, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv )>0) && (bbt_yvo==0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 317, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 320, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =bbIntSgn(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv );
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 321, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =bbIntSgn(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv );
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 323, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if((bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv )+bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv ))>1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 324, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xf )>=bbIntAbs(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv +((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yf )){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 324, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 324, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 327, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xf =0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 327, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yf =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_bgroup_remove(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 334, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 335, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct _m_seltra2_redraw_obj* volatile bbt_re=(struct _m_seltra2_redraw_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"re",
					":redraw",
					.var_address=&bbt_re
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 338, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra2_bmap)->clas->m_remove_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 340, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_re=(struct _m_seltra2_redraw_obj*)(struct _m_seltra2_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra2_redraw);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 341, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)];
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 342, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)];
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 343, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_redraws =2;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 344, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(_m_seltra2_rarray)->clas->m_add_Tredraw((struct _m_seltra2_redrawarray_obj*)_m_seltra2_rarray,(struct _m_seltra2_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 345, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_re=(struct _m_seltra2_redraw_obj*)(struct _m_seltra2_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra2_redraw);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 346, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra2_frame)))))[((BBUINT)(1-((BBINT)_m_seltra2_frame)))];
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 347, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra2_frame)))))[((BBUINT)(1-((BBINT)_m_seltra2_frame)))];
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 348, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra2_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra2_redraw_redraws =2;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 349, 0};
		bbOnDebugEnterStm(&__stmt_10);
		(_m_seltra2_rarray)->clas->m_add_Tredraw((struct _m_seltra2_redrawarray_obj*)_m_seltra2_rarray,(struct _m_seltra2_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 351, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_barray))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_barray))->__m_seltra2_blockarray_ba )->dims,((BBUINT)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_id )))[((BBUINT)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_id )]=(struct _m_seltra2_block_obj*)&bbNullObject;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 352, 0};
		bbOnDebugEnterStm(&__stmt_12);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 353, 0};
		bbOnDebugEnterStm(&__stmt_13);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 355, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga )->dims,((BBUINT)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_id )))[((BBUINT)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_id )]=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 356, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(_m_seltra2_garray)->clas->m_ordered_sort_ii((struct _m_seltra2_grouparray_obj*)_m_seltra2_garray,0,0);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra2_bgroup_obj* __m_seltra2_bgroup_spawn_ii(struct _m_seltra2_bgroup_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_bgroup_obj* volatile bbt_bgn=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct _m_seltra2_block_obj* volatile bbt_m=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"spawn",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"xs",
				"i",
				.var_address=&bbt_xs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ys",
				"i",
				.var_address=&bbt_ys
			},
			{
				BBDEBUGDECL_LOCAL,
				"bgn",
				":bgroup",
				.var_address=&bbt_bgn
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				":block",
				.var_address=&bbt_m
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 362, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bgn=(struct _m_seltra2_bgroup_obj*)(struct _m_seltra2_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra2_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 363, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 364, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_m=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 366, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(((BBObject*)bbt_m)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 368, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 369, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_m=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 371, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_bgn))->__m_seltra2_bgroup_id =_m_seltra2_bgc;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 372, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_seltra2_bgc=(_m_seltra2_bgc+1);
	bbOnDebugLeaveScope();
	return (struct _m_seltra2_bgroup_obj*)&bbNullObject;
}
BBINT __m_seltra2_bgroup_checkarrows(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkarrows",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 378, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 379, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 381, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 382, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype !=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 383, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=((_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10))) % 5);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 384, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 384, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 384, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =-1;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 385, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==2){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 385, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =0;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 385, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =1;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 386, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==3){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 386, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =-1;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 386, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 387, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 387, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_xv =1;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 387, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_yv =0;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 391, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 392, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_bgroup_out_of_bounds(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 400, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 401, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 403, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_b!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 408, 0};
		bbOnDebugEnterStm(&__stmt_0);
		do{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 405, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(!((bbt_b)->clas->m_out_of_bounds((struct _m_seltra2_block_obj*)bbt_b)!=0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 405, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 406, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 407, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 411, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return 1;
}
BBINT __m_seltra2_bgroup_draw(struct _m_seltra2_bgroup_obj* o){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 418, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 419, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 421, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_b!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 426, 0};
		bbOnDebugEnterStm(&__stmt_0);
		do{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 423, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_b)->clas->m_draw((struct _m_seltra2_block_obj*)bbt_b);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 424, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 425, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_bgroup_merge_Tbgroup(struct _m_seltra2_bgroup_obj* o,struct _m_seltra2_bgroup_obj* bbt_g){
	((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"merge",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":bgroup",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 435, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_g==o){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 435, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 436, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 437, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 439, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 440, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra2_blockarray_obj*)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(o))->__m_seltra2_bgroup_blist ,(struct _m_seltra2_block_obj*)bbt_b);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 441, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group =(struct _m_seltra2_bgroup_obj*)o;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 442, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 443, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_blist ))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 446, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga )->dims,((BBUINT)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_id )))[((BBUINT)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_bgroup_id )]=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_18 _m_seltra2_bgroup_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"bgroup",
	{
		{
			BBDEBUGDECL_FIELD,
			"blist",
			":blockarray",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_blist)
		},
		{
			BBDEBUGDECL_FIELD,
			"xv",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_xv)
		},
		{
			BBDEBUGDECL_FIELD,
			"yv",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_yv)
		},
		{
			BBDEBUGDECL_FIELD,
			"bittags",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_bittags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"xf",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_xf)
		},
		{
			BBDEBUGDECL_FIELD,
			"yf",
			"i",
			.field_offset=offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_yf)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:block)i",
			.var_address=(void*)&__m_seltra2_bgroup_add_Tblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_move
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"check_group_vel",
			"()i",
			.var_address=(void*)&_m_seltra2_bgroup_check_group_vel_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"check_forces",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_check_forces
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_remove
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"spawn",
			"(i,i):bgroup",
			.var_address=(void*)&__m_seltra2_bgroup_spawn_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkarrows",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_checkarrows
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra2_bgroup_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"merge",
			"(:bgroup)i",
			.var_address=(void*)&__m_seltra2_bgroup_merge_Tbgroup
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_bgroup _m_seltra2_bgroup={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_bgroup_scope,
	sizeof(struct _m_seltra2_bgroup_obj),
	(void (*)(BBOBJECT))__m_seltra2_bgroup_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_bgroup_obj,__m_seltra2_bgroup_yf) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_bgroup_add_Tblock
	,__m_seltra2_bgroup_move
	,_m_seltra2_bgroup_check_group_vel_i
	,__m_seltra2_bgroup_check_forces
	,__m_seltra2_bgroup_remove
	,__m_seltra2_bgroup_spawn_ii
	,__m_seltra2_bgroup_checkarrows
	,__m_seltra2_bgroup_out_of_bounds
	,__m_seltra2_bgroup_draw
	,__m_seltra2_bgroup_merge_Tbgroup
};

void __m_seltra2_redraw_New(struct _m_seltra2_redraw_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_redraw;
	((struct _m_seltra2_redraw_obj*)bbNullObjectTest(o))->__m_seltra2_redraw_x = 0;
	((struct _m_seltra2_redraw_obj*)bbNullObjectTest(o))->__m_seltra2_redraw_y = 0;
	((struct _m_seltra2_redraw_obj*)bbNullObjectTest(o))->__m_seltra2_redraw_redraws = 0;
}
struct BBDebugScope_4 _m_seltra2_redraw_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"redraw",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra2_redraw_obj,__m_seltra2_redraw_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra2_redraw_obj,__m_seltra2_redraw_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"redraws",
			"b",
			.field_offset=offsetof(struct _m_seltra2_redraw_obj,__m_seltra2_redraw_redraws)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_redraw_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_redraw _m_seltra2_redraw={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_redraw_scope,
	sizeof(struct _m_seltra2_redraw_obj),
	(void (*)(BBOBJECT))__m_seltra2_redraw_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_redraw_obj,__m_seltra2_redraw_redraws) - sizeof(void*) + sizeof(BBBYTE)
};

BBINT _m_seltra2_update_bgroups(){
	BBINT bbt_i=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_bgroups",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 605, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 607, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_le ){
		struct _m_seltra2_bgroup_obj* volatile bbt_bg=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"bg",
					":bgroup",
					.var_address=&bbt_bg
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 608, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bg=(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga ),(((struct _m_seltra2_grouparray_obj*)bbNullObjectTest(_m_seltra2_garray))->__m_seltra2_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 609, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_bg)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 610, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_bg)->clas->m_check_forces((struct _m_seltra2_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 611, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(bbt_bg)->clas->m_checkarrows((struct _m_seltra2_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 612, 0};
			bbOnDebugEnterStm(&__stmt_2);
			(bbt_bg)->clas->m_move((struct _m_seltra2_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 613, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if((bbt_bg)->clas->m_out_of_bounds((struct _m_seltra2_bgroup_obj*)bbt_bg)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 616, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_bg)->clas->m_remove((struct _m_seltra2_bgroup_obj*)bbt_bg);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 621, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_mouse_input_map(){
	BBINT bbt_mozd=0;
	BBFLOAT bbt_mozn=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mouse_input_map",
		{
			{
				BBDEBUGDECL_LOCAL,
				"mozd",
				"i",
				.var_address=&bbt_mozd
			},
			{
				BBDEBUGDECL_LOCAL,
				"mozn",
				"f",
				.var_address=&bbt_mozn
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 784, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_mozd=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 784, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_mozn=.00000000f;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 786, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra2_moxc=((BBINT)((((BBFLOAT)_m_seltra2_mox)/_m_seltra2_zoom)+((BBFLOAT)_m_seltra2_camposx)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 787, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra2_moyc=((BBINT)((((BBFLOAT)_m_seltra2_moy)/_m_seltra2_zoom)+((BBFLOAT)_m_seltra2_camposy)));
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 789, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_mozd=(_m_seltra2_moz-_m_seltra2_mozo);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 790, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if((_m_seltra2_mozu+((BBFLOAT)bbt_mozd))<-9.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 790, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mozn=-9.00000000f;
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 790, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mozn=(_m_seltra2_mozu+((BBFLOAT)bbt_mozd));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 792, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(_m_seltra2_mozu!=bbt_mozn){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 793, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_mozu=bbt_mozn;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 794, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra2_zoom=(30.0000000f*(1.0f+(_m_seltra2_mozu/10.0f)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 795, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra2_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 796, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_SetScale((_m_seltra2_zoom/30.0f),(_m_seltra2_zoom/30.0f));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 797, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_seltra2_camposx=((BBINT)(((BBFLOAT)_m_seltra2_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra2_zoom))));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 798, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra2_camposy=((BBINT)(((BBFLOAT)_m_seltra2_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra2_zoom))));
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 799, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 802, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(_m_seltra2_moxc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 802, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_moxc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 803, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(_m_seltra2_moyc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 803, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_moyc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 805, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(brl_polledinput_MouseHit(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 809, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(_m_seltra2_smt<=24){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 809, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)))==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 809, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct _m_seltra2_btemplate_obj* bbt_;
				(((struct _m_seltra2_btemplate_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra2_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra2_btarray),(_m_seltra2_btarray)->dims,((BBUINT)_m_seltra2_smt)))[((BBUINT)_m_seltra2_smt)])))->clas)->m_createsingleblock_iiii((struct _m_seltra2_btemplate_obj*)bbt_,_m_seltra2_moxc,_m_seltra2_moyc,0,0);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 813, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(brl_polledinput_MouseHit(2)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 815, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((_m_seltra2_smt<=24) && ((_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)))==&bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 815, 0};
			bbOnDebugEnterStm(&__stmt_0);
			struct _m_seltra2_btemplate_obj* bbt_2;
			(((struct _m_seltra2_btemplate_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra2_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra2_btarray),(_m_seltra2_btarray)->dims,((BBUINT)_m_seltra2_smt)))[((BBUINT)_m_seltra2_smt)])))->clas)->m_createbindingblock_ii((struct _m_seltra2_btemplate_obj*)bbt_2,_m_seltra2_moxc,_m_seltra2_moyc);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 820, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(brl_polledinput_MouseHit(3)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 821, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_camposx=((BBINT)(((BBFLOAT)_m_seltra2_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra2_zoom))));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 822, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra2_camposy=((BBINT)(((BBFLOAT)_m_seltra2_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra2_zoom))));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 823, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra2_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 824, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_mouse_input_editbar(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mouse_input_editbar",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 774, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(brl_polledinput_MouseHit(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 775, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(_m_seltra2_mox<(_m_seltra2_gw-70)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 775, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra2_smt=((_m_seltra2_moy-10)/20);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 775, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra2_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)_m_seltra2_smt)))[((BBUINT)_m_seltra2_smt)];
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_get_mouse_input(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_mouse_input",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 761, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_seltra2_mozo=_m_seltra2_moz;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 762, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra2_mox=brl_polledinput_MouseX();
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 763, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra2_moy=brl_polledinput_MouseY();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 764, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra2_moz=brl_polledinput_MouseZ();
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 766, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(_m_seltra2_mox<(_m_seltra2_gw-100)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 766, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_mouse_input_map();
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 766, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_mouse_input_editbar();
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_get_user_input(){
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_t=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_user_input",
		{
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"t",
				"i",
				.var_address=&bbt_t
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 848, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 849, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_t=(_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 851, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(!(((BBObject*)bbt_b)!= &bbNullObject) || ((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype !=0))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 852, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_t<10){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 853, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_t=(bbt_t-(bbt_t % 5));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 854, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(brl_polledinput_KeyHit(87)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 854, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra2_thingmap)->clas->m_insert_ii((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)),(bbt_t+1));
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 855, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(brl_polledinput_KeyHit(83)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 855, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra2_thingmap)->clas->m_insert_ii((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)),(bbt_t+2));
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 856, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if(brl_polledinput_KeyHit(65)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 856, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra2_thingmap)->clas->m_insert_ii((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)),(bbt_t+3));
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 857, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if(brl_polledinput_KeyHit(68)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 857, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra2_thingmap)->clas->m_insert_ii((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)),(bbt_t+4));
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 861, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(brl_polledinput_KeyHit(32)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 862, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((bbt_t>=5) && (bbt_t<=9)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 865, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(_m_seltra2_thingmap)->clas->m_remove_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 866, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype !=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 866, 0};
			bbOnDebugEnterStm(&__stmt_0);
			struct _m_seltra2_bgroup_obj* bbt_;
			(((struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_bgroup_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_group ))))->clas)->m_remove((struct _m_seltra2_bgroup_obj*)bbt_);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 867, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image ==((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,1U))[1U])){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 867, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_wallgroup))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_wallgroup))->__m_seltra2_blockarray_ba )->dims,((BBUINT)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_id )))[((BBUINT)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_id )]=(struct _m_seltra2_block_obj*)&bbNullObject;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 867, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(_m_seltra2_bmap)->clas->m_remove_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x +(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y <<10)));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 870, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_polledinput_FlushKeys();
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra2_gen_New(struct _m_seltra2_gen_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra2_gen;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_x = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_y = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_bglist = bbArrayNew1D(":bgroup", 100);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_le = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_rate = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_n = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_t = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_id = 0;
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_bitflags = 0;
}
BBINT __m_seltra2_gen_genblock(struct _m_seltra2_gen_obj* o){
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o));
	struct _m_seltra2_bgroup_obj* volatile bbt_bg=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct _m_seltra2_bgroup_obj* volatile bbt_bg2=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	BBINT bbt_r=0;
	BBINT bbt_xv=0;
	BBINT bbt_yv=0;
	BBINT bbt_tm=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"genblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":gen",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg",
				":bgroup",
				.var_address=&bbt_bg
			},
			{
				BBDEBUGDECL_LOCAL,
				"bg2",
				":bgroup",
				.var_address=&bbt_bg2
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"xv",
				"i",
				.var_address=&bbt_xv
			},
			{
				BBDEBUGDECL_LOCAL,
				"yv",
				"i",
				.var_address=&bbt_yv
			},
			{
				BBDEBUGDECL_LOCAL,
				"tm",
				"i",
				.var_address=&bbt_tm
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bg=(struct _m_seltra2_bgroup_obj*)(struct _m_seltra2_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra2_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 114, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bg2=(struct _m_seltra2_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 115, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_r=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 116, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_xv=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 116, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_yv=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 117, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_tm=(_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_x +(((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_y <<10)));
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 119, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if((bbt_tm<10) && (bbt_tm>0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 120, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=(bbt_tm % 5);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 121, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 121, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_yv=-1;
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 122, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==2){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 122, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_yv=1;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 123, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==3){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 123, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_xv=-1;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 124, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==4){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 124, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_xv=1;
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 129, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_bitflags !=0) && 1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 130, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_bg2=(struct _m_seltra2_bgroup_obj*)((struct _m_seltra2_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_bglist ),(((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_bglist )->dims,((BBUINT)brl_random_Rand(0,((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_le ))))[((BBUINT)brl_random_Rand(0,((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_le ))];
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 134, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_n =(((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_n -1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra2_gen_update(struct _m_seltra2_gen_obj* o){
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":gen",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((_m_seltra2_time % ((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_rate )==((struct _m_seltra2_gen_obj*)bbNullObjectTest(o))->__m_seltra2_gen_t ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 141, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra2_gen_obj*)bbNullObjectTest(o));
		((struct _m_seltra2_gen_obj*)o)->clas->m_genblock((struct _m_seltra2_gen_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_12 _m_seltra2_gen_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"gen",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bglist",
			"[]:bgroup",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_bglist)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rate",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_rate)
		},
		{
			BBDEBUGDECL_FIELD,
			"n",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_n)
		},
		{
			BBDEBUGDECL_FIELD,
			"t",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_t)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"bitflags",
			"i",
			.field_offset=offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_bitflags)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra2_gen_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"genblock",
			"()i",
			.var_address=(void*)&__m_seltra2_gen_genblock
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"update",
			"()i",
			.var_address=(void*)&__m_seltra2_gen_update
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra2_gen _m_seltra2_gen={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra2_gen_scope,
	sizeof(struct _m_seltra2_gen_obj),
	(void (*)(BBOBJECT))__m_seltra2_gen_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra2_gen_obj,__m_seltra2_gen_bitflags) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra2_gen_genblock
	,__m_seltra2_gen_update
};

BBINT _m_seltra2_update_gens(){
	BBINT bbt_i=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_gens",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 878, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 880, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(_m_seltra2_genarray))->__m_seltra2_generatorarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 881, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct _m_seltra2_gen_obj* bbt_;
		(((struct _m_seltra2_gen_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra2_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(_m_seltra2_genarray))->__m_seltra2_generatorarray_ga ),(((struct _m_seltra2_generatorarray_obj*)bbNullObjectTest(_m_seltra2_genarray))->__m_seltra2_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))->clas)->m_update((struct _m_seltra2_gen_obj*)bbt_);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 882, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_redraw_cell(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_v=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"redraw_cell",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 651, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 652, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_v=(_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 653, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 655, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 655, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image ,(((BBFLOAT)(bbt_x-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(bbt_y-_m_seltra2_camposy))*_m_seltra2_zoom),0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 655, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 656, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(!(bbt_v!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 656, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_blank,(((BBFLOAT)(bbt_x-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(bbt_y-_m_seltra2_camposy))*_m_seltra2_zoom),0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 656, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 658, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_v!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 659, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_v<10){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 660, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=(bbt_v % 5);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 661, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 661, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrown;
				bbOnDebugLeaveScope();
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 662, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==2){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 662, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrows;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 663, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==3){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 663, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arroww;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 664, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 664, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrowe;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 668, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if((bbt_v % 5)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 668, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(((BBFLOAT)(bbt_x-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(bbt_y-_m_seltra2_camposy))*_m_seltra2_zoom),0);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_redraw3x3(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_x2=0;
	BBINT bbt_y2=0;
	BBINT bbt_v=0;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"redraw3x3",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"x2",
				"i",
				.var_address=&bbt_x2
			},
			{
				BBDEBUGDECL_LOCAL,
				"y2",
				"i",
				.var_address=&bbt_y2
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 487, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_x2=bbt_x;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 488, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_y2=bbt_y;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 489, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_v=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 490, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 491, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 493, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_x2<(bbt_x+3)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 494, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_y2=bbt_y;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 495, 0};
		bbOnDebugEnterStm(&__stmt_1);
		while(bbt_y2<(bbt_y+3)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 496, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra2_redraw_cell(bbt_x2,bbt_y2);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 497, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_y2=(bbt_y2+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 499, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_x2=(bbt_x2+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_draw_things(){
	BBINT bbt_m=0;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	BBINT bbt_n=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_things",
		{
			{
				BBDEBUGDECL_LOCAL,
				"m",
				"i",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"v",
				"i",
				.var_address=&bbt_v
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			{
				BBDEBUGDECL_LOCAL,
				"n",
				"i",
				.var_address=&bbt_n
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 457, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 457, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_v=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 457, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 459, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 460, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra2_fastintmap_obj*)bbNullObjectTest(_m_seltra2_thingmap))->__m_seltra2_fastintmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 462, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<bbt_n){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 463, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_m=(_m_seltra2_thingmap)->clas->m_kfetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,bbt_i);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 464, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_v=(_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,bbt_m);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 465, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_v!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 466, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_v<10){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 467, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBINT bbt_=(bbt_v % 5);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 468, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(bbt_==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 468, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrown;
					bbOnDebugLeaveScope();
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 469, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==2){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 469, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrows;
						bbOnDebugLeaveScope();
					}else{
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 470, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==3){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 470, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arroww;
							bbOnDebugLeaveScope();
						}else{
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 471, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_==4){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 471, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra2_arrowe;
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 473, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_max2d_SetMaskColor(255,255,230);
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 474, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if((bbt_v % 5)!=0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 474, 0};
					bbOnDebugEnterStm(&__stmt_0);
					brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(_m_seltra2_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra2_camposx))),(_m_seltra2_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra2_camposy))),0);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 478, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_draw_barray(){
	BBINT bbt_i=0;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_barray",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 630, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 631, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 633, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_barray))->__m_seltra2_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 634, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_barray))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_barray))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 635, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_b)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 636, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra2_redraw_cell(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)],((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 637, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image ,(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x -_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y -_m_seltra2_camposy))*_m_seltra2_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 638, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 639, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 642, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_draw_walls(){
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_walls",
		{
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 586, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 586, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 588, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_wallgroup))->__m_seltra2_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 589, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra2_block_obj*)((struct _m_seltra2_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_wallgroup))->__m_seltra2_blockarray_ba ),(((struct _m_seltra2_blockarray_obj*)bbNullObjectTest(_m_seltra2_wallgroup))->__m_seltra2_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 590, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_b)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 591, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]-_m_seltra2_camposy))*_m_seltra2_zoom),0);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 592, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_image ,(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x -_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y -_m_seltra2_camposy))*_m_seltra2_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 593, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldx )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 594, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy ),(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_oldy )->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 596, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_draw_editbar(){
	BBINT bbt_i=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	struct _m_seltra2_block_obj* volatile bbt_b=(struct _m_seltra2_block_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_editbar",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 547, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 547, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_x=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 547, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_y=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 549, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 550, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_DrawRect(((BBFLOAT)_m_seltra2_mox),((BBFLOAT)_m_seltra2_moy),90.0000000f,90.0000000f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 551, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 553, 0};
	bbOnDebugEnterStm(&__stmt_6);
	brl_max2d_SetMaskColor(255,255,230);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 554, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 555, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetScale(1.0f,1.0f);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 557, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_DrawLine(((BBFLOAT)(_m_seltra2_gw-100)),0.000000000f,((BBFLOAT)(_m_seltra2_gw-100)),((BBFLOAT)_m_seltra2_gh),1);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 558, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 559, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra2_gw-90)),((BBFLOAT)(_m_seltra2_gh-50)),100.000000f,20.0000000f);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 560, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 561, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(_m_seltra2_moxc),&_s16),bbStringFromInt(_m_seltra2_moyc)),((BBFLOAT)(_m_seltra2_gw-90)),((BBFLOAT)(_m_seltra2_gh-50)));
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 563, 0};
	bbOnDebugEnterStm(&__stmt_14);
	bbt_b=(struct _m_seltra2_block_obj*)(_m_seltra2_bmap)->clas->m_fetch_i((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap,(_m_seltra2_moxc+(_m_seltra2_moyc<<10)));
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 564, 0};
	bbOnDebugEnterStm(&__stmt_15);
	if(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 565, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetColor(0,0,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 566, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_max2d_DrawRect(((BBFLOAT)(_m_seltra2_gw-90)),((BBFLOAT)(_m_seltra2_gh-25)),100.000000f,20.0000000f);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 567, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_SetColor(222,222,222);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 568, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_DrawText(bbStringFromInt(((struct _m_seltra2_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra2_block_btype ),((BBFLOAT)(_m_seltra2_gw-90)),((BBFLOAT)(_m_seltra2_gh-25)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 571, 0};
	bbOnDebugEnterStm(&__stmt_16);
	brl_max2d_SetScale(0.67f,0.67f);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 572, 0};
	bbOnDebugEnterStm(&__stmt_17);
	while(((BBObject*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 573, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(30*(bbt_i/30));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 574, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=((bbt_i*20) % 600);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 575, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)],((BBFLOAT)((bbt_x+_m_seltra2_gw)-95)),((BBFLOAT)(bbt_y+10)),0);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 576, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 578, 0};
	bbOnDebugEnterStm(&__stmt_18);
	brl_max2d_SetScale((_m_seltra2_zoom/30.0f),(_m_seltra2_zoom/30.0f));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_update_display(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_display",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 508, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetViewport(0,0,_m_seltra2_gw,_m_seltra2_gh);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 509, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 510, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_DrawRect(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moxo),(_m_seltra2_moxo)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]),((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moyo),(_m_seltra2_moyo)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]),50.0000000f,50.0000000f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 511, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_SetColor(255,255,255);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 513, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_SetViewport(0,0,(_m_seltra2_gw-100),_m_seltra2_gh);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 514, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(_m_seltra2_mox<(_m_seltra2_gw-100)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 514, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_redraw3x3(((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moxco),(_m_seltra2_moxco)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)],((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moyco),(_m_seltra2_moyco)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 515, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(_m_seltra2_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 515, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_Cls();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 516, 0};
	bbOnDebugEnterStm(&__stmt_7);
	_m_seltra2_draw_things();
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 517, 0};
	bbOnDebugEnterStm(&__stmt_8);
	_m_seltra2_draw_barray();
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 518, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_mousec,(((BBFLOAT)(_m_seltra2_moxc-_m_seltra2_camposx))*_m_seltra2_zoom),(((BBFLOAT)(_m_seltra2_moyc-_m_seltra2_camposy))*_m_seltra2_zoom),0);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 519, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(_m_seltra2_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 519, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra2_draw_walls();
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 519, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra2_redraw_map=(_m_seltra2_redraw_map-1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 520, 0};
	bbOnDebugEnterStm(&__stmt_11);
	(_m_seltra2_rarray)->clas->m_do_redraws((struct _m_seltra2_redrawarray_obj*)_m_seltra2_rarray);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 522, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_SetViewport((_m_seltra2_gw-100),0,_m_seltra2_gw,_m_seltra2_gh);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 523, 0};
	bbOnDebugEnterStm(&__stmt_13);
	_m_seltra2_draw_editbar();
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 525, 0};
	bbOnDebugEnterStm(&__stmt_14);
	brl_max2d_SetViewport(0,0,_m_seltra2_gw,_m_seltra2_gh);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 527, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_smi,((BBFLOAT)(_m_seltra2_mox+15)),((BBFLOAT)(_m_seltra2_moy+15)),0);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 528, 0};
	bbOnDebugEnterStm(&__stmt_16);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra2_mousep,((BBFLOAT)_m_seltra2_mox),((BBFLOAT)_m_seltra2_moy),0);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 529, 0};
	bbOnDebugEnterStm(&__stmt_17);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moxco),(_m_seltra2_moxco)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=_m_seltra2_moxc;
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 530, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moyco),(_m_seltra2_moyco)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=_m_seltra2_moyc;
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 531, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moxo),(_m_seltra2_moxo)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=_m_seltra2_mox;
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 532, 0};
	bbOnDebugEnterStm(&__stmt_20);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_moyo),(_m_seltra2_moyo)->dims,((BBUINT)_m_seltra2_frame)))[((BBUINT)_m_seltra2_frame)]=_m_seltra2_moy;
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 534, 0};
	bbOnDebugEnterStm(&__stmt_21);
	brl_graphics_Flip(-1);
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 535, 0};
	bbOnDebugEnterStm(&__stmt_22);
	while((bbMilliSecs() % 100)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 537, 0};
	bbOnDebugEnterStm(&__stmt_23);
	while((bbMilliSecs() % 100)!=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 539, 0};
	bbOnDebugEnterStm(&__stmt_24);
	_m_seltra2_frame=((BBBYTE)(1-((BBINT)_m_seltra2_frame)));
	bbOnDebugLeaveScope();
	return 0;
}
struct brl_max2d_image_TImage_obj* _m_seltra2_loadimage2(BBSTRING bbt_fn){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"loadimage2",
		{
			{
				BBDEBUGDECL_LOCAL,
				"fn",
				"$",
				.var_address=&bbt_fn
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)_m_seltra2_noi)))[((BBUINT)_m_seltra2_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),0,0,0),-1);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra2_noi=(_m_seltra2_noi+1);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,((BBUINT)(_m_seltra2_noi-1))))[((BBUINT)(_m_seltra2_noi-1))];
}
BBINT _m_seltra2_Create_world(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create_world",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_placegene(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_tm=0;
	struct _m_seltra2_gen_obj* volatile bbt_g=(struct _m_seltra2_gen_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"placegene",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"tm",
				"i",
				.var_address=&bbt_tm
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":gen",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 833, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tm=(_m_seltra2_thingmap)->clas->m_fetch_i((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 834, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbt_tm>0) && (bbt_tm<5)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 834, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra2_thingmap)->clas->m_insert_ii((struct _m_seltra2_fastintmap_obj*)_m_seltra2_thingmap,(bbt_x+(bbt_y<<10)),(1 || (bbt_tm!=0)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 835, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_g=(struct _m_seltra2_gen_obj*)(struct _m_seltra2_gen_obj*)bbObjectNew((BBClass *)&_m_seltra2_gen);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 836, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_gen_x =bbt_x;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 837, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_gen_y =bbt_y;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 838, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_gen_rate =5;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 839, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra2_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra2_gen_bitflags =4;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 840, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra2_genarray)->clas->m_add_Tgen((struct _m_seltra2_generatorarray_obj*)_m_seltra2_genarray,(struct _m_seltra2_gen_obj*)bbt_g);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra2_create_chem_numbers(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_chem_numbers",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 892, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,0U))[0U]=brl_random_Rand(2,4);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 893, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,1U))[1U]=(((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,0U))[0U]+brl_random_Rand(4,6));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 894, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,2U))[2U]=(((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,1U))[1U]+brl_random_Rand(5,7));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 895, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,3U))[3U]=(((BBINT*)BBARRAYDATAINDEX((_m_seltra2_chem),(_m_seltra2_chem)->dims,2U))[2U]+brl_random_Rand(6,8));
	bbOnDebugLeaveScope();
	return 0;
}
BBFLOAT _m_seltra2_colfuncx(BBFLOAT bbt_x){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"colfuncx",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"f",
				.var_address=&bbt_x
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1060, 0};
	bbOnDebugEnterStm(&__stmt_0);
	while(bbt_x>1.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1061, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(bbt_x-1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1064, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_x<0.333333343f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1064, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0.0f;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1065, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1066, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_x<0.166666672f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1066, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (bbt_x*6.0f);
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1067, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_x=(bbt_x-0.166666672f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1068, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_x<0.333333343f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1068, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1.0f;
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1069, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1070, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbOnDebugLeaveScope();
	return (1.0f-(bbt_x*6.0f));
}
BBINT _m_seltra2_demo_color_spread(){
	BBFLOAT bbt_w=0;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"demo_color_spread",
		{
			{
				BBDEBUGDECL_LOCAL,
				"w",
				"f",
				.var_address=&bbt_w
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1100, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_w=.00000000f;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1101, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_w<255.0f){
		BBFLOAT bbt_w2=0;
		BBFLOAT bbt_red=0;
		BBFLOAT bbt_gre=0;
		BBFLOAT bbt_blu=0;
		struct BBDebugScope_4 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"w2",
					"f",
					.var_address=&bbt_w2
				},
				{
					BBDEBUGDECL_LOCAL,
					"red",
					"f",
					.var_address=&bbt_red
				},
				{
					BBDEBUGDECL_LOCAL,
					"gre",
					"f",
					.var_address=&bbt_gre
				},
				{
					BBDEBUGDECL_LOCAL,
					"blu",
					"f",
					.var_address=&bbt_blu
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1102, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_w2=(bbt_w/255.0f);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1104, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_red=(255.0f*_m_seltra2_colfunc(bbt_w2));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1105, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_gre=(255.0f*_m_seltra2_colfunc((85.0f+bbt_w)/255.0f));
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1106, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_blu=(255.0f*_m_seltra2_colfunc((170.0f+bbt_w)/255.0f));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1107, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_max2d_SetColor(((BBINT)bbt_red),((BBINT)bbt_gre),((BBINT)bbt_blu));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1108, 0};
		bbOnDebugEnterStm(&__stmt_5);
		brl_max2d_DrawRect(bbt_w,50.0000000f,1.00000000f,150.000000f);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1109, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_w=(bbt_w+1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1111, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_graphics_Flip(-1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1113, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(!(brl_polledinput_MouseHit(1)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
		bbObjectRegisterType((BBCLASS)&_m_seltra2_btemplate);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_grouparray);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_blockarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_redrawarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_generatorarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_fastblockmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_fastintmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_block);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_bgroup);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_redraw);
		bbObjectRegisterType((BBCLASS)&_m_seltra2_gen);
		struct BBDebugScope_50 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"seltra2",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"gw",
					"i",
					.var_address=(void*)&_m_seltra2_gw
				},
				{
					BBDEBUGDECL_GLOBAL,
					"gh",
					"i",
					.var_address=(void*)&_m_seltra2_gh
				},
				{
					BBDEBUGDECL_GLOBAL,
					"imagelist",
					"[]:TImage",
					.var_address=(void*)&_m_seltra2_imagelist
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockart",
					"[]:TImage",
					.var_address=(void*)&_m_seltra2_blockart
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockw",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockw
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blocko",
					":TImage",
					.var_address=(void*)&_m_seltra2_blocko
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockc",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blocks",
					":TImage",
					.var_address=(void*)&_m_seltra2_blocks
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockq",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockq
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockx",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockx
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockd",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockd
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockb",
					":TImage",
					.var_address=(void*)&_m_seltra2_blockb
				},
				{
					BBDEBUGDECL_GLOBAL,
					"btarray",
					"[]:btemplate",
					.var_address=(void*)&_m_seltra2_btarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousep",
					":TImage",
					.var_address=(void*)&_m_seltra2_mousep
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousec",
					":TImage",
					.var_address=(void*)&_m_seltra2_mousec
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blank",
					":TImage",
					.var_address=(void*)&_m_seltra2_blank
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arroww",
					":TImage",
					.var_address=(void*)&_m_seltra2_arroww
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrowe",
					":TImage",
					.var_address=(void*)&_m_seltra2_arrowe
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrown",
					":TImage",
					.var_address=(void*)&_m_seltra2_arrown
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrows",
					":TImage",
					.var_address=(void*)&_m_seltra2_arrows
				},
				{
					BBDEBUGDECL_GLOBAL,
					"noi",
					"i",
					.var_address=(void*)&_m_seltra2_noi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"frame",
					"b",
					.var_address=(void*)&_m_seltra2_frame
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mox",
					"i",
					.var_address=(void*)&_m_seltra2_mox
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moy",
					"i",
					.var_address=(void*)&_m_seltra2_moy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moz",
					"i",
					.var_address=(void*)&_m_seltra2_moz
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxo",
					"[]i",
					.var_address=(void*)&_m_seltra2_moxo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyo",
					"[]i",
					.var_address=(void*)&_m_seltra2_moyo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smi",
					":TImage",
					.var_address=(void*)&_m_seltra2_smi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smt",
					"i",
					.var_address=(void*)&_m_seltra2_smt
				},
				{
					BBDEBUGDECL_GLOBAL,
					"zoom",
					"f",
					.var_address=(void*)&_m_seltra2_zoom
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozo",
					"i",
					.var_address=(void*)&_m_seltra2_mozo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozu",
					"f",
					.var_address=(void*)&_m_seltra2_mozu
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxc",
					"i",
					.var_address=(void*)&_m_seltra2_moxc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyc",
					"i",
					.var_address=(void*)&_m_seltra2_moyc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxco",
					"[]i",
					.var_address=(void*)&_m_seltra2_moxco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyco",
					"[]i",
					.var_address=(void*)&_m_seltra2_moyco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"redraw_map",
					"i",
					.var_address=(void*)&_m_seltra2_redraw_map
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bi",
					"i",
					.var_address=(void*)&_m_seltra2_bi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bgc",
					"i",
					.var_address=(void*)&_m_seltra2_bgc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposx",
					"i",
					.var_address=(void*)&_m_seltra2_camposx
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposy",
					"i",
					.var_address=(void*)&_m_seltra2_camposy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"time",
					"i",
					.var_address=(void*)&_m_seltra2_time
				},
				{
					BBDEBUGDECL_GLOBAL,
					"garray",
					":grouparray",
					.var_address=(void*)&_m_seltra2_garray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"barray",
					":blockarray",
					.var_address=(void*)&_m_seltra2_barray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"wallgroup",
					":blockarray",
					.var_address=(void*)&_m_seltra2_wallgroup
				},
				{
					BBDEBUGDECL_GLOBAL,
					"rarray",
					":redrawarray",
					.var_address=(void*)&_m_seltra2_rarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"genarray",
					":generatorarray",
					.var_address=(void*)&_m_seltra2_genarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bmap",
					":fastblockmap",
					.var_address=(void*)&_m_seltra2_bmap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"thingmap",
					":fastintmap",
					.var_address=(void*)&_m_seltra2_thingmap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"chem",
					"[]i",
					.var_address=(void*)&_m_seltra2_chem
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 9, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(1024,768,0,60,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 10, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra2_gw=brl_graphics_GraphicsWidth();
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 11, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra2_gh=brl_graphics_GraphicsHeight();
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 13, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_seltra2_imagelist=bbArrayNew1D(":TImage", 200);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 16, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_max2d_SetMaskColor(0,0,0);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 18, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra2_blockart=bbArrayNew1D(":TImage", 10);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 20, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_max2d_SetMaskColor(255,255,255);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 21, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_seltra2_blockw=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s1);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 22, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_seltra2_blocko=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s2);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 23, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_seltra2_blockc=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s3);
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 24, 0};
		bbOnDebugEnterStm(&__stmt_10);
		_m_seltra2_blocks=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s4);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 25, 0};
		bbOnDebugEnterStm(&__stmt_11);
		_m_seltra2_blockq=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s5);
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_12);
		_m_seltra2_blockx=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s6);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_13);
		_m_seltra2_blockd=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s7);
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 28, 0};
		bbOnDebugEnterStm(&__stmt_14);
		_m_seltra2_blockb=(struct brl_max2d_image_TImage_obj*)_m_seltra2_loadimage3(&_s8);
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 30, 0};
		bbOnDebugEnterStm(&__stmt_15);
		_m_seltra2_btarray=bbArrayNew1D(":btemplate", 100);
		struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 35, 0};
		bbOnDebugEnterStm(&__stmt_16);
		brl_max2d_SetMaskColor(0,0,0);
		struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 36, 0};
		bbOnDebugEnterStm(&__stmt_17);
		_m_seltra2_mousep=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s9),0,0,0),-1);
		struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_18);
		_m_seltra2_mousec=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s10),0,0,0),-1);
		struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 39, 0};
		bbOnDebugEnterStm(&__stmt_19);
		brl_max2d_SetMaskColor(150,150,46);
		struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_20);
		_m_seltra2_blank=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_21);
		_m_seltra2_arroww=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_22);
		_m_seltra2_arrowe=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s13,-1);
		struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_23);
		_m_seltra2_arrown=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s14,-1);
		struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_24);
		_m_seltra2_arrows=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s15,-1);
		struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 46, 0};
		bbOnDebugEnterStm(&__stmt_25);
		struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_26);
		struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_27);
		brl_random_SeedRnd(bbMilliSecs());
		struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_28);
		struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_29);
		struct BBDebugStm __stmt_30 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_30);
		struct BBDebugStm __stmt_31 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_31);
		_m_seltra2_moxo=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_32 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_32);
		_m_seltra2_moyo=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_33 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 54, 0};
		bbOnDebugEnterStm(&__stmt_33);
		_m_seltra2_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra2_imagelist),(_m_seltra2_imagelist)->dims,0U))[0U];
		struct BBDebugStm __stmt_34 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 55, 0};
		bbOnDebugEnterStm(&__stmt_34);
		struct BBDebugStm __stmt_35 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 56, 0};
		bbOnDebugEnterStm(&__stmt_35);
		struct BBDebugStm __stmt_36 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 57, 0};
		bbOnDebugEnterStm(&__stmt_36);
		struct BBDebugStm __stmt_37 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 57, 0};
		bbOnDebugEnterStm(&__stmt_37);
		struct BBDebugStm __stmt_38 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 58, 0};
		bbOnDebugEnterStm(&__stmt_38);
		struct BBDebugStm __stmt_39 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 58, 0};
		bbOnDebugEnterStm(&__stmt_39);
		struct BBDebugStm __stmt_40 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 59, 0};
		bbOnDebugEnterStm(&__stmt_40);
		_m_seltra2_moxco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_41 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 60, 0};
		bbOnDebugEnterStm(&__stmt_41);
		_m_seltra2_moyco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_42 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_42);
		struct BBDebugStm __stmt_43 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_43);
		struct BBDebugStm __stmt_44 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_44);
		struct BBDebugStm __stmt_45 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_45);
		struct BBDebugStm __stmt_46 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_46);
		struct BBDebugStm __stmt_47 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_47);
		struct BBDebugStm __stmt_48 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_48);
		_m_seltra2_garray=(struct _m_seltra2_grouparray_obj*)(struct _m_seltra2_grouparray_obj*)bbObjectNew((BBClass *)&_m_seltra2_grouparray);
		struct BBDebugStm __stmt_49 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_49);
		_m_seltra2_barray=(struct _m_seltra2_blockarray_obj*)(struct _m_seltra2_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra2_blockarray);
		struct BBDebugStm __stmt_50 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_50);
		_m_seltra2_wallgroup=(struct _m_seltra2_blockarray_obj*)(struct _m_seltra2_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra2_blockarray);
		struct BBDebugStm __stmt_51 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_51);
		_m_seltra2_rarray=(struct _m_seltra2_redrawarray_obj*)(struct _m_seltra2_redrawarray_obj*)bbObjectNew((BBClass *)&_m_seltra2_redrawarray);
		struct BBDebugStm __stmt_52 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 76, 0};
		bbOnDebugEnterStm(&__stmt_52);
		_m_seltra2_genarray=(struct _m_seltra2_generatorarray_obj*)(struct _m_seltra2_generatorarray_obj*)bbObjectNew((BBClass *)&_m_seltra2_generatorarray);
		struct BBDebugStm __stmt_53 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 78, 0};
		bbOnDebugEnterStm(&__stmt_53);
		_m_seltra2_bmap=(struct _m_seltra2_fastblockmap_obj*)(struct _m_seltra2_fastblockmap_obj*)bbObjectNew((BBClass *)&_m_seltra2_fastblockmap);
		struct BBDebugStm __stmt_54 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 79, 0};
		bbOnDebugEnterStm(&__stmt_54);
		_m_seltra2_thingmap=(struct _m_seltra2_fastintmap_obj*)(struct _m_seltra2_fastintmap_obj*)bbObjectNew((BBClass *)&_m_seltra2_fastintmap);
		struct BBDebugStm __stmt_55 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 889, 0};
		bbOnDebugEnterStm(&__stmt_55);
		_m_seltra2_chem=bbArrayNew1D("i", 4);
		struct BBDebugStm __stmt_56 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1131, 0};
		bbOnDebugEnterStm(&__stmt_56);
		_m_seltra2_create_block_mix();
		struct BBDebugStm __stmt_57 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1132, 0};
		bbOnDebugEnterStm(&__stmt_57);
		_m_seltra2_remove_block_image_templates();
		struct BBDebugStm __stmt_58 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1133, 0};
		bbOnDebugEnterStm(&__stmt_58);
		_m_seltra2_gen_maze_map(1,1,40,1,40,40);
		struct BBDebugStm __stmt_59 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1135, 0};
		bbOnDebugEnterStm(&__stmt_59);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1137, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra2_fastblockmap_obj*)bbNullObjectTest(_m_seltra2_bmap))->__m_seltra2_fastblockmap_rc >1000){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1137, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(_m_seltra2_bmap)->clas->m_orderedsort((struct _m_seltra2_fastblockmap_obj*)_m_seltra2_bmap);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1138, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra2_update_bgroups();
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1139, 0};
			bbOnDebugEnterStm(&__stmt_2);
			_m_seltra2_get_mouse_input();
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1140, 0};
			bbOnDebugEnterStm(&__stmt_3);
			_m_seltra2_get_user_input();
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1141, 0};
			bbOnDebugEnterStm(&__stmt_4);
			_m_seltra2_update_gens();
			struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1143, 0};
			bbOnDebugEnterStm(&__stmt_5);
			_m_seltra2_update_display();
			struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra2.bmx", 1144, 0};
			bbOnDebugEnterStm(&__stmt_6);
			_m_seltra2_time=(_m_seltra2_time+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}