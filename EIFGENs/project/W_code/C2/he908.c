/*
 * Code for class HEARABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F908_9524(EIF_REFERENCE);
extern EIF_TYPED_VALUE F908_9525(EIF_REFERENCE);
extern EIF_TYPED_VALUE F908_9526(EIF_REFERENCE);
extern void EIF_Minit908(void);

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
void F908_9524 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 907, Current, 0, 0, 15212);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(907, Current, 15212);
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
EIF_TYPED_VALUE F908_9525 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7401,Dtype(Current)));
	return r;
}


/* {HEARABLE}.sound */
EIF_TYPED_VALUE F908_9526 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7402,Dtype(Current)));
	return r;
}


void EIF_Minit908 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
