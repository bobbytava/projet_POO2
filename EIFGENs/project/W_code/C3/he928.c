/*
 * Code for class HEARABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F928_9838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F928_9839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F928_9840(EIF_REFERENCE);
extern void EIF_Minit928(void);

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

/* {HEARABLE}.play_sound */
void F928_9838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "play_sound";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 927, Current, 0, 0, 15506);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(927, Current, 15506);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HEARABLE}.source */
EIF_TYPED_VALUE F928_9839 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7678,Dtype(Current)));
	return r;
}


/* {HEARABLE}.sound */
EIF_TYPED_VALUE F928_9840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7679,Dtype(Current)));
	return r;
}


void EIF_Minit928 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
