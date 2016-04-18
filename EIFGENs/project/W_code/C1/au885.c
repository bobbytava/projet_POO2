/*
 * Code for class AUDIO_SOUND
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F885_8660(EIF_REFERENCE);
extern void F885_10516(EIF_REFERENCE, int);
extern void EIF_Minit885(void);

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

/* {AUDIO_SOUND}.last_buffer_size */
EIF_TYPED_VALUE F885_8660 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6569,Dtype(Current)));
	return r;
}


/* {AUDIO_SOUND}._invariant */
void F885_10516 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 884, Current, 0, 10515);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("errors_valid", Current);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6566, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6557, dtype));
	if ((tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit885 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
