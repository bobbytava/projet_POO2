/*
 * Code for class GAME_RENDERER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F933_9805(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9806(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9807(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9808(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9811(EIF_REFERENCE);
extern void F933_9812(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9813(EIF_REFERENCE);
extern void F933_9814(EIF_REFERENCE);
extern void F933_9815(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9816(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9817(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9818(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9819(EIF_REFERENCE);
extern void F933_9820(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9821(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9822(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9823(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9824(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9825(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9826(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F933_9827(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9828(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9829(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9830(EIF_REFERENCE);
extern void F933_9831(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F933_9832(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9833(EIF_REFERENCE);
extern void F933_9834(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9835(EIF_REFERENCE);
extern void F933_9836(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9837(EIF_REFERENCE);
extern void F933_9838(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9840(EIF_REFERENCE);
extern void F933_9841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9842(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F933_9844(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F933_9845(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit933(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_RENDERER}.make_with_flags */
void F933_9805 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make_with_flags";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_b
#define arg4 arg4x.it_b
#define arg5 arg5x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_b = * (EIF_BOOLEAN *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU(SK_BOOL,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 5, 15525);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15525);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(950, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
	loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	if (arg4) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6357, 865))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(4);
	if (arg5) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6356, 865))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(6);
	if (arg2) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6358, 865))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(8);
	if (arg3) {
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6359, 865))(Current)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(10);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) -1L);
	uu4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7643, dtype))(Current, ur1x, ui4_1x, uu4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6570, dtype));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.make */
void F933_9806 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 1, 15526);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15526);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(950, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) -1L);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7643, dtype))(Current, ur1x, ui4_1x, uu4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6570, dtype));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {GAME_RENDERER}.make_with_renderer_driver */
void F933_9807 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_renderer_driver";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 2, 15527);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15527);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(950, 0x01), 0x01);
	RTCC(arg2, 932, l_feature_name, 2, eif_new_type(929, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7602, "index", arg2));
	ui4_1 = ti4_1;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7643, dtype))(Current, ur1x, ui4_1x, uu4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6570, dtype));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.make_with_renderer_driver_and_flags */
void F933_9808 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_renderer_driver_and_flags";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 3, 15528);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15528);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(950, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7646, 0xF80003B6, 0); /* original_target */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7646, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7645, 0xF800036E, 0); /* target */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7645, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(8207, "item", arg1));
	up1 = tp1;
	ui4_1 = arg2;
	uu4_1 = arg3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5036, 865))(Current, up1x, ui4_1x, uu4_1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1058, dtype))(Current, up1x);
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	tr1 = RTMS_EX_H("Error while creating rendering context.",39,1902471214);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6631, dtype))(Current, up1x, ur1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7675, 0x04000000, 1); /* is_dispose */
	*(EIF_BOOLEAN *)(Current + RTWA(7675, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6570, dtype));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.present */
void F933_9809 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "present";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15529);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15529);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5088, 865))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_RENDERER}.target */
EIF_TYPED_VALUE F933_9810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7645,Dtype(Current)));
	return r;
}


/* {GAME_RENDERER}.original_target */
EIF_TYPED_VALUE F933_9811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7646,Dtype(Current)));
	return r;
}


/* {GAME_RENDERER}.set_target */
void F933_9812 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_target";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 932, Current, 2, 1, 15532);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15532);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(878, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(931, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7181, "item", loc2))(loc2)).it_p);
		up2 = tp2;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5086, 865))(Current, up1x, up2x)).it_i4);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ui4_1 = loc1;
			tr1 = RTMS_EX_H("An error occured while setting the Renderer\'s target to texture.",64,1629088814);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7645, 0xF800036E, 0); /* target */
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + RTWA(7645, dtype)) = (EIF_REFERENCE) RTCCL(loc2);
		}
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7646, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(arg1, tr1)) {
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
			up1 = tp1;
			tp2 = ((EIF_POINTER) 0);
			up2 = tp2;
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5086, 865))(Current, up1x, up2x)).it_i4);
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(11);
				ui4_1 = loc1;
				tr1 = RTMS_EX_H("An error occured while setting the Renderer\'s target to window.",63,1330770478);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
			} else {
				RTHOOK(12);
				RTDBGAA(Current, dtype, 7645, 0xF800036E, 0); /* target */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7646, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(7645, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			}
		} else {
			RTHOOK(13);
			tr1 = RTMS_EX_H("Render target error",19,250726514);
			ur1 = tr1;
			tr2 = RTMS_EX_H("Cannot set another screen as render target.",43,243956270);
			ur2 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6563, dtype))(Current, ur1x, ur2x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("is_set", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6570, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7645, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTCEQ(tr1, arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {GAME_RENDERER}.set_original_target */
void F933_9813 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_original_target";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15533);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15533);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7646, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7647, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GAME_RENDERER}.clear */
void F933_9814 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 0, 15534);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15534);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5087, 865))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while clearing the renderer.",45,1062121262);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_RENDERER}.draw_texture */
void F933_9815 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_texture";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 3, 15535);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15535);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(931, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7627, "width", arg1))(arg1)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7628, "height", arg1))(arg1)).it_i4);
	ui4_4 = ti4_2;
	ui4_5 = arg2;
	ui4_6 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7651, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_sub_texture */
