/*
 * Code for class GAME_RESSOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F924_9822(EIF_REFERENCE);
extern EIF_TYPED_VALUE F924_9825(EIF_REFERENCE);
extern EIF_TYPED_VALUE F924_9826(EIF_REFERENCE);
extern void EIF_Minit924(void);

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
void F924_9822 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 923, Current, 0, 0, 15499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(923, Current, 15499);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7664, 0x04000000, 1); /* is_open */
	*(EIF_BOOLEAN *)(Current + RTWA(7664, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7665, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(7665, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
EIF_TYPED_VALUE F924_9825 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7664,Dtype(Current)));
	return r;
}


/* {GAME_RESSOURCE}.has_error */
EIF_TYPED_VALUE F924_9826 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7665,Dtype(Current)));
	return r;
}


void EIF_Minit924 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
