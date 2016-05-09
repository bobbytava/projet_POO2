/*
 * Code for class TEXT_SURFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_10767(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_10768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_10769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_10770(EIF_REFERENCE);
extern void EIF_Minit969(void);

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

/* {TEXT_SURFACE}.make */
void F969_10767 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	struct eif_ex_22 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc5.overhead, 0, OVERHEAD + 0);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(22, 0x00).id);
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLR(8,loc7);
	RTLR(9,loc1);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,tr2);
	RTLR(13,loc8);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 968, Current, 8, 3, 16434);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 16434);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTCC(arg2, 968, l_feature_name, 2, eif_new_type(963, 0x01), 0x01);
	RTCC(arg3, 968, l_feature_name, 3, eif_new_type(874, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("text_is_enabled", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8436, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8437, "is_text_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("font_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(arg2 + RTVA(6603, "is_open", arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 8513, 0xF80000D9, 0); /* text */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(8513, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 8514, 0xF80003C3, 0); /* font */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(8514, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 8515, 0xF800036A, 0); /* color */
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(8515, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(6);
	RTDBGAL(Current, 3, 0xF80000D9, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8513, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8513, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4359, "is_empty", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(8);
		RTDBGAL(Current, 3, 0xF80000D9, 0, 0); /* loc3 */
		loc3 = RTMS_EX_H(" ",1,32);
	}
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF80003A3, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(931, 0x01).id);
	ur1 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6547, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 6, 0x40000000, 1, 0); /* loc6 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8491, "item", arg2))(arg2)).it_p);
	loc6 = (EIF_POINTER) tp1;
	RTHOOK(11);
	loc7 = RTCCL(arg2);
	loc7 = RTRV(eif_new_type(970, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8520, "lock_cpf_mutex", loc7))(loc7);
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8513, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4356, "is_string_8", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(14);
		RTDBGAL(Current, 1, 0xF800007E, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(126, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1642, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(14,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		RTDBGAL(Current, 4, 0xF80003B1, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(945, 0x01).id);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8491, "item", arg2))(arg2)).it_p);
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1661, "item", loc1))(loc1)).it_p);
		up2 = tp2;
		tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1060, "item", loc2))(loc2)).it_p);
		up3 = tp3;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8516, dtype))(Current, up1x, up2x, up3x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8004, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(15,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(16);
		RTDBGAL(Current, 5, 0x80000016, 1, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(22, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(16,1);
		tr1 = (tr1);
		RTXA(tr1, loc5);
		RTHOOK(17);
		RTDBGAL(Current, 1, 0xF800007E, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(126, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4402, "to_string_32", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(598, "string_32_to_utf_8_string_8", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1642, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(17,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		RTDBGAL(Current, 4, 0xF80003B1, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(945, 0x01).id);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8491, "item", arg2))(arg2)).it_p);
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1661, "item", loc1))(loc1)).it_p);
		up2 = tp2;
		tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1060, "item", loc2))(loc2)).it_p);
		up3 = tp3;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8517, dtype))(Current, up1x, up2x, up3x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8004, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(18,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(19);
	loc8 = RTCCL(arg2);
	loc8 = RTRV(eif_new_type(970, 0x01),loc8);
	if (EIF_TEST(loc8)) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8521, "unlock_cpf_mutex", loc8))(loc8);
	}
	RTHOOK(21);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6601, "is_openable", loc4))(loc4)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(22);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6602, "open", loc4))(loc4);
		RTHOOK(23);
		tb1 = *(EIF_BOOLEAN *)(loc4 + RTVA(6603, "is_open", loc4));
		if (tb1) {
			RTHOOK(24);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7578, dtype))(Current, ur1x);
		} else {
			RTHOOK(25);
			tp1 = ((EIF_POINTER) 0);
			up1 = tp1;
			tr1 = RTMS_EX_H("Cannot create text surface.",27,2059313454);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6674, dtype))(Current, up1x, ur1x);
			RTHOOK(26);
			RTDBGAA(Current, dtype, 7593, 0xF80003B1, 0); /* image */
			tr1 = RTLNSMART(RTWCT(7593, dtype, Dftype(Current)).id);
			tp1 = ((EIF_POINTER) 0);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8005, Dtype(tr1)))(tr1, up1x);
			RTNHOOK(26,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7593, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(27);
		tp1 = ((EIF_POINTER) 0);
		up1 = tp1;
		tr1 = RTMS_EX_H("Cannot create text surface.",27,2059313454);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6674, dtype))(Current, up1x, ur1x);
		RTHOOK(28);
		RTDBGAA(Current, dtype, 7593, 0xF80003B1, 0); /* image */
		tr1 = RTLNSMART(RTWCT(7593, dtype, Dftype(Current)).id);
		tp1 = ((EIF_POINTER) 0);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8005, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(28,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7593, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef arg3
#undef arg2
#undef arg1
}

/* {TEXT_SURFACE}.text */
EIF_TYPED_VALUE F969_10768 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8513,Dtype(Current)));
	return r;
}


/* {TEXT_SURFACE}.font */
EIF_TYPED_VALUE F969_10769 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8514,Dtype(Current)));
	return r;
}


/* {TEXT_SURFACE}.color */
EIF_TYPED_VALUE F969_10770 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8515,Dtype(Current)));
	return r;
}


void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
