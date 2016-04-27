/*
 * Code for class BALL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F927_9772(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F927_9773(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9780(EIF_REFERENCE);
extern void F927_9781(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F927_9782(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F927_9783(EIF_REFERENCE);
extern void EIF_Minit927(void);

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
void F927_9772 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 926, Current, 2, 4, 15466);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15466);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
	loc2 = RTMS_EX_H("",0,0);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7631, 0x10000000, 1); /* size */
	*(EIF_INTEGER_32 *)(Current + RTWA(7631, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7631, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
		loc2 = RTMS_EX_H("yball1.png",10,556708199);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7633, 0x10000000, 1); /* top_speed */
		*(EIF_INTEGER_32 *)(Current + RTWA(7633, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	} else {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7631, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(7);
			RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
			loc2 = RTMS_EX_H("yball2.png",10,556715879);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7633, 0x10000000, 1); /* top_speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7633, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7631, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(10);
				RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
				loc2 = RTMS_EX_H("yball3.png",10,556723559);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7633, 0x10000000, 1); /* top_speed */
				*(EIF_INTEGER_32 *)(Current + RTWA(7633, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
			}
		}
	}
	RTHOOK(12);
	RTDBGAL(Current, 1, 0xF80003B2, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(946, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8010, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(12,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6601, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6602, "open", loc1))(loc1);
		RTHOOK(15);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6603, "is_open", loc1));
		if (tb1) {
			RTHOOK(16);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7579, dtype))(Current, ur1x);
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7621, 0x10000000, 1); /* x */
			*(EIF_INTEGER_32 *)(Current + RTWA(7621, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(18);
			RTDBGAA(Current, dtype, 7622, 0x10000000, 1); /* y */
			*(EIF_INTEGER_32 *)(Current + RTWA(7622, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(19);
			RTDBGAA(Current, dtype, 7632, 0x10000000, 1); /* speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7634, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7634, dtype)) = (EIF_BOOLEAN) arg4;
			RTHOOK(21);
			RTDBGAA(Current, dtype, 7635, 0x04000000, 1); /* go_up */
			*(EIF_BOOLEAN *)(Current + RTWA(7635, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 7636, 0x10000000, 1); /* move_timer */
			*(EIF_INTEGER_32 *)(Current + RTWA(7636, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(23);
			RTDBGAA(Current, dtype, 7637, 0x04000000, 1); /* is_dead */
			*(EIF_BOOLEAN *)(Current + RTWA(7637, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(24);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7584, dtype))(Current, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(25);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7584, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTHOOK(26);
	RTDBGAA(Current, dtype, 7452, 0xF80003AC, 0); /* sound */
	tr1 = RTLNSMART(RTWCT(7452, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("pop.wav",7,1535641462);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7817, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(26,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7452, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7452, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(27,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6601, "is_openable", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(28);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7452, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(28,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6602, "open", tr1))(tr1);
		RTHOOK(29);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7452, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6603, "is_open", tr1));
		if (tb1) {
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(30,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6645, "sources_add", tr1))(tr1);
			RTHOOK(31);
			RTDBGAA(Current, dtype, 7451, 0xF80003AD, 0); /* source */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(31,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6646, "last_source_added", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(7451, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(32);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7451, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(32,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7452, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7839, "queue_sound", tr1))(tr1, ur1x);
		} else {
			RTHOOK(33);
			tr1 = RTMS_EX_H("Cannot open sound files.",24,1305193262);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(34);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(35);
		tr1 = RTMS_EX_H("Sound files not valid.",22,1321612078);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(36);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
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
void F927_9773 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15467);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15467);
	RTCC(arg1, 926, l_feature_name, 1, eif_new_type(927, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7636, 0x10000000, 1); /* move_timer */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7636, dtype)))++;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7636, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7635, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 7622, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7622, dtype))) += ti4_2;
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 7635, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7635, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7622, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7622, dtype))) += ti4_2;
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7622, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7605, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ((EIF_INTEGER_32) 462L))) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 7622, 0x10000000, 1); /* y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7605, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(7622, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 462L) - ti4_1);
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7632, 0x10000000, 1); /* speed */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7633, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7635, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7635, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 7632, 0x10000000, 1); /* speed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7632, dtype)))++;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 7636, 0x10000000, 1); /* move_timer */
		*(EIF_INTEGER_32 *)(Current + RTWA(7636, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7634, dtype));
	if (tb1) {
		RTHOOK(15);
		RTDBGAA(Current, dtype, 7621, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7621, dtype)))++;
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7621, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7606, "width", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7606, "width", Current))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 - ti4_3))) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7634, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7634, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 7621, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7621, dtype)))--;
		RTHOOK(19);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7621, dtype));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7634, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7634, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {BALL}.size */
EIF_TYPED_VALUE F927_9774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7631,Dtype(Current)));
	return r;
}


/* {BALL}.speed */
EIF_TYPED_VALUE F927_9775 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7632,Dtype(Current)));
	return r;
}


/* {BALL}.top_speed */
EIF_TYPED_VALUE F927_9776 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7633,Dtype(Current)));
	return r;
}


/* {BALL}.go_right */
EIF_TYPED_VALUE F927_9777 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7634,Dtype(Current)));
	return r;
}


/* {BALL}.go_up */
EIF_TYPED_VALUE F927_9778 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7635,Dtype(Current)));
	return r;
}


/* {BALL}.move_timer */
EIF_TYPED_VALUE F927_9779 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7636,Dtype(Current)));
	return r;
}


/* {BALL}.is_dead */
EIF_TYPED_VALUE F927_9780 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7637,Dtype(Current)));
	return r;
}


/* {BALL}.set_is_dead */
void F927_9781 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_dead";
	RTEX;
#define arg1 arg1x.it_b
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
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15475);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(926, Current, 15475);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7637, 0x04000000, 1); /* is_dead */
	*(EIF_BOOLEAN *)(Current + RTWA(7637, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {BALL}.set_speed */
void F927_9782 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_speed";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15476);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(926, Current, 15476);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7632, 0x10000000, 1); /* speed */
	*(EIF_INTEGER_32 *)(Current + RTWA(7632, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {BALL}.play_sound */
void F927_9783 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15477);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(926, Current, 15477);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7451, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7829, "play", tr1))(tr1);
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

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