void F933_9816 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "draw_sub_texture";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ui4_8x = {{0}, SK_INT32};
#define ui4_8 ui4_8x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 7, 15536);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15536);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(931, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	ui4_4 = arg5;
	ui4_5 = arg6;
	ui4_6 = arg7;
	ui4_7 = arg4;
	ui4_8 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7652, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x, ui4_7x, ui4_8x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ui4_8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_sub_texture_with_scale */
void F933_9817 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "draw_sub_texture_with_scale";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 932, Current, 5, 9, 15537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15537);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(931, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF80000AE, 0, 0); /* loc4 */
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	ui4_4 = arg5;
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0xF80000AE, 0, 0); /* loc5 */
	ui4_1 = arg6;
	ui4_2 = arg7;
	ui4_3 = arg8;
	ui4_4 = arg9;
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc4),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc4),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc4),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(9);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc4),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(10);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc5),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(11);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc5),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(12);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc5),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(13);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc5),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(15);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7181, "item", arg1))(arg1)).it_p);
	up2 = tp2;
	up3 = loc1;
	up4 = loc2;
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5089, 865))(Current, up1x, up2x, up3x, up4x)).it_i4);
	RTHOOK(16);
	ui4_1 = loc3;
	tr1 = RTMS_EX_H("An error occured while drawing texture to the renderer.",55,34681902);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(17);
	free(loc2);
	RTHOOK(18);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
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

/* {GAME_RENDERER}.draw_sub_texture_with_scale_rotation_and_mirror */
void F933_9818 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x, EIF_TYPED_VALUE arg13x, EIF_TYPED_VALUE arg14x)
{
	GTCX
	char *l_feature_name = "draw_sub_texture_with_scale_rotation_and_mirror";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_r8
#define arg13 arg13x.it_b
#define arg14 arg14x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg14x.type & SK_HEAD) == SK_REF) arg14x.it_b = * (EIF_BOOLEAN *) arg14x.it_r;
	if ((arg13x.type & SK_HEAD) == SK_REF) arg13x.it_b = * (EIF_BOOLEAN *) arg13x.it_r;
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_r8 = * (EIF_REAL_64 *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,loc7);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_REAL64,&arg12);
	RTLU(SK_BOOL,&arg13);
	RTLU(SK_BOOL,&arg14);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 932, Current, 7, 14, 15538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15538);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(931, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 6, 0xF80000AE, 0, 0); /* loc6 */
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	ui4_4 = arg5;
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 7, 0xF80000AE, 0, 0); /* loc7 */
	ui4_1 = arg6;
	ui4_2 = arg7;
	ui4_3 = arg8;
	ui4_4 = arg9;
	loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc6),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc6),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc6),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(9);
	up1 = loc1;
	ti4_1 = eif_integer_32_item(RTCV(loc6),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(10);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc7),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(11);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc7),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(12);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc7),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(13);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc7),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(14);
	RTDBGAL(Current, 3, 0x40000000, 1, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5271, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(15);
	up1 = loc3;
	ui4_1 = arg10;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5272, 865))(Current, up1x, ui4_1x);
	RTHOOK(16);
	up1 = loc3;
	ui4_1 = arg11;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5274, 865))(Current, up1x, ui4_1x);
	RTHOOK(17);
	if ((EIF_BOOLEAN) (arg13 || arg14)) {
		RTHOOK(18);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(19);
		if (arg13) {
			RTHOOK(20);
			RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6362, 865))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(loc5,ui4_1);
			loc5 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(21);
		if (arg14) {
			RTHOOK(22);
			RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6361, 865))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(loc5,ui4_1);
			loc5 = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(23);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6360, 865))(Current)).it_i4);
	}
	RTHOOK(24);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(25);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7181, "item", arg1))(arg1)).it_p);
	up2 = tp2;
	up3 = loc1;
	up4 = loc2;
	ur8_1 = arg12;
	up5 = loc3;
	ui4_1 = loc5;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5090, 865))(Current, up1x, up2x, up3x, up4x, ur8_1x, up5x, ui4_1x)).it_i4);
	RTHOOK(26);
	ui4_1 = loc4;
	tr1 = RTMS_EX_H("An error occured while drawing texture to the renderer.",55,34681902);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(27);
	free(loc3);
	RTHOOK(28);
	free(loc2);
	RTHOOK(29);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
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

