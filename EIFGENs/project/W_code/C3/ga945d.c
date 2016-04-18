/*
 * Class GAME_HAPTIC
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_945 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_945 [] = {0xFF01,237,944,0xFFFF};
static const EIF_TYPE_INDEX egt_2_945 [] = {0xFF01,944,0xFFFF};
static const EIF_TYPE_INDEX egt_3_945 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_945 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_945 [] = {0xFF01,944,0xFFFF};
static const EIF_TYPE_INDEX egt_6_945 [] = {0xFF01,944,0xFFFF};
static const EIF_TYPE_INDEX egt_7_945 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_945 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_945 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_945 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_945 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_945 [] = {0xFF01,944,0xFFFF};
static const EIF_TYPE_INDEX egt_13_945 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_14_945 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_15_945 [] = {0xFF01,904,0xFFFF};
static const EIF_TYPE_INDEX egt_16_945 [] = {0xFF01,954,0xFF01,890,0xFFFF};
static const EIF_TYPE_INDEX egt_17_945 [] = {0xFF01,890,0xFFFF};
static const EIF_TYPE_INDEX egt_18_945 [] = {0xFF01,311,0xFF01,890,0xFFFF};


static const struct desc_info desc_945[] = {
	{EIF_GENERIC(NULL), 16063, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_945), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_945), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_945), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_945), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_945), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_945), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_945), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_945), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_945), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_945), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_945), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_945), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16020, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0761 /*944*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_945), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14393, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14397, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14327, 0},
	{EIF_GENERIC(egt_13_945), 14328, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14329, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14330, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14331, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14332, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14333, 12},
	{EIF_GENERIC(egt_14_945), 14399, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14394, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14395, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14396, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14398, 13},
	{EIF_GENERIC(egt_15_945), 15253, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0711 /*904*/), 15254, 4},
	{EIF_GENERIC(NULL), 16065, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5934, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16021, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16022, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16023, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16024, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16025, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16026, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16027, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16028, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16029, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16030, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16031, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16032, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16033, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16034, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16035, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16036, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16037, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16038, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16039, 14},
	{EIF_NON_GENERIC(0x017F /*191*/), 16040, 15},
	{EIF_NON_GENERIC(0x019D /*206*/), 16041, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16042, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16043, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16044, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16045, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16046, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16047, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16048, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16049, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16050, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16051, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16052, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16053, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16054, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16055, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16056, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_945), 16057, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16058, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_945), 16059, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16060, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 16061, 20},
	{EIF_GENERIC(egt_18_945), 16062, 8},
	{EIF_NON_GENERIC(0x01AF /*215*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16064, 16},
};
void Init945(void)
{
	IDSC(desc_945, 0, 944);
	IDSC(desc_945 + 1, 1, 944);
	IDSC(desc_945 + 32, 398, 944);
	IDSC(desc_945 + 42, 370, 944);
	IDSC(desc_945 + 46, 351, 944);
	IDSC(desc_945 + 48, 206, 944);
	IDSC(desc_945 + 50, 413, 944);
}


#ifdef __cplusplus
}
#endif
