#include "seltra.bmx.gui.debug.win32.x86.h"
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
static BBString _s24={
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
static BBString _s23={
	&bbStringClass,
	8,
	{115,117,98,100,46,112,110,103}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_20{int kind; const char *name; BBDebugDecl decls[21]; };
struct BBDebugScope_22{int kind; const char *name; BBDebugDecl decls[23]; };
struct BBDebugScope_23{int kind; const char *name; BBDebugDecl decls[24]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_57{int kind; const char *name; BBDebugDecl decls[58]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
BBINT _m_seltra_gw=0;
BBINT _m_seltra_gh=0;
BBARRAY _m_seltra_imagelist=&bbEmptyArray;
BBARRAY _m_seltra_blockart=&bbEmptyArray;
struct brl_max2d_image_TImage_obj* _m_seltra_blockw=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra_noi=0;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage3(BBSTRING bbt_fn){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_noi)))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),255,255,255),-1);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_noi=(_m_seltra_noi+1);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 104, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)(_m_seltra_noi-1))))[((BBUINT)(_m_seltra_noi-1))];
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
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_btype = 0;
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch = 0;
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_id = 0;
}
BBINT __m_seltra_btemplate_create_block_image(struct _m_seltra_btemplate_obj* o){
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1703, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bred=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1703, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bgre=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1703, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_bblu=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1704, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1706, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_bred=((BBINT)(((100.0f*_m_seltra_colfunc(((BBFLOAT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch )/7.0f))+((BBFLOAT)brl_random_Rand(20,1)))+120.000000f));
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1707, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_bgre=((BBINT)((150.0f*_m_seltra_colfunc((2.3f+((BBFLOAT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch ))/7.0f))+30.0000000f));
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1708, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_bblu=((BBINT)((150.0f*_m_seltra_colfunc((4.7f+((BBFLOAT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch ))/7.0f))+50.0000000f));
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1710, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_max2d_SetViewport(0,0,30,30);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1711, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1712, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1713, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1714, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_blockart=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbStringConcat(bbStringConcat(&_s18,bbStringFromInt(((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch )),&_s19)),255,255,255),-1);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1715, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_SetColor((bbt_bred+20),(bbt_bgre+40),(bbt_bblu+40));
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1716, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1718, 0};
	bbOnDebugEnterStm(&__stmt_14);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1719, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1720, 0};
	bbOnDebugEnterStm(&__stmt_16);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0,0,0);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1722, 0};
	bbOnDebugEnterStm(&__stmt_17);
	brl_max2d_Cls();
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1723, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_noi)))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(30,30,1,0);
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1724, 0};
	bbOnDebugEnterStm(&__stmt_19);
	brl_max2d_SetColor(bbt_bred,bbt_bgre,bbt_bblu);
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1725, 0};
	bbOnDebugEnterStm(&__stmt_20);
	brl_max2d_DrawRect(0.000000000f,0.000000000f,30.0000000f,30.0000000f);
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1726, 0};
	bbOnDebugEnterStm(&__stmt_21);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_blockart,0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1727, 0};
	bbOnDebugEnterStm(&__stmt_22);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_btype )))[((BBUINT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_btype )],0.000000000f,0.000000000f,0);
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1728, 0};
	bbOnDebugEnterStm(&__stmt_23);
	brl_max2d_GrabImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_noi)))[((BBUINT)_m_seltra_noi)],0,0,0);
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1730, 0};
	bbOnDebugEnterStm(&__stmt_24);
	_m_seltra_noi=(_m_seltra_noi+1);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_btemplate_createsingleblock_iiii(struct _m_seltra_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_xv,BBINT bbt_yv){
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1738, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10))))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1738, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra_bgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1739, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_btype ==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1739, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_wallblock(bbt_x,bbt_y,((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_id );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1739, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra_bgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1741, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1742, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_xv =bbt_xv;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1743, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_yv =bbt_yv;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1744, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba =bbArraySlice(":block",((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ,0,10);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1745, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1746, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1747, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =bbt_x;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1748, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =bbt_y;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1749, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_btype ;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1750, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch =((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch ;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1751, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_mch =((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_ch ;
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1752, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_bt =((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_id ;
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1754, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_id )))[((BBUINT)((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o))->__m_seltra_btemplate_id )];
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1755, 0};
	bbOnDebugEnterStm(&__stmt_15);
	(bbt_bg)->clas->m_add_Tblock((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1756, 0};
	bbOnDebugEnterStm(&__stmt_16);
	(_m_seltra_garray)->clas->m_add_Tbgroup((struct _m_seltra_grouparray_obj*)_m_seltra_garray,(struct _m_seltra_bgroup_obj*)bbt_bg);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1757, 0};
	bbOnDebugEnterStm(&__stmt_17);
	(_m_seltra_barray)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_barray,(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1758, 0};
	bbOnDebugEnterStm(&__stmt_18);
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1760, 0};
	bbOnDebugEnterStm(&__stmt_19);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_bgroup_obj*)bbt_bg;
}
BBINT __m_seltra_btemplate_setbindingblock_ii(struct _m_seltra_btemplate_obj* o,BBINT bbt_x,BBINT bbt_y){
	((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"setbindingblock",
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1767, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_blitz_DebugStop();
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1768, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1769, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1770, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1772, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_b==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1772, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(o));
		bbt_bg=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_btemplate_obj*)o)->clas->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)o,bbt_x,bbt_y,0,0);
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1772, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bg=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1774, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1776, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(bbt_x>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1776, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_x-1)+(bbt_y<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1777, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1777, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1777, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1777, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1778, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(bbt_y>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1778, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+((bbt_y-1)<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1779, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1779, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1779, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1779, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1780, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((bbt_x+1)+(bbt_y<<10)));
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1781, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1781, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1781, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1781, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1782, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+((bbt_y+1)<<10)));
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1783, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype >0)) && ((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1783, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1783, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1783, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
BBINT _m_seltra_bgc=0;
BBINT _m_seltra_bc=0;
BBINT _m_seltra_sgc=0;
BBINT _m_seltra_sc=0;
BBINT _m_seltra_camposx=0;
BBINT _m_seltra_camposy=0;
BBINT _m_seltra_time=0;
void __m_seltra_grouparray_New(struct _m_seltra_grouparray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_grouparray;
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga = bbArrayNew1D(":bgroup", 2000000);
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le = 0;
}
BBINT __m_seltra_grouparray_add_Tbgroup(struct _m_seltra_grouparray_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le )))[((BBUINT)((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le )]=(struct _m_seltra_bgroup_obj*)bbt_g;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_id =((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 63, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le =(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_grouparray_ordered_sort_ii(struct _m_seltra_grouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o));
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
		bbt_n=((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le ){
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
		((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
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
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra_bgroup_id =bbt_i;
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
	((struct _m_seltra_grouparray_obj*)bbNullObjectTest(o))->__m_seltra_grouparray_le =bbt_i;
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba = bbArrayNew1D(":block", 50);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le = 0;
}
BBINT __m_seltra_blockarray_add_Tblock(struct _m_seltra_blockarray_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le )))[((BBUINT)((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le )]=(struct _m_seltra_block_obj*)bbt_b;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 7, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(o==_m_seltra_barray){
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
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id =((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le =(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_blockarray_ordered_sort_ii(struct _m_seltra_blockarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o));
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
		bbt_n=((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 14, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 16, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le ){
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
		((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 18, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
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
			((struct _m_seltra_block_obj*)bbNullObjectTest(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra_block_id =bbt_i;
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
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(o))->__m_seltra_blockarray_le =bbt_i;
	bbOnDebugLeaveScope();
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
void __m_seltra_subarray_New(struct _m_seltra_subarray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_subarray;
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa = bbArrayNew1D(":substrate", 50);
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le = 0;
}
BBINT __m_seltra_subarray_add_Tsubstrate(struct _m_seltra_subarray_obj* o,struct _m_seltra_substrate_obj* bbt_s){
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":subarray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa )->dims,((BBUINT)((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le )))[((BBUINT)((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le )]=(struct _m_seltra_substrate_obj*)bbt_s;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(o==_m_seltra_sarray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 123, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_id =((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le =(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_subarray_ordered_sort_ii(struct _m_seltra_subarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":subarray",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 129, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 129, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 130, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 132, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 133, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 134, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 134, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substrate_obj*)bbNullObjectTest(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra_substrate_id =bbt_i;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 134, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 135, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 137, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(o))->__m_seltra_subarray_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_seltra_subarray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"subarray",
	{
		{
			BBDEBUGDECL_FIELD,
			"sa",
			"[]:substrate",
			.field_offset=offsetof(struct _m_seltra_subarray_obj,__m_seltra_subarray_sa)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_subarray_obj,__m_seltra_subarray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_subarray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:substrate)i",
			.var_address=(void*)&__m_seltra_subarray_add_Tsubstrate
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_subarray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_subarray _m_seltra_subarray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_subarray_scope,
	sizeof(struct _m_seltra_subarray_obj),
	(void (*)(BBOBJECT))__m_seltra_subarray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_subarray_obj,__m_seltra_subarray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_subarray_add_Tsubstrate
	,__m_seltra_subarray_ordered_sort_ii
};

struct _m_seltra_subarray_obj* _m_seltra_sarray=(struct _m_seltra_subarray_obj*)&bbNullObject;
void __m_seltra_subgrouparray_New(struct _m_seltra_subgrouparray_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_subgrouparray;
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga = bbArrayNew1D(":sgroup", 50);
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le = 0;
}
BBINT __m_seltra_subgrouparray_add_Tsgroup(struct _m_seltra_subgrouparray_obj* o,struct _m_seltra_sgroup_obj* bbt_sg){
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":subgrouparray",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"sg",
				":sgroup",
				.var_address=&bbt_sg
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 151, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le )))[((BBUINT)((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le )]=(struct _m_seltra_sgroup_obj*)bbt_sg;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 152, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(bbt_sg))->__m_seltra_sgroup_id =((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le =(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_subgrouparray_ordered_sort_ii(struct _m_seltra_subgrouparray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o));
	BBINT bbt_j=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ordered_sort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":subgrouparray",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 157, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 157, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_n=((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 158, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 160, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 161, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 162, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 162, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_sgroup_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra_sgroup_id =bbt_i;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 162, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 163, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 165, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(o))->__m_seltra_subgrouparray_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_5 _m_seltra_subgrouparray_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"subgrouparray",
	{
		{
			BBDEBUGDECL_FIELD,
			"sga",
			"[]:sgroup",
			.field_offset=offsetof(struct _m_seltra_subgrouparray_obj,__m_seltra_subgrouparray_sga)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_subgrouparray_obj,__m_seltra_subgrouparray_le)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_subgrouparray_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:sgroup)i",
			.var_address=(void*)&__m_seltra_subgrouparray_add_Tsgroup
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ordered_sort",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_subgrouparray_ordered_sort_ii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_subgrouparray _m_seltra_subgrouparray={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_subgrouparray_scope,
	sizeof(struct _m_seltra_subgrouparray_obj),
	(void (*)(BBOBJECT))__m_seltra_subgrouparray_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_subgrouparray_obj,__m_seltra_subgrouparray_le) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_subgrouparray_add_Tsgroup
	,__m_seltra_subgrouparray_ordered_sort_ii
};

struct _m_seltra_subgrouparray_obj* _m_seltra_sgarray=(struct _m_seltra_subgrouparray_obj*)&bbNullObject;
void __m_seltra_block_New(struct _m_seltra_block_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_block;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_btype = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image = (struct brl_max2d_image_TImage_obj*)&bbNullObject;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bit_tags = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_id = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx = bbArrayNew1D("i", 2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy = bbArrayNew1D("i", 2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group = (struct _m_seltra_bgroup_obj*)&bbNullObject;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch = 0;
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt = 0;
}
BBINT __m_seltra_block_Del(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Del",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )->clas->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group ,(struct _m_seltra_block_obj*)o);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_id )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_2);
	(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 175, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 176, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 179, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 180, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 181, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 183, 0};
	bbOnDebugEnterStm(&__stmt_12);
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_draw(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 190, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 191, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 192, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x ;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 193, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_out_of_bounds(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 197, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x <1) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x >1000)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <1)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y >1000)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 197, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra_block_obj* __m_seltra_block_spawn_ii(struct _m_seltra_block_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 202, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 203, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_btype ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 204, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_bit_tags =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_bit_tags -1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 205, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_image ;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 206, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +bbt_xs);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 207, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +bbt_ys);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 208, 0};
	bbOnDebugEnterStm(&__stmt_6);
	(_m_seltra_barray)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_barray,(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 209, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 210, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id =_m_seltra_bc;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 211, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_seltra_bc=(_m_seltra_bc+1);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 212, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_block_obj*)bbt_b;
}
BBINT __m_seltra_block_checkchem_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	BBFLOAT bbt_d1=0;
	BBFLOAT bbt_d2=0;
	BBFLOAT bbt_dc=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkchem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"d1",
				"f",
				.var_address=&bbt_d1
			},
			{
				BBDEBUGDECL_LOCAL,
				"d2",
				"f",
				.var_address=&bbt_d2
			},
			{
				BBDEBUGDECL_LOCAL,
				"dc",
				"f",
				.var_address=&bbt_dc
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 218, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_d1=((BBFLOAT)_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 218, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_d2=((BBFLOAT)_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_ch ));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 218, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_dc=((BBFLOAT)_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_ch ));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 219, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromFloat(bbt_d1),&_s16),bbStringFromFloat(bbt_d2)),&_s16),bbStringFromFloat(bbt_dc)),&_s16),bbStringFromFloat((bbt_d1+bbt_d2)/2.0f)));
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 221, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_dc<(bbt_d1+bbt_d2)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 221, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_get_moli_chem(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_moli_chem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 229, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 230, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch =((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 232, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 232, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 233, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 233, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 234, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 235, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 235, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 236, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 236, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -1)<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 237, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 237, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 238, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +1)<<10)));
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 239, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 239, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch =(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_checkchem2_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	BBINT bbt_ud=0;
	BBINT bbt_sd=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkchem2",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"ud",
				"i",
				.var_address=&bbt_ud
			},
			{
				BBDEBUGDECL_LOCAL,
				"sd",
				"i",
				.var_address=&bbt_sd
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 246, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_ud=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 246, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_sd=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 248, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ud=bbIntAbs(_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch ));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 249, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_sd=bbIntAbs(_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch ));
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 251, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_sd<bbt_ud){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 252, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ud=bbIntAbs(_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_mch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 253, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_sd=bbIntAbs(_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_mch ));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 256, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_sd<bbt_ud){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 256, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBARRAY __m_seltra_block_checkchem3_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b2){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	BBINT bbt_d=0;
	BBINT bbt_mch2=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b3=(struct _m_seltra_block_obj*)&bbNullObject;
	BBARRAY bbt_ba=&bbEmptyArray;
	struct _m_seltra_block_obj* volatile bbt_bw=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_be=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_bn=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_bs=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_ldsf=0;
	BBINT bbt_ch2=0;
	BBINT bbt_i=0;
	struct BBDebugScope_14 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkchem3",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			{
				BBDEBUGDECL_LOCAL,
				"d",
				"i",
				.var_address=&bbt_d
			},
			{
				BBDEBUGDECL_LOCAL,
				"mch2",
				"i",
				.var_address=&bbt_mch2
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"b3",
				":block",
				.var_address=&bbt_b3
			},
			{
				BBDEBUGDECL_LOCAL,
				"ba",
				"[]:block",
				.var_address=&bbt_ba
			},
			{
				BBDEBUGDECL_LOCAL,
				"bw",
				":block",
				.var_address=&bbt_bw
			},
			{
				BBDEBUGDECL_LOCAL,
				"be",
				":block",
				.var_address=&bbt_be
			},
			{
				BBDEBUGDECL_LOCAL,
				"bn",
				":block",
				.var_address=&bbt_bn
			},
			{
				BBDEBUGDECL_LOCAL,
				"bs",
				":block",
				.var_address=&bbt_bs
			},
			{
				BBDEBUGDECL_LOCAL,
				"ldsf",
				"i",
				.var_address=&bbt_ldsf
			},
			{
				BBDEBUGDECL_LOCAL,
				"ch2",
				"i",
				.var_address=&bbt_ch2
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 266, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_d=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 266, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_mch2=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 267, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 267, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b3=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 268, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_ba=bbArrayNew1D(":block", 5);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 269, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_bw=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 269, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_be=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 269, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_bn=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 269, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_bs=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 271, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_mch2=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch ;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 272, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(((BBObject*)bbt_b2)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 272, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mch2=(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_mch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 273, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_ldsf=_m_seltra_chem_dist(bbt_mch2);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 275, 0};
	bbOnDebugEnterStm(&__stmt_12);
	if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 275, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bw=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 276, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_be=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 277, 0};
	bbOnDebugEnterStm(&__stmt_14);
	if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 277, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bn=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -1)<<10)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 278, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbt_bs=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +1)<<10)));
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 280, 0};
	bbOnDebugEnterStm(&__stmt_16);
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_group !=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 280, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bw=(struct _m_seltra_block_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 281, 0};
	bbOnDebugEnterStm(&__stmt_17);
	if((((BBObject*)bbt_be)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_group !=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 281, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_be=(struct _m_seltra_block_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 282, 0};
	bbOnDebugEnterStm(&__stmt_18);
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_group !=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 282, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bn=(struct _m_seltra_block_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 283, 0};
	bbOnDebugEnterStm(&__stmt_19);
	if((((BBObject*)bbt_bs)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_group !=((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 283, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bs=(struct _m_seltra_block_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 285, 0};
	bbOnDebugEnterStm(&__stmt_20);
	if(((BBObject*)bbt_bw)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 286, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=_m_seltra_chem_dist(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_ch );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 287, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 287, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 287, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 290, 0};
	bbOnDebugEnterStm(&__stmt_21);
	if(((BBObject*)bbt_be)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 291, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=_m_seltra_chem_dist(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_ch );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 292, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 292, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_be;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 292, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 295, 0};
	bbOnDebugEnterStm(&__stmt_22);
	if(((BBObject*)bbt_bn)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 296, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=_m_seltra_chem_dist(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_ch );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 297, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 297, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 297, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 300, 0};
	bbOnDebugEnterStm(&__stmt_23);
	if(((BBObject*)bbt_bs)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 301, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=_m_seltra_chem_dist(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_ch );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 302, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 302, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bs;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 302, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 305, 0};
	bbOnDebugEnterStm(&__stmt_24);
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 306, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 307, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 307, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 307, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 307, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 310, 0};
	bbOnDebugEnterStm(&__stmt_25);
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_bn)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 311, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 312, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 312, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 312, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_bn;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 312, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 315, 0};
	bbOnDebugEnterStm(&__stmt_26);
	if((((BBObject*)bbt_bw)!= &bbNullObject) && (((BBObject*)bbt_bs)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 316, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 317, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 317, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 317, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_bs;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 317, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 320, 0};
	bbOnDebugEnterStm(&__stmt_27);
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 321, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 322, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 322, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 322, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 322, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 325, 0};
	bbOnDebugEnterStm(&__stmt_28);
	if((((BBObject*)bbt_bn)!= &bbNullObject) && (((BBObject*)bbt_bs)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 326, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 327, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 327, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bn;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 327, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_bs;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 327, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 330, 0};
	bbOnDebugEnterStm(&__stmt_29);
	if((((BBObject*)bbt_bs)!= &bbNullObject) && (((BBObject*)bbt_be)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 331, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=(((2*_m_seltra_chem_dist(bbt_mch2-(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_ch +((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_ch )))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ))+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 332, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_ldsf>bbt_d){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 332, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bs;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 332, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,1U))[1U]=(struct _m_seltra_block_obj*)bbt_be;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 332, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ldsf=bbt_d;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_30 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 335, 0};
	bbOnDebugEnterStm(&__stmt_30);
	bbt_ch2=0;
	struct BBDebugStm __stmt_31 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 335, 0};
	bbOnDebugEnterStm(&__stmt_31);
	bbt_i=0;
	struct BBDebugStm __stmt_32 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 336, 0};
	bbOnDebugEnterStm(&__stmt_32);
	if(((BBObject*)bbt_bw)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 336, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ch2=_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 336, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_mch2=(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bw))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_33 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_33);
	if(((BBObject*)bbt_be)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 337, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 337, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_mch2=(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_be))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_34 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 338, 0};
	bbOnDebugEnterStm(&__stmt_34);
	if(((BBObject*)bbt_bn)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 338, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 338, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_mch2=(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bn))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_35 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 339, 0};
	bbOnDebugEnterStm(&__stmt_35);
	if(((BBObject*)bbt_bs)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 339, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ch2=(bbt_ch2+_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_mch -((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_ch ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 339, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_mch2=(bbt_mch2-((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bs))->__m_seltra_block_ch );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_36 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 340, 0};
	bbOnDebugEnterStm(&__stmt_36);
	bbt_d=(bbt_ch2+_m_seltra_chem_dist(bbt_mch2));
	struct BBDebugStm __stmt_37 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 341, 0};
	bbOnDebugEnterStm(&__stmt_37);
	if(bbt_ldsf>bbt_d){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 342, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ba=bbArraySlice(":block",bbt_ba,0,5);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 343, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_bw)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 343, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_bw;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 343, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 344, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((BBObject*)bbt_be)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 344, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_be;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 344, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 345, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)bbt_bn)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 345, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_bn;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 345, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 346, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((BBObject*)bbt_bs)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 346, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)bbt_bs;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 346, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_38 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 351, 0};
	bbOnDebugEnterStm(&__stmt_38);
	if(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 352, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=0;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 353, 0};
		bbOnDebugEnterStm(&__stmt_1);
		while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 354, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj*)bbNullObjectTest(o));
			((struct _m_seltra_block_obj*)o)->clas->m_try_flood_split_Tblock((struct _m_seltra_block_obj*)o,(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 355, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_block_obj* bbt_;
			(((struct _m_seltra_block_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))->clas)->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 356, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 358, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o));
		((struct _m_seltra_block_obj*)o)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return &bbEmptyArray;
}
BBINT __m_seltra_block_try_flood_split_Tblock(struct _m_seltra_block_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_m=0;
	BBARRAY bbt_ba=&bbEmptyArray;
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"try_flood_split",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
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
			{
				BBDEBUGDECL_LOCAL,
				"m",
				"i",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_LOCAL,
				"ba",
				"[]:block",
				.var_address=&bbt_ba
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 368, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 368, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_m=1;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ba=bbArrayNew1D(":block", 100);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 370, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,0U))[0U]=(struct _m_seltra_block_obj*)bbt_b;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 371, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(!(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 371, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 373, 0};
	bbOnDebugEnterStm(&__stmt_6);
	while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 374, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x >0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 375, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 376, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )) && (bbt_b2!=o)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 376, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_m)))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 376, 0};
				bbOnDebugEnterStm(&__stmt_1);
				struct _m_seltra_bgroup_obj* bbt_;
				(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_,(struct _m_seltra_block_obj*)bbt_b2);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 376, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_m=(bbt_m+1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 378, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 379, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )) && (bbt_b2!=o)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 379, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_m)))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 379, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_bgroup_obj* bbt_2;
			(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_2,(struct _m_seltra_block_obj*)bbt_b2);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 379, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_m=(bbt_m+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 380, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y >0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 381, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -1)<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 382, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )) && (bbt_b2!=o)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 382, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_m)))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 382, 0};
				bbOnDebugEnterStm(&__stmt_1);
				struct _m_seltra_bgroup_obj* bbt_3;
				(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_3 = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_3,(struct _m_seltra_block_obj*)bbt_b2);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 382, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_m=(bbt_m+1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 384, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y +1)<<10)));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 385, 0};
		bbOnDebugEnterStm(&__stmt_5);
		if(((((BBObject*)bbt_b2)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group )) && (bbt_b2!=o)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 385, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_m)))[((BBUINT)bbt_m)]=(struct _m_seltra_block_obj*)bbt_b2;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 385, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_bgroup_obj* bbt_4;
			(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_4 = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_4,(struct _m_seltra_block_obj*)bbt_b2);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 385, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_m=(bbt_m+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 387, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 390, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 391, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_i=0;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 392, 0};
	bbOnDebugEnterStm(&__stmt_9);
	struct _m_seltra_bgroup_obj* bbt_5;
	(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_5 = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))))->clas)->m_remove_block_Tblock((struct _m_seltra_bgroup_obj*)bbt_5,(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 394, 0};
	bbOnDebugEnterStm(&__stmt_10);
	while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 396, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(bbt_bg)->clas->m_add_Tblock((struct _m_seltra_bgroup_obj*)bbt_bg,(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((bbt_ba),(bbt_ba)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 397, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 399, 0};
	bbOnDebugEnterStm(&__stmt_11);
	(_m_seltra_garray)->clas->m_add_Tbgroup((struct _m_seltra_grouparray_obj*)_m_seltra_garray,(struct _m_seltra_bgroup_obj*)bbt_bg);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_block_repblock(struct _m_seltra_block_obj* o){
	((struct _m_seltra_block_obj*)bbNullObjectTest(o));
	BBINT bbt_ok=0;
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"repblock",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":block",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"ok",
				"i",
				.var_address=&bbt_ok
			},
			{
				BBDEBUGDECL_LOCAL,
				"b2",
				":block",
				.var_address=&bbt_b2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 407, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_ok=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 407, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 409, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group ))->__m_seltra_bgroup_xv !=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 410, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y >0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 411, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -1)<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 412, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 412, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ok=1;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 414, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +1)<<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 415, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 415, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ok=(bbt_ok+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 418, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group ))->__m_seltra_bgroup_yv !=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 419, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x >0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 420, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 421, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 421, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ok=1;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 423, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +1)+(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 424, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(!(((BBObject*)bbt_b2)!= &bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 424, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ok=(bbt_ok+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 427, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_ok==2){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_btemplate_obj*)bbNullObjectTest(((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )]))->__m_seltra_btemplate_btype ==((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_btype ){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 430, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group ))->__m_seltra_bgroup_xv !=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 431, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct _m_seltra_btemplate_obj* bbt_;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_,((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x ,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y -1),0,-1);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 432, 0};
				bbOnDebugEnterStm(&__stmt_1);
				struct _m_seltra_btemplate_obj* bbt_2;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_2,((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x ,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y +1),0,1);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 434, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_group ))->__m_seltra_bgroup_yv !=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 435, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct _m_seltra_btemplate_obj* bbt_3;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_3 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_3,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x -1),((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y ,-1,0);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 436, 0};
				bbOnDebugEnterStm(&__stmt_1);
				struct _m_seltra_btemplate_obj* bbt_4;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_4 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_bt )])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_4,(((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_x +1),((struct _m_seltra_block_obj*)bbNullObjectTest(o))->__m_seltra_block_y ,1,0);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 440, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_block_obj*)bbNullObjectTest(o));
		((struct _m_seltra_block_obj*)o)->clas->m_Del((struct _m_seltra_block_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra = bbArrayNew1D(":redraw", 1000);
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le = 0;
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn = 0;
}
BBINT __m_seltra_redrawarray_add_Tredraw(struct _m_seltra_redrawarray_obj* o,struct _m_seltra_redraw_obj* bbt_r){
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le )))[((BBUINT)((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le )]=(struct _m_seltra_redraw_obj*)bbt_r;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le =(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_redrawarray_do_redraws(struct _m_seltra_redrawarray_obj* o){
	((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o));
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct _m_seltra_redraw_obj* volatile bbt_r=(struct _m_seltra_redraw_obj*)&bbNullObject;
	BBINT bbt_v=0;
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	bbt_r=(struct _m_seltra_redraw_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_v=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_i=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(_m_seltra_rarray))->__m_seltra_redrawarray_le ){
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
		bbt_r=(struct _m_seltra_redraw_obj*)((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
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
			_m_seltra_redraw_cell(((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_x ,((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_y );
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 102, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws =((BBBYTE)(((BBINT)((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws )-1));
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 103, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(((BBINT)((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_r))->__m_seltra_redraw_redraws )<=0){
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
				((struct _m_seltra_redraw_obj**)BBARRAYDATAINDEX((((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra ),(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_ra )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_redraw_obj*)&bbNullObject;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 103, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn =(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn +1);
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
	if(((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn ==((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le ){
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
		((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_le =0;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_redrawarray_obj*)bbNullObjectTest(o))->__m_seltra_redrawarray_drawn =0;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga = bbArrayNew1D(":gen", 3000);
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le = 0;
}
BBINT __m_seltra_generatorarray_add_Tgen(struct _m_seltra_generatorarray_obj* o,struct _m_seltra_gen_obj* bbt_g){
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga )->dims,((BBUINT)((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le )))[((BBUINT)((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le )]=(struct _m_seltra_gen_obj*)bbt_g;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_id =((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 36, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le =(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_generatorarray_ordered_sort_ii(struct _m_seltra_generatorarray_obj* o,BBINT bbt_n,BBINT bbt_i){
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o));
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
		bbt_n=((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 41, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=bbt_i;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 43, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le ){
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
		((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_gen_obj*)((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/arrays.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
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
			((struct _m_seltra_gen_obj*)bbNullObjectTest(((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->__m_seltra_gen_id =bbt_i;
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
	((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(o))->__m_seltra_generatorarray_le =bbt_i;
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v = bbArrayNew1D(":block", 3000000);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le = 0;
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc = 0;
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_fetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	return (struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
struct _m_seltra_block_obj* __m_seltra_fastblockmap_vfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	return (struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastblockmap_kfetch_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastblockmap_insert_iTblock(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==&bbNullObject){
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
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le )))[((BBUINT)((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 31, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra_block_obj*)bbt_b;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_remove_i(struct _m_seltra_fastblockmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_iter(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
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
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 52, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
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
BBINT __m_seltra_fastblockmap_fastsort(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
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
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))))[((BBUINT)(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 76, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
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
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastblockmap_orderedsort(struct _m_seltra_fastblockmap_obj* o){
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o));
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
	while(bbt_j<((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le ){
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
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==&bbNullObject){
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
			((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le -1);
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k ),(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
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
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_le =bbt_i;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(o))->__m_seltra_fastblockmap_rc =0;
	bbOnDebugLeaveScope();
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
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le = 0;
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl = 0;
}
BBINT __m_seltra_fastintmap_fetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
BBINT __m_seltra_fastintmap_vfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_fastintmap_kfetch_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_index){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_fastintmap_insert_ii(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key,BBINT bbt_val){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
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
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le )))[((BBUINT)((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=bbt_val;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_remove_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_key){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_iter(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 47, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
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
			bbt_a=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])];
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
BBINT __m_seltra_fastintmap_fastsort(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_i<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))))[((BBUINT)(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 71, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
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
BBINT __m_seltra_fastintmap_orderedsort(struct _m_seltra_fastintmap_obj* o){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	while(bbt_j<((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le ){
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
		if(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl ){
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
			((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le -1);
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
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
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
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_le =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_fastintmap_set_null_value_i(struct _m_seltra_fastintmap_obj* o,BBINT bbt_n){
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o));
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
	((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_nl =bbt_n;
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
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v ),(((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(o))->__m_seltra_fastintmap_v )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=bbt_n;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/memap.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
void __m_seltra_substratemap_New(struct _m_seltra_substratemap_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_substratemap;
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v = bbArrayNew1D(":substrate", 3000000);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k = bbArrayNew1D("i", 3000000);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le = 0;
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_rc = 0;
}
struct _m_seltra_substrate_obj* __m_seltra_substratemap_fetch_i(struct _m_seltra_substratemap_obj* o,BBINT bbt_key){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 119, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)];
}
struct _m_seltra_substrate_obj* __m_seltra_substratemap_vfetch_i(struct _m_seltra_substratemap_obj* o,BBINT bbt_index){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"vfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])];
}
BBINT __m_seltra_substratemap_kfetch_i(struct _m_seltra_substratemap_obj* o,BBINT bbt_index){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"kfetch",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 129, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
}
BBINT __m_seltra_substratemap_insert_iTsubstrate(struct _m_seltra_substratemap_obj* o,BBINT bbt_key,struct _m_seltra_substrate_obj* bbt_s){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"insert",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 136, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le )))[((BBUINT)((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le )]=bbt_key;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 137, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le =(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le +1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 139, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra_substrate_obj*)bbt_s;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substratemap_remove_i(struct _m_seltra_substratemap_obj* o,BBINT bbt_key){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 145, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)bbt_key)))[((BBUINT)bbt_key)]=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_rc =(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_rc +1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substratemap_iter(struct _m_seltra_substratemap_obj* o){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"iter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 156, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 157, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1))))[((BBUINT)(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 158, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le =(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1);
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 167, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substratemap_fastsort(struct _m_seltra_substratemap_obj* o){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fastsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 179, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 180, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1))))[((BBUINT)(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1))];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 181, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le =(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1);
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 183, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 187, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substratemap_orderedsort(struct _m_seltra_substratemap_obj* o){
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"orderedsort",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substratemap",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 195, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_j<((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 196, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_v )->dims,((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])))[((BBUINT)((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)])]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 197, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le =(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le -1);
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 199, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k ),(((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_k )->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)];
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 200, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 203, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_j=(bbt_j+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 206, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_le =bbt_i;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/blockmap.bmx", 207, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_substratemap_obj*)bbNullObjectTest(o))->__m_seltra_substratemap_rc =0;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_13 _m_seltra_substratemap_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"substratemap",
	{
		{
			BBDEBUGDECL_FIELD,
			"v",
			"[]:substrate",
			.field_offset=offsetof(struct _m_seltra_substratemap_obj,__m_seltra_substratemap_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"k",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_substratemap_obj,__m_seltra_substratemap_k)
		},
		{
			BBDEBUGDECL_FIELD,
			"le",
			"i",
			.field_offset=offsetof(struct _m_seltra_substratemap_obj,__m_seltra_substratemap_le)
		},
		{
			BBDEBUGDECL_FIELD,
			"rc",
			"i",
			.field_offset=offsetof(struct _m_seltra_substratemap_obj,__m_seltra_substratemap_rc)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_substratemap_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fetch",
			"(i):substrate",
			.var_address=(void*)&__m_seltra_substratemap_fetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"vfetch",
			"(i):substrate",
			.var_address=(void*)&__m_seltra_substratemap_vfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"kfetch",
			"(i)i",
			.var_address=(void*)&__m_seltra_substratemap_kfetch_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"insert",
			"(i,:substrate)i",
			.var_address=(void*)&__m_seltra_substratemap_insert_iTsubstrate
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"(i)i",
			.var_address=(void*)&__m_seltra_substratemap_remove_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"iter",
			"()i",
			.var_address=(void*)&__m_seltra_substratemap_iter
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"fastsort",
			"()i",
			.var_address=(void*)&__m_seltra_substratemap_fastsort
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"orderedsort",
			"()i",
			.var_address=(void*)&__m_seltra_substratemap_orderedsort
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_substratemap _m_seltra_substratemap={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_substratemap_scope,
	sizeof(struct _m_seltra_substratemap_obj),
	(void (*)(BBOBJECT))__m_seltra_substratemap_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_substratemap_obj,__m_seltra_substratemap_rc) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_substratemap_fetch_i
	,__m_seltra_substratemap_vfetch_i
	,__m_seltra_substratemap_kfetch_i
	,__m_seltra_substratemap_insert_iTsubstrate
	,__m_seltra_substratemap_remove_i
	,__m_seltra_substratemap_iter
	,__m_seltra_substratemap_fastsort
	,__m_seltra_substratemap_orderedsort
};

struct _m_seltra_substratemap_obj* _m_seltra_smap=(struct _m_seltra_substratemap_obj*)&bbNullObject;
BBARRAY _m_seltra_chem=&bbEmptyArray;
BBINT _m_seltra_create_chem_numbers(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"create_chem_numbers",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1666, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,0U))[0U]=4;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1667, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,1U))[1U]=10;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1668, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,2U))[2U]=(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,1U))[1U]+brl_random_Rand(5,7));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1669, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,3U))[3U]=(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,2U))[2U]+brl_random_Rand(6,8));
	bbOnDebugLeaveScope();
	return 0;
}
BBFLOAT _m_seltra_colfunc(BBFLOAT bbt_x){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1860, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1861, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(bbt_x-1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1864, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1864, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0.0f;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1865, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1866, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1866, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (bbt_x*9.0f);
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1867, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1868, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1868, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (0.75f+(bbt_x*3.00000000f));
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1869, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1870, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1870, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1.0f;
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1871, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1872, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1872, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (1.0f-(bbt_x*3.00000000f));
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1873, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_x=(bbt_x-0.0833333358f);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1874, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbOnDebugLeaveScope();
	return (0.75f-(bbt_x*9.0f));
}
BBINT _m_seltra_create_block_mix(){
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBINT bbt_k=0;
	struct _m_seltra_btemplate_obj* volatile bbt_bt=(struct _m_seltra_btemplate_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1795, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1795, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1795, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_k=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1796, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_bt=(struct _m_seltra_btemplate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1799, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1800, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1801, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1802, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_j=1;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1803, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_ch =bbt_j;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1804, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1805, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1806, 0};
		bbOnDebugEnterStm(&__stmt_6);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1807, 0};
		bbOnDebugEnterStm(&__stmt_7);
		bbt_k=(bbt_k+1);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1809, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1810, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1811, 0};
		bbOnDebugEnterStm(&__stmt_10);
		bbt_j=brl_random_Rand((bbt_j+1),6);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1812, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_ch =bbt_j;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1813, 0};
		bbOnDebugEnterStm(&__stmt_12);
		((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1814, 0};
		bbOnDebugEnterStm(&__stmt_13);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1815, 0};
		bbOnDebugEnterStm(&__stmt_14);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1816, 0};
		bbOnDebugEnterStm(&__stmt_15);
		bbt_k=(bbt_k+1);
		struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1818, 0};
		bbOnDebugEnterStm(&__stmt_16);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1819, 0};
		bbOnDebugEnterStm(&__stmt_17);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1820, 0};
		bbOnDebugEnterStm(&__stmt_18);
		bbt_j=brl_random_Rand((bbt_j+1),7);
		struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1821, 0};
		bbOnDebugEnterStm(&__stmt_19);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_ch =bbt_j;
		struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1822, 0};
		bbOnDebugEnterStm(&__stmt_20);
		((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1823, 0};
		bbOnDebugEnterStm(&__stmt_21);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1824, 0};
		bbOnDebugEnterStm(&__stmt_22);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1825, 0};
		bbOnDebugEnterStm(&__stmt_23);
		bbt_k=(bbt_k+1);
		struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1827, 0};
		bbOnDebugEnterStm(&__stmt_24);
		bbt_bt=(struct _m_seltra_btemplate_obj*)(struct _m_seltra_btemplate_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_btemplate);
		struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1828, 0};
		bbOnDebugEnterStm(&__stmt_25);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_btype =bbt_i;
		struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1829, 0};
		bbOnDebugEnterStm(&__stmt_26);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_ch =brl_random_Rand((bbt_j+1),8);
		struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1830, 0};
		bbOnDebugEnterStm(&__stmt_27);
		((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra_btemplate_obj*)bbt_bt;
		struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1831, 0};
		bbOnDebugEnterStm(&__stmt_28);
		(bbt_bt)->clas->m_create_block_image((struct _m_seltra_btemplate_obj*)bbt_bt);
		struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1832, 0};
		bbOnDebugEnterStm(&__stmt_29);
		((struct _m_seltra_btemplate_obj*)bbNullObjectTest(bbt_bt))->__m_seltra_btemplate_id =bbt_k;
		struct BBDebugStm __stmt_30 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1833, 0};
		bbOnDebugEnterStm(&__stmt_30);
		bbt_k=(bbt_k+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_remove_block_image_templates(){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1903, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1904, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1905, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)(bbt_i+8))))[((BBUINT)(bbt_i+8))];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1909, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1910, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(((BBObject*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1911, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1913, 0};
	bbOnDebugEnterStm(&__stmt_4);
	_m_seltra_noi=bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
struct brl_max2d_image_TImage_obj* _m_seltra_sub0=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
struct brl_max2d_image_TImage_obj* _m_seltra_loadimage2(BBSTRING bbt_fn){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 93, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_noi)))[((BBUINT)_m_seltra_noi)]=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)bbt_fn),0,0,0),-1);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_noi=(_m_seltra_noi+1);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)(_m_seltra_noi-1))))[((BBUINT)(_m_seltra_noi-1))];
}
struct brl_max2d_image_TImage_obj* _m_seltra_subd=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
BBINT _m_seltra_wallblock(BBINT bbt_x,BBINT bbt_y,BBINT bbt_u){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1372, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(struct _m_seltra_block_obj*)bbObjectNew((BBClass *)&_m_seltra_block);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1373, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =bbt_x;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1374, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =bbt_y;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1375, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype =0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1376, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image =(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_u)))[((BBUINT)bbt_u)];
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1377, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)),(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1378, 0};
	bbOnDebugEnterStm(&__stmt_6);
	(_m_seltra_wallgroup)->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)_m_seltra_wallgroup,(struct _m_seltra_block_obj*)bbt_b);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_gen_maze_map(BBINT bbt_xs,BBINT bbt_ys,BBINT bbt_xf,BBINT bbt_yf,BBINT bbt_mx,BBINT bbt_my){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1311, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=bbArrayNew1D("b", (bbt_mx*bbt_my));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1312, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_d=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1312, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ok=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1312, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_k=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_xv=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_yv=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_y=0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_x2=0;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_y2=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_i=0;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1313, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_j=0;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1314, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_xs2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1315, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_ys2=bbArrayNew1D("i", 6);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1316, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,0U))[0U]=bbt_xs;
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1316, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,0U))[0U]=bbt_ys;
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1317, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,1U))[1U]=bbt_xf;
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1317, 0};
	bbOnDebugEnterStm(&__stmt_17);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,1U))[1U]=bbt_yf;
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1318, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1318, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,2U))[2U]=1;
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1319, 0};
	bbOnDebugEnterStm(&__stmt_20);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,3U))[3U]=(bbt_mx-1);
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1319, 0};
	bbOnDebugEnterStm(&__stmt_21);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,3U))[3U]=1;
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1320, 0};
	bbOnDebugEnterStm(&__stmt_22);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,4U))[4U]=1;
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1320, 0};
	bbOnDebugEnterStm(&__stmt_23);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,4U))[4U]=(bbt_my-1);
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1321, 0};
	bbOnDebugEnterStm(&__stmt_24);
	((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,5U))[5U]=(bbt_mx-1);
	struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1321, 0};
	bbOnDebugEnterStm(&__stmt_25);
	((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,5U))[5U]=(bbt_my-1);
	struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1323, 0};
	bbOnDebugEnterStm(&__stmt_26);
	bbt_x=bbt_xs;
	struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1323, 0};
	bbOnDebugEnterStm(&__stmt_27);
	bbt_y=bbt_ys;
	struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1325, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1326, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=((BBINT*)BBARRAYDATAINDEX((bbt_xs2),(bbt_xs2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1326, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=((BBINT*)BBARRAYDATAINDEX((bbt_ys2),(bbt_ys2)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)];
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1327, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=0;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1327, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_j=0;
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1329, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1331, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_d=brl_random_Rand(0,3);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1332, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBINT bbt_=bbt_d;
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1333, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1333, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_xv=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1333, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1334, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1334, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_xv=-1;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1334, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1335, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1335, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_xv=0;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1335, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1336, 0};
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1336, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_xv=0;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1336, 0};
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
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1339, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1340, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((BBBYTE*)BBARRAYDATAINDEX((bbt_m),(bbt_m)->dims,((BBUINT)(bbt_x+(bbt_y*bbt_mx)))))[((BBUINT)(bbt_x+(bbt_y*bbt_mx)))]=1;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1342, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_x2=(bbt_x+bbt_xv);
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1343, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_y2=(bbt_y+bbt_yv);
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1345, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1346, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1346, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_x=(bbt_x+bbt_xv);
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1346, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1348, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1351, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1351, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ok=1;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1353, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_i=(bbt_i+1);
				struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1354, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1354, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					break;
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1357, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_j=(bbt_j+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1359, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_k=((BBBYTE)(((BBINT)bbt_k)+1));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1362, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1363, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1363, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_wallblock((bbt_i % bbt_mx),(bbt_i/bbt_mx),0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra_sgroup_New(struct _m_seltra_sgroup_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_sgroup;
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist = (struct _m_seltra_subarray_obj*)(struct _m_seltra_subarray_obj*)bbObjectNew((BBClass *)&_m_seltra_subarray);
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv = 0;
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv = 0;
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_bittags = 0;
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_id = 0;
}
BBINT __m_seltra_sgroup_add_Tsubstrate(struct _m_seltra_sgroup_obj* o,struct _m_seltra_substrate_obj* bbt_s){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"add",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 888, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist )->clas->m_add_Tsubstrate((struct _m_seltra_subarray_obj*)((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 889, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group =(struct _m_seltra_sgroup_obj*)o;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_sgroup_move(struct _m_seltra_sgroup_obj* o){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s2=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=0;
	BBINT bbt_i=0;
	BBINT bbt_t=0;
	BBINT bbt_t2=0;
	BBINT bbt_ti=0;
	struct _m_seltra_block_obj* volatile bbt_bi=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_si=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugScope_12 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"s2",
				":substrate",
				.var_address=&bbt_s2
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
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"t",
				"i",
				.var_address=&bbt_t
			},
			{
				BBDEBUGDECL_LOCAL,
				"t2",
				"i",
				.var_address=&bbt_t2
			},
			{
				BBDEBUGDECL_LOCAL,
				"ti",
				"i",
				.var_address=&bbt_ti
			},
			{
				BBDEBUGDECL_LOCAL,
				"bi",
				":block",
				.var_address=&bbt_bi
			},
			{
				BBDEBUGDECL_LOCAL,
				"si",
				":substrate",
				.var_address=&bbt_si
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 895, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 896, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s2=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 897, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_xt=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 897, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_yt=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 898, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(_m_seltra_thingmap))->__m_seltra_fastintmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 899, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_i=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 899, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_t=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 899, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_t2=0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 900, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_ti=0;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 901, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_bi=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 902, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_si=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 904, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if((bbIntAbs(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv )+bbIntAbs(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv ))>1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 904, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_blitz_DebugStop();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 906, 0};
	bbOnDebugEnterStm(&__stmt_12);
	while(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 907, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_xt=(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 908, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_yt=(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y +((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 909, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 910, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ti=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_xt+(bbt_yt<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 911, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_bi=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_xt+(bbt_yt<<10)));
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 912, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_si=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(bbt_xt+(bbt_yt<<10)));
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 914, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
			((struct _m_seltra_sgroup_obj*)o)->clas->m_remove((struct _m_seltra_sgroup_obj*)o);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 914, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 917, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)bbt_bi)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 918, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_bi))->__m_seltra_block_btype ==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 918, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =-((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv ;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 918, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =-((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv ;
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 918, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 921, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((BBObject*)bbt_si)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 922, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_si))->__m_seltra_substrate_group !=((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 922, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =-((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv ;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 922, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =-((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv ;
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 922, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 925, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 926, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 930, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_i=0;
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 931, 0};
	bbOnDebugEnterStm(&__stmt_14);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 932, 0};
	bbOnDebugEnterStm(&__stmt_15);
	while(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 933, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_smap)->clas->m_remove_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 934, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 935, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 938, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbt_i=0;
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 939, 0};
	bbOnDebugEnterStm(&__stmt_17);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 940, 0};
	bbOnDebugEnterStm(&__stmt_18);
	while(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 941, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x =(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv );
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 942, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y =(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y +((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv );
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 943, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(_m_seltra_smap)->clas->m_insert_iTsubstrate((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)),(struct _m_seltra_substrate_obj*)bbt_s);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 944, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 945, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_sgroup_remove(struct _m_seltra_sgroup_obj* o){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 953, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 954, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 956, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(((BBObject*)bbt_s)!= &bbNullObject){
		struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)&bbNullObject;
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 957, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_smap)->clas->m_remove_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 959, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 960, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 961, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 962, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 963, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 964, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 965, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 966, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 967, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 968, 0};
		bbOnDebugEnterStm(&__stmt_10);
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 970, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa )->dims,((BBUINT)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_id )))[((BBUINT)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_id )]=(struct _m_seltra_substrate_obj*)&bbNullObject;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 971, 0};
		bbOnDebugEnterStm(&__stmt_12);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 972, 0};
		bbOnDebugEnterStm(&__stmt_13);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 974, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(_m_seltra_sgarray))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(_m_seltra_sgarray))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_id )))[((BBUINT)((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_id )]=(struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 975, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(_m_seltra_sgarray)->clas->m_ordered_sort_ii((struct _m_seltra_subgrouparray_obj*)_m_seltra_sgarray,0,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_sgroup_out_of_bounds_check(struct _m_seltra_sgroup_obj* o){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds_check",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
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
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 983, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 984, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 986, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_s!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 991, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 988, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(!((bbt_s)->clas->m_out_of_bounds((struct _m_seltra_substrate_obj*)bbt_s)!=0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 988, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 989, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 990, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_s==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 994, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return 1;
}
BBINT __m_seltra_sgroup_checkarrows(struct _m_seltra_sgroup_obj* o){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"checkarrows",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1001, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1002, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1004, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1005, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_image ==_m_seltra_subd){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1006, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=((_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10))) % 8);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1007, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1007, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =0;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1007, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =-1;
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1008, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1008, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =0;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1008, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =1;
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1009, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1009, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =-1;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1009, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =0;
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1010, 0};
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1010, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_xv =1;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1010, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_yv =0;
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
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1014, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1015, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_sgroup_draw(struct _m_seltra_sgroup_obj* o){
	((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":sgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1023, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1024, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1026, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_s!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1031, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1028, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_s)->clas->m_draw((struct _m_seltra_substrate_obj*)bbt_s);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1029, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1030, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(o))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_s==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_12 _m_seltra_sgroup_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"sgroup",
	{
		{
			BBDEBUGDECL_FIELD,
			"slist",
			":subarray",
			.field_offset=offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_slist)
		},
		{
			BBDEBUGDECL_FIELD,
			"xv",
			"i",
			.field_offset=offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_xv)
		},
		{
			BBDEBUGDECL_FIELD,
			"yv",
			"i",
			.field_offset=offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_yv)
		},
		{
			BBDEBUGDECL_FIELD,
			"bittags",
			"i",
			.field_offset=offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_bittags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_id)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"add",
			"(:substrate)i",
			.var_address=(void*)&__m_seltra_sgroup_add_Tsubstrate
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_move
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"remove",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_remove
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds_check",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_out_of_bounds_check
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"checkarrows",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_checkarrows
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra_sgroup_draw
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_sgroup _m_seltra_sgroup={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_sgroup_scope,
	sizeof(struct _m_seltra_sgroup_obj),
	(void (*)(BBOBJECT))__m_seltra_sgroup_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_sgroup_obj,__m_seltra_sgroup_id) - sizeof(void*) + sizeof(BBINT)
	,__m_seltra_sgroup_add_Tsubstrate
	,__m_seltra_sgroup_move
	,__m_seltra_sgroup_remove
	,__m_seltra_sgroup_out_of_bounds_check
	,__m_seltra_sgroup_checkarrows
	,__m_seltra_sgroup_draw
};

void __m_seltra_substrate_New_iiTTImageTsgroup(struct _m_seltra_substrate_obj* o,BBINT bbt_xs,BBINT bbt_ys,struct brl_max2d_image_TImage_obj* bbt_im,struct _m_seltra_sgroup_obj* bbt_sg) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_substrate;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_image = (struct brl_max2d_image_TImage_obj*)&bbNullObject;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_bit_tags = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_id = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx = bbArrayNew1D("i", 2);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy = bbArrayNew1D("i", 2);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_group = (struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
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
				"im",
				":TImage",
				.var_address=&bbt_im
			},
			{
				BBDEBUGDECL_LOCAL,
				"sg",
				":sgroup",
				.var_address=&bbt_sg
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 806, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x =bbt_xs;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 806, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y =bbt_ys;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 809, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_image =(struct brl_max2d_image_TImage_obj*)bbt_im;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 811, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_sg==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 812, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_sg=(struct _m_seltra_sgroup_obj*)(struct _m_seltra_sgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_sgroup);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 813, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(_m_seltra_sgarray)->clas->m_add_Tsgroup((struct _m_seltra_subgrouparray_obj*)_m_seltra_sgarray,(struct _m_seltra_sgroup_obj*)bbt_sg);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 816, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(bbt_sg)->clas->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_sg,(struct _m_seltra_substrate_obj*)o);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 817, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(_m_seltra_sarray)->clas->m_add_Tsubstrate((struct _m_seltra_subarray_obj*)_m_seltra_sarray,(struct _m_seltra_substrate_obj*)o);
	bbOnDebugLeaveScope();
}
struct _m_seltra_substrate_obj* __m_seltra_substrate_New_iiTTImageTsgroup_ObjectNew(BBClass * clas,BBINT bbt_xs,BBINT bbt_ys,struct brl_max2d_image_TImage_obj* bbt_im,struct _m_seltra_sgroup_obj* bbt_sg) {
	struct _m_seltra_substrate_obj* o = bbObjectNewNC(clas);
	__m_seltra_substrate_New_iiTTImageTsgroup(o, bbt_xs, bbt_ys, bbt_im, bbt_sg);
	return o;
}
void __m_seltra_substrate_New(struct _m_seltra_substrate_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_substrate;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_image = (struct brl_max2d_image_TImage_obj*)&bbNullObject;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_bit_tags = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_id = 0;
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx = bbArrayNew1D("i", 2);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy = bbArrayNew1D("i", 2);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_group = (struct _m_seltra_sgroup_obj*)&bbNullObject;
}
BBINT __m_seltra_substrate_out_of_bounds(struct _m_seltra_substrate_obj* o){
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"out_of_bounds",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substrate",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 823, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x <1) || (((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x >1000)) || (((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y <1)) || (((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y >1000)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 823, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substrate_draw(struct _m_seltra_substrate_obj* o){
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substrate",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 828, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 829, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_image ,(((BBFLOAT)(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y -_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 830, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x ;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 831, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y ;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_substrate_Del(struct _m_seltra_substrate_obj* o){
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(o));
	struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Del",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":substrate",
				.var_address=&o
			},
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 837, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 838, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 839, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 840, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 841, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 842, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 843, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 844, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 845, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 846, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 848, 0};
	bbOnDebugEnterStm(&__stmt_10);
	(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_group )->clas->m_remove((struct _m_seltra_sgroup_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_group );
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 849, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa )->dims,((BBUINT)((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_id )))[((BBUINT)((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_id )]=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 850, 0};
	bbOnDebugEnterStm(&__stmt_12);
	(_m_seltra_smap)->clas->m_remove_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(o))->__m_seltra_substrate_y <<10)));
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_13 _m_seltra_substrate_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"substrate",
	{
		{
			BBDEBUGDECL_FIELD,
			"image",
			":TImage",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_image)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"bit_tags",
			"i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_bit_tags)
		},
		{
			BBDEBUGDECL_FIELD,
			"id",
			"i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldx",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_oldx)
		},
		{
			BBDEBUGDECL_FIELD,
			"oldy",
			"[]i",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_oldy)
		},
		{
			BBDEBUGDECL_FIELD,
			"group",
			":sgroup",
			.field_offset=offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_group)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_seltra_substrate_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(i,i,:TImage,:sgroup):substrate",
			.var_address=(void*)&__m_seltra_substrate_New_iiTTImageTsgroup
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"out_of_bounds",
			"()i",
			.var_address=(void*)&__m_seltra_substrate_out_of_bounds
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"draw",
			"()i",
			.var_address=(void*)&__m_seltra_substrate_draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Del",
			"()i",
			.var_address=(void*)&__m_seltra_substrate_Del
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_seltra_substrate _m_seltra_substrate={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_seltra_substrate_scope,
	sizeof(struct _m_seltra_substrate_obj),
	(void (*)(BBOBJECT))__m_seltra_substrate_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_seltra_substrate_obj,__m_seltra_substrate_group) - sizeof(void*) + sizeof(struct _m_seltra_sgroup_obj*)
	,__m_seltra_substrate_out_of_bounds
	,__m_seltra_substrate_draw
	,__m_seltra_substrate_Del
};