/* {GAME_RENDERER}.drawing_color */
EIF_TYPED_VALUE F933_9819 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "drawing_color";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_TYPED_VALUE uu1_4x = {{0}, SK_UINT8};
#define uu1_4 uu1_4x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT8, &loc2);
	RTLU(SK_UINT8, &loc3);
	RTLU(SK_UINT8, &loc4);
	RTLU(SK_UINT8, &loc5);
	
	RTEAA(l_feature_name, 932, Current, 5, 0, 15539);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15539);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = (EIF_NATURAL_8 *) &(loc2);
	up3 = (EIF_NATURAL_8 *) &(loc3);
	up4 = (EIF_NATURAL_8 *) &(loc4);
	up5 = (EIF_NATURAL_8 *) &(loc5);
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5116, 865))(Current, up1x, up2x, up3x, up4x, up5x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("An error occured while retreiving the drawing color of the renderer.",68,2074691118);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
		RTHOOK(6);
		RTDBGAL(Current, 0, 0xF8000369, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(873, 0x01).id);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6498, Dtype(tr1)))(tr1, uu1_1x, uu1_2x, uu1_3x);
		RTNHOOK(6,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0xF8000369, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(873, 0x01).id);
		uu1_1 = loc2;
		uu1_2 = loc3;
		uu1_3 = loc4;
		uu1_4 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6497, Dtype(tr1)))(tr1, uu1_1x, uu1_2x, uu1_3x, uu1_4x);
		RTNHOOK(7,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ui4_1
#undef uu1_1
#undef uu1_2
#undef uu1_3
#undef uu1_4
}

/* {GAME_RENDERER}.set_drawing_color */
void F933_9820 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_drawing_color";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_TYPED_VALUE uu1_4x = {{0}, SK_UINT8};
#define uu1_4 uu1_4x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 1, 15540);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15540);
	RTCC(arg1, 932, l_feature_name, 1, eif_new_type(873, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6502, "red", arg1))(arg1)).it_n1);
	uu1_1 = tu1_1;
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6503, "green", arg1))(arg1)).it_n1);
	uu1_2 = tu1_2;
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6504, "blue", arg1))(arg1)).it_n1);
	uu1_3 = tu1_3;
	tu1_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6505, "alpha", arg1))(arg1)).it_n1);
	uu1_4 = tu1_4;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5117, 865))(Current, up1x, uu1_1x, uu1_2x, uu1_3x, uu1_4x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while setting the drawing color of the renderer.",65,1050818862);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu1_1
#undef uu1_2
#undef uu1_3
#undef uu1_4
#undef arg1
}

/* {GAME_RENDERER}.draw_point */
void F933_9821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "draw_point";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 2, 15541);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15541);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5119, 865))(Current, up1x, ui4_1x, ui4_2x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_points */
void F933_9822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_points";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 932, Current, 5, 1, 15542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15542);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,327,0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 932, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5271, 865))(Current)).it_i4);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc3 * ti4_1);
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	loc2 = (EIF_POINTER) loc1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800013F, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc5))(loc5)).it_b);
		if (tb1) break;
		RTHOOK(6);
		up1 = loc2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5272, 865))(Current, up1x, ui4_1x);
		RTHOOK(7);
		up1 = loc2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),2);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5274, 865))(Current, up1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		ui4_1 = loc3;
		tp1 = RTPOF(loc2,ui4_1);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc5))(loc5);
	}
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(11);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5118, 865))(Current, up1x, up2x, ui4_1x)).it_i4);
	RTHOOK(12);
	ui4_1 = loc4;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(13);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {GAME_RENDERER}.draw_line */
