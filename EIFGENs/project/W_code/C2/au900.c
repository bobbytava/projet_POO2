/*
 * Code for class AUDIO_OPENAL_ERROR_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F900_8832(EIF_REFERENCE);
extern void F900_8833(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F900_8834(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F900_8835(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F900_8836(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F900_8837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F900_8838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F900_8839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F900_8840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F900_8841(EIF_REFERENCE);
extern void EIF_Minit900(void);

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

/* {AUDIO_OPENAL_ERROR_MANAGER}.clear_error */
void F900_8832 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 899, Current, 0, 0, 14497);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14497);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6714, 0x10000000, 1); /* last_alc_error_code */
	tp1 = ((EIF_POINTER) 0);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4956, 866))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6713, 0x10000000, 1); /* last_al_error_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, 866))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6698, 898))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_error", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6706, dtype));
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

/* {AUDIO_OPENAL_ERROR_MANAGER}.clear_alc_error */
void F900_8833 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "clear_alc_error";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 1, 14498);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14498);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6698, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6714, 0x10000000, 1); /* last_alc_error_code */
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4956, 866))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {AUDIO_OPENAL_ERROR_MANAGER}.read_al_error */
void F900_8834 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_al_error";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 1, 14499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14499);
	RTCC(arg1, 899, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6714, 0x10000000, 1); /* last_alc_error_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4998, 866))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6713, 0x10000000, 1); /* last_al_error_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, 866))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6706, 0x04000000, 1); /* has_error */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 866))(Current)).it_i4);
	*(EIF_BOOLEAN *)(Current + RTWA(6706, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ti4_2);
	RTHOOK(4);
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6706, dtype));
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6701, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", tr1))(tr1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(126, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4395, "to_string_8", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("\012",1,10);
		ur1 = tr3;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", tr2))(tr2, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(126, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6707, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4395, "to_string_8", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr3))(tr3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", tr2))(tr2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {AUDIO_OPENAL_ERROR_MANAGER}.read_alc_error */
void F900_8835 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "read_alc_error";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 2, 14490);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14490);
	RTCC(arg2, 899, l_feature_name, 2, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6713, 0x10000000, 1); /* last_al_error_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 866))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6714, 0x10000000, 1); /* last_alc_error_code */
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4956, 866))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6706, 0x04000000, 1); /* has_error */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4998, 866))(Current)).it_i4);
	*(EIF_BOOLEAN *)(Current + RTWA(6706, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ti4_2);
	RTHOOK(4);
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6706, dtype));
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6701, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", tr1))(tr1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(126, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4395, "to_string_8", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("\012",1,10);
		ur1 = tr3;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", tr2))(tr2, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(126, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6707, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4395, "to_string_8", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr3))(tr3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", tr2))(tr2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {AUDIO_OPENAL_ERROR_MANAGER}.put_manual_error */
void F900_8836 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_manual_error";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 2, 14491);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14491);
	RTCC(arg1, 899, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTCC(arg2, 899, l_feature_name, 2, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6713, 0x10000000, 1); /* last_al_error_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 866))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6712, 0x04000000, 1); /* is_manual_error */
	*(EIF_BOOLEAN *)(Current + RTWA(6712, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6699, 898))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT(NULL, EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6706, dtype));
		if (tb1) {
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
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {AUDIO_OPENAL_ERROR_MANAGER}.is_error_managable */
EIF_TYPED_VALUE F900_8837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_error_managable";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 899, Current, 0, 0, 14492);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14492);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, 866))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 866))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {AUDIO_OPENAL_ERROR_MANAGER}.is_manual_error */
EIF_TYPED_VALUE F900_8838 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6712,Dtype(Current)));
	return r;
}


/* {AUDIO_OPENAL_ERROR_MANAGER}.last_al_error_code */
EIF_TYPED_VALUE F900_8839 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6713,Dtype(Current)));
	return r;
}


/* {AUDIO_OPENAL_ERROR_MANAGER}.last_alc_error_code */
EIF_TYPED_VALUE F900_8840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6714,Dtype(Current)));
	return r;
}


/* {AUDIO_OPENAL_ERROR_MANAGER}.last_error */
EIF_TYPED_VALUE F900_8841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 899, Current, 0, 0, 14496);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(899, Current, 14496);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6712, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6707, 898))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 866))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(4);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4989, 866))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(5);
				RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
				Result = RTMS_EX_H("An invalid enum value was passed to an OpenAL function.",55,349213998);
			} else {
				RTHOOK(6);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4988, 866))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(7);
					RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
					Result = RTMS_EX_H("An invalid value was passed to an OpenAL function.",50,1079530286);
				} else {
					RTHOOK(8);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4991, 866))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
						RTHOOK(9);
						RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
						Result = RTMS_EX_H("The requested operation is not valid.",37,1341131310);
					} else {
						RTHOOK(10);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4992, 866))(Current)).it_i4);
						if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
							RTHOOK(11);
							RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
							Result = RTMS_EX_H("A bad name (ID) was passed to an OpenAL function.",49,579193134);
						} else {
							RTHOOK(12);
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6713, dtype));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, 866))(Current)).it_i4);
							if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
								RTHOOK(13);
								RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
								Result = RTMS_EX_H("The requested operation resulted in OpenAL running out of memory.",65,1392036398);
							} else {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
								Result = RTMS_EX_H("Unmanaged OpenAL error.",23,1186405678);
							}
						}
					}
				}
			}
		} else {
			RTHOOK(15);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4998, 866))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
				RTHOOK(16);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4987, 866))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(17);
					RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
					Result = RTMS_EX_H("An invalid value was passed to an OpenAL context function.",58,268399662);
				} else {
					RTHOOK(18);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4995, 866))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
						RTHOOK(19);
						RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
						Result = RTMS_EX_H("The device is not valid.",24,173312046);
					} else {
						RTHOOK(20);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4996, 866))(Current)).it_i4);
						if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
							RTHOOK(21);
							RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
							Result = RTMS_EX_H("The context is not valid.",25,499321390);
						} else {
							RTHOOK(22);
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4990, 866))(Current)).it_i4);
							if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
								RTHOOK(23);
								RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
								Result = RTMS_EX_H("Invalid enum parameter passed to an ALC call.",45,1324644398);
							} else {
								RTHOOK(24);
								ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6714, dtype));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, 866))(Current)).it_i4);
								if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
									RTHOOK(25);
									RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
									Result = RTMS_EX_H("Out of memory.",14,1781610286);
								} else {
									RTHOOK(26);
									RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
									Result = RTMS_EX_H("Unmanaged OpenAL context error.",31,593232942);
								}
							}
						}
					}
				}
			} else {
				RTHOOK(27);
				RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
				Result = RTMS_EX_H("No error.",9,1376886830);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit900 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
