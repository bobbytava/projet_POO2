/*
 * Code for class ENGINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F940_11350(EIF_REFERENCE);
extern void F940_11351(EIF_REFERENCE);
extern void F940_11352(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_11353(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_11354(EIF_REFERENCE);
extern void F940_11355(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_11356(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_11357(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F940_11358(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_11359(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11363(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11364(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F940_11368(EIF_REFERENCE);
extern void EIF_Minit940(void);
extern EIF_REFERENCE _A940_40_2();
extern EIF_REFERENCE _A940_45_2_3();
extern EIF_REFERENCE _A940_46_2();
extern EIF_REFERENCE _A940_44_2_3();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENGINE}.make */
void F940_11350 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 15647);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 15647);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(8884, Dtype(Current)))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ENGINE}.run_game */
void F940_11351 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "run_game";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	struct eif_ex_936 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc2.overhead, 0, OVERHEAD + 36);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(936, 0x00).id);
	RTLI(31);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,Current);
	RTLR(7,ur1);
	RTLR(8,tr2);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,ur2);
	RTLR(14,tr3);
	RTLR(15,ur3);
	RTLR(16,loc12);
	RTLR(17,loc13);
	RTLR(18,loc14);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLR(21,loc17);
	RTLR(22,loc18);
	RTLR(23,loc19);
	RTLR(24,loc20);
	RTLR(25,loc21);
	RTLR(26,loc2);
	RTLR(27,loc3);
	RTLR(28,loc22);
	RTLR(29,tr4);
	RTLR(30,tr5);
	RTLIU(31);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_INT32, &loc23);
	RTLU(SK_REF, &loc24);
	RTLU(SK_REF, &loc25);
	RTLU(SK_REF, &loc26);
	RTLU(SK_REF, &loc27);
	
	RTEAA(l_feature_name, 939, Current, 27, 0, 15648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 15648);
	RTIV(Current, RTAL);
	wstdinit(loc2,loc2);
	RTLXI(loc2);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003B2, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(946, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7886, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7677, "play_sound", loc1))(loc1);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF80003B1, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(945, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7869, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 400L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7867, "set_x", loc4))(loc4, ui4_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 387L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7868, "set_y", loc4))(loc4, ui4_1x);
	RTHOOK(6);
	RTDBGAL(Current, 5, 0xF8000366, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6542, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 6, 0xF8000366, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6543, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 7, 0xF8000366, 0, 0); /* loc7 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6544, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 8893, 0xF80001AE, 0); /* array_levels */
	tr1 = RTLNSMART(RTWCT(8893, dtype, dftype).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8893, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	ur1 = RTCCL(loc7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 8892, 0xF8000366, 0); /* level */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(8892, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(14);
	RTDBGAL(Current, 8, 0xF80003B4, 0, 0); /* loc8 */
	tr1 = RTLN(eif_new_type(948, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7899, Dtype(tr1)))(tr1);
	RTNHOOK(14,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	RTDBGAL(Current, 9, 0xF80003C9, 0, 0); /* loc9 */
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	tr2 = RTMS_EX_H("font.ttf",8,1053698662);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 64L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8279, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(15,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc9))(loc9)).it_b);
	if (tb1) {
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc9))(loc9);
	}
	RTHOOK(18);
	RTDBGAL(Current, 10, 0xF80003C9, 0, 0); /* loc10 */
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	tr2 = RTMS_EX_H("font.ttf",8,1053698662);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 48L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8279, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(18,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc10))(loc10)).it_b);
	if (tb1) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc10))(loc10);
	}
	RTHOOK(21);
	RTDBGAL(Current, 11, 0xF80003AF, 0, 0); /* loc11 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("YOU DIED",8,293406276);
	ur1 = tr2;
	ur2 = RTCCL(loc9);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(21,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(21,2);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(22);
	RTDBGAL(Current, 12, 0xF80003AF, 0, 0); /* loc12 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("YOU WON",7,396656718);
	ur1 = tr2;
	ur2 = RTCCL(loc9);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(22,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(22,2);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	RTDBGAL(Current, 13, 0xF80003AF, 0, 0); /* loc13 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("BUBBLE TROUBLE",14,839375685);
	ur1 = tr2;
	ur2 = RTCCL(loc9);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(23,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(23,2);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	RTDBGAL(Current, 14, 0xF80003AF, 0, 0); /* loc14 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("Play",4,1349280121);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(24,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(24,2);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(25);
	RTDBGAL(Current, 15, 0xF80003AF, 0, 0); /* loc15 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("Connect to a game",17,485764965);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(25,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(25,2);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	RTDBGAL(Current, 16, 0xF80003AF, 0, 0); /* loc16 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("Quit",4,1366649204);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(26,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(26,2);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	RTDBGAL(Current, 17, 0xF80003AF, 0, 0); /* loc17 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("Press Enter to restart",22,1678164340);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(27,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(27,2);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(28);
	RTDBGAL(Current, 18, 0xF80003AF, 0, 0); /* loc18 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("Press Esc to quit",17,2091170676);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(28,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(28,2);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(29);
	RTDBGAL(Current, 19, 0xF80003AF, 0, 0); /* loc19 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("1",1,49);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(29,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(29,2);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(30);
	RTDBGAL(Current, 20, 0xF80003AF, 0, 0); /* loc20 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("2",1,50);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(30,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(30,2);
	loc20 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(31);
	RTDBGAL(Current, 21, 0xF80003AF, 0, 0); /* loc21 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	tr2 = RTMS_EX_H("3",1,51);
	ur1 = tr2;
	ur2 = RTCCL(loc10);
	tr3 = RTLN(eif_new_type(882, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6591, Dtype(tr3)))(tr3, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(31,1);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7859, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(31,2);
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(32);
	RTDBGAA(Current, dtype, 8901, 0x10000000, 1); /* selected_menu_option */
	*(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(33);
	RTDBGAL(Current, 2, 0x800003A8, 1, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(936, 0x00).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(33,1);
	tr1 = (tr1);
	RTXA(tr1, loc2);
	RTHOOK(34);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7843, "height", loc1))(loc1)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7791, "set_dimension", loc2))(loc2, ui4_1x, ui4_2x);
	RTHOOK(35);
	tr1 = RTMS_EX_H("Bubble Trouble",14,70586469);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7755, "set_title", loc2))(loc2, ur1x);
	RTHOOK(36);
	RTDBGAL(Current, 3, 0xF80003D4, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7795, "generate_window", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	RTDBGAA(Current, dtype, 8895, 0x04000000, 1); /* is_gameover */
	*(EIF_BOOLEAN *)(Current + RTWA(8895, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(38);
	RTDBGAA(Current, dtype, 8894, 0x04000000, 1); /* is_menu */
	*(EIF_BOOLEAN *)(Current + RTWA(8894, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(39);
	RTDBGAA(Current, dtype, 8896, 0x04000000, 1); /* level_is_new */
	*(EIF_BOOLEAN *)(Current + RTWA(8896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(40);
	RTDBGAA(Current, dtype, 8897, 0x10000000, 1); /* times_through */
	*(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(41);
	RTDBGAL(Current, 22, 0xF80003C6, 0, 0); /* loc22 */
	tr1 = RTLN(eif_new_type(966, 0x01).id);
	tr2 = RTMS_EX_H("selection_arrow.png",19,1864895591);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8132, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(41,1);
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(42);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc22))(loc22)).it_b);
	if (tb1) {
		RTHOOK(43);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc22))(loc22);
		RTHOOK(44);
		tb1 = *(EIF_BOOLEAN *)(loc22 + RTVA(7664, "is_open", loc22));
		if (tb1) {
			RTHOOK(45);
			RTDBGAA(Current, dtype, 8898, 0xF80003AC, 0); /* selection_arrow */
			tr1 = RTLNSMART(RTWCT(8898, dtype, dftype).id);
			ur1 = RTCCL(loc22);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7817, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(45,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(8898, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(46);
			RTDBGAA(Current, dtype, 8899, 0x10000000, 1); /* selection_arrow_x */
			*(EIF_INTEGER_32 *)(Current + RTWA(8899, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
			RTHOOK(47);
			RTDBGAA(Current, dtype, 8900, 0x10000000, 1); /* selection_arrow_y */
			*(EIF_INTEGER_32 *)(Current + RTWA(8900, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 162L);
		} else {
			RTHOOK(48);
			RTDBGAA(Current, dtype, 8898, 0xF80003AC, 0); /* selection_arrow */
			tr1 = RTLNSMART(RTWCT(8898, dtype, dftype).id);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7822, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(48,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(8898, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(49);
		RTDBGAA(Current, dtype, 8898, 0xF80003AC, 0); /* selection_arrow */
		tr1 = RTLNSMART(RTWCT(8898, dtype, dftype).id);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7822, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(49,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(8898, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(50);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(50,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7434, "quit_signal_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(50,2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,174,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,1,174,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A940_46_2, (EIF_POINTER)(0),8891, tr3, 0, 1, -1, tr1, 1);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
	RTHOOK(51);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7385, "key_pressed_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(51,1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,174,0xFF01,0,0xFF01,945,0xFF01,948,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = loc4;
	RTAR(tr2,loc4);
	((EIF_TYPED_VALUE *)tr2+3)->it_r = loc8;
	RTAR(tr2,loc8);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A940_44_2_3, (EIF_POINTER)(0),8889, tr3, 0, 1, -1, tr2, 2);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(52);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7386, "key_released_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(52,1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0xFF01,945,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = loc4;
	RTAR(tr2,loc4);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,2,174,200,0xFF01,908,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A940_45_2_3, (EIF_POINTER)(0),8890, tr3, 0, 1, -1, tr2, 2);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(53);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(53,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7435, "iteration_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(53,2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,16,174,0xFF01,0,0xFF01,945,0xFF01,946,0xFF01,948,0xFF01,980,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFF01,943,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 17, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = loc4;
	RTAR(tr1,loc4);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = loc1;
	RTAR(tr1,loc1);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = loc8;
	RTAR(tr1,loc8);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = loc3;
	RTAR(tr1,loc3);
	((EIF_TYPED_VALUE *)tr1+6)->it_r = loc11;
	RTAR(tr1,loc11);
	((EIF_TYPED_VALUE *)tr1+7)->it_r = loc12;
	RTAR(tr1,loc12);
	((EIF_TYPED_VALUE *)tr1+8)->it_r = loc13;
	RTAR(tr1,loc13);
	((EIF_TYPED_VALUE *)tr1+9)->it_r = loc14;
	RTAR(tr1,loc14);
	((EIF_TYPED_VALUE *)tr1+10)->it_r = loc15;
	RTAR(tr1,loc15);
	((EIF_TYPED_VALUE *)tr1+11)->it_r = loc16;
	RTAR(tr1,loc16);
	((EIF_TYPED_VALUE *)tr1+12)->it_r = loc17;
	RTAR(tr1,loc17);
	((EIF_TYPED_VALUE *)tr1+13)->it_r = loc18;
	RTAR(tr1,loc18);
	((EIF_TYPED_VALUE *)tr1+14)->it_r = loc19;
	RTAR(tr1,loc19);
	((EIF_TYPED_VALUE *)tr1+15)->it_r = loc20;
	RTAR(tr1,loc20);
	((EIF_TYPED_VALUE *)tr1+16)->it_r = loc21;
	RTAR(tr1,loc21);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,1,174,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A940_40_2, (EIF_POINTER)(0),8885, tr3, 0, 1, -1, tr1, 1);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
	RTHOOK(54);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(54,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7513, "launch", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(55);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(29);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef uu1_1
#undef uu1_2
#undef uu1_3
}

/* {ENGINE}.on_iteration */
void F940_11352 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x, EIF_TYPED_VALUE arg13x, EIF_TYPED_VALUE arg14x, EIF_TYPED_VALUE arg15x, EIF_TYPED_VALUE arg16x)
{
	GTCX
	char *l_feature_name = "on_iteration";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_r
#define arg8 arg8x.it_r
#define arg9 arg9x.it_r
#define arg10 arg10x.it_r
#define arg11 arg11x.it_r
#define arg12 arg12x.it_r
#define arg13 arg13x.it_r
#define arg14 arg14x.it_r
#define arg15 arg15x.it_r
#define arg16 arg16x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(25);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,arg11);
	RTLR(10,arg12);
	RTLR(11,arg13);
	RTLR(12,arg14);
	RTLR(13,arg15);
	RTLR(14,arg16);
	RTLR(15,tr1);
	RTLR(16,ur1);
	RTLR(17,Current);
	RTLR(18,tr2);
	RTLR(19,tr3);
	RTLR(20,tr4);
	RTLR(21,ur2);
	RTLR(22,ur3);
	RTLR(23,loc1);
	RTLR(24,loc2);
	RTLIU(25);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_REF,&arg10);
	RTLU(SK_REF,&arg11);
	RTLU(SK_REF,&arg12);
	RTLU(SK_REF,&arg13);
	RTLU(SK_REF,&arg14);
	RTLU(SK_REF,&arg15);
	RTLU(SK_REF,&arg16);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 939, Current, 2, 16, 15649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 15649);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(945, 0x01), 0x01);
	RTCC(arg3, 939, l_feature_name, 3, eif_new_type(946, 0x01), 0x01);
	RTCC(arg4, 939, l_feature_name, 4, eif_new_type(948, 0x01), 0x01);
	RTCC(arg5, 939, l_feature_name, 5, eif_new_type(980, 0x01), 0x01);
	RTCC(arg6, 939, l_feature_name, 6, eif_new_type(943, 0x01), 0x01);
	RTCC(arg7, 939, l_feature_name, 7, eif_new_type(943, 0x01), 0x01);
	RTCC(arg8, 939, l_feature_name, 8, eif_new_type(943, 0x01), 0x01);
	RTCC(arg9, 939, l_feature_name, 9, eif_new_type(943, 0x01), 0x01);
	RTCC(arg10, 939, l_feature_name, 10, eif_new_type(943, 0x01), 0x01);
	RTCC(arg11, 939, l_feature_name, 11, eif_new_type(943, 0x01), 0x01);
	RTCC(arg12, 939, l_feature_name, 12, eif_new_type(943, 0x01), 0x01);
	RTCC(arg13, 939, l_feature_name, 13, eif_new_type(943, 0x01), 0x01);
	RTCC(arg14, 939, l_feature_name, 14, eif_new_type(943, 0x01), 0x01);
	RTCC(arg15, 939, l_feature_name, 15, eif_new_type(943, 0x01), 0x01);
	RTCC(arg16, 939, l_feature_name, 16, eif_new_type(943, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7865, "x", arg3));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7866, "y", arg3));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8894, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8895, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			tb1 = *(EIF_BOOLEAN *)(arg4 + RTVA(7902, "is_fired", arg4));
			if (tb1) {
				RTHOOK(5);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(5,1);
				ur1 = RTCCL(arg4);
				ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(7865, "x", arg4));
				ui4_1 = ti4_1;
				ti4_2 = *(EIF_INTEGER_32 *)(arg4 + RTVA(7866, "y", arg4));
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
				RTHOOK(6);
				ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(7866, "y", arg4));
				ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 5L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7868, "set_y", arg4))(arg4, ui4_1x);
				RTHOOK(7);
				ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(7866, "y", arg4));
				if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
					RTHOOK(8);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7901, "reset", arg4))(arg4);
				}
			}
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7879, "surface", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7881, "sub_x", arg2));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7882, "sub_y", arg2));
			ui4_2 = ti4_2;
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg2))(arg2)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 3L));
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7843, "height", arg2))(arg2)).it_i4);
			ui4_4 = ti4_4;
			ti4_5 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7865, "x", arg2));
			ui4_5 = ti4_5;
			ti4_6 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7866, "y", arg2));
			ui4_6 = ti4_6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7835, "draw_sub_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(10,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr2))(tr2);
			for (;;) {
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(11,2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1779, "off", tr2))(tr2)).it_b);
				if (tb1) break;
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,1);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,2);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(12,3);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,4);
				tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr3))(tr3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(12,5);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr4))(tr4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,6);
				ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(7865, "x", tr3));
				ui4_1 = ti4_1;
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,7);
				tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr3))(tr3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(12,8);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr4))(tr4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,9);
				ti4_2 = *(EIF_INTEGER_32 *)(tr3 + RTVA(7866, "y", tr3));
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
				RTHOOK(13);
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(14);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(14,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(14,2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(14,3);
					ur1 = RTCCL(arg3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7889, "move", tr1))(tr1, ur1x);
					RTHOOK(15);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(15,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(15,2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					ur2 = RTCCL(arg2);
					ur3 = RTCCL(arg4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8886, dtype))(Current, ur1x, ur2x, ur3x);
					RTHOOK(16);
					tb2 = *(EIF_BOOLEAN *)(arg2 + RTVA(7880, "is_dead", arg2));
					if (tb2) {
						RTHOOK(17);
						RTDBGAA(Current, dtype, 8895, 0x04000000, 1); /* is_gameover */
						*(EIF_BOOLEAN *)(Current + RTWA(8895, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(18);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7677, "play_sound", arg2))(arg2);
					}
					RTHOOK(19);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(19,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(19,2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(19,3);
					tb2 = *(EIF_BOOLEAN *)(tr1 + RTVA(7896, "is_dead", tr1));
					if (tb2) {
						RTHOOK(20);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(20,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(20,2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(20,3);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(7890, "size", tr1));
						if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 1L))) {
							RTHOOK(21);
							RTDBGAL(Current, 1, 0xF80003B3, 0, 0); /* loc1 */
							tr1 = RTLN(eif_new_type(947, 0x01).id);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,1);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(21,2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,3);
							ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7865, "x", tr2));
							ui4_1 = ti4_1;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,4);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(21,5);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,6);
							ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7866, "y", tr2));
							ui4_2 = ti4_2;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,7);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(21,8);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(21,9);
							ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7890, "size", tr2));
							ui4_3 = (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L));
							ub1 = (EIF_BOOLEAN) 1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7888, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ub1x);
							RTNHOOK(21,10);
							loc1 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(22);
							RTDBGAL(Current, 2, 0xF80003B3, 0, 0); /* loc2 */
							tr1 = RTLN(eif_new_type(947, 0x01).id);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,1);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(22,2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,3);
							ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7865, "x", tr2));
							ui4_1 = ti4_1;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,4);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(22,5);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,6);
							ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7866, "y", tr2));
							ui4_2 = ti4_2;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,7);
							tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(22,8);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,9);
							ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(7890, "size", tr2));
							ui4_3 = (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L));
							ub1 = (EIF_BOOLEAN) 0;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7888, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ub1x);
							RTNHOOK(22,10);
							loc2 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(23);
							ui4_1 = ((EIF_INTEGER_32) -8L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7897, "set_speed", loc1))(loc1, ui4_1x);
							RTHOOK(24);
							ui4_1 = ((EIF_INTEGER_32) -8L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7897, "set_speed", loc2))(loc2, ui4_1x);
							RTHOOK(25);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(25,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(25,2);
							ur1 = RTCCL(loc1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
							RTHOOK(26);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(26,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(26,2);
							ur1 = RTCCL(loc2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
						}
						RTHOOK(27);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(27,2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,3);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7677, "play_sound", tr1))(tr1);
						RTHOOK(28);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(28,2);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2470, "islast", tr2))(tr2)).it_b);
						if (tb2) {
							RTHOOK(29);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(29,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(29,2);
							ui4_1 = ((EIF_INTEGER_32) -1L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2467, "move", tr2))(tr2, ui4_1x);
							RTHOOK(30);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(30,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(30,2);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2501, "remove_right", tr2))(tr2);
						} else {
							RTHOOK(31);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(31,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(31,2);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1752, "remove", tr2))(tr2);
						}
						RTHOOK(32);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7901, "reset", arg4))(arg4);
					}
				}
				RTHOOK(33);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(33,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(33,2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr2))(tr2);
				RTHOOK(34);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(34,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6545, "array_balls", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(34,2);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", tr2))(tr2)).it_b);
				if (tb2) {
					RTHOOK(35);
					RTDBGAA(Current, dtype, 8896, 0x04000000, 1); /* level_is_new */
					*(EIF_BOOLEAN *)(Current + RTWA(8896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(36);
					RTDBGAA(Current, dtype, 8897, 0x10000000, 1); /* times_through */
					*(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(37);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(37,1);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr2))(tr2, ui4_1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					if (RTCEQ(tr1, tr3)) {
						RTHOOK(38);
						RTDBGAA(Current, dtype, 8892, 0xF8000366, 0); /* level */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(38,1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTAR(Current, tr2);
						*(EIF_REFERENCE *)(Current + RTWA(8892, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
						RTHOOK(39);
						ui4_1 = ((EIF_INTEGER_32) 500L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7867, "set_x", arg2))(arg2, ui4_1x);
					} else {
						RTHOOK(40);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8892, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(40,1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr2))(tr2, ui4_1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
						if (RTCEQ(tr1, tr3)) {
							RTHOOK(41);
							RTDBGAA(Current, dtype, 8892, 0xF8000366, 0); /* level */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(41,1);
							ui4_1 = ((EIF_INTEGER_32) 3L);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTAR(Current, tr2);
							*(EIF_REFERENCE *)(Current + RTWA(8892, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
							RTHOOK(42);
							ui4_1 = ((EIF_INTEGER_32) 500L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7867, "set_x", arg2))(arg2, ui4_1x);
						} else {
							RTHOOK(43);
							RTDBGAA(Current, dtype, 8895, 0x04000000, 1); /* is_gameover */
							*(EIF_BOOLEAN *)(Current + RTWA(8895, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(44);
							RTDBGAA(Current, dtype, 8896, 0x04000000, 1); /* level_is_new */
							*(EIF_BOOLEAN *)(Current + RTWA(8896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					}
				}
			}
		} else {
			RTHOOK(45);
			tb2 = *(EIF_BOOLEAN *)(arg2 + RTVA(7880, "is_dead", arg2));
			if (tb2) {
				RTHOOK(46);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(46,1);
				ur1 = RTCCL(arg6);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg6))(arg6)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
				ui4_2 = ((EIF_INTEGER_32) 50L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			} else {
				RTHOOK(47);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(47,1);
				ur1 = RTCCL(arg7);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg7))(arg7)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
				ui4_2 = ((EIF_INTEGER_32) 50L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			}
			RTHOOK(48);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(48,1);
			ur1 = RTCCL(arg12);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg12))(arg12)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
			ui4_2 = ((EIF_INTEGER_32) 200L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(49);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(49,1);
			ur1 = RTCCL(arg13);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg13))(arg13)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
			ui4_2 = ((EIF_INTEGER_32) 350L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		}
		RTHOOK(50);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
		if (tb2) {
			RTHOOK(51);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(52);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(52,1);
				ur1 = RTCCL(arg16);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg16))(arg16)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
				ui4_2 = ((EIF_INTEGER_32) 5L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			} else {
				RTHOOK(53);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
					RTHOOK(54);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(54,1);
					ur1 = RTCCL(arg15);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg15))(arg15)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
					ui4_2 = ((EIF_INTEGER_32) 5L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
				} else {
					RTHOOK(55);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
						RTHOOK(56);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(56,1);
						ur1 = RTCCL(arg14);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg14))(arg14)).it_i4);
						ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
						ui4_2 = ((EIF_INTEGER_32) 5L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
					}
				}
			}
		}
	} else {
		RTHOOK(57);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(57,1);
		ur1 = RTCCL(arg8);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg8))(arg8)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		ui4_2 = ((EIF_INTEGER_32) 30L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(58);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(58,1);
		ur1 = RTCCL(arg9);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg9))(arg9)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		ui4_2 = ((EIF_INTEGER_32) 150L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(59);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(59,1);
		ur1 = RTCCL(arg10);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg10))(arg10)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		ui4_2 = ((EIF_INTEGER_32) 250L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(60);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(60,1);
		ur1 = RTCCL(arg11);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg11))(arg11)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 512L) - (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		ui4_2 = ((EIF_INTEGER_32) 350L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(61);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(62);
			RTDBGAA(Current, dtype, 8900, 0x10000000, 1); /* selection_arrow_y */
			*(EIF_INTEGER_32 *)(Current + RTWA(8900, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 162L);
		} else {
			RTHOOK(63);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(64);
				RTDBGAA(Current, dtype, 8900, 0x10000000, 1); /* selection_arrow_y */
				*(EIF_INTEGER_32 *)(Current + RTWA(8900, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 262L);
			} else {
				RTHOOK(65);
				RTDBGAA(Current, dtype, 8900, 0x10000000, 1); /* selection_arrow_y */
				*(EIF_INTEGER_32 *)(Current + RTWA(8900, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 362L);
			}
		}
		RTHOOK(66);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(66,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8898, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8899, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8900, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
	}
	RTHOOK(67);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8643, "surface", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(67,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7887, "footer", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 462L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7834, "draw_surface", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
	RTHOOK(68);
	ur1 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7885, "animate", arg2))(arg2, ur1x);
	RTHOOK(69);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(69,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6724, "update", tr1))(tr1);
	RTHOOK(70);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8521, "update", arg5))(arg5);
	RTHOOK(71);
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(8894, dtype));
	if ((EIF_BOOLEAN) (tb2 && (EIF_BOOLEAN) !tb3)) {
		RTHOOK(72);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(73);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(73,1);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1000L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7511, "delay", tr1))(tr1, uu4_1x);
		}
		RTHOOK(74);
		RTDBGAA(Current, dtype, 8897, 0x10000000, 1); /* times_through */
		(*(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype)))++;
		RTHOOK(75);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
			RTHOOK(76);
			RTDBGAA(Current, dtype, 8896, 0x04000000, 1); /* level_is_new */
			*(EIF_BOOLEAN *)(Current + RTWA(8896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(77);
			RTDBGAA(Current, dtype, 8897, 0x10000000, 1); /* times_through */
			*(EIF_INTEGER_32 *)(Current + RTWA(8897, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(78);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uu4_1
#undef ub1
#undef arg16
#undef arg15
#undef arg14
#undef arg13
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ENGINE}.check_collisions */
void F940_11353 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "check_collisions";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 3, 15650);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 15650);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(947, 0x01), 0x01);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(945, 0x01), 0x01);
	RTCC(arg3, 939, l_feature_name, 3, eif_new_type(948, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7866, "y", arg1));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7843, "height", arg1))(arg1)).it_i4);
	ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7866, "y", arg2));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ti4_3)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7865, "x", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7865, "x", arg2));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg2))(arg2)).it_i4);
		tb2 = (EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 3L))));
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7865, "x", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg1))(arg1)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7865, "x", arg2));
		tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ti4_3);
	}
	if (tb1) {
		RTHOOK(2);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7883, "set_is_dead", arg2))(arg2, ub1x);
	}
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7865, "x", arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7865, "x", arg3));
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7865, "x", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg1))(arg1)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7865, "x", arg3));
		tb3 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ti4_3);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7866, "y", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7843, "height", arg1))(arg1)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7866, "y", arg3));
		tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ti4_3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(arg3 + RTVA(7902, "is_fired", arg3));
		tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
	}
	if (tb1) {
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7898, "set_is_dead", arg1))(arg1, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {ENGINE}.choose_option */
void F940_11354 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "choose_option";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 0, 15651);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 15651);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 8894, 0x04000000, 1); /* is_menu */
		*(EIF_BOOLEAN *)(Current + RTWA(8894, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("RIP TODO",8,1825852239);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7518, "stop", tr1))(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {ENGINE}.reset_game */
void F940_11355 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "reset_game";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Current);
	RTLR(7,ur1);
	RTLR(8,tr2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 939, Current, 3, 2, 15652);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 15652);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(945, 0x01), 0x01);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(948, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000366, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6542, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000366, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6543, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF8000366, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(870, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6544, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1715, "wipe_out", tr1))(tr1);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 8892, 0xF8000366, 0); /* level */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(8892, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 8896, 0x04000000, 1); /* level_is_new */
	*(EIF_BOOLEAN *)(Current + RTWA(8896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 8895, 0x04000000, 1); /* is_gameover */
	*(EIF_BOOLEAN *)(Current + RTWA(8895, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7883, "set_is_dead", arg1))(arg1, ub1x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 400L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7867, "set_x", arg1))(arg1, ui4_1x);
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7901, "reset", arg2))(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {ENGINE}.on_key_pressed */
void F940_11356 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "on_key_pressed";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,tr1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 4, 15653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(939, Current, 15653);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(908, 0x01), 0x01);
	RTCC(arg3, 939, l_feature_name, 3, eif_new_type(945, 0x01), 0x01);
	RTCC(arg4, 939, l_feature_name, 4, eif_new_type(948, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7263, "is_repeat", arg2))(arg2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6877, "is_right", arg2))(arg2)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(3);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7870, "go_right", arg3))(arg3);
		} else {
			RTHOOK(4);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6878, "is_left", arg2))(arg2)).it_b);
			if (tb2) {
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7871, "go_left", arg3))(arg3);
			} else {
				RTHOOK(6);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6880, "is_up", arg2))(arg2)).it_b);
				if (tb1) {
					RTHOOK(7);
					tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8894, dtype));
					if (tb1) {
						RTHOOK(8);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
						if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
							RTHOOK(9);
							RTDBGAA(Current, dtype, 8901, 0x10000000, 1); /* selected_menu_option */
							(*(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype)))--;
						} else {
							RTHOOK(10);
							RTDBGAA(Current, dtype, 8901, 0x10000000, 1); /* selected_menu_option */
							*(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					} else {
						RTHOOK(11);
						tb1 = '\0';
						tb2 = *(EIF_BOOLEAN *)(arg4 + RTVA(7902, "is_fired", arg4));
						if ((EIF_BOOLEAN) !tb2) {
							tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8896, dtype));
							tb1 = (EIF_BOOLEAN) !tb2;
						}
						if (tb1) {
							RTHOOK(12);
							ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(7865, "x", arg3));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg3))(arg3)).it_i4);
							ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 6L)));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7900, "fire", arg4))(arg4, ui4_1x);
						}
					}
				} else {
					RTHOOK(13);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6879, "is_down", arg2))(arg2)).it_b);
					if (tb1) {
						RTHOOK(14);
						tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8894, dtype));
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype));
						if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 3L)))) {
							RTHOOK(15);
							RTDBGAA(Current, dtype, 8901, 0x10000000, 1); /* selected_menu_option */
							(*(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype)))++;
						} else {
							RTHOOK(16);
							RTDBGAA(Current, dtype, 8901, 0x10000000, 1); /* selected_menu_option */
							*(EIF_INTEGER_32 *)(Current + RTWA(8901, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
						}
					} else {
						RTHOOK(17);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6786, "is_return", arg2))(arg2)).it_b);
						if (tb1) {
							RTHOOK(18);
							tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8894, dtype));
							if (tb1) {
								RTHOOK(19);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(8887, dtype))(Current);
							} else {
								RTHOOK(20);
								tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8895, dtype));
								if (tb1) {
									RTHOOK(21);
									ur1 = RTCCL(arg3);
									ur2 = RTCCL(arg4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8888, dtype))(Current, ur1x, ur2x);
								}
							}
						} else {
							RTHOOK(22);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6787, "is_escape", arg2))(arg2)).it_b);
							if (tb1) {
								RTHOOK(23);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(23,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7518, "stop", tr1))(tr1);
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ENGINE}.on_key_released */
void F940_11357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_key_released";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 3, 15654);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 15654);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(908, 0x01), 0x01);
	RTCC(arg3, 939, l_feature_name, 3, eif_new_type(945, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7263, "is_repeat", arg2))(arg2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6877, "is_right", arg2))(arg2)).it_b);
		if (tb1) {
			RTHOOK(3);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7872, "stop_right", arg3))(arg3);
		} else {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6878, "is_left", arg2))(arg2)).it_b);
			if (tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7873, "stop_left", arg3))(arg3);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {ENGINE}.on_quit */
