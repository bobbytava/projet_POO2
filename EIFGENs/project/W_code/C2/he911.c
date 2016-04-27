/*
 * Code for class HEARABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F911_9574(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9575(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9576(EIF_REFERENCE);
extern void EIF_Minit911(void);

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
void F911_9574 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15262);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(910, Current, 15262);
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
EIF_TYPED_VALUE F911_9575 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7451,Dtype(Current)));
	return r;
}


/* {HEARABLE}.sound */
EIF_TYPED_VALUE F911_9576 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7452,Dtype(Current)));
	return r;
}


void EIF_Minit911 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