void __m_seltra_redraw_New(struct _m_seltra_redraw_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_redraw;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_x = 0;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_y = 0;
	((struct _m_seltra_redraw_obj*)bbNullObjectTest(o))->__m_seltra_redraw_redraws = 0;
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

BBINT _m_seltra_update_sgroups(){
	BBINT bbt_i=0;
	struct _m_seltra_sgroup_obj* volatile bbt_sg=(struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_sgroups",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"sg",
				":sgroup",
				.var_address=&bbt_sg
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 861, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 862, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_sg=(struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 864, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(_m_seltra_sgarray))->__m_seltra_subgrouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 865, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_sg=(struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(_m_seltra_sgarray))->__m_seltra_subgrouparray_sga ),(((struct _m_seltra_subgrouparray_obj*)bbNullObjectTest(_m_seltra_sgarray))->__m_seltra_subgrouparray_sga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 866, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_sg)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 867, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_sg)->clas->m_checkarrows((struct _m_seltra_sgroup_obj*)bbt_sg);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 868, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(bbt_sg)->clas->m_move((struct _m_seltra_sgroup_obj*)bbt_sg);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 869, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if((bbt_sg)->clas->m_out_of_bounds_check((struct _m_seltra_sgroup_obj*)bbt_sg)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 871, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_sg)->clas->m_remove((struct _m_seltra_sgroup_obj*)bbt_sg);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 875, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra_bgroup_New(struct _m_seltra_bgroup_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_bgroup;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist = (struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_bittags = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xf = 0;
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yf = 0;
}
BBINT __m_seltra_bgroup_add_Tblock(struct _m_seltra_bgroup_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 468, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ,(struct _m_seltra_block_obj*)bbt_b);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 469, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)o;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_move(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 475, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	((struct _m_seltra_bgroup_obj*)o)->clas->m_move_ii((struct _m_seltra_bgroup_obj*)o,((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv ,((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_move_ii(struct _m_seltra_bgroup_obj* o,BBINT bbt_xm,BBINT bbt_ym){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_block_obj* volatile bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_xt=0;
	BBINT bbt_yt=0;
	BBINT bbt_n=0;
	BBINT bbt_cv=0;
	BBINT bbt_i=0;
	struct BBDebugScope_10 __scope = {
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
				"xm",
				"i",
				.var_address=&bbt_xm
			},
			{
				BBDEBUGDECL_LOCAL,
				"ym",
				"i",
				.var_address=&bbt_ym
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 481, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 482, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b2=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 483, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_xt=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 483, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_yt=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 484, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(_m_seltra_bmap))->__m_seltra_fastblockmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 485, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_cv=0;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 485, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_i=0;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 487, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if((bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv )+bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ))>1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 487, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_blitz_DebugStop();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 489, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 491, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_xt=(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +bbt_xm);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 492, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_yt=(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y +bbt_ym);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 494, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 494, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b2=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_xt+(bbt_yt<<10)));
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 494, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
			((struct _m_seltra_bgroup_obj*)o)->clas->m_remove((struct _m_seltra_bgroup_obj*)o);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 494, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 495, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((bbt_b2!=&bbNullObject) && (bbt_b2!=bbt_b)) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group !=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group )){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 497, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype !=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 499, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_b2)->clas->m_checkchem3_Tblock((struct _m_seltra_block_obj*)bbt_b2,(struct _m_seltra_block_obj*)bbt_b);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 501, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if((bbt_b)->clas->m_checkchem2_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)bbt_b2)!=0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 502, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
					((struct _m_seltra_bgroup_obj*)o)->clas->m_merge_Tbgroup((struct _m_seltra_bgroup_obj*)o,(struct _m_seltra_bgroup_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group );
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 503, 0};
					bbOnDebugEnterStm(&__stmt_1);
					(bbt_b)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b);
					struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 504, 0};
					bbOnDebugEnterStm(&__stmt_2);
					(bbt_b2)->clas->m_get_moli_chem((struct _m_seltra_block_obj*)bbt_b2);
					struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 505, 0};
					bbOnDebugEnterStm(&__stmt_3);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return 0;
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 510, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==2) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 510, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_b)->clas->m_repblock((struct _m_seltra_block_obj*)bbt_b);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 511, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(((BBObject*)bbt_b)!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 512, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==3) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==0)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 512, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =-((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv ;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 512, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =-((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 513, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==4) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==0)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 513, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_cv=((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv ;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 513, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =-((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ;
					struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 513, 0};
					bbOnDebugEnterStm(&__stmt_2);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =bbt_cv;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 514, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==5) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==0)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 514, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_cv=((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv ;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 514, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ;
					struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 514, 0};
					bbOnDebugEnterStm(&__stmt_2);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =-bbt_cv;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 515, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==6) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==0)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 515, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 515, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 517, 0};
				bbOnDebugEnterStm(&__stmt_4);
				if(((BBObject*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group )!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 518, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if((((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==1) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==3)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==6)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==7)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 519, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 520, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 521, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 522, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 523, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 524, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==5){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 525, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_xf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
								struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 526, 0};
								bbOnDebugEnterStm(&__stmt_1);
								((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_group ))->__m_seltra_bgroup_yf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 529, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if((((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==1) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==3)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==6)) || (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b2))->__m_seltra_block_btype ==7)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 530, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 531, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 532, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 533, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 534, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 535, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==5){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 536, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_xf +(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv *1));
								struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 537, 0};
								bbOnDebugEnterStm(&__stmt_1);
								((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))->__m_seltra_bgroup_yf -(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv *1));
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
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 541, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 545, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 546, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 549, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_i=0;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 550, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 554, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 555, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)))==bbt_b){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 555, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 556, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +bbt_xm);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 557, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y =(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y +bbt_ym);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 558, 0};
		bbOnDebugEnterStm(&__stmt_3);
		(_m_seltra_bmap)->clas->m_insert_iTblock((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)),(struct _m_seltra_block_obj*)bbt_b);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 560, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 561, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 564, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_i=0;
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 565, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 567, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 568, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype !=7){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 568, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 569, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 570, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 572, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 572, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_bgroup_check_group_vel_i(){
	BBINT bbt_i=0;
	struct _m_seltra_bgroup_obj* volatile bbt_g=(struct _m_seltra_bgroup_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 579, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 579, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_g=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 581, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 582, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_g=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 583, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_xv )+bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_yv ))>1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 583, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_blitz_DebugStop();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 584, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_check_substrates(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBINT bbt_j=0;
	BBINT bbt_k=0;
	BBINT bbt_ok=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBARRAY bbt_sl=&bbEmptyArray;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"check_substrates",
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
				"ok",
				"i",
				.var_address=&bbt_ok
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"sl",
				"[]:substrate",
				.var_address=&bbt_sl
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_j=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_k=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 592, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_ok=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 593, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 594, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 595, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_sl=bbArrayNew1D(":substrate", 10);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 597, 0};
	bbOnDebugEnterStm(&__stmt_7);
	while(((BBObject*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 598, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 599, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 600, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((BBObject*)bbt_s)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 601, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ok=1;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 602, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBINT bbt_=bbt_k;
			for(bbt_j=0;(bbt_j<=bbt_);bbt_j=(bbt_j+1)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 603, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((bbt_sl),(bbt_sl)->dims,((BBUINT)bbt_j)))[((BBUINT)bbt_j)]==bbt_s){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 603, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ok=0;
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 605, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_ok!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 606, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
				((struct _m_seltra_bgroup_obj*)o)->clas->m_move_ii((struct _m_seltra_bgroup_obj*)o,((struct _m_seltra_sgroup_obj*)bbNullObjectTest(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))->__m_seltra_sgroup_xv ,((struct _m_seltra_sgroup_obj*)bbNullObjectTest(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))->__m_seltra_sgroup_yv );
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 607, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((bbt_sl),(bbt_sl)->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct _m_seltra_substrate_obj*)bbt_s;
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 608, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_k=(bbt_k+1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 612, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_check_forces(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 620, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_xvo=((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv ;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 621, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_yvo=((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 623, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xf )>=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 624, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv +bbIntSgn(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xf ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 625, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv )>0) && (bbt_xvo==0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 625, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 627, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yf )>=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 628, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv +bbIntSgn(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yf ));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 629, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv )>0) && (bbt_yvo==0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 629, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 632, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =bbIntSgn(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv );
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 633, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =bbIntSgn(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv );
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 635, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if((bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv )+bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv ))>1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 636, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xf )>=bbIntAbs(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv +((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yf )){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 636, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 636, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 639, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xf =0;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 639, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yf =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_remove_block_Tblock(struct _m_seltra_bgroup_obj* o,struct _m_seltra_block_obj* bbt_b){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"remove_block",
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 646, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 647, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 648, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]==bbt_b){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 648, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)&bbNullObject;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 649, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 651, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)&bbNullObject;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_remove(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 658, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 659, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 661, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(((BBObject*)bbt_b)!= &bbNullObject){
		struct _m_seltra_redraw_obj* volatile bbt_re=(struct _m_seltra_redraw_obj*)&bbNullObject;
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 662, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 664, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 665, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 666, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)];
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 667, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 668, 0};
		bbOnDebugEnterStm(&__stmt_5);
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 669, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_re=(struct _m_seltra_redraw_obj*)(struct _m_seltra_redraw_obj*)bbObjectAtomicNew((BBClass *)&_m_seltra_redraw);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 670, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_x =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 671, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_y =((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)(1-((BBINT)_m_seltra_frame)))))[((BBUINT)(1-((BBINT)_m_seltra_frame)))];
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 672, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_seltra_redraw_obj*)bbNullObjectTest(bbt_re))->__m_seltra_redraw_redraws =2;
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 673, 0};
		bbOnDebugEnterStm(&__stmt_10);
		(_m_seltra_rarray)->clas->m_add_Tredraw((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray,(struct _m_seltra_redraw_obj*)bbt_re);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 675, 0};
		bbOnDebugEnterStm(&__stmt_11);
		((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 676, 0};
		bbOnDebugEnterStm(&__stmt_12);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 677, 0};
		bbOnDebugEnterStm(&__stmt_13);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 679, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id )))[((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_id )]=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 680, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(_m_seltra_garray)->clas->m_ordered_sort_ii((struct _m_seltra_grouparray_obj*)_m_seltra_garray,0,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_split_aTblockii(struct _m_seltra_bgroup_obj* o,BBARRAY bbt_bl,BBINT bbt_xvn,BBINT bbt_yvn){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"split",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":bgroup",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"bl",
				"[]:block",
				.var_address=&bbt_bl
			},
			{
				BBDEBUGDECL_LOCAL,
				"xvn",
				"i",
				.var_address=&bbt_xvn
			},
			{
				BBDEBUGDECL_LOCAL,
				"yvn",
				"i",
				.var_address=&bbt_yvn
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 687, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 689, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 690, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]==bbt_b){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 690, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct _m_seltra_block_obj*)&bbNullObject;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 690, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			break;
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 691, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 693, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 694, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_xv =bbt_xvn;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 695, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_yv =bbt_yvn;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 696, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba =bbArraySlice(":block",((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ,0,10);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 697, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bg))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba =bbt_bl;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 698, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	bbOnDebugLeaveScope();
	return 0;
}
struct _m_seltra_bgroup_obj* __m_seltra_bgroup_spawn_ii(struct _m_seltra_bgroup_obj* o,BBINT bbt_xs,BBINT bbt_ys){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bgn=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_m=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 704, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bgn=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 705, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 706, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_m=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 708, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 710, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 711, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_m=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 713, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_bgn))->__m_seltra_bgroup_id =_m_seltra_bgc;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 714, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_seltra_bgc=(_m_seltra_bgc+1);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_bgroup_obj*)&bbNullObject;
}
BBINT __m_seltra_bgroup_checkarrows(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 720, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 721, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 723, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 724, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype !=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 725, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=((_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10))) % 8);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 726, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 726, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 726, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =-1;
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 727, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 727, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =0;
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 727, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =1;
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 728, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 728, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =-1;
						struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 728, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 729, 0};
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 729, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_xv =1;
							struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 729, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_yv =0;
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
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 733, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 734, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_out_of_bounds(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 742, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 743, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 745, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 750, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 747, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(!((bbt_b)->clas->m_out_of_bounds((struct _m_seltra_block_obj*)bbt_b)!=0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 747, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 748, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 749, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 753, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return 1;
}
BBINT __m_seltra_bgroup_draw(struct _m_seltra_bgroup_obj* o){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 760, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 761, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 763, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 768, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 765, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_b)->clas->m_draw((struct _m_seltra_block_obj*)bbt_b);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 766, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_i=(bbt_i+1);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 767, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}while(!(bbt_b==&bbNullObject));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_bgroup_merge_Tbgroup(struct _m_seltra_bgroup_obj* o,struct _m_seltra_bgroup_obj* bbt_g){
	((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o));
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 777, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 777, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 778, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,0U))[0U];
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 779, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 781, 0};
	bbOnDebugEnterStm(&__stmt_3);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 782, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBObject*)bbt_b)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 782, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist )->clas->m_add_Tblock((struct _m_seltra_blockarray_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(o))->__m_seltra_bgroup_blist ,(struct _m_seltra_block_obj*)bbt_b);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 782, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group =(struct _m_seltra_bgroup_obj*)o;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 783, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 784, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_blist ))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 787, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_id )))[((BBUINT)((struct _m_seltra_bgroup_obj*)bbNullObjectTest(bbt_g))->__m_seltra_bgroup_id )]=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_22 _m_seltra_bgroup_scope ={
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
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"(i,i)i",
			.var_address=(void*)&__m_seltra_bgroup_move_ii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"check_group_vel",
			"()i",
			.var_address=(void*)&_m_seltra_bgroup_check_group_vel_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"check_substrates",
			"()i",
			.var_address=(void*)&__m_seltra_bgroup_check_substrates
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
	,__m_seltra_bgroup_move_ii
	,_m_seltra_bgroup_check_group_vel_i
	,__m_seltra_bgroup_check_substrates
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

BBINT _m_seltra_chem_dist(BBINT bbt_x){
	BBINT bbt_d2=0;
	BBINT bbt_i=0;
	BBINT bbt_d=0;
	BBINT bbt_s=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"chem_dist",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"d2",
				"i",
				.var_address=&bbt_d2
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"d",
				"i",
				.var_address=&bbt_d
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				"i",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1677, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_d2=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1678, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1678, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_d=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1678, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_s=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1680, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_d2=9999;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1682, 0};
	bbOnDebugEnterStm(&__stmt_5);
	while(bbt_i<4){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1683, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_d=bbIntAbs(bbt_x-((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1685, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_d<bbIntAbs(bbt_d2)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1685, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_d2=bbt_d;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1686, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1689, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return bbt_d2;
}
BBINT _m_seltra_update_bgroups(){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1212, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1214, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_le ){
		struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1215, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_bg=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga ),(((struct _m_seltra_grouparray_obj*)bbNullObjectTest(_m_seltra_garray))->__m_seltra_grouparray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1216, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1217, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_bg)->clas->m_check_forces((struct _m_seltra_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1218, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(bbt_bg)->clas->m_checkarrows((struct _m_seltra_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1219, 0};
			bbOnDebugEnterStm(&__stmt_2);
			(bbt_bg)->clas->m_check_substrates((struct _m_seltra_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1220, 0};
			bbOnDebugEnterStm(&__stmt_3);
			(bbt_bg)->clas->m_move((struct _m_seltra_bgroup_obj*)bbt_bg);
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1221, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if((bbt_bg)->clas->m_out_of_bounds((struct _m_seltra_bgroup_obj*)bbt_bg)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1224, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_bg)->clas->m_remove((struct _m_seltra_bgroup_obj*)bbt_bg);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1228, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void __m_seltra_gen_New(struct _m_seltra_gen_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_seltra_gen;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_x = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_y = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist = bbArrayNew1D(":bgroup", 100);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_rate = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_t = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_id = 0;
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bitflags = 0;
}
BBINT __m_seltra_gen_genblock(struct _m_seltra_gen_obj* o){
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o));
	struct _m_seltra_bgroup_obj* volatile bbt_bg=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct _m_seltra_bgroup_obj* volatile bbt_bg2=(struct _m_seltra_bgroup_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_bg=(struct _m_seltra_bgroup_obj*)(struct _m_seltra_bgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_bgroup);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bg2=(struct _m_seltra_bgroup_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_r=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_xv=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_yv=0;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_tm=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_x +(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_y <<10)));
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 127, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 128, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=(bbt_tm % 8);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 129, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 129, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 130, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 130, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 131, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 131, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 132, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 132, 0};
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
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 137, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bitflags !=0) && 1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 138, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_bg2=(struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj**)BBARRAYDATAINDEX((((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist ),(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_bglist )->dims,((BBUINT)brl_random_Rand(0,((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le ))))[((BBUINT)brl_random_Rand(0,((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_le ))];
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 142, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n =(((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_n -1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT __m_seltra_gen_update(struct _m_seltra_gen_obj* o){
	((struct _m_seltra_gen_obj*)bbNullObjectTest(o));
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 149, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((_m_seltra_time % ((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_rate )==((struct _m_seltra_gen_obj*)bbNullObjectTest(o))->__m_seltra_gen_t ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 149, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_seltra_gen_obj*)bbNullObjectTest(o));
		((struct _m_seltra_gen_obj*)o)->clas->m_genblock((struct _m_seltra_gen_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1652, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1654, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_i<((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(_m_seltra_genarray))->__m_seltra_generatorarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1655, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct _m_seltra_gen_obj* bbt_;
		(((struct _m_seltra_gen_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_gen_obj**)BBARRAYDATAINDEX((((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(_m_seltra_genarray))->__m_seltra_generatorarray_ga ),(((struct _m_seltra_generatorarray_obj*)bbNullObjectTest(_m_seltra_genarray))->__m_seltra_generatorarray_ga )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))->clas)->m_update((struct _m_seltra_gen_obj*)bbt_);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1656, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT _m_seltra_core_engine_thread(BBOBJECT bbt_data){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"core_engine_thread",
		{
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1921, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_seltra_fastblockmap_obj*)bbNullObjectTest(_m_seltra_bmap))->__m_seltra_fastblockmap_rc >1000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1921, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_bmap)->clas->m_orderedsort((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1922, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_update_sgroups();
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1923, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra_update_bgroups();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1924, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_update_gens();
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1925, 0};
	bbOnDebugEnterStm(&__stmt_4);
	_m_seltra_time=(_m_seltra_time+1);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1927, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (BBOBJECT)&_s20;
}
struct _m_seltra_sgroup_obj* _m_seltra_createsingleSubstrate(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct _m_seltra_sgroup_obj* volatile bbt_sg=(struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"createsingleSubstrate",
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
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"sg",
				":sgroup",
				.var_address=&bbt_sg
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1485, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1486, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1488, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1488, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1488, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (struct _m_seltra_sgroup_obj*)&bbNullObject;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1489, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1489, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra_sgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1491, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_sg=(struct _m_seltra_sgroup_obj*)(struct _m_seltra_sgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_sgroup);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1493, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_seltra_sgc=(_m_seltra_sgc+1);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1494, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_s=(struct _m_seltra_substrate_obj*)__m_seltra_substrate_New_iiTTImageTsgroup_ObjectNew((struct _m_seltra_substrate_obj*)&_m_seltra_substrate,bbt_x,bbt_y,(struct brl_max2d_image_TImage_obj*)_m_seltra_sub0,(struct _m_seltra_sgroup_obj*)bbt_sg);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1496, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(bbt_sg)->clas->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_sg,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1497, 0};
	bbOnDebugEnterStm(&__stmt_8);
	(_m_seltra_sgarray)->clas->m_add_Tsgroup((struct _m_seltra_subgrouparray_obj*)_m_seltra_sgarray,(struct _m_seltra_sgroup_obj*)bbt_sg);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1498, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(_m_seltra_sarray)->clas->m_add_Tsubstrate((struct _m_seltra_subarray_obj*)_m_seltra_sarray,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1499, 0};
	bbOnDebugEnterStm(&__stmt_10);
	(_m_seltra_smap)->clas->m_insert_iTsubstrate((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)),(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1501, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_sgroup_obj*)bbt_sg;
}
struct _m_seltra_sgroup_obj* _m_seltra_placeSubstrateGuide(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct _m_seltra_sgroup_obj* volatile bbt_sg=(struct _m_seltra_sgroup_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"placeSubstrateGuide",
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
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"sg",
				":sgroup",
				.var_address=&bbt_sg
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1509, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1510, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1512, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1512, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1512, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (struct _m_seltra_sgroup_obj*)&bbNullObject;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1513, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1513, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct _m_seltra_sgroup_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1515, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_sg=(struct _m_seltra_sgroup_obj*)(struct _m_seltra_sgroup_obj*)bbObjectNew((BBClass *)&_m_seltra_sgroup);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1516, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(bbt_sg))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa =bbArraySlice(":substrate",((struct _m_seltra_subarray_obj*)bbNullObjectTest(((struct _m_seltra_sgroup_obj*)bbNullObjectTest(bbt_sg))->__m_seltra_sgroup_slist ))->__m_seltra_subarray_sa ,0,10);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1517, 0};
	bbOnDebugEnterStm(&__stmt_6);
	_m_seltra_sgc=(_m_seltra_sgc+1);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1518, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_s=(struct _m_seltra_substrate_obj*)(struct _m_seltra_substrate_obj*)bbObjectNew((BBClass *)&_m_seltra_substrate);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1519, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x =bbt_x;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1520, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y =bbt_y;
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1522, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_image =(struct brl_max2d_image_TImage_obj*)_m_seltra_subd;
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1523, 0};
	bbOnDebugEnterStm(&__stmt_11);
	(bbt_sg)->clas->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_sg,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1524, 0};
	bbOnDebugEnterStm(&__stmt_12);
	(_m_seltra_sgarray)->clas->m_add_Tsgroup((struct _m_seltra_subgrouparray_obj*)_m_seltra_sgarray,(struct _m_seltra_sgroup_obj*)bbt_sg);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1525, 0};
	bbOnDebugEnterStm(&__stmt_13);
	(_m_seltra_sarray)->clas->m_add_Tsubstrate((struct _m_seltra_subarray_obj*)_m_seltra_sarray,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1526, 0};
	bbOnDebugEnterStm(&__stmt_14);
	(_m_seltra_smap)->clas->m_insert_iTsubstrate((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)),(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1528, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbOnDebugLeaveScope();
	return (struct _m_seltra_sgroup_obj*)bbt_sg;
}
BBINT _m_seltra_mergeSingleSubstrate(BBINT bbt_x,BBINT bbt_y,struct brl_max2d_image_TImage_obj* bbt_image){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s2=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mergeSingleSubstrate",
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
				"image",
				":TImage",
				.var_address=&bbt_image
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"s2",
				":substrate",
				.var_address=&bbt_s2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1536, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1537, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1538, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_s2=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1540, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1540, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1540, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1541, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1541, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1543, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_s=(struct _m_seltra_substrate_obj*)(struct _m_seltra_substrate_obj*)bbObjectNew((BBClass *)&_m_seltra_substrate);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1544, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x =bbt_x;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1545, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y =bbt_y;
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1546, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_image =(struct brl_max2d_image_TImage_obj*)bbt_image;
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1547, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(_m_seltra_sarray)->clas->m_add_Tsubstrate((struct _m_seltra_subarray_obj*)_m_seltra_sarray,(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1548, 0};
	bbOnDebugEnterStm(&__stmt_10);
	(_m_seltra_smap)->clas->m_insert_iTsubstrate((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x +(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y <<10)),(struct _m_seltra_substrate_obj*)bbt_s);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1550, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(bbt_x>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1551, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_s2=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,((_m_seltra_moxc+1)+(_m_seltra_moyc<<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1552, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_s2)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1553, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group =(struct _m_seltra_sgroup_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s2))->__m_seltra_substrate_group ;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1554, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_sgroup_obj* bbt_;
			(((struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))))->clas)->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_,(struct _m_seltra_substrate_obj*)bbt_s);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1555, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1559, 0};
	bbOnDebugEnterStm(&__stmt_12);
	if(bbt_y>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1560, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_s2=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(_m_seltra_moxc+((_m_seltra_moyc+1)<<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1561, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_s2)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1562, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group =(struct _m_seltra_sgroup_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s2))->__m_seltra_substrate_group ;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1563, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_sgroup_obj* bbt_2;
			(((struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))))->clas)->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_2,(struct _m_seltra_substrate_obj*)bbt_s);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1564, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1568, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(bbt_x<1000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1569, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_s2=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,((_m_seltra_moxc-1)+(_m_seltra_moyc<<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1570, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_s2)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1571, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group =(struct _m_seltra_sgroup_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s2))->__m_seltra_substrate_group ;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1572, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_sgroup_obj* bbt_3;
			(((struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj*)bbNullObjectTest((bbt_3 = ((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))))->clas)->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_3,(struct _m_seltra_substrate_obj*)bbt_s);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1573, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1577, 0};
	bbOnDebugEnterStm(&__stmt_14);
	if(bbt_y<1000){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1578, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_s2=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(_m_seltra_moxc+((_m_seltra_moyc-1)<<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1579, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_s2)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1580, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group =(struct _m_seltra_sgroup_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s2))->__m_seltra_substrate_group ;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1581, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct _m_seltra_sgroup_obj* bbt_4;
			(((struct _m_seltra_sgroup_obj*)((struct _m_seltra_sgroup_obj*)bbNullObjectTest((bbt_4 = ((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_group ))))->clas)->m_add_Tsubstrate((struct _m_seltra_sgroup_obj*)bbt_4,(struct _m_seltra_substrate_obj*)bbt_s);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1582, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_mouse_input_map(){
	BBINT bbt_mozd=0;
	BBFLOAT bbt_mozn=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_prox=0;
	struct BBDebugScope_4 __scope = {
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
			{
				BBDEBUGDECL_LOCAL,
				"b",
				":block",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"prox",
				"i",
				.var_address=&bbt_prox
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1410, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_mozd=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1410, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_mozn=.00000000f;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1411, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1412, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_prox=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1414, 0};
	bbOnDebugEnterStm(&__stmt_4);
	_m_seltra_moxc=((BBINT)((((BBFLOAT)_m_seltra_mox)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposx)));
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1415, 0};
	bbOnDebugEnterStm(&__stmt_5);
	_m_seltra_moyc=((BBINT)((((BBFLOAT)_m_seltra_moy)/_m_seltra_zoom)+((BBFLOAT)_m_seltra_camposy)));
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1417, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_mozd=(_m_seltra_moz-_m_seltra_mozo);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1418, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if((_m_seltra_mozu+((BBFLOAT)bbt_mozd))<-9.00000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1418, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1418, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_mozn=(_m_seltra_mozu+((BBFLOAT)bbt_mozd));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1420, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(_m_seltra_mozu!=bbt_mozn){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1421, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mozu=bbt_mozn;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1422, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_zoom=(30.0000000f*(1.0f+(_m_seltra_mozu/10.0f)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1423, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1424, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1425, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1426, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1427, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1430, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(_m_seltra_moxc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1430, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_moxc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1431, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(_m_seltra_moyc<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1431, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_moyc=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1433, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(brl_polledinput_MouseHit(1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1434, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(_m_seltra_smt<=33){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1436, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1437, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(!(((BBObject*)bbt_b)!= &bbNullObject)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1438, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(_m_seltra_smi==_m_seltra_sub0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1438, 0};
					bbOnDebugEnterStm(&__stmt_0);
					_m_seltra_createsingleSubstrate(_m_seltra_moxc,_m_seltra_moyc);
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1438, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return 0;
				}
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1439, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(_m_seltra_smi==_m_seltra_subd){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1439, 0};
					bbOnDebugEnterStm(&__stmt_0);
					_m_seltra_placeSubstrateGuide(_m_seltra_moxc,_m_seltra_moyc);
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1439, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return 0;
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1440, 0};
				bbOnDebugEnterStm(&__stmt_2);
				struct _m_seltra_btemplate_obj* bbt_;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_,_m_seltra_moxc,_m_seltra_moyc,0,0);
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1442, 0};
				bbOnDebugEnterStm(&__stmt_0);
				(bbt_b)->clas->m_checkchem3_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)&bbNullObject);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1448, 0};
	bbOnDebugEnterStm(&__stmt_12);
	if(brl_polledinput_MouseHit(2)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1449, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1450, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(!(((BBObject*)bbt_b)!= &bbNullObject)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1451, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_blitz_DebugStop();
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1452, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(_m_seltra_smt<=3){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1452, 0};
				bbOnDebugEnterStm(&__stmt_0);
				_m_seltra_wallblock(_m_seltra_moxc,_m_seltra_moyc,0);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1452, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return 0;
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1453, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_prox=((((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((1+_m_seltra_moxc)+(_m_seltra_moyc<<10))))!= &bbNullObject) || (((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,((-1+_m_seltra_moxc)+(_m_seltra_moyc<<10))))!= &bbNullObject));
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1454, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_prox=(((bbt_prox!=0) || (((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+((_m_seltra_moyc+1)<<10))))!= &bbNullObject)) || (((BBObject*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(+_m_seltra_moxc+((_m_seltra_moyc-1)<<10))))!= &bbNullObject));
			struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1455, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if((bbt_prox!=0) && (_m_seltra_smt<=30)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1456, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct _m_seltra_btemplate_obj* bbt_2;
				(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_2 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)])))->clas)->m_setbindingblock_ii((struct _m_seltra_btemplate_obj*)bbt_2,_m_seltra_moxc,_m_seltra_moyc);
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1458, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(_m_seltra_smt<=31){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1459, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1460, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(!(((BBObject*)bbt_b)!= &bbNullObject)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1461, 0};
						bbOnDebugEnterStm(&__stmt_0);
						struct _m_seltra_btemplate_obj* bbt_3;
						(((struct _m_seltra_btemplate_obj*)bbNullObjectTest((bbt_3 = ((struct _m_seltra_btemplate_obj**)BBARRAYDATAINDEX((_m_seltra_btarray),(_m_seltra_btarray)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)])))->clas)->m_createsingleblock_iiii((struct _m_seltra_btemplate_obj*)bbt_3,_m_seltra_moxc,_m_seltra_moyc,0,0);
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1463, 0};
						bbOnDebugEnterStm(&__stmt_0);
						(bbt_b)->clas->m_checkchem3_Tblock((struct _m_seltra_block_obj*)bbt_b,(struct _m_seltra_block_obj*)&bbNullObject);
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1466, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(_m_seltra_smi==_m_seltra_sub0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1466, 0};
					bbOnDebugEnterStm(&__stmt_0);
					_m_seltra_mergeSingleSubstrate(_m_seltra_moxc,_m_seltra_moyc,(struct brl_max2d_image_TImage_obj*)_m_seltra_smi);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1467, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(_m_seltra_smi==_m_seltra_subd){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1467, 0};
					bbOnDebugEnterStm(&__stmt_0);
					_m_seltra_placeSubstrateGuide(_m_seltra_moxc,_m_seltra_moyc);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1472, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(brl_polledinput_MouseHit(3)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1473, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_camposx=((BBINT)(((BBFLOAT)_m_seltra_moxc)-(((BBFLOAT)brl_graphics_GraphicsWidth())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1474, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_camposy=((BBINT)(((BBFLOAT)_m_seltra_moyc)-(((BBFLOAT)brl_graphics_GraphicsHeight())/(2.0f*_m_seltra_zoom))));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1475, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_redraw_map=2;
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1476, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_system_MoveMouse((brl_graphics_GraphicsWidth()/2),(brl_graphics_GraphicsHeight()/2));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_mouse_input_editbar(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"mouse_input_editbar",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1399, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1400, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(_m_seltra_mox<(_m_seltra_gw-70)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1400, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_smt=((_m_seltra_moy-10)/20);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1400, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)];
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1400, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1401, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(_m_seltra_mox<(_m_seltra_gw-45)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1401, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_smt=(30+((_m_seltra_moy-10)/20));
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1401, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)];
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1401, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return 0;
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_get_mouse_input(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"get_mouse_input",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1386, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_seltra_mozo=_m_seltra_moz;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1387, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_mox=brl_polledinput_MouseX();
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1388, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra_moy=brl_polledinput_MouseY();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1389, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_moz=brl_polledinput_MouseZ();
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1391, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1391, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mouse_input_map();
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1391, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_mouse_input_editbar();
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_get_user_input(){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_t=0;
	BBINT bbt_p=0;
	struct BBDebugScope_4 __scope = {
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
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"t",
				"i",
				.var_address=&bbt_t
			},
			{
				BBDEBUGDECL_LOCAL,
				"p",
				"i",
				.var_address=&bbt_p
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1621, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1622, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1623, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_t=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1624, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_p=0;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1626, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(!(((BBObject*)bbt_b)!= &bbNullObject) || ((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype !=0))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1627, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_p=(bbt_t-(bbt_t % 8));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1628, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1628, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),((unsigned int)(bbt_p)|1));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1629, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1629, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),((unsigned int)(bbt_p)|2));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1630, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1630, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),((unsigned int)(bbt_p)|3));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1631, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1631, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)),((unsigned int)(bbt_p)|4));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1634, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(brl_polledinput_KeyHit(32)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1635, 0};
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
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1638, 0};
		bbOnDebugEnterStm(&__stmt_1);
		(_m_seltra_thingmap)->clas->m_remove_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1639, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype !=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1639, 0};
			bbOnDebugEnterStm(&__stmt_0);
			struct _m_seltra_bgroup_obj* bbt_;
			(((struct _m_seltra_bgroup_obj*)((struct _m_seltra_bgroup_obj*)bbNullObjectTest((bbt_ = ((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_group ))))->clas)->m_remove((struct _m_seltra_bgroup_obj*)bbt_);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1640, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if((((BBObject*)bbt_b)!= &bbNullObject) && (((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ==((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,1U))[1U])){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1640, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba )->dims,((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )))[((BBUINT)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_id )]=(struct _m_seltra_block_obj*)&bbNullObject;
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1640, 0};
			bbOnDebugEnterStm(&__stmt_1);
			(_m_seltra_bmap)->clas->m_remove_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x +(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y <<10)));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1641, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((BBObject*)bbt_s)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1641, 0};
			bbOnDebugEnterStm(&__stmt_0);
			(bbt_s)->clas->m_Del((struct _m_seltra_substrate_obj*)bbt_s);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1644, 0};
	bbOnDebugEnterStm(&__stmt_6);
	brl_polledinput_FlushKeys();
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_redraw_cell(BBINT bbt_x,BBINT bbt_y){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	BBINT bbt_v=0;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* volatile bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
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
				"s",
				":substrate",
				.var_address=&bbt_s
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1279, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1280, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1281, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1283, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1285, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)bbt_b)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1285, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1285, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1286, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(!(bbt_v!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1286, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1286, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1289, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(bbt_v!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1290, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((bbt_v % 8)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1291, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=(bbt_v % 8);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1292, 0};
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1292, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_sub0;
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1293, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1293, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_sub0;
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1294, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1294, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_sub0;
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1295, 0};
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1295, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_sub0;
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1298, 0};
			bbOnDebugEnterStm(&__stmt_2);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(((BBFLOAT)(bbt_x-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(bbt_y-_m_seltra_camposy))*_m_seltra_zoom),0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1303, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1303, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_image ,(_m_seltra_zoom*((BBFLOAT)(bbt_x-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(bbt_y-_m_seltra_camposy))),0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_redraw3x3(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_x2=0;
	BBINT bbt_y2=0;
	BBINT bbt_v=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1081, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_x2=bbt_x;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1082, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_y2=bbt_y;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1083, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_v=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1084, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1085, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1087, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1088, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_y2=bbt_y;
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1089, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1090, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_redraw_cell(bbt_x2,bbt_y2);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1091, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_y2=(bbt_y2+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1093, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_x2=(bbt_x2+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_things(){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1043, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_m=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1043, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_v=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1043, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1045, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_im=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1046, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_n=((struct _m_seltra_fastintmap_obj*)bbNullObjectTest(_m_seltra_thingmap))->__m_seltra_fastintmap_le ;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1048, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1049, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_m=(_m_seltra_thingmap)->clas->m_kfetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,bbt_i);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1050, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_v=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,bbt_m);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1052, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1053, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((bbt_v % 8)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1054, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBINT bbt_=(bbt_v % 8);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1055, 0};
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1055, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrown;
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
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1056, 0};
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1056, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrows;
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
						struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1057, 0};
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1057, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arroww;
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
							struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1058, 0};
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
								struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1058, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_im=(struct brl_max2d_image_TImage_obj*)_m_seltra_arrowe;
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1060, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_max2d_SetMaskColor(255,255,230);
				struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1061, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if((bbt_v % 8)!=0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1061, 0};
					bbOnDebugEnterStm(&__stmt_0);
					brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_im,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1064, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((unsigned int)(bbt_v)&136)==136){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1065, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_max2d_SetMaskColor(0,0,0);
				struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1066, 0};
				bbOnDebugEnterStm(&__stmt_1);
				brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_subd,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
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
				struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1067, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((unsigned int)(bbt_v)&128)!=0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1068, 0};
					bbOnDebugEnterStm(&__stmt_0);
					brl_max2d_SetMaskColor(0,0,0);
					struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1069, 0};
					bbOnDebugEnterStm(&__stmt_1);
					brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_sub0,(_m_seltra_zoom*((BBFLOAT)((bbt_m % 1024)-_m_seltra_camposx))),(_m_seltra_zoom*((BBFLOAT)(((unsigned int)(bbt_m)>>10)-_m_seltra_camposy))),0);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1072, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_sarray(){
	BBINT bbt_i=0;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"draw_sarray",
		{
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1258, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1259, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1261, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1262, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_s=(struct _m_seltra_substrate_obj*)((struct _m_seltra_substrate_obj**)BBARRAYDATAINDEX((((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa ),(((struct _m_seltra_subarray_obj*)bbNullObjectTest(_m_seltra_sarray))->__m_seltra_subarray_sa )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1263, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_s)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1264, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_redraw_cell(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1265, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_image ,(((BBFLOAT)(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1266, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1267, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy ),(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1270, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_barray(){
	BBINT bbt_i=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1237, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1238, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1240, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1241, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1242, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1243, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_redraw_cell(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1244, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1245, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1246, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1249, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_walls(){
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1193, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1193, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1195, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(bbt_i<((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_le ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1196, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_b=(struct _m_seltra_block_obj*)((struct _m_seltra_block_obj**)BBARRAYDATAINDEX((((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba ),(((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1197, 0};
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
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1198, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_blank,(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]-_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1199, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_image ,(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x -_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y -_m_seltra_camposy))*_m_seltra_zoom),0);
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1200, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldx )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_x ;
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1201, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((BBINT*)BBARRAYDATAINDEX((((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy ),(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_oldy )->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_y ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1203, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_draw_editbar(){
	BBINT bbt_i=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	struct _m_seltra_block_obj* volatile bbt_b=(struct _m_seltra_block_obj*)&bbNullObject;
	struct _m_seltra_substrate_obj* volatile bbt_s=(struct _m_seltra_substrate_obj*)&bbNullObject;
	BBINT bbt_t=0;
	struct BBDebugScope_6 __scope = {
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
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":substrate",
				.var_address=&bbt_s
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1142, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1142, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_x=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1142, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_y=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1144, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1145, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_DrawRect(((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),90.0000000f,90.0000000f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1146, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_SetMaskColor(0,0,0);
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1148, 0};
	bbOnDebugEnterStm(&__stmt_6);
	brl_max2d_SetMaskColor(255,255,230);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1149, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1150, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_max2d_SetScale(1.0f,1.0f);
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1152, 0};
	bbOnDebugEnterStm(&__stmt_9);
	brl_max2d_DrawLine(((BBFLOAT)(_m_seltra_gw-100)),0.000000000f,((BBFLOAT)(_m_seltra_gw-100)),((BBFLOAT)_m_seltra_gh),1);
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1153, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1154, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-70)),100.000000f,20.0000000f);
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1155, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1156, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(_m_seltra_moxc),&_s17),bbStringFromInt(_m_seltra_moyc)),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-65)));
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1158, 0};
	bbOnDebugEnterStm(&__stmt_14);
	bbt_b=(struct _m_seltra_block_obj*)(_m_seltra_bmap)->clas->m_fetch_i((struct _m_seltra_fastblockmap_obj*)_m_seltra_bmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1159, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1160, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetColor(0,0,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1161, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-45)),100.000000f,40.0000000f);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1162, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_SetColor(222,222,222);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1163, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_btype ),&_s17),bbStringFromInt(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_ch )),&_s17),bbStringFromInt(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_mch )),&_s17),bbStringFromInt(_m_seltra_chem_dist(((struct _m_seltra_block_obj*)bbNullObjectTest(bbt_b))->__m_seltra_block_mch ))),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-50)));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1164, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,0U))[0U]),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,1U))[1U])),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,2U))[2U])),&_s17),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((_m_seltra_chem),(_m_seltra_chem)->dims,3U))[3U])),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-35)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1167, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbt_s=(struct _m_seltra_substrate_obj*)(_m_seltra_smap)->clas->m_fetch_i((struct _m_seltra_substratemap_obj*)_m_seltra_smap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1168, 0};
	bbOnDebugEnterStm(&__stmt_17);
	bbt_t=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(_m_seltra_moxc+(_m_seltra_moyc<<10)));
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1170, 0};
	bbOnDebugEnterStm(&__stmt_18);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1171, 0};
	bbOnDebugEnterStm(&__stmt_19);
	brl_max2d_DrawRect(((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-20)),100.000000f,20.0000000f);
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1172, 0};
	bbOnDebugEnterStm(&__stmt_20);
	if(((BBObject*)bbt_s)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1173, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetColor(222,222,222);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1174, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_max2d_DrawText(bbStringConcat(bbStringConcat(bbStringFromInt(((struct _m_seltra_substrate_obj*)bbNullObjectTest(bbt_s))->__m_seltra_substrate_id +1),&_s17),bbStringFromInt(bbt_t)),((BBFLOAT)(_m_seltra_gw-90)),((BBFLOAT)(_m_seltra_gh-20)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1176, 0};
	bbOnDebugEnterStm(&__stmt_21);
	brl_max2d_SetColor(222,222,222);
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1178, 0};
	bbOnDebugEnterStm(&__stmt_22);
	brl_max2d_SetScale(0.67f,0.67f);
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1179, 0};
	bbOnDebugEnterStm(&__stmt_23);
	while(((BBObject*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1180, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(30*(bbt_i/30));
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1181, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=((bbt_i*20) % 600);
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1182, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)],((BBFLOAT)((bbt_x+_m_seltra_gw)-95)),((BBFLOAT)(bbt_y+10)),0);
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1183, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_i=(bbt_i+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1185, 0};
	bbOnDebugEnterStm(&__stmt_24);
	brl_max2d_SetScale((_m_seltra_zoom/30.0f),(_m_seltra_zoom/30.0f));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_update_display(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"update_display",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1103, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_max2d_SetColor(0,0,0);
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1104, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_DrawRect(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxo),(_m_seltra_moxo)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]),((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyo),(_m_seltra_moyo)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]),50.0000000f,50.0000000f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1105, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_SetColor(255,255,255);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1107, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_SetViewport(0,0,(_m_seltra_gw-100),_m_seltra_gh);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1108, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(_m_seltra_mox<(_m_seltra_gw-100)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1108, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_redraw3x3(((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxco),(_m_seltra_moxco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)],((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyco),(_m_seltra_moyco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1109, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(_m_seltra_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1109, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_Cls();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1110, 0};
	bbOnDebugEnterStm(&__stmt_7);
	_m_seltra_draw_things();
	struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1111, 0};
	bbOnDebugEnterStm(&__stmt_8);
	_m_seltra_draw_sarray();
	struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1112, 0};
	bbOnDebugEnterStm(&__stmt_9);
	_m_seltra_draw_barray();
	struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1113, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_mousec,(((BBFLOAT)(_m_seltra_moxc-_m_seltra_camposx))*_m_seltra_zoom),(((BBFLOAT)(_m_seltra_moyc-_m_seltra_camposy))*_m_seltra_zoom),0);
	struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1114, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(_m_seltra_redraw_map>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1114, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_draw_walls();
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1114, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_redraw_map=(_m_seltra_redraw_map-1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1115, 0};
	bbOnDebugEnterStm(&__stmt_12);
	(_m_seltra_rarray)->clas->m_do_redraws((struct _m_seltra_redrawarray_obj*)_m_seltra_rarray);
	struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1117, 0};
	bbOnDebugEnterStm(&__stmt_13);
	brl_max2d_SetViewport((_m_seltra_gw-100),0,_m_seltra_gw,_m_seltra_gh);
	struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1118, 0};
	bbOnDebugEnterStm(&__stmt_14);
	_m_seltra_draw_editbar();
	struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1120, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_max2d_SetViewport(0,0,_m_seltra_gw,_m_seltra_gh);
	struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1122, 0};
	bbOnDebugEnterStm(&__stmt_16);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_smi,((BBFLOAT)(_m_seltra_mox+15)),((BBFLOAT)(_m_seltra_moy+15)),0);
	struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1123, 0};
	bbOnDebugEnterStm(&__stmt_17);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_seltra_mousep,((BBFLOAT)_m_seltra_mox),((BBFLOAT)_m_seltra_moy),0);
	struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1124, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxco),(_m_seltra_moxco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_moxc;
	struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1125, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyco),(_m_seltra_moyco)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_moyc;
	struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1126, 0};
	bbOnDebugEnterStm(&__stmt_20);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moxo),(_m_seltra_moxo)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_mox;
	struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1127, 0};
	bbOnDebugEnterStm(&__stmt_21);
	((BBINT*)BBARRAYDATAINDEX((_m_seltra_moyo),(_m_seltra_moyo)->dims,((BBUINT)_m_seltra_frame)))[((BBUINT)_m_seltra_frame)]=_m_seltra_moy;
	struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1129, 0};
	bbOnDebugEnterStm(&__stmt_22);
	brl_graphics_Flip(-1);
	struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1130, 0};
	bbOnDebugEnterStm(&__stmt_23);
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
	struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1132, 0};
	bbOnDebugEnterStm(&__stmt_24);
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
	struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1134, 0};
	bbOnDebugEnterStm(&__stmt_25);
	_m_seltra_frame=((BBBYTE)(1-((BBINT)_m_seltra_frame)));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_placeBigSubstrate(BBINT bbt_x1,BBINT bbt_y1,BBINT bbt_x2,BBINT bbt_y2){
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_t=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"placeBigSubstrate",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x1",
				"i",
				.var_address=&bbt_x1
			},
			{
				BBDEBUGDECL_LOCAL,
				"y1",
				"i",
				.var_address=&bbt_y1
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
				"t",
				"i",
				.var_address=&bbt_t
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1592, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_x=0;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1592, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_y=0;
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1592, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_t=0;
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1594, 0};
	bbOnDebugEnterStm(&__stmt_3);
	BBINT bbt_=bbt_y2;
	for(bbt_y=bbt_y1;(bbt_y<=bbt_);bbt_y=(bbt_y+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1595, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_2=bbt_x2;
		for(bbt_x=bbt_x1;(bbt_x<=bbt_2);bbt_x=(bbt_x+1)){
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
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_seltra_placegene(BBINT bbt_x,BBINT bbt_y){
	BBINT bbt_tm=0;
	struct _m_seltra_gen_obj* volatile bbt_g=(struct _m_seltra_gen_obj*)&bbNullObject;
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1606, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tm=(_m_seltra_thingmap)->clas->m_fetch_i((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)));
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1607, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1607, 0};
		bbOnDebugEnterStm(&__stmt_0);
		(_m_seltra_thingmap)->clas->m_insert_ii((struct _m_seltra_fastintmap_obj*)_m_seltra_thingmap,(bbt_x+(bbt_y<<10)),(1 || (bbt_tm!=0)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1608, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_g=(struct _m_seltra_gen_obj*)(struct _m_seltra_gen_obj*)bbObjectNew((BBClass *)&_m_seltra_gen);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1609, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_x =bbt_x;
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1610, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_y =bbt_y;
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1611, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_rate =5;
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1612, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_seltra_gen_obj*)bbNullObjectTest(bbt_g))->__m_seltra_gen_bitflags =4;
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1613, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(_m_seltra_genarray)->clas->m_add_Tgen((struct _m_seltra_generatorarray_obj*)_m_seltra_genarray,(struct _m_seltra_gen_obj*)bbt_g);
	bbOnDebugLeaveScope();
	return 0;
}
BBFLOAT _m_seltra_colfuncx(BBFLOAT bbt_x){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1842, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1843, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=(bbt_x-1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1846, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1846, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0.0f;
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1847, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1848, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1848, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (bbt_x*6.0f);
	}
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1849, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_x=(bbt_x-0.166666672f);
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1850, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1850, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1.0f;
	}
	struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1851, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=(bbt_x-0.333333343f);
	struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1852, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbOnDebugLeaveScope();
	return (1.0f-(bbt_x*6.0f));
}
BBINT _m_seltra_demo_color_spread(){
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
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1882, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_w=.00000000f;
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1883, 0};
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
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1884, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_w2=(bbt_w/255.0f);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1885, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_red=(255.0f*_m_seltra_colfunc(bbt_w2));
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1886, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_gre=(255.0f*_m_seltra_colfunc((85.0f+bbt_w)/255.0f));
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1887, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_blu=(255.0f*_m_seltra_colfunc((170.0f+bbt_w)/255.0f));
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1888, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_max2d_SetColor(((BBINT)bbt_red),((BBINT)bbt_gre),((BBINT)bbt_blu));
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1889, 0};
		bbOnDebugEnterStm(&__stmt_5);
		brl_max2d_DrawRect(bbt_w,50.0000000f,1.00000000f,150.000000f);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1890, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_w=(bbt_w+1.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1892, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_graphics_Flip(-1);
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1894, 0};
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
BBOBJECT _m_seltra_io_and_display_thread(BBOBJECT bbt_data){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"io_and_display_thread",
		{
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1934, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_seltra_create_chem_numbers();
	struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1935, 0};
	bbOnDebugEnterStm(&__stmt_1);
	_m_seltra_create_block_mix();
	struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1936, 0};
	bbOnDebugEnterStm(&__stmt_2);
	_m_seltra_remove_block_image_templates();
	struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1937, 0};
	bbOnDebugEnterStm(&__stmt_3);
	_m_seltra_gen_maze_map(1,1,40,1,40,40);
	struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1939, 0};
	bbOnDebugEnterStm(&__stmt_4);
	while(!(brl_polledinput_KeyDown(27)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1940, 0};
		bbOnDebugEnterStm(&__stmt_0);
		_m_seltra_get_mouse_input();
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1941, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_get_user_input();
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1942, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_update_display();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1945, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (BBOBJECT)&_s21;
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
		bbObjectRegisterType((BBCLASS)&_m_seltra_subarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_subgrouparray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_block);
		bbObjectRegisterType((BBCLASS)&_m_seltra_redrawarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_generatorarray);
		bbObjectRegisterType((BBCLASS)&_m_seltra_fastblockmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra_fastintmap);
		bbObjectRegisterType((BBCLASS)&_m_seltra_substratemap);
		bbObjectRegisterType((BBCLASS)&_m_seltra_sgroup);
		bbObjectRegisterType((BBCLASS)&_m_seltra_substrate);
		bbObjectRegisterType((BBCLASS)&_m_seltra_redraw);
		bbObjectRegisterType((BBCLASS)&_m_seltra_bgroup);
		bbObjectRegisterType((BBCLASS)&_m_seltra_gen);
		struct BBDebugScope_57 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"seltra",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"gw",
					"i",
					.var_address=(void*)&_m_seltra_gw
				},
				{
					BBDEBUGDECL_GLOBAL,
					"gh",
					"i",
					.var_address=(void*)&_m_seltra_gh
				},
				{
					BBDEBUGDECL_GLOBAL,
					"imagelist",
					"[]:TImage",
					.var_address=(void*)&_m_seltra_imagelist
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockart",
					"[]:TImage",
					.var_address=(void*)&_m_seltra_blockart
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockw",
					":TImage",
					.var_address=(void*)&_m_seltra_blockw
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blocko",
					":TImage",
					.var_address=(void*)&_m_seltra_blocko
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockc",
					":TImage",
					.var_address=(void*)&_m_seltra_blockc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blocks",
					":TImage",
					.var_address=(void*)&_m_seltra_blocks
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockq",
					":TImage",
					.var_address=(void*)&_m_seltra_blockq
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockx",
					":TImage",
					.var_address=(void*)&_m_seltra_blockx
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockd",
					":TImage",
					.var_address=(void*)&_m_seltra_blockd
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blockb",
					":TImage",
					.var_address=(void*)&_m_seltra_blockb
				},
				{
					BBDEBUGDECL_GLOBAL,
					"btarray",
					"[]:btemplate",
					.var_address=(void*)&_m_seltra_btarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousep",
					":TImage",
					.var_address=(void*)&_m_seltra_mousep
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mousec",
					":TImage",
					.var_address=(void*)&_m_seltra_mousec
				},
				{
					BBDEBUGDECL_GLOBAL,
					"blank",
					":TImage",
					.var_address=(void*)&_m_seltra_blank
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arroww",
					":TImage",
					.var_address=(void*)&_m_seltra_arroww
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrowe",
					":TImage",
					.var_address=(void*)&_m_seltra_arrowe
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrown",
					":TImage",
					.var_address=(void*)&_m_seltra_arrown
				},
				{
					BBDEBUGDECL_GLOBAL,
					"arrows",
					":TImage",
					.var_address=(void*)&_m_seltra_arrows
				},
				{
					BBDEBUGDECL_GLOBAL,
					"noi",
					"i",
					.var_address=(void*)&_m_seltra_noi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"frame",
					"b",
					.var_address=(void*)&_m_seltra_frame
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mox",
					"i",
					.var_address=(void*)&_m_seltra_mox
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moy",
					"i",
					.var_address=(void*)&_m_seltra_moy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moz",
					"i",
					.var_address=(void*)&_m_seltra_moz
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxo",
					"[]i",
					.var_address=(void*)&_m_seltra_moxo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyo",
					"[]i",
					.var_address=(void*)&_m_seltra_moyo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smi",
					":TImage",
					.var_address=(void*)&_m_seltra_smi
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smt",
					"i",
					.var_address=(void*)&_m_seltra_smt
				},
				{
					BBDEBUGDECL_GLOBAL,
					"zoom",
					"f",
					.var_address=(void*)&_m_seltra_zoom
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozo",
					"i",
					.var_address=(void*)&_m_seltra_mozo
				},
				{
					BBDEBUGDECL_GLOBAL,
					"mozu",
					"f",
					.var_address=(void*)&_m_seltra_mozu
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxc",
					"i",
					.var_address=(void*)&_m_seltra_moxc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyc",
					"i",
					.var_address=(void*)&_m_seltra_moyc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moxco",
					"[]i",
					.var_address=(void*)&_m_seltra_moxco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"moyco",
					"[]i",
					.var_address=(void*)&_m_seltra_moyco
				},
				{
					BBDEBUGDECL_GLOBAL,
					"redraw_map",
					"i",
					.var_address=(void*)&_m_seltra_redraw_map
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bgc",
					"i",
					.var_address=(void*)&_m_seltra_bgc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bc",
					"i",
					.var_address=(void*)&_m_seltra_bc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"sgc",
					"i",
					.var_address=(void*)&_m_seltra_sgc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"sc",
					"i",
					.var_address=(void*)&_m_seltra_sc
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposx",
					"i",
					.var_address=(void*)&_m_seltra_camposx
				},
				{
					BBDEBUGDECL_GLOBAL,
					"camposy",
					"i",
					.var_address=(void*)&_m_seltra_camposy
				},
				{
					BBDEBUGDECL_GLOBAL,
					"time",
					"i",
					.var_address=(void*)&_m_seltra_time
				},
				{
					BBDEBUGDECL_GLOBAL,
					"garray",
					":grouparray",
					.var_address=(void*)&_m_seltra_garray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"barray",
					":blockarray",
					.var_address=(void*)&_m_seltra_barray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"sarray",
					":subarray",
					.var_address=(void*)&_m_seltra_sarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"sgarray",
					":subgrouparray",
					.var_address=(void*)&_m_seltra_sgarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"wallgroup",
					":blockarray",
					.var_address=(void*)&_m_seltra_wallgroup
				},
				{
					BBDEBUGDECL_GLOBAL,
					"rarray",
					":redrawarray",
					.var_address=(void*)&_m_seltra_rarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"genarray",
					":generatorarray",
					.var_address=(void*)&_m_seltra_genarray
				},
				{
					BBDEBUGDECL_GLOBAL,
					"bmap",
					":fastblockmap",
					.var_address=(void*)&_m_seltra_bmap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"thingmap",
					":fastintmap",
					.var_address=(void*)&_m_seltra_thingmap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"smap",
					":substratemap",
					.var_address=(void*)&_m_seltra_smap
				},
				{
					BBDEBUGDECL_GLOBAL,
					"chem",
					"[]i",
					.var_address=(void*)&_m_seltra_chem
				},
				{
					BBDEBUGDECL_GLOBAL,
					"sub0",
					":TImage",
					.var_address=(void*)&_m_seltra_sub0
				},
				{
					BBDEBUGDECL_GLOBAL,
					"subd",
					":TImage",
					.var_address=(void*)&_m_seltra_subd
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 11, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(1024,768,0,60,0);
		struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 12, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_seltra_gw=brl_graphics_GraphicsWidth();
		struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 13, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_seltra_gh=brl_graphics_GraphicsHeight();
		struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 15, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_seltra_imagelist=bbArrayNew1D(":TImage", 200);
		struct BBDebugStm __stmt_4 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 18, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_max2d_SetMaskColor(0,0,0);
		struct BBDebugStm __stmt_5 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 20, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_seltra_blockart=bbArrayNew1D(":TImage", 10);
		struct BBDebugStm __stmt_6 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 22, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_max2d_SetMaskColor(255,255,255);
		struct BBDebugStm __stmt_7 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 23, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_seltra_blockw=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s1);
		struct BBDebugStm __stmt_8 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 24, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_seltra_blocko=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s2);
		struct BBDebugStm __stmt_9 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 25, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_seltra_blockc=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s3);
		struct BBDebugStm __stmt_10 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 26, 0};
		bbOnDebugEnterStm(&__stmt_10);
		_m_seltra_blocks=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s4);
		struct BBDebugStm __stmt_11 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 27, 0};
		bbOnDebugEnterStm(&__stmt_11);
		_m_seltra_blockq=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s5);
		struct BBDebugStm __stmt_12 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 28, 0};
		bbOnDebugEnterStm(&__stmt_12);
		_m_seltra_blockx=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s6);
		struct BBDebugStm __stmt_13 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 29, 0};
		bbOnDebugEnterStm(&__stmt_13);
		_m_seltra_blockd=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s7);
		struct BBDebugStm __stmt_14 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 30, 0};
		bbOnDebugEnterStm(&__stmt_14);
		_m_seltra_blockb=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage3(&_s8);
		struct BBDebugStm __stmt_15 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 32, 0};
		bbOnDebugEnterStm(&__stmt_15);
		_m_seltra_btarray=bbArrayNew1D(":btemplate", 100);
		struct BBDebugStm __stmt_16 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 36, 0};
		bbOnDebugEnterStm(&__stmt_16);
		brl_max2d_SetMaskColor(0,0,0);
		struct BBDebugStm __stmt_17 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_17);
		_m_seltra_mousep=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s9),0,0,0),-1);
		struct BBDebugStm __stmt_18 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 38, 0};
		bbOnDebugEnterStm(&__stmt_18);
		_m_seltra_mousec=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)brl_pixmap_MaskPixmap((struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s10),0,0,0),-1);
		struct BBDebugStm __stmt_19 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_19);
		brl_max2d_SetMaskColor(150,150,46);
		struct BBDebugStm __stmt_20 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_20);
		_m_seltra_blank=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		struct BBDebugStm __stmt_21 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_21);
		_m_seltra_arroww=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		struct BBDebugStm __stmt_22 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_22);
		_m_seltra_arrowe=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s13,-1);
		struct BBDebugStm __stmt_23 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_23);
		_m_seltra_arrown=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s14,-1);
		struct BBDebugStm __stmt_24 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_24);
		_m_seltra_arrows=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s15,-1);
		struct BBDebugStm __stmt_25 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_25);
		struct BBDebugStm __stmt_26 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_26);
		struct BBDebugStm __stmt_27 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_27);
		brl_random_SeedRnd(bbMilliSecs());
		struct BBDebugStm __stmt_28 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_28);
		struct BBDebugStm __stmt_29 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_29);
		struct BBDebugStm __stmt_30 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_30);
		struct BBDebugStm __stmt_31 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_31);
		_m_seltra_moxo=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_32 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_32);
		_m_seltra_moyo=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_33 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 54, 0};
		bbOnDebugEnterStm(&__stmt_33);
		_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,0U))[0U];
		struct BBDebugStm __stmt_34 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 55, 0};
		bbOnDebugEnterStm(&__stmt_34);
		struct BBDebugStm __stmt_35 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 56, 0};
		bbOnDebugEnterStm(&__stmt_35);
		struct BBDebugStm __stmt_36 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 57, 0};
		bbOnDebugEnterStm(&__stmt_36);
		struct BBDebugStm __stmt_37 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 57, 0};
		bbOnDebugEnterStm(&__stmt_37);
		struct BBDebugStm __stmt_38 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 58, 0};
		bbOnDebugEnterStm(&__stmt_38);
		struct BBDebugStm __stmt_39 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 58, 0};
		bbOnDebugEnterStm(&__stmt_39);
		struct BBDebugStm __stmt_40 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 59, 0};
		bbOnDebugEnterStm(&__stmt_40);
		_m_seltra_moxco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_41 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 60, 0};
		bbOnDebugEnterStm(&__stmt_41);
		_m_seltra_moyco=bbArrayNew1D("i", 2);
		struct BBDebugStm __stmt_42 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_42);
		struct BBDebugStm __stmt_43 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_43);
		struct BBDebugStm __stmt_44 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_44);
		struct BBDebugStm __stmt_45 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_45);
		struct BBDebugStm __stmt_46 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_46);
		struct BBDebugStm __stmt_47 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_47);
		struct BBDebugStm __stmt_48 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_48);
		struct BBDebugStm __stmt_49 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 65, 0};
		bbOnDebugEnterStm(&__stmt_49);
		struct BBDebugStm __stmt_50 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_50);
		_m_seltra_garray=(struct _m_seltra_grouparray_obj*)(struct _m_seltra_grouparray_obj*)bbObjectNew((BBClass *)&_m_seltra_grouparray);
		struct BBDebugStm __stmt_51 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_51);
		_m_seltra_barray=(struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
		struct BBDebugStm __stmt_52 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 76, 0};
		bbOnDebugEnterStm(&__stmt_52);
		_m_seltra_sarray=(struct _m_seltra_subarray_obj*)(struct _m_seltra_subarray_obj*)bbObjectNew((BBClass *)&_m_seltra_subarray);
		struct BBDebugStm __stmt_53 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 77, 0};
		bbOnDebugEnterStm(&__stmt_53);
		_m_seltra_sgarray=(struct _m_seltra_subgrouparray_obj*)(struct _m_seltra_subgrouparray_obj*)bbObjectNew((BBClass *)&_m_seltra_subgrouparray);
		struct BBDebugStm __stmt_54 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 79, 0};
		bbOnDebugEnterStm(&__stmt_54);
		((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba =bbArraySlice(":block",((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_barray))->__m_seltra_blockarray_ba ,0,999999);
		struct BBDebugStm __stmt_55 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 80, 0};
		bbOnDebugEnterStm(&__stmt_55);
		_m_seltra_wallgroup=(struct _m_seltra_blockarray_obj*)(struct _m_seltra_blockarray_obj*)bbObjectNew((BBClass *)&_m_seltra_blockarray);
		struct BBDebugStm __stmt_56 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 81, 0};
		bbOnDebugEnterStm(&__stmt_56);
		((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba =bbArraySlice(":block",((struct _m_seltra_blockarray_obj*)bbNullObjectTest(_m_seltra_wallgroup))->__m_seltra_blockarray_ba ,0,999999);
		struct BBDebugStm __stmt_57 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 82, 0};
		bbOnDebugEnterStm(&__stmt_57);
		_m_seltra_rarray=(struct _m_seltra_redrawarray_obj*)(struct _m_seltra_redrawarray_obj*)bbObjectNew((BBClass *)&_m_seltra_redrawarray);
		struct BBDebugStm __stmt_58 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 83, 0};
		bbOnDebugEnterStm(&__stmt_58);
		_m_seltra_genarray=(struct _m_seltra_generatorarray_obj*)(struct _m_seltra_generatorarray_obj*)bbObjectNew((BBClass *)&_m_seltra_generatorarray);
		struct BBDebugStm __stmt_59 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_59);
		_m_seltra_bmap=(struct _m_seltra_fastblockmap_obj*)(struct _m_seltra_fastblockmap_obj*)bbObjectNew((BBClass *)&_m_seltra_fastblockmap);
		struct BBDebugStm __stmt_60 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 86, 0};
		bbOnDebugEnterStm(&__stmt_60);
		_m_seltra_thingmap=(struct _m_seltra_fastintmap_obj*)(struct _m_seltra_fastintmap_obj*)bbObjectNew((BBClass *)&_m_seltra_fastintmap);
		struct BBDebugStm __stmt_61 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 87, 0};
		bbOnDebugEnterStm(&__stmt_61);
		_m_seltra_smap=(struct _m_seltra_substratemap_obj*)(struct _m_seltra_substratemap_obj*)bbObjectNew((BBClass *)&_m_seltra_substratemap);
		struct BBDebugStm __stmt_62 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1663, 0};
		bbOnDebugEnterStm(&__stmt_62);
		_m_seltra_chem=bbArrayNew1D("i", 4);
		struct BBDebugStm __stmt_63 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1953, 0};
		bbOnDebugEnterStm(&__stmt_63);
		_m_seltra_create_chem_numbers();
		struct BBDebugStm __stmt_64 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1954, 0};
		bbOnDebugEnterStm(&__stmt_64);
		_m_seltra_create_block_mix();
		struct BBDebugStm __stmt_65 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1955, 0};
		bbOnDebugEnterStm(&__stmt_65);
		_m_seltra_remove_block_image_templates();
		struct BBDebugStm __stmt_66 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1956, 0};
		bbOnDebugEnterStm(&__stmt_66);
		_m_seltra_sub0=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage2(&_s22);
		struct BBDebugStm __stmt_67 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1957, 0};
		bbOnDebugEnterStm(&__stmt_67);
		_m_seltra_subd=(struct brl_max2d_image_TImage_obj*)_m_seltra_loadimage2(&_s23);
		struct BBDebugStm __stmt_68 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1958, 0};
		bbOnDebugEnterStm(&__stmt_68);
		_m_seltra_gen_maze_map(1,1,40,1,40,40);
		struct BBDebugStm __stmt_69 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1959, 0};
		bbOnDebugEnterStm(&__stmt_69);
		_m_seltra_smi=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj**)BBARRAYDATAINDEX((_m_seltra_imagelist),(_m_seltra_imagelist)->dims,((BBUINT)_m_seltra_smt)))[((BBUINT)_m_seltra_smt)];
		struct BBDebugStm __stmt_70 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1961, 0};
		bbOnDebugEnterStm(&__stmt_70);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1962, 0};
			bbOnDebugEnterStm(&__stmt_0);
			_m_seltra_core_engine_thread((BBOBJECT)&bbEmptyString);
			struct BBDebugStm __stmt_1 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1963, 0};
			bbOnDebugEnterStm(&__stmt_1);
			_m_seltra_get_mouse_input();
			struct BBDebugStm __stmt_2 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1964, 0};
			bbOnDebugEnterStm(&__stmt_2);
			_m_seltra_get_user_input();
			struct BBDebugStm __stmt_3 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1965, 0};
			bbOnDebugEnterStm(&__stmt_3);
			_m_seltra_update_display();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_71 = {"H:/myotherdoc/jamesblitzmax/seltra/seltra.bmx", 1967, 0};
		bbOnDebugEnterStm(&__stmt_71);
		bbEnd();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}