void F933_9823 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "draw_line";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 4, 15543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15543);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5120, 865))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_connected_lines */
void F933_9824 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_connected_lines";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 932, Current, 5, 1, 15544);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15544);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,327,0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 932, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5271, 865))(Current)).it_i4);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc3 * ti4_1);
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	loc2 = (EIF_POINTER) loc1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800013F, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc5))(loc5)).it_b);
		if (tb1) break;
		RTHOOK(6);
		up1 = loc2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5272, 865))(Current, up1x, ui4_1x);
		RTHOOK(7);
		up1 = loc2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),2);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5274, 865))(Current, up1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		ui4_1 = loc3;
		tp1 = RTPOF(loc2,ui4_1);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc5))(loc5);
	}
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(11);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5121, 865))(Current, up1x, up2x, ui4_1x)).it_i4);
	RTHOOK(12);
	ui4_1 = loc4;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(13);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {GAME_RENDERER}.draw_rectangle */
void F933_9825 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "draw_rectangle";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 932, Current, 3, 4, 15545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15545);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000AE, 0, 0); /* loc3 */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(4);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(5);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(6);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5122, 865))(Current, up1x, up2x)).it_i4);
	RTHOOK(9);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(10);
	free(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_rectangles */
void F933_9826 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_rectangles";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 932, Current, 6, 1, 15546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15546);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,327,0xFF01,0xFFF9,4,174,206,206,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 932, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc3 * ti4_1);
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	loc2 = (EIF_POINTER) loc1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800013F, 0, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc6))(loc6)).it_b);
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 5, 0xF80000AE, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),1);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,2);
		ti4_2 = eif_integer_32_item(RTCV(tr1),2);
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,3);
		ti4_3 = eif_integer_32_item(RTCV(tr1),3);
		ui4_3 = ti4_3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,4);
		ti4_4 = eif_integer_32_item(RTCV(tr1),4);
		ui4_4 = ti4_4;
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
		RTHOOK(8);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),2);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
		RTHOOK(9);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),3);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
		RTHOOK(10);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		ui4_1 = loc3;
		tp1 = RTPOF(loc2,ui4_1);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc6))(loc6);
	}
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(14);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5123, 865))(Current, up1x, up2x, ui4_1x)).it_i4);
	RTHOOK(15);
	ui4_1 = loc4;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(16);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {GAME_RENDERER}.draw_filled_rectangle */
void F933_9827 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "draw_filled_rectangle";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 932, Current, 3, 4, 15547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15547);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000AE, 0, 0); /* loc3 */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(4);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(5);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(6);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5124, 865))(Current, up1x, up2x)).it_i4);
	RTHOOK(9);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(10);
	free(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.draw_filled_rectangles */
void F933_9828 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_filled_rectangles";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 932, Current, 6, 1, 15548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15548);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,327,0xFF01,0xFFF9,4,174,206,206,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 932, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc3 * ti4_1);
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	loc2 = (EIF_POINTER) loc1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800013F, 0, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc6))(loc6)).it_b);
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 5, 0xF80000AE, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = eif_integer_32_item(RTCV(tr1),1);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,2);
		ti4_2 = eif_integer_32_item(RTCV(tr1),2);
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,3);
		ti4_3 = eif_integer_32_item(RTCV(tr1),3);
		ui4_3 = ti4_3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,4);
		ti4_4 = eif_integer_32_item(RTCV(tr1),4);
		ui4_4 = ti4_4;
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
		RTHOOK(8);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),2);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
		RTHOOK(9);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),3);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
		RTHOOK(10);
		up1 = loc2;
		ti4_1 = eif_integer_32_item(RTCV(loc5),4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		ui4_1 = loc3;
		tp1 = RTPOF(loc2,ui4_1);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc6))(loc6);
	}
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(14);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5125, 865))(Current, up1x, up2x, ui4_1x)).it_i4);
	RTHOOK(15);
	ui4_1 = loc4;
	tr1 = RTMS_EX_H("An error occured while drawing on the renderer.",47,598119726);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(16);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {GAME_RENDERER}.output_size */
EIF_TYPED_VALUE F933_9829 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "output_size";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 932, Current, 3, 0, 15549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15549);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = (EIF_INTEGER_32 *) &(loc2);
	up3 = (EIF_INTEGER_32 *) &(loc3);
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5143, 865))(Current, up1x, up2x, up3x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot retreive the output of the renderer.",43,153320750);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc2;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc3;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
}

