/*
 * Code for class GAME_RESSOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F887_9297(EIF_REFERENCE);
extern EIF_TYPED_VALUE F887_9300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F887_9301(EIF_REFERENCE);
extern void EIF_Minit887(void);

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

/* {GAME_RESSOURCE}.default_create */
void F887_9297 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 886, Current, 0, 0, 15000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(886, Current, 15000);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7191, 0x04000000, 1); /* is_open */
	*(EIF_BOOLEAN *)(Current + RTWA(7191, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7192, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(7192, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GAME_RESSOURCE}.is_open */
EIF_TYPED_VALUE F887_9300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7191,Dtype(Current)));
	return r;
}


/* {GAME_RESSOURCE}.has_error */
EIF_TYPED_VALUE F887_9301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7192,Dtype(Current)));
	return r;
}


void EIF_Minit887 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
