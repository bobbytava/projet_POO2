/*
 * Code for class GAME_HAPTIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F950_10380(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10381(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10382(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10383(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10388(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10389(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10390(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10391(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10392(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10393(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10394(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10396(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10397(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10398(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10399(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10400(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10401(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10402(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10403(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10404(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_10405(EIF_REFERENCE);
extern void F950_10406(EIF_REFERENCE);
extern void F950_10407(EIF_REFERENCE);
extern void F950_10408(EIF_REFERENCE);
extern void F950_10409(EIF_REFERENCE);
extern void F950_10410(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F950_10411(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_10412(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10413(EIF_REFERENCE);
extern void F950_10414(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_10415(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10416(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10417(EIF_REFERENCE);
extern void F950_10418(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F950_10419(EIF_REFERENCE);
extern void F950_10420(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F950_10421(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_10424(EIF_REFERENCE);
extern void F950_10425(EIF_REFERENCE);
extern void F950_10636(EIF_REFERENCE, int);
extern void EIF_Minit950(void);

#ifdef __cplusplus
}
#endif

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

/* {GAME_HAPTIC}.default_create */
void F950_10380 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16097);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 16097);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 8201, 0xF8000137, 0); /* internal_compiled_effect */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,430,0xFF01,893,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8201, Dtype(Current))) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GAME_HAPTIC}.is_open */
EIF_TYPED_VALUE F950_10381 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open";
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16098);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 16098);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, Dtype(Current)));
	tb1 = !tp1;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
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

/* {GAME_HAPTIC}.is_constant_effect_supported */
EIF_TYPED_VALUE F950_10382 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_constant_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16099);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6413, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_periodic_sine_effect_supported */
EIF_TYPED_VALUE F950_10383 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_periodic_sine_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16100);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6414, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_periodic_triangle_effect_supported */
EIF_TYPED_VALUE F950_10384 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_periodic_triangle_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16101);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6416, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_periodic_saw_tooth_up_effect_supported */
EIF_TYPED_VALUE F950_10385 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_periodic_saw_tooth_up_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16102);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6417, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_periodic_saw_tooth_down_effect_supported */
EIF_TYPED_VALUE F950_10386 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_periodic_saw_tooth_down_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16103);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6418, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_linear_ramp_effect_supported */
EIF_TYPED_VALUE F950_10387 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_linear_ramp_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16104);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6419, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_conditionnal_spring_effect_supported */
EIF_TYPED_VALUE F950_10388 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_conditionnal_spring_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16105);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6420, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_conditionnal_damper_effect_supported */
EIF_TYPED_VALUE F950_10389 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_conditionnal_damper_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16106);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6421, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_conditionnal_inertia_effect_supported */
EIF_TYPED_VALUE F950_10390 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_conditionnal_inertia_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16107);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6422, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_conditionnal_friction_effect_supported */
EIF_TYPED_VALUE F950_10391 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_conditionnal_friction_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16108);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6423, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_left_right_effect_supported */
EIF_TYPED_VALUE F950_10392 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_right_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16109);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6415, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_custom_effect_supported */
EIF_TYPED_VALUE F950_10393 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_custom_effect_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16110);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6424, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_gain_control_supported */
EIF_TYPED_VALUE F950_10394 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_gain_control_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16111);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6425, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_auto_center_supported */
EIF_TYPED_VALUE F950_10395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_auto_center_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16112);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6426, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_status_query_supported */
EIF_TYPED_VALUE F950_10396 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_status_query_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16113);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6427, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_pause_supported */
EIF_TYPED_VALUE F950_10397 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_pause_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16114);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16114);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5232, 866))(Current, up1x)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6428, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
}

/* {GAME_HAPTIC}.is_rumble_supported */
EIF_TYPED_VALUE F950_10398 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_rumble_supported";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16115);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5235, 866))(Current, up1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {GAME_HAPTIC}.is_paused */
EIF_TYPED_VALUE F950_10399 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8178,Dtype(Current)));
	return r;
}


