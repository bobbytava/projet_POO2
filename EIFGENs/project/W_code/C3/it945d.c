/*
 * Class ITP_STORE
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
static const EIF_TYPE_INDEX egt_13_945 [] = {357,0,0xFFFF};
static const EIF_TYPE_INDEX egt_14_945 [] = {0xFF01,357,0,0xFFFF};
static const EIF_TYPE_INDEX egt_15_945 [] = {0xFF01,595,191,0xFFFF};


static const struct desc_info desc_945[] = {
	{EIF_GENERIC(NULL), 15110, 0xFFFFFFFF},
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
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0761 /*944*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_945), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1030, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1031, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 1032, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15111, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15112, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15101, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01 /*0*/), 15102, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01 /*0*/), 15103, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15104, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15105, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_945), 15106, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_945), 15107, 0},
	{EIF_GENERIC(egt_15_945), 15108, 4},
	{EIF_NON_GENERIC(0x019D /*206*/), 15109, 0xFFFFFFFF},
};
void Init945(void)
{
	IDSC(desc_945, 0, 944);
	IDSC(desc_945 + 1, 1, 944);
	IDSC(desc_945 + 32, 39, 944);
	IDSC(desc_945 + 35, 359, 944);
}


#ifdef __cplusplus
}
#endif
