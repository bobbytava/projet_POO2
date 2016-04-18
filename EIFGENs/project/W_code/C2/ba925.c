/*
 * Code for class BALL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F925_9722(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F925_9723(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F925_9724(EIF_REFERENCE);
extern EIF_TYPED_VALUE F925_9725(EIF_REFERENCE);
extern EIF_TYPED_VALUE F925_9726(EIF_REFERENCE);
extern EIF_TYPED_VALUE F925_9727(EIF_REFERENCE);
extern EIF_TYPED_VALUE F925_9728(EIF_REFERENCE);
extern void EIF_Minit925(void);

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
void F925_9722 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 924, Current, 2, 4, 15416);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(924, Current, 15416);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
	loc2 = RTMS_EX_H("",0,0);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6566, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(6566, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
		loc2 = RTMS_EX_H("yball1.png",10,556708199);
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(6);
			RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
			loc2 = RTMS_EX_H("yball2.png",10,556715879);
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(8);
				RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
				loc2 = RTMS_EX_H("yball3.png",10,556723559);
			}
		}
	}
	RTHOOK(9);
	RTDBGAL(Current, 1, 0xF80003AE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(942, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7933, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6554, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6555, "open", loc1))(loc1);
		RTHOOK(12);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6556, "is_open", loc1));
		if (tb1) {
			RTHOOK(13);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7528, dtype))(Current, ur1x);
			RTHOOK(14);
			RTDBGAA(Current, dtype, 7569, 0x10000000, 1); /* x */
			*(EIF_INTEGER_32 *)(Current + RTWA(7569, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(15);
			RTDBGAA(Current, dtype, 7570, 0x10000000, 1); /* y */
			*(EIF_INTEGER_32 *)(Current + RTWA(7570, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(16);
			RTDBGAA(Current, dtype, 7580, 0x10000000, 1); /* speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7581, 0x10000000, 1); /* top_speed */
			*(EIF_INTEGER_32 *)(Current + RTWA(7581, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
			RTHOOK(18);
			RTDBGAA(Current, dtype, 7582, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7582, dtype)) = (EIF_BOOLEAN) arg4;
			RTHOOK(19);
			RTDBGAA(Current, dtype, 7583, 0x04000000, 1); /* go_up */
			*(EIF_BOOLEAN *)(Current + RTWA(7583, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7584, 0x10000000, 1); /* move_timer */
			*(EIF_INTEGER_32 *)(Current + RTWA(7584, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(21);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7533, dtype))(Current, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(22);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7533, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {BALL}.move */
void F925_9723 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 924, Current, 0, 1, 15417);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(924, Current, 15417);
	RTCC(arg1, 924, l_feature_name, 1, eif_new_type(923, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7584, 0x10000000, 1); /* move_timer */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7584, dtype)))++;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7584, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7583, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 7570, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7570, dtype))) += ti4_2;
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 7583, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7583, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7570, 0x10000000, 1); /* y */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(7570, dtype))) += ti4_2;
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7581, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 7580, 0x10000000, 1); /* speed */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3) - ((EIF_INTEGER_32) 1L));
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7583, 0x04000000, 1); /* go_up */
				*(EIF_BOOLEAN *)(Current + RTWA(7583, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(11);
		RTDBGAA(Current, dtype, 7580, 0x10000000, 1); /* speed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7580, dtype)))++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 7584, 0x10000000, 1); /* move_timer */
		*(EIF_INTEGER_32 *)(Current + RTWA(7584, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(13);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7582, dtype));
	if (tb1) {
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7569, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7569, dtype)))++;
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7569, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7555, "width", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7555, "width", Current))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 - ti4_3))) {
			RTHOOK(16);
			RTDBGAA(Current, dtype, 7582, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7582, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(17);
		RTDBGAA(Current, dtype, 7569, 0x10000000, 1); /* x */
		(*(EIF_INTEGER_32 *)(Current + RTWA(7569, dtype)))--;
		RTHOOK(18);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7569, dtype));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(19);
			RTDBGAA(Current, dtype, 7582, 0x04000000, 1); /* go_right */
			*(EIF_BOOLEAN *)(Current + RTWA(7582, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {BALL}.speed */
EIF_TYPED_VALUE F925_9724 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7580,Dtype(Current)));
	return r;
}


/* {BALL}.top_speed */
EIF_TYPED_VALUE F925_9725 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7581,Dtype(Current)));
	return r;
}


/* {BALL}.go_right */
EIF_TYPED_VALUE F925_9726 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7582,Dtype(Current)));
	return r;
}


/* {BALL}.go_up */
EIF_TYPED_VALUE F925_9727 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7583,Dtype(Current)));
	return r;
}


/* {BALL}.move_timer */
EIF_TYPED_VALUE F925_9728 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7584,Dtype(Current)));
	return r;
}


void EIF_Minit925 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