/* {GAME_RENDERER}.clip_rectangle */
EIF_TYPED_VALUE F933_9830 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clip_rectangle";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 0, 15550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15550);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5144, 865))(Current, up1x, up2x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,174,206,206,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5264, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5266, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5268, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5270, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ti4_1;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
}

/* {GAME_RENDERER}.set_clip_rectangle */
void F933_9831 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_clip_rectangle";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 932, Current, 5, 4, 15551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15551);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000AE, 0, 0); /* loc3 */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(5);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(6);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5145, 865))(Current, up1x, up2x)).it_i4);
	RTHOOK(10);
	free(loc2);
	RTHOOK(11);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot set renderer clip rectangle",34,597906277);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("is_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7665, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if ((EIF_TRUE)) {
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			ui4_4 = arg4;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = RTCCL(tr1);
			tb2 = (EIF_TRUE);
		}
		if (tb2) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			ti4_1 = eif_integer_32_item(RTCV(loc4),1);
			ti4_2 = eif_integer_32_item(RTCV(loc5),1);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),2);
				ti4_2 = eif_integer_32_item(RTCV(loc5),2);
				tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb4) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),3);
				ti4_2 = eif_integer_32_item(RTCV(loc5),3);
				tb3 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb3) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),4);
				ti4_2 = eif_integer_32_item(RTCV(loc5),4);
				tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.disable_clip_rectangle */
void F933_9832 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_clip_rectangle";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 0, 15552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15552);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = ((EIF_POINTER) 0);
	up2 = tp2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5145, 865))(Current, up1x, up2x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot disable renderer clip rectangle",38,1852677477);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {GAME_RENDERER}.logical_size */
EIF_TYPED_VALUE F933_9833 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "logical_size";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 932, Current, 2, 0, 15553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15553);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = (EIF_INTEGER_32 *) &(loc1);
	up3 = (EIF_INTEGER_32 *) &(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5146, 865))(Current, up1x, up2x, up3x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
}

/* {GAME_RENDERER}.set_logical_size */
void F933_9834 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_logical_size";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 932, Current, 2, 2, 15554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15554);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("width_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("height_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5147, 865))(Current, up1x, ui4_1x, ui4_2x)).it_i4);
	RTHOOK(6);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot set the output logical size of the renderer.",51,380873006);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_set", EX_POST);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if ((EIF_TRUE)) {
			tb2 = '\0';
			ti4_1 = eif_integer_32_item(RTCV(loc2),1);
			if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
				ti4_1 = eif_integer_32_item(RTCV(loc2),2);
				tb2 = (EIF_BOOLEAN)(ti4_1 == arg2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.scale */
EIF_TYPED_VALUE F933_9835 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "scale";
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REAL_32 loc2 = (EIF_REAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	RTLU(SK_REAL32, &loc2);
	
	RTEAA(l_feature_name, 932, Current, 2, 0, 15555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15555);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = (EIF_REAL_32 *) &(loc1);
	up3 = (EIF_REAL_32 *) &(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5148, 865))(Current, up1x, up2x, up3x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,179,179,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r4 = loc1;
	((EIF_TYPED_VALUE *)tr1+2)->it_r4 = loc2;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
}

/* {GAME_RENDERER}.set_scale */
void F933_9836 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_scale";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 932, Current, 2, 2, 15556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15556);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	ur4_1 = arg1;
	ur4_2 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5149, 865))(Current, up1x, ur4_1x, ur4_2x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot set the scaling of the renderer.",39,666151982);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_set", EX_POST);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if ((EIF_TRUE)) {
			tb2 = '\0';
			tr4_1 = eif_real_32_item(RTCV(loc2),1);
			if ((EIF_BOOLEAN)(tr4_1 == arg1)) {
				tr4_1 = eif_real_32_item(RTCV(loc2),2);
				tb2 = (EIF_BOOLEAN)(tr4_1 == arg2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur4_1
#undef ur4_2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.viewport */
EIF_TYPED_VALUE F933_9837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "viewport";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 932, Current, 1, 0, 15557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15557);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5150, 865))(Current, up1x, up2x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,174,206,206,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5264, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5266, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5268, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ti4_1;
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5270, 865))(Current, up1x)).it_i4);
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ti4_1;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
}

