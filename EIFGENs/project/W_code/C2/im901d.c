/*
 * Class IMG_CONTROLLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_901 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_901 [] = {0xFF01,237,900,0xFFFF};
static const EIF_TYPE_INDEX egt_2_901 [] = {0xFF01,900,0xFFFF};
static const EIF_TYPE_INDEX egt_3_901 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_901 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_901 [] = {0xFF01,900,0xFFFF};
static const EIF_TYPE_INDEX egt_6_901 [] = {0xFF01,900,0xFFFF};
static const EIF_TYPE_INDEX egt_7_901 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_901 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_901 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_901 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_901 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_901 [] = {0xFF01,900,0xFFFF};
static const EIF_TYPE_INDEX egt_13_901 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_14_901 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_15_901 [] = {0xFF01,806,206,0xFFFF};


static const struct desc_info desc_901[] = {
	{EIF_GENERIC(NULL), 14944, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_901), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_901), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_901), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_901), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_901), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_901), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_901), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_901), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_901), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_901), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_901), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_901), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14945, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0709 /*900*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_901), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14933, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14401, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14331, 0},
	{EIF_GENERIC(egt_13_901), 14332, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14333, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14334, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14335, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14336, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14337, 4},
	{EIF_GENERIC(egt_14_901), 14934, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14398, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14399, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14400, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14402, 5},
	{EIF_GENERIC(NULL), 14935, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14936, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14937, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14938, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14939, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14940, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14941, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14942, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_901), 14943, 0xFFFFFFFF},
};
void Init901(void)
{
	IDSC(desc_901, 0, 900);
	IDSC(desc_901 + 1, 1, 900);
	IDSC(desc_901 + 32, 403, 900);
	IDSC(desc_901 + 42, 376, 900);
	IDSC(desc_901 + 46, 368, 900);
}


#ifdef __cplusplus
}
#endif
