/*
 * Code for class BALL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F948_10072(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10073(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F948_10074(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10075(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10076(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10077(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10078(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10079(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10080(EIF_REFERENCE);
extern void F948_10081(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10082(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10083(EIF_REFERENCE);
extern void EIF_Minit948(void);

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
void F948_10072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 947, Current, 2, 4, 15753);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15753);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
	loc2 = RTMS_EX_H("",0,0);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7890, 0x10000000, 1); /* size */
	*(EIF_INTEGER_32 *)(Current + RTWA(7890, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7890, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
		loc2 = RTMS_EX_H("yball1.png",10,556708199);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7892, 0x10000000, 1); /* bounce_speed */
		*(EIF_INTEGER_32 *)(Current + RTWA(7892, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	} else {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7890, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(7);
			RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
			loc2 = RTMS_EX_H("yball2.png",10,556715879);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7892, 0x10000000, 1); /* bounce_speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7892, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7890, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(10);
				RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
				loc2 = RTMS_EX_H("yball3.png",10,556723559);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7892, 0x10000000, 1); /* bounce_speed */
				*(EIF_INTEGER_32 *)(Current + RTWA(7892, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
			}
		}
	}
	RTHOOK(12);
	RTDBGAL(Current, 1, 0xF80003C6, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(966, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8132, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(12,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", loc1))(loc1);
		RTHOOK(15);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7664, "is_open", loc1));
		if (tb1) {
			RTHOOK(16);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7817, dtype))(Current, ur1x);
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7865, 0x10000000, 1); /* x */
			*(EIF_INTEGER_32 *)(Current + RTWA(7865, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(18);
			RTDBGAA(Current, dtype, 7866, 0x10000000, 1); /* y */
			*(EIF_INTEGER_32 *)(Current + RTWA(7866, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(19);
			RTDBGAA(Current, dtype, 7891, 0x10000000, 1); /* speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7893, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7893, dtype)) = (EIF_BOOLEAN) arg4;
			RTHOOK(21);
			RTDBGAA(Current, dtype, 7894, 0x04000000, 1); /* go_up */
			*(EIF_BOOLEAN *)(Current + RTWA(7894, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 7895, 0x10000000, 1); /* move_timer */
			*(EIF_INTEGER_32 *)(Current + RTWA(7895, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(23);
			RTDBGAA(Current, dtype, 7896, 0x04000000, 1); /* is_dead */
			*(EIF_BOOLEAN *)(Current + RTWA(7896, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(24);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7822, dtype))(Current, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(25);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7822, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTHOOK(26);
	RTDBGAA(Current, dtype, 7679, 0xF80003BE, 0); /* sound */
	tr1 = RTLNSMART(RTWCT(7679, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("pop.wav",7,1535641462);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8026, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(26,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7679, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(27,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7662, "is_openable", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(28);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(28,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7663, "open", tr1))(tr1);
		RTHOOK(29);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(7664, "is_open", tr1));
		if (tb1) {
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(30,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6729, "sources_add", tr1))(tr1);
			RTHOOK(31);
			RTDBGAA(Current, dtype, 7678, 0xF80003BF, 0); /* source */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(31,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6730, "last_source_added", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(7678, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(32);
			tr1 = RTMS_EX_H("Cannot open sound files.",24,1305193262);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(33);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(34);
		tr1 = RTMS_EX_H("Sound files not valid.",22,1321612078);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(35);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1251, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
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
void F948_10073 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15754);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15754);
	RTCC(arg1, 947, l_feature_name, 1, eif_new_type(946, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7895, 0x10000000, 1); /* move_timer */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7895, dtype)))++;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7895, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7894, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 7866, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7866, dtype))) += ti4_2;
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 7894, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7894, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7866, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7866, dtype))) += ti4_2;
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7866, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7843, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) >= ((EIF_INTEGER_32) 462L))) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 7866, 0x10000000, 1); /* y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7843, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(7866, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 462L) - ti4_1);
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7891, 0x10000000, 1); /* speed */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7892, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7894, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7894, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 7891, 0x10000000, 1); /* speed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7891, dtype)))++;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 7895, 0x10000000, 1); /* move_timer */
		*(EIF_INTEGER_32 *)(Current + RTWA(7895, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7893, dtype));
	if (tb1) {
		RTHOOK(15);
		RTDBGAA(Current, dtype, 7865, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7865, dtype)))++;
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7865, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "width", Current))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 - ti4_3))) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7893, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7893, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 7865, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7865, dtype)))--;
		RTHOOK(19);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7865, dtype));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7893, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7893, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
EIF_TYPED_VALUE F948_10074 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7890,Dtype(Current)));
	return r;
}


/* {BALL}.speed */
EIF_TYPED_VALUE F948_10075 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7891,Dtype(Current)));
	return r;
}


/* {BALL}.bounce_speed */
EIF_TYPED_VALUE F948_10076 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7892,Dtype(Current)));
	return r;
}


/* {BALL}.go_right */
EIF_TYPED_VALUE F948_10077 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7893,Dtype(Current)));
	return r;
}


/* {BALL}.go_up */
EIF_TYPED_VALUE F948_10078 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7894,Dtype(Current)));
	return r;
}


/* {BALL}.move_timer */
EIF_TYPED_VALUE F948_10079 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7895,Dtype(Current)));
	return r;
}


/* {BALL}.is_dead */
EIF_TYPED_VALUE F948_10080 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7896,Dtype(Current)));
	return r;
}


/* {BALL}.set_speed */
void F948_10081 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15750);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15750);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7891, 0x10000000, 1); /* speed */
	*(EIF_INTEGER_32 *)(Current + RTWA(7891, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {BALL}.set_is_dead */
void F948_10082 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15751);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15751);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7896, 0x04000000, 1); /* is_dead */
	*(EIF_BOOLEAN *)(Current + RTWA(7896, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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
void F948_10083 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15752);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8040, "stop", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7674, "restart", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8048, "queue_sound", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8038, "play", tr1))(tr1);
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

void EIF_Minit948 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
