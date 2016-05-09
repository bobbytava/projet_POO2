/*
 * Code for class SHARED_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F965_10749(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F965_10750(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F965_10751(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F965_10752(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit965(void);

#ifdef __cplusplus
}
#endif

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F965_10749
static EIF_REAL_32 inline_F965_10749 (EIF_NATURAL_32 arg1)
{
	return (EIF_REAL_32) (*(float *)&arg1)
	;
}
#define INLINE_F965_10749
#endif
#ifndef INLINE_F965_10750
static EIF_REAL_64 inline_F965_10750 (EIF_NATURAL_64 arg1)
{
	return (EIF_REAL_64) (*(double *)&arg1)
	;
}
#define INLINE_F965_10750
#endif
#ifndef INLINE_F965_10751
static EIF_NATURAL_32 inline_F965_10751 (EIF_REAL_32 arg1)
{
	return (EIF_NATURAL_32) (*(uint32_t *)&arg1)
	;
}
#define INLINE_F965_10751
#endif
#ifndef INLINE_F965_10752
static EIF_NATURAL_64 inline_F965_10752 (EIF_REAL_64 arg1)
{
	return (EIF_NATURAL_64) (*(uint64_t *)&arg1)
	;
}
#define INLINE_F965_10752
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_EXTERNAL}.natural_32_to_real_32 */
EIF_TYPED_VALUE F965_10749 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_to_real_32";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 1, 16415);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(964, Current, 16415);
	RTIV(Current, RTAL);
	Result = inline_F965_10749 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {SHARED_EXTERNAL}.natural_64_to_real_64 */
EIF_TYPED_VALUE F965_10750 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_64_to_real_64";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 1, 16416);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(964, Current, 16416);
	RTIV(Current, RTAL);
	Result = inline_F965_10750 ((EIF_NATURAL_64) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {SHARED_EXTERNAL}.real_32_to_natural_32 */
EIF_TYPED_VALUE F965_10751 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "real_32_to_natural_32";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 1, 16417);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(964, Current, 16417);
	RTIV(Current, RTAL);
	Result = inline_F965_10751 ((EIF_REAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

/* {SHARED_EXTERNAL}.real_64_to_natural_64 */
EIF_TYPED_VALUE F965_10752 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "real_64_to_natural_64";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 1, 16418);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(964, Current, 16418);
	RTIV(Current, RTAL);
	Result = inline_F965_10752 ((EIF_REAL_64) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef arg1
}

void EIF_Minit965 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
