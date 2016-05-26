/*
 * Code for class BALL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1008_10990(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1008_10991(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1008_10992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1008_10999(EIF_REFERENCE);
extern void F1008_11000(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1008_11001(EIF_REFERENCE);
extern void F1008_11002(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1008_11003(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1008_11004(EIF_REFERENCE);
extern void F1008_12854(EIF_REFERENCE, int);
extern void EIF_Minit1008(void);

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

/* {BALL}.make */
void F1008_10990 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_b
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1007, Current, 2, 4, 16620);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16620);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("size_is_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg3 < ((EIF_INTEGER_32) 4L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
	loc2 = RTMS_EX_H("",0,0);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 8723, 0x10000000, 1); /* size */
	*(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
		loc2 = RTMS_EX_H("yball1.png",10,556708199);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 8725, 0x10000000, 1); /* bounce_speed */
		*(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 8729, 0x10000000, 1); /* score */
		*(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	} else {
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
			loc2 = RTMS_EX_H("yball2.png",10,556715879);
			RTHOOK(10);
			RTDBGAA(Current, dtype, 8725, 0x10000000, 1); /* bounce_speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
			RTHOOK(11);
			RTDBGAA(Current, dtype, 8729, 0x10000000, 1); /* score */
			*(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
		} else {
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(13);
				RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
				loc2 = RTMS_EX_H("yball3.png",10,556723559);
				RTHOOK(14);
				RTDBGAA(Current, dtype, 8725, 0x10000000, 1); /* bounce_speed */
				*(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
				RTHOOK(15);
				RTDBGAA(Current, dtype, 8729, 0x10000000, 1); /* score */
				*(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
			}
		}
	}
	RTHOOK(16);
	RTDBGAL(Current, 1, 0xF800040A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1034, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9056, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(16,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8171, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8172, "open", loc1))(loc1);
		RTHOOK(19);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(8173, "is_open", loc1));
		if (tb1) {
			RTHOOK(20);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8653, dtype))(Current, ur1x);
			RTHOOK(21);
			RTDBGAA(Current, dtype, 8695, 0x10000000, 1); /* x */
			*(EIF_INTEGER_32 *)(Current + RTWA(8695, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 8696, 0x10000000, 1); /* y */
			*(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(23);
			RTDBGAA(Current, dtype, 8730, 0x10000000, 1); /* player_who_killed */
			*(EIF_INTEGER_32 *)(Current + RTWA(8730, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(24);
			RTDBGAA(Current, dtype, 8724, 0x10000000, 1); /* speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(25);
			RTDBGAA(Current, dtype, 8726, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(8726, dtype)) = (EIF_BOOLEAN) arg4;
			RTHOOK(26);
			RTDBGAA(Current, dtype, 8727, 0x04000000, 1); /* go_up */
			*(EIF_BOOLEAN *)(Current + RTWA(8727, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(27);
			RTDBGAA(Current, dtype, 8728, 0x10000000, 1); /* move_timer */
			*(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(28);
			RTDBGAA(Current, dtype, 8732, 0x04000000, 1); /* is_dead */
			*(EIF_BOOLEAN *)(Current + RTWA(8732, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(29);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8658, dtype))(Current, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(30);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8658, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTHOOK(31);
	RTDBGAA(Current, dtype, 8318, 0xF80003FE, 0); /* sound */
	tr1 = RTLNSMART(RTWCT(8318, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("pop.wav",7,1535641462);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8881, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(31,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8318, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(32);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(32,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8171, "is_openable", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(33);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8172, "open", tr1))(tr1);
		RTHOOK(34);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(34,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(8173, "is_open", tr1));
		if (tb1) {
			RTHOOK(35);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8315, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(35,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7368, "sources_add", tr1))(tr1);
			RTHOOK(36);
			RTDBGAA(Current, dtype, 8317, 0xF8000403, 0); /* source */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8315, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(36,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7369, "last_source_added", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(8317, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(37);
			tr1 = RTMS_EX_H("Cannot open sound files.",24,1305193262);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(38);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(39);
		tr1 = RTMS_EX_H("Sound files not valid.",22,1321612078);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(40);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(41);
		RTCT("bounce_speed_is_valide", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 15L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 19L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 24L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(42);
		RTCT("score_is_valide", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 25L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 50L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {BALL}.move */
void F1008_10991 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "move";
	RTEX;
#define arg1 arg1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1007, Current, 0, 1, 16621);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16621);
	RTCC(arg1, 1007, l_feature_name, 1, eif_new_type(1005, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 8728, 0x10000000, 1); /* move_timer */
	(*(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype)))++;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8727, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 8696, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype))) += ti4_2;
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 8727, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(8727, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 8696, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype))) += ti4_2;
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8679, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ((EIF_INTEGER_32) 462L))) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 8696, 0x10000000, 1); /* y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8679, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 462L) - ti4_1);
				RTHOOK(10);
				RTDBGAA(Current, dtype, 8724, 0x10000000, 1); /* speed */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
				RTHOOK(11);
				RTDBGAA(Current, dtype, 8727, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(8727, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 8724, 0x10000000, 1); /* speed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype)))++;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 8728, 0x10000000, 1); /* move_timer */
		*(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8726, dtype));
	if (tb1) {
		RTHOOK(15);
		RTDBGAA(Current, dtype, 8695, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(8695, dtype)))++;
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8695, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8680, "width", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8680, "width", Current))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 - ti4_3))) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 8726, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(8726, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 8695, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(8695, dtype)))--;
		RTHOOK(19);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8695, dtype));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			RTDBGAA(Current, dtype, 8726, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(8726, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("move_timer_is_valid", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8728, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {BALL}.size */
EIF_TYPED_VALUE F1008_10992 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8723,Dtype(Current)));
	return r;
}