/* {GAME_HAPTIC}.is_rumble */
EIF_TYPED_VALUE F950_10400 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8179,Dtype(Current)));
	return r;
}


/* {GAME_HAPTIC}.axes_count */
EIF_TYPED_VALUE F950_10401 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "axes_count";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16118);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5230, 866))(Current, up1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {GAME_HAPTIC}.maximum_effect_compiled */
EIF_TYPED_VALUE F950_10402 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_effect_compiled";
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
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16119);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5238, 866))(Current, up1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot get the maximum number of effect that an haptic can compile.",67,433638446);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.maximum_effect_playing */
EIF_TYPED_VALUE F950_10403 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_effect_playing";
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
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16120);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5239, 866))(Current, up1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot get the maximum number of effect that an haptic can play.",64,1550882862);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.is_effect_supported */
EIF_TYPED_VALUE F950_10404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_effect_supported";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 1, 16121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16121);
	RTCC(arg1, 949, l_feature_name, 1, eif_new_type(930, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1060, "item", arg1))(arg1)).it_p);
	up2 = tp2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5246, 866))(Current, up1x, up2x)).it_i4);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot validate if an effect is supported by an haptic",54,420548451);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {GAME_HAPTIC}.open */
void F950_10405 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "open";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16122);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 8200, 0x40000000, 1); /* item */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8202, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(8200, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("Cannot open the haptic device",29,610996325);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6674, dtype))(Current, up1x, ur1x);
	RTHOOK(5);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8173, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(6);
		ui4_1 = ((EIF_INTEGER_32) 100L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8193, dtype))(Current, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_open", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.close */
void F950_10406 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16123);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5227, 866))(Current, up1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 8200, 0x40000000, 1); /* item */
	tp1 = ((EIF_POINTER) 0);
	*(EIF_POINTER *)(Current + RTWA(8200, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_close", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_HAPTIC}.pause */
void F950_10407 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pause";
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
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16124);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pause_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8176, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_paused", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8178, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5233, 866))(Current, up1x)).it_i4);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot pause the haptic effect.",31,615986990);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 8178, 0x04000000, 1); /* is_paused */
		*(EIF_BOOLEAN *)(Current + RTWA(8178, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_paused", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8178, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || (tb2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.resume */
void F950_10408 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "resume";
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
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16125);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16125);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pause_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8176, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_paused", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8178, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, 866))(Current, up1x)).it_i4);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot resume the effect.",25,462379566);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 8178, 0x04000000, 1); /* is_paused */
		*(EIF_BOOLEAN *)(Current + RTWA(8178, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("in_unpaused", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8178, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || ((EIF_BOOLEAN) !tb2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.initialize_rumble */
void F950_10409 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_rumble";
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
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16126);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("rumble_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8177, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_already_rumble", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8179, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5237, 866))(Current, up1x)).it_i4);
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot initialize a rumble playback.",36,2038744366);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 8179, 0x04000000, 1); /* is_rumble */
		*(EIF_BOOLEAN *)(Current + RTWA(8179, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_rumble_activated", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8179, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || (tb2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.rumble_play */
void F950_10410 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "rumble_play";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 2, 16127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16127);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("rumble_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8177, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_rumble_device", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8179, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("strength_is_valid", EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) (arg1 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
			tb1 = (EIF_BOOLEAN) (arg1 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	ur4_1 = arg1;
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5240, 866))(Current, up1x, ur4_1x, uu4_1x)).it_i4);
	RTHOOK(7);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot playback a rumble.",25,1717594414);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
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
#undef ur4_1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {GAME_HAPTIC}.rumble_play_infinite_length */
void F950_10411 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "rumble_play_infinite_length";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REAL_32 tr4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 16128);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16128);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("rumble_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8177, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_rumble_device", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8179, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("strength_is_valid", EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) (arg1 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
			tb1 = (EIF_BOOLEAN) (arg1 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur4_1 = arg1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6429, 866))(Current)).it_n4);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8189, dtype))(Current, ur4_1x, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur4_1
#undef uu4_1
#undef arg1
}