/* {GAME_RENDERER}.set_viewport */
void F933_9838 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_viewport";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 932, Current, 6, 4, 15558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15558);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000AE, 0, 0); /* loc3 */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6562, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5262, 865))(Current)).it_i4);
	ui4_2 = ti4_1;
	tp1 = calloc((size_t)ui4_1, (size_t) ui4_2);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(5);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5263, 865))(Current, up1x, ui4_1x);
	RTHOOK(6);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),2);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5265, 865))(Current, up1x, ui4_1x);
	RTHOOK(7);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),3);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5267, 865))(Current, up1x, ui4_1x);
	RTHOOK(8);
	up1 = loc2;
	ti4_1 = eif_integer_32_item(RTCV(loc3),4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5269, 865))(Current, up1x, ui4_1x);
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5151, 865))(Current, up1x, up2x)).it_i4);
	RTHOOK(10);
	free(loc2);
	RTHOOK(11);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot set the viewport of the renderer.",40,1013169966);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6630, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("is_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7672, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if ((EIF_TRUE)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = RTCCL(tr1);
			tb3 = (EIF_TRUE);
		}
		if (tb3) {
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			ui4_4 = arg4;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7402, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = RTCCL(tr1);
			tb2 = (EIF_TRUE);
		}
		if (tb2) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tb5 = '\0';
			tb6 = '\0';
			tb7 = '\0';
			tb8 = '\0';
			ti4_1 = eif_integer_32_item(RTCV(loc4),1);
			tr8_1 = (EIF_REAL_64) (ti4_1);
			ti4_1 = eif_integer_32_item(RTCV(loc6),1);
			tr8_2 = (EIF_REAL_64) (ti4_1);
			tr4_1 = eif_real_32_item(RTCV(loc5),1);
			tr8_3 = (EIF_REAL_64) (tr4_1);
			if ((EIF_BOOLEAN) (tr8_1 >= (EIF_REAL_64) (tr8_2 - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))))) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),1);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),1);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),1);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb8 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb8) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),2);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),2);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),2);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb7 = (EIF_BOOLEAN) (tr8_1 >= (EIF_REAL_64) (tr8_2 - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb7) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),2);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),2);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),2);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb6 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb6) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),3);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),3);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),1);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb5 = (EIF_BOOLEAN) (tr8_1 >= (EIF_REAL_64) (tr8_2 - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb5) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),3);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),3);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),1);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb4 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb4) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),4);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),4);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),2);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb3 = (EIF_BOOLEAN) (tr8_1 >= (EIF_REAL_64) (tr8_2 - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			if (tb3) {
				ti4_1 = eif_integer_32_item(RTCV(loc4),4);
				tr8_1 = (EIF_REAL_64) (ti4_1);
				ti4_1 = eif_integer_32_item(RTCV(loc6),4);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr4_1 = eif_real_32_item(RTCV(loc5),2);
				tr8_3 = (EIF_REAL_64) (tr4_1);
				tb2 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (tr8_3))));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.exists */
EIF_TYPED_VALUE F933_9839 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15559);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15559);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1061, 46))(Current)).it_b);
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7675, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_RENDERER}.driver */
EIF_TYPED_VALUE F933_9840 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "driver";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15560);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(932, Current, 15560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003A1, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(929, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7596, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {GAME_RENDERER}.dispose */
void F933_9841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15561);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7181, dtype))(Current)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5038, 865))(Current, up1x);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7675, 0x04000000, 1); /* is_dispose */
		*(EIF_BOOLEAN *)(Current + RTWA(7675, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_RENDERER}.is_dispose */
EIF_TYPED_VALUE F933_9842 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7675,Dtype(Current)));
	return r;
}


/* {GAME_RENDERER}.structure_size */
EIF_TYPED_VALUE F933_9843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "structure_size";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 0, 15563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(932, Current, 15563);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {GAME_RENDERER}.c_get_blend_mode */
EIF_TYPED_VALUE F933_9844 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_get_blend_mode";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 2, 15564);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(932, Current, 15564);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	up1 = arg1;
	up2 = arg2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5114, 865))(Current, up1x, up2x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef arg2
#undef arg1
}

/* {GAME_RENDERER}.c_set_blend_mode */
EIF_TYPED_VALUE F933_9845 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_blend_mode";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 932, Current, 0, 2, 15565);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(932, Current, 15565);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	up1 = arg1;
	ui4_1 = arg2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5115, 865))(Current, up1x, ui4_1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

void EIF_Minit933 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