/* {BALL}.speed */
EIF_TYPED_VALUE F1008_10993 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8724,Dtype(Current)));
	return r;
}


/* {BALL}.bounce_speed */
EIF_TYPED_VALUE F1008_10994 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8725,Dtype(Current)));
	return r;
}


/* {BALL}.go_right */
EIF_TYPED_VALUE F1008_10995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8726,Dtype(Current)));
	return r;
}


/* {BALL}.go_up */
EIF_TYPED_VALUE F1008_10996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8727,Dtype(Current)));
	return r;
}


/* {BALL}.move_timer */
EIF_TYPED_VALUE F1008_10997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8728,Dtype(Current)));
	return r;
}


/* {BALL}.score */
EIF_TYPED_VALUE F1008_10998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8729,Dtype(Current)));
	return r;
}


/* {BALL}.player_who_killed */
EIF_TYPED_VALUE F1008_10999 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(8730,Dtype(Current)));
	return r;
}


/* {BALL}.set_player_who_killed */
void F1008_11000 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_player_who_killed";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1007, Current, 0, 1, 16630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16630);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 8730, 0x10000000, 1); /* player_who_killed */
	*(EIF_INTEGER_32 *)(Current + RTWA(8730, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set_player_who_kill_normal", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8730, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {BALL}.is_dead */
EIF_TYPED_VALUE F1008_11001 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8732,Dtype(Current)));
	return r;
}


/* {BALL}.set_speed */
void F1008_11002 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_speed";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1007, Current, 0, 1, 16632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16632);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 8724, 0x10000000, 1); /* speed */
	*(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set_speed_normal", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8724, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {BALL}.set_is_dead */
void F1008_11003 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_dead";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1007, Current, 0, 1, 16633);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16633);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 8732, 0x04000000, 1); /* is_dead */
	*(EIF_BOOLEAN *)(Current + RTWA(8732, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set_is_dead", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8732, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
#undef arg1
}

/* {BALL}.play_sound */
void F1008_11004 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "play_sound";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1007, Current, 0, 0, 16634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1007, Current, 16634);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8317, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8964, "stop", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8183, "restart", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8317, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8318, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8972, "queue_sound", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8317, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8962, "play", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {BALL}._invariant */
void F1008_12854 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1007, Current, 0, 12853);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("size_is_valid", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8723, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 4L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("bounce_speed_is_valide", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(8725, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 15L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 19L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 24L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("score_is_valide", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(8729, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 25L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 50L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("y_is_valide", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(8696, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 462L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1008 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