/* {GAME_HAPTIC}.rumble_stop */
void F950_10412 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rumble_stop";
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
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16129);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("rumble_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8177, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_rumble_device", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8179, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5241, 866))(Current, up1x)).it_i4);
	RTHOOK(6);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Cannot stop a rumble.",21,484410926);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_HAPTIC}.gain */
EIF_TYPED_VALUE F950_10413 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gain";
	RTEX;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16130);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16130);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("gain_control_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8173, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(8203, dtype));
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

/* {GAME_HAPTIC}.set_gain */
void F950_10414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_gain";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 1, 16131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16131);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("gain_control_supported", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8173, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5242, 866))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ui4_1 = loc1;
		tr1 = RTMS_EX_H("Cannot set the haptic gain",26,318475118);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 8203, 0x10000000, 1); /* i_gain */
		*(EIF_INTEGER_32 *)(Current + RTWA(8203, dtype)) = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_assign", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8192, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {GAME_HAPTIC}.stop_all_effects */
void F950_10415 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_all_effects";
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
	
	RTEAA(l_feature_name, 949, Current, 1, 0, 16132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16132);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(8200, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5245, 866))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Could not stop all effect on haptic.",36,324131374);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6673, dtype))(Current, ui4_1x, ur1x);
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

/* {GAME_HAPTIC}.compiled_effect_count */
EIF_TYPED_VALUE F950_10416 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "compiled_effect_count";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16133);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 16133);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8201, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {GAME_HAPTIC}.compiled_effects */
EIF_TYPED_VALUE F950_10417 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "compiled_effects";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16134);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 16134);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003BF, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,959,0xFF01,893,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8201, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7467, Dtype(tr1)))(tr1, ur1x);
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
#undef up1
#undef ur1
}

/* {GAME_HAPTIC}.compile */
void F950_10418 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compile";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur2);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 949, Current, 1, 1, 16135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16135);
	RTCC(arg1, 949, l_feature_name, 1, eif_new_type(930, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("current_valid", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("effect_valid", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1061, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("effect_supported", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8183, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6605, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800037D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(893, 0x01).id);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6677, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6681, "is_open", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8201, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 6613, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(6613, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_count_valid", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8195, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8195, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_count_not_null", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8195, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("last_compiled_valid", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6613, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = '\0';
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8198, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6681, "is_open", tr1))(tr1)).it_b);
			if (tb4) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8198, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,2);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6679, "haptic", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tb3 = RTCEQ(tr2, Current);
			}
			if (tb3) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8198, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,3);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6680, "effect", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tb2 = RTCEQ(tr2, arg1);
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
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg1
}

/* {GAME_HAPTIC}.last_compiled_effect */
EIF_TYPED_VALUE F950_10419 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_compiled_effect";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16136);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("element_exist", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8195, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF800037D, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8201, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2466, "last", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {GAME_HAPTIC}.remove_compiled_effect */
void F950_10420 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_compiled_effect";
	RTEX;
#define arg1 arg1x.it_r
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
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 16137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16137);
	RTCC(arg1, 949, l_feature_name, 1, eif_new_type(893, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8201, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1714, "prune_all", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("removed", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1698, "has", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
#undef up1
#undef ur1
#undef arg1
}

/* {GAME_HAPTIC}.item */
EIF_TYPED_VALUE F950_10421 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(8200,Dtype(Current)));
	return r;
}


/* {GAME_HAPTIC}.internal_compiled_effect */
EIF_TYPED_VALUE F950_10422 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8201,Dtype(Current)));
	return r;
}


/* {GAME_HAPTIC}.i_gain */
EIF_TYPED_VALUE F950_10424 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8203,Dtype(Current)));
	return r;
}


/* {GAME_HAPTIC}.dispose */
void F950_10425 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 16142);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 16142);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8160, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(8185, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GAME_HAPTIC}._invariant */
void F950_10636 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 949, Current, 0, 10635);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("is_haptic_enabled", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7474, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7377, "is_haptic_enable", tr1))(tr1)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit950 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif