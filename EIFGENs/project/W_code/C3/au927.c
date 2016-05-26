/*
 * Code for class AUDIO_LIBRARY_SHARED
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F927_9837(EIF_REFERENCE);
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

/* {AUDIO_LIBRARY_SHARED}.audio_library */
RTOID (F927_9837)
EIF_TYPED_VALUE F927_9837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "audio_library";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F927_9837);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15505);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(926, Current, 15505);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000384, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(900, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6715, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit927 (void)
{
	GTCX
	RTOTS (9837,F927_9837)
}


#ifdef __cplusplus
}
#endif
