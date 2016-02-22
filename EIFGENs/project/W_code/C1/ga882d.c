/*
 * Class GAME_DOLLAR_GESTURE_MANAGER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_882 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_882 [] = {0xFF01,237,881,0xFFFF};
static const EIF_TYPE_INDEX egt_2_882 [] = {0xFF01,881,0xFFFF};
static const EIF_TYPE_INDEX egt_3_882 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_882 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_882 [] = {0xFF01,881,0xFFFF};
static const EIF_TYPE_INDEX egt_6_882 [] = {0xFF01,881,0xFFFF};
static const EIF_TYPE_INDEX egt_7_882 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_882 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_882 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_882 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_882 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_882 [] = {0xFF01,881,0xFFFF};
static const EIF_TYPE_INDEX egt_13_882 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_14_882 [] = {0xFF01,217,0xFFFF};


static const struct desc_info desc_882[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_882), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_882), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_882), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_882), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_882), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_882), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_882), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_882), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_882), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_882), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_882), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_882), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06E3 /*881*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_882), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14213, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14217, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14204, 0},
	{EIF_GENERIC(egt_13_882), 14205, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14206, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14207, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14208, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14209, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14210, 4},
	{EIF_GENERIC(egt_14_882), 14219, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14214, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14215, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14216, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14218, 5},
	{EIF_NON_GENERIC(0x0179 /*188*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14755, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14756, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14757, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14758, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14759, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 14760, 8},
	{EIF_NON_GENERIC(0x019D /*206*/), 14761, 12},
};
void Init882(void)
{
	IDSC(desc_882, 0, 881);
	IDSC(desc_882 + 1, 1, 881);
	IDSC(desc_882 + 32, 378, 881);
	IDSC(desc_882 + 42, 360, 881);
	IDSC(desc_882 + 46, 362, 881);
}


#ifdef __cplusplus
}
#endif
