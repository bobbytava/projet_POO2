/*
 * Code for class GAME_MOUSE_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F870_8602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8603(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8604(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8605(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8607(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8608(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F870_8610(EIF_REFERENCE);
extern void EIF_Minit870(void);

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

/* {GAME_MOUSE_STATE}.default_create */
void F870_8602 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(869, Current, 14281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6538, 0x38000000, 1); /* state */
	up1 = (EIF_INTEGER_32 *) &(*(EIF_INTEGER_32 *)(Current + RTWA(6531, dtype)));
	up2 = (EIF_INTEGER_32 *) &(*(EIF_INTEGER_32 *)(Current + RTWA(6532, dtype)));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5056, 866))(Current, up1x, up2x)).it_n4);
	*(EIF_NATURAL_32 *)(Current + RTWA(6538, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {GAME_MOUSE_STATE}.x */
EIF_TYPED_VALUE F870_8603 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6531,Dtype(Current)));
	return r;
}


/* {GAME_MOUSE_STATE}.y */
EIF_TYPED_VALUE F870_8604 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6532,Dtype(Current)));
	return r;
}


/* {GAME_MOUSE_STATE}.is_left_button_pressed */
EIF_TYPED_VALUE F870_8605 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_button_pressed";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14284);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(869, Current, 14284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6538, Dtype(Current)));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6387, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
}

/* {GAME_MOUSE_STATE}.is_right_button_pressed */
EIF_TYPED_VALUE F870_8606 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_button_pressed";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14285);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(869, Current, 14285);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6538, Dtype(Current)));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6388, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
}

/* {GAME_MOUSE_STATE}.is_middle_button_pressed */
EIF_TYPED_VALUE F870_8607 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_middle_button_pressed";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14286);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(869, Current, 14286);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6538, Dtype(Current)));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6389, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
}

/* {GAME_MOUSE_STATE}.is_optionnal_button_1_pressed */
EIF_TYPED_VALUE F870_8608 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_optionnal_button_1_pressed";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14287);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(869, Current, 14287);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6538, Dtype(Current)));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6390, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
}

/* {GAME_MOUSE_STATE}.is_optionnal_button_2_pressed */
EIF_TYPED_VALUE F870_8609 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_optionnal_button_2_pressed";
	RTEX;
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 869, Current, 0, 0, 14288);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(869, Current, 14288);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6538, Dtype(Current)));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6391, 866))(Current)).it_n4);
	uu4_1 = tu4_2;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)(tu4_2 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu4_1
}

/* {GAME_MOUSE_STATE}.state */
EIF_TYPED_VALUE F870_8610 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6538,Dtype(Current)));
	return r;
}


void EIF_Minit870 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