void F940_11358 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_quit";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 1, 15655);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 15655);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7700, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7518, "stop", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {ENGINE}.level */
EIF_TYPED_VALUE F940_11359 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8892,Dtype(Current)));
	return r;
}


/* {ENGINE}.array_levels */
EIF_TYPED_VALUE F940_11360 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8893,Dtype(Current)));
	return r;
}


/* {ENGINE}.is_menu */
EIF_TYPED_VALUE F940_11361 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8894,Dtype(Current)));
	return r;
}


/* {ENGINE}.is_gameover */
EIF_TYPED_VALUE F940_11362 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8895,Dtype(Current)));
	return r;
}


/* {ENGINE}.level_is_new */
EIF_TYPED_VALUE F940_11363 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8896,Dtype(Current)));
	return r;
}


/* {ENGINE}.times_through */
EIF_TYPED_VALUE F940_11364 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8897,Dtype(Current)));
	return r;
}


/* {ENGINE}.selection_arrow */
EIF_TYPED_VALUE F940_11365 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8898,Dtype(Current)));
	return r;
}


/* {ENGINE}.selection_arrow_x */
EIF_TYPED_VALUE F940_11366 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8899,Dtype(Current)));
	return r;
}


/* {ENGINE}.selection_arrow_y */
EIF_TYPED_VALUE F940_11367 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8900,Dtype(Current)));
	return r;
}


/* {ENGINE}.selected_menu_option */
EIF_TYPED_VALUE F940_11368 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8901,Dtype(Current)));
	return r;
}


void EIF_Minit940 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
