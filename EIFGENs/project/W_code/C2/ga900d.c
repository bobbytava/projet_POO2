/*
 * Class GAME_EVENTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_900 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_900 [] = {0xFF01,237,899,0xFFFF};
static const EIF_TYPE_INDEX egt_2_900 [] = {0xFF01,899,0xFFFF};
static const EIF_TYPE_INDEX egt_3_900 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_900 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_900 [] = {0xFF01,899,0xFFFF};
static const EIF_TYPE_INDEX egt_6_900 [] = {0xFF01,899,0xFFFF};
static const EIF_TYPE_INDEX egt_7_900 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_900 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_900 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_900 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_900 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_900 [] = {0xFF01,899,0xFFFF};
static const EIF_TYPE_INDEX egt_13_900 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_14_900 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_15_900 [] = {0xFF01,943,0xFFFF};


static const struct desc_info desc_900[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_900), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_900), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_900), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_900), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_900), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_900), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_900), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_900), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_900), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_900), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_900), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_900), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0707 /*899*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_900), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14393, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14397, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14327, 0},
	{EIF_GENERIC(egt_13_900), 14328, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14329, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14330, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14331, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14332, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14333, 4},
	{EIF_GENERIC(egt_14_900), 14399, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14394, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14395, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14396, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14398, 5},
	{EIF_GENERIC(NULL), 14952, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14953, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14954, 6},
	{EIF_GENERIC(egt_15_900), 0x00, 0xFFFFFFFF},
};
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 1, 899);
	IDSC(desc_900 + 32, 398, 899);
	IDSC(desc_900 + 42, 370, 899);
	IDSC(desc_900 + 46, 407, 899);
}


#ifdef __cplusplus
}
#endif
