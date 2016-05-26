/*
 * Class GAME_WINDOW_GL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_980 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_980 [] = {0xFF01,237,979,0xFFFF};
static const EIF_TYPE_INDEX egt_2_980 [] = {0xFF01,979,0xFFFF};
static const EIF_TYPE_INDEX egt_3_980 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_980 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_980 [] = {0xFF01,979,0xFFFF};
static const EIF_TYPE_INDEX egt_6_980 [] = {0xFF01,979,0xFFFF};
static const EIF_TYPE_INDEX egt_7_980 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_980 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_980 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_980 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_980 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_980 [] = {0xFF01,979,0xFFFF};
static const EIF_TYPE_INDEX egt_13_980 [] = {0xFF01,918,0xFFFF};
static const EIF_TYPE_INDEX egt_14_980 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_15_980 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_16_980 [] = {0xFF01,971,0xFFFF};
static const EIF_TYPE_INDEX egt_17_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_18_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_19_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_20_980 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_21_980 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_22_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_23_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_24_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_25_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_26_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_27_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_28_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_29_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_30_980 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_31_980 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
static const EIF_TYPE_INDEX egt_32_980 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
static const EIF_TYPE_INDEX egt_33_980 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_34_980 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_35_980 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,876,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_36_980 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,0xFF01,877,197,0xFFFF};
static const EIF_TYPE_INDEX egt_37_980 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,0xFF01,878,197,0xFFFF};
static const EIF_TYPE_INDEX egt_38_980 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,875,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_39_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_40_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_41_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_42_980 [] = {422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_43_980 [] = {422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_44_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_45_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_46_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_47_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_48_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_49_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_50_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_51_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_52_980 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_53_980 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_54_980 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
static const EIF_TYPE_INDEX egt_55_980 [] = {0xFF01,250,0xFF01,0xFFF9,6,174,200,200,197,206,206,203,0xFFFF};
static const EIF_TYPE_INDEX egt_56_980 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
static const EIF_TYPE_INDEX egt_57_980 [] = {0xFF01,250,0xFF01,0xFFF9,6,174,200,200,197,206,206,203,0xFFFF};
static const EIF_TYPE_INDEX egt_58_980 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_59_980 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_60_980 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_61_980 [] = {0xFF01,250,0xFF01,0xFFF9,3,174,200,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_62_980 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,876,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_63_980 [] = {0xFF01,250,0xFF01,0xFFF9,8,174,200,200,200,200,206,206,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_64_980 [] = {422,0xFF01,0xFFF9,3,174,200,0xFF01,877,197,0xFFFF};
static const EIF_TYPE_INDEX egt_65_980 [] = {0xFF01,250,0xFF01,0xFFF9,7,174,200,200,200,197,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_66_980 [] = {422,0xFF01,0xFFF9,3,174,200,0xFF01,878,197,0xFFFF};
static const EIF_TYPE_INDEX egt_67_980 [] = {0xFF01,250,0xFF01,0xFFF9,7,174,200,200,200,197,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_68_980 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,875,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_69_980 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_70_980 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_71_980 [] = {0xFF01,934,0xFFFF};
static const EIF_TYPE_INDEX egt_72_980 [] = {0xFF01,967,0xFFFF};
static const EIF_TYPE_INDEX egt_73_980 [] = {0xFF01,956,0xFFFF};
static const EIF_TYPE_INDEX egt_74_980 [] = {0xFF01,952,0xFFFF};
static const EIF_TYPE_INDEX egt_75_980 [] = {0xFF01,0xFFF9,3,174,0xFF01,632,203,0xFF01,632,203,0xFF01,632,203,0xFFFF};
static const EIF_TYPE_INDEX egt_76_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_77_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_78_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_79_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_80_980 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_81_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_82_980 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};


static const struct desc_info desc_980[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_980), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_980), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_980), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_980), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_980), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_980), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_980), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_980), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_980), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_980), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_980), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_980), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07A7 /*979*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_980), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_980), 15546, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x072D /*918*/), 15547, 128},
	{EIF_GENERIC(NULL), 16661, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5934, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14546, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14550, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14482, 0},
	{EIF_GENERIC(egt_14_980), 14483, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14484, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14485, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14486, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14487, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14488, 132},
	{EIF_GENERIC(egt_15_980), 14552, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14547, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14548, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14549, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14551, 133},
	{EIF_GENERIC(NULL), 15186, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15187, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15188, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15105, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15189, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15106, 134},
	{EIF_GENERIC(egt_16_980), 16532, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_980), 15190, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_980), 15191, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_980), 15192, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_980), 15193, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_980), 15194, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_980), 15195, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_980), 15196, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_980), 15197, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_980), 15198, 0xFFFFFFFF},
	{EIF_GENERIC(egt_26_980), 15199, 0xFFFFFFFF},
	{EIF_GENERIC(egt_27_980), 15200, 0xFFFFFFFF},
	{EIF_GENERIC(egt_28_980), 15201, 0xFFFFFFFF},
	{EIF_GENERIC(egt_29_980), 15202, 0xFFFFFFFF},
	{EIF_GENERIC(egt_30_980), 15203, 0xFFFFFFFF},
	{EIF_GENERIC(egt_31_980), 15204, 0xFFFFFFFF},
	{EIF_GENERIC(egt_32_980), 15205, 0xFFFFFFFF},
	{EIF_GENERIC(egt_33_980), 15206, 0xFFFFFFFF},
	{EIF_GENERIC(egt_34_980), 15207, 0xFFFFFFFF},
	{EIF_GENERIC(egt_35_980), 15208, 0xFFFFFFFF},
	{EIF_GENERIC(egt_36_980), 15209, 0xFFFFFFFF},
	{EIF_GENERIC(egt_37_980), 15210, 0xFFFFFFFF},
	{EIF_GENERIC(egt_38_980), 15211, 0xFFFFFFFF},
	{EIF_GENERIC(egt_39_980), 15212, 4},
	{EIF_GENERIC(egt_40_980), 15213, 8},
	{EIF_GENERIC(egt_41_980), 15214, 12},
	{EIF_GENERIC(egt_42_980), 15215, 16},
	{EIF_GENERIC(egt_43_980), 15216, 20},
	{EIF_GENERIC(egt_44_980), 15217, 24},
	{EIF_GENERIC(egt_45_980), 15218, 28},
	{EIF_GENERIC(egt_46_980), 15219, 32},
	{EIF_GENERIC(egt_47_980), 15220, 36},
	{EIF_GENERIC(egt_48_980), 15221, 40},
	{EIF_GENERIC(egt_49_980), 15222, 44},
	{EIF_GENERIC(egt_50_980), 15223, 48},
	{EIF_GENERIC(egt_51_980), 15224, 52},
	{EIF_GENERIC(egt_52_980), 15225, 56},
	{EIF_GENERIC(egt_53_980), 15226, 60},
	{EIF_GENERIC(NULL), 15227, 0xFFFFFFFF},
	{EIF_GENERIC(egt_54_980), 15228, 64},
	{EIF_GENERIC(egt_55_980), 15229, 68},
	{EIF_GENERIC(NULL), 15230, 0xFFFFFFFF},
	{EIF_GENERIC(egt_56_980), 15231, 72},
	{EIF_GENERIC(egt_57_980), 15232, 76},
	{EIF_GENERIC(NULL), 15233, 0xFFFFFFFF},
	{EIF_GENERIC(egt_58_980), 15234, 80},
	{EIF_GENERIC(egt_59_980), 15235, 84},
	{EIF_GENERIC(NULL), 15236, 0xFFFFFFFF},
	{EIF_GENERIC(egt_60_980), 15237, 88},
	{EIF_GENERIC(egt_61_980), 15238, 92},
	{EIF_GENERIC(NULL), 15239, 0xFFFFFFFF},
	{EIF_GENERIC(egt_62_980), 15240, 96},
	{EIF_GENERIC(egt_63_980), 15241, 100},
	{EIF_GENERIC(NULL), 15242, 0xFFFFFFFF},
	{EIF_GENERIC(egt_64_980), 15243, 104},
	{EIF_GENERIC(egt_65_980), 15244, 108},
	{EIF_GENERIC(NULL), 15245, 0xFFFFFFFF},
	{EIF_GENERIC(egt_66_980), 15246, 112},
	{EIF_GENERIC(egt_67_980), 15247, 116},
	{EIF_GENERIC(NULL), 15248, 0xFFFFFFFF},
	{EIF_GENERIC(egt_68_980), 15249, 120},
	{EIF_GENERIC(egt_69_980), 15250, 124},
	{EIF_GENERIC(NULL), 15251, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 16548, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16629, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16536, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16659, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16537, 0xFFFFFFFF},
	{EIF_GENERIC(egt_70_980), 16538, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16539, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0167 /*179*/), 16540, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16541, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16542, 0xFFFFFFFF},
	{EIF_GENERIC(egt_71_980), 16543, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16544, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16545, 0xFFFFFFFF},
	{EIF_GENERIC(egt_72_980), 16546, 0xFFFFFFFF},
	{EIF_GENERIC(egt_73_980), 16547, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16549, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16550, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16551, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16552, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16553, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16554, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16555, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16556, 0xFFFFFFFF},
	{EIF_GENERIC(egt_74_980), 16557, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16558, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16559, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16560, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16561, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16562, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16563, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16564, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16566, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16567, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16568, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16569, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16570, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16571, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16572, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16573, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16574, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16575, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16576, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16577, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16578, 0xFFFFFFFF},
	{EIF_GENERIC(egt_75_980), 16579, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16580, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16581, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16582, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16583, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16584, 0xFFFFFFFF},
	{EIF_GENERIC(egt_76_980), 16585, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16586, 0xFFFFFFFF},
	{EIF_GENERIC(egt_77_980), 16587, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16588, 0xFFFFFFFF},
	{EIF_GENERIC(egt_78_980), 16589, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16590, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16591, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16592, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16593, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16594, 0xFFFFFFFF},
	{EIF_GENERIC(egt_79_980), 16595, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16596, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16597, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16598, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16599, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16600, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16601, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16602, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16603, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16604, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16605, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16606, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16607, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16608, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16609, 0xFFFFFFFF},
	{EIF_GENERIC(egt_80_980), 16610, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16611, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16612, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16613, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16614, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16615, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16616, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16617, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 16533, 136},
	{EIF_NON_GENERIC(0x017F /*191*/), 16630, 0xFFFFFFFF},
	{EIF_GENERIC(egt_81_980), 16631, 0xFFFFFFFF},
	{EIF_GENERIC(egt_82_980), 16632, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16633, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16634, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16635, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16636, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16637, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16638, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16639, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16640, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16641, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16642, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16643, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16644, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16645, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16646, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16647, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16648, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16649, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16650, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16651, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16652, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16653, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16654, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16655, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16656, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16657, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 16658, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 16660, 140},
	{EIF_NON_GENERIC(0x019D /*206*/), 16662, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16663, 0xFFFFFFFF},
};
void Init980(void)
{
	IDSC(desc_980, 0, 979);
	IDSC(desc_980 + 1, 1, 979);
	IDSC(desc_980 + 32, 344, 979);
	IDSC(desc_980 + 34, 206, 979);
	IDSC(desc_980 + 36, 420, 979);
	IDSC(desc_980 + 46, 377, 979);
	IDSC(desc_980 + 50, 437, 979);
	IDSC(desc_980 + 57, 428, 979);
	IDSC(desc_980 + 129, 384, 979);
	IDSC(desc_980 + 213, 396, 979);
}


#ifdef __cplusplus
}
#endif
