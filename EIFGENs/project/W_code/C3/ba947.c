/*
 * Code for class BACKGROUND
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F947_10069(EIF_REFERENCE);
extern void F947_10070(EIF_REFERENCE);
extern EIF_TYPED_VALUE F947_10071(EIF_REFERENCE);
extern void EIF_Minit947(void);

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

/* {BACKGROUND}.make */
void F947_10069 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 946, Current, 2, 0, 15741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(946, Current, 15741);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003C6, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(966, 0x01).id);
	tr2 = RTMS_EX_H("background.png",14,1296703335);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8132, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc1))(loc1);
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7664, "is_open", loc1));
		if (tb1) {
			RTHOOK(5);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7817, dtype))(Current, ur1x);
		} else {
			RTHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7822, dtype))(Current, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7822, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTHOOK(8);
	RTDBGAL(Current, 2, 0xF80003C6, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(966, 0x01).id);
	tr2 = RTMS_EX_H("footer.png",10,1916914535);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8132, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(8,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc2))(loc2)).it_b);
	if (tb1) {
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc2))(loc2);
		RTHOOK(11);
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(7664, "is_open", loc2));
		if (tb1) {
			RTHOOK(12);
			RTDBGAA(Current, dtype, 7887, 0xF80003AC, 0); /* footer */
			tr1 = RTLNSMART(RTWCT(7887, dtype, Dftype(Current)).id);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7817, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7887, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(13);
			RTDBGAA(Current, dtype, 7887, 0xF80003AC, 0); /* footer */
			tr1 = RTLNSMART(RTWCT(7887, dtype, Dftype(Current)).id);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7822, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(13,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7887, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7887, 0xF80003AC, 0); /* footer */
		tr1 = RTLNSMART(RTWCT(7887, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7822, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(14,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7887, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(15);
	RTDBGAA(Current, dtype, 7679, 0xF80003BE, 0); /* sound */
	tr1 = RTLNSMART(RTWCT(7679, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("loop.flac",9,1925821539);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8026, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(15,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7679, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(16,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", tr1))(tr1);
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(7664, "is_open", tr1));
		if (tb1) {
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6729, "sources_add", tr1))(tr1);
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7678, 0xF80003BF, 0); /* source */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6730, "last_source_added", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(7678, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8049, "queue_sound_infinite_loop", tr1))(tr1, ur1x);
		} else {
			RTHOOK(22);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(23);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {BACKGROUND}.play_sound */
void F947_10070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "play_sound";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 946, Current, 0, 0, 15742);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(946, Current, 15742);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8038, "play", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {BACKGROUND}.footer */
EIF_TYPED_VALUE F947_10071 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7887,Dtype(Current)));
	return r;
}


void EIF_Minit947 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
