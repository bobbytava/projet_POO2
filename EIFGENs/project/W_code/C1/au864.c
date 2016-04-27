/*
 * Code for class AUDIO_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F864_7042(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7043(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7044(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7045(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7047(EIF_REFERENCE);
extern void F864_7048(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7049(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7050(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7051(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7052(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7053(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7054(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7055(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7056(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7058(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7059(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7060(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7061(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7062(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7063(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7064(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7065(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7066(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7067(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F864_7068(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7069(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7070(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F864_7071(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F864_7072(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7073(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7074(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7075(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7076(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7077(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7078(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7079(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7080(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7081(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7082(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7083(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7084(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7085(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7086(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7087(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7088(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7096(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7097(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F864_7100(EIF_REFERENCE);
extern void EIF_Minit864(void);

#ifdef __cplusplus
}
#endif

#include <al.h>
#include <alc.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F864_7072
static EIF_INTEGER_32 inline_F864_7072 (void)
{
	return (EIF_INTEGER_32) (ALC_ALL_DEVICES_SPECIFIER)
	;
}
#define INLINE_F864_7072
#endif
#ifndef INLINE_F864_7073
static EIF_INTEGER_32 inline_F864_7073 (void)
{
	return (EIF_INTEGER_32) (ALC_DEVICE_SPECIFIER)
	;
}
#define INLINE_F864_7073
#endif
#ifndef INLINE_F864_7074
static EIF_INTEGER_32 inline_F864_7074 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_VALUE)
	;
}
#define INLINE_F864_7074
#endif
#ifndef INLINE_F864_7075
static EIF_INTEGER_32 inline_F864_7075 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_VALUE)
	;
}
#define INLINE_F864_7075
#endif
#ifndef INLINE_F864_7076
static EIF_INTEGER_32 inline_F864_7076 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_ENUM)
	;
}
#define INLINE_F864_7076
#endif
#ifndef INLINE_F864_7077
static EIF_INTEGER_32 inline_F864_7077 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_ENUM)
	;
}
#define INLINE_F864_7077
#endif
#ifndef INLINE_F864_7078
static EIF_INTEGER_32 inline_F864_7078 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_OPERATION)
	;
}
#define INLINE_F864_7078
#endif
#ifndef INLINE_F864_7079
static EIF_INTEGER_32 inline_F864_7079 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_NAME)
	;
}
#define INLINE_F864_7079
#endif
#ifndef INLINE_F864_7080
static EIF_INTEGER_32 inline_F864_7080 (void)
{
	return (EIF_INTEGER_32) (AL_OUT_OF_MEMORY)
	;
}
#define INLINE_F864_7080
#endif
#ifndef INLINE_F864_7081
static EIF_INTEGER_32 inline_F864_7081 (void)
{
	return (EIF_INTEGER_32) (ALC_OUT_OF_MEMORY)
	;
}
#define INLINE_F864_7081
#endif
#ifndef INLINE_F864_7082
static EIF_INTEGER_32 inline_F864_7082 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_DEVICE)
	;
}
#define INLINE_F864_7082
#endif
#ifndef INLINE_F864_7083
static EIF_INTEGER_32 inline_F864_7083 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_CONTEXT)
	;
}
#define INLINE_F864_7083
#endif
#ifndef INLINE_F864_7084
static EIF_INTEGER_32 inline_F864_7084 (void)
{
	return (EIF_INTEGER_32) (AL_NO_ERROR)
	;
}
#define INLINE_F864_7084
#endif
#ifndef INLINE_F864_7085
static EIF_INTEGER_32 inline_F864_7085 (void)
{
	return (EIF_INTEGER_32) (ALC_NO_ERROR)
	;
}
#define INLINE_F864_7085
#endif
#ifndef INLINE_F864_7086
static EIF_INTEGER_32 inline_F864_7086 (void)
{
	return (EIF_INTEGER_32) (AL_POSITION)
	;
}
#define INLINE_F864_7086
#endif
#ifndef INLINE_F864_7087
static EIF_INTEGER_32 inline_F864_7087 (void)
{
	return (EIF_INTEGER_32) (AL_VELOCITY)
	;
}
#define INLINE_F864_7087
#endif
#ifndef INLINE_F864_7088
static EIF_INTEGER_32 inline_F864_7088 (void)
{
	return (EIF_INTEGER_32) (AL_ORIENTATION)
	;
}
#define INLINE_F864_7088
#endif
#ifndef INLINE_F864_7089
static EIF_INTEGER_32 inline_F864_7089 (void)
{
	return (EIF_INTEGER_32) (AL_DIRECTION)
	;
}
#define INLINE_F864_7089
#endif
#ifndef INLINE_F864_7090
static EIF_INTEGER_32 inline_F864_7090 (void)
{
	return (EIF_INTEGER_32) (AL_BUFFERS_PROCESSED)
	;
}
#define INLINE_F864_7090
#endif
#ifndef INLINE_F864_7091
static EIF_INTEGER_32 inline_F864_7091 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO8)
	;
}
#define INLINE_F864_7091
#endif
#ifndef INLINE_F864_7092
static EIF_INTEGER_32 inline_F864_7092 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO8)
	;
}
#define INLINE_F864_7092
#endif
#ifndef INLINE_F864_7093
static EIF_INTEGER_32 inline_F864_7093 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO16)
	;
}
#define INLINE_F864_7093
#endif
#ifndef INLINE_F864_7094
static EIF_INTEGER_32 inline_F864_7094 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO16)
	;
}
#define INLINE_F864_7094
#endif
#ifndef INLINE_F864_7095
static EIF_INTEGER_32 inline_F864_7095 (void)
{
	return (EIF_INTEGER_32) (AL_SOURCE_STATE)
	;
}
#define INLINE_F864_7095
#endif
#ifndef INLINE_F864_7096
static EIF_INTEGER_32 inline_F864_7096 (void)
{
	return (EIF_INTEGER_32) (AL_INITIAL)
	;
}
#define INLINE_F864_7096
#endif
#ifndef INLINE_F864_7097
static EIF_INTEGER_32 inline_F864_7097 (void)
{
	return (EIF_INTEGER_32) (AL_PLAYING)
	;
}
#define INLINE_F864_7097
#endif
#ifndef INLINE_F864_7098
static EIF_INTEGER_32 inline_F864_7098 (void)
{
	return (EIF_INTEGER_32) (AL_PAUSED)
	;
}
#define INLINE_F864_7098
#endif
#ifndef INLINE_F864_7099
static EIF_INTEGER_32 inline_F864_7099 (void)
{
	return (EIF_INTEGER_32) (AL_STOPPED)
	;
}
#define INLINE_F864_7099
#endif
#ifndef INLINE_F864_7100
static EIF_INTEGER_32 inline_F864_7100 (void)
{
	return (EIF_INTEGER_32) (AL_GAIN)
	;
}
#define INLINE_F864_7100
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_EXTERNAL}.al_get_error */
EIF_TYPED_VALUE F864_7042 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_get_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12723);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12723);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alGetError();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_get_error */
EIF_TYPED_VALUE F864_7043 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_get_error";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12724);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alcGetError((ALCdevice *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_get_string */
EIF_TYPED_VALUE F864_7044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "alc_get_string";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12725);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12725);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcGetString((ALCdevice *) arg1, (ALCenum) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_create_context */
EIF_TYPED_VALUE F864_7045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "alc_create_context";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12726);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcCreateContext((ALCdevice *) arg1, (ALCint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_make_context_current */
EIF_TYPED_VALUE F864_7046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_make_context_current";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12727);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alcMakeContextCurrent((ALCcontext *) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_get_current_context */
EIF_TYPED_VALUE F864_7047 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_get_current_context";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12728);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12728);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcGetCurrentContext();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_destroy_context */
void F864_7048 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_destroy_context";
	RTEX;
#define arg1 arg1x.it_p
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
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12729);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12729);
	RTIV(Current, RTAL);alcDestroyContext((ALCcontext *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_suspend_context */
void F864_7049 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_suspend_context";
	RTEX;
#define arg1 arg1x.it_p
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
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12730);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12730);
	RTIV(Current, RTAL);alcSuspendContext((ALCcontext *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_open_device */
EIF_TYPED_VALUE F864_7050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_open_device";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12731);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12731);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcOpenDevice((const ALCchar *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_close_device */
EIF_TYPED_VALUE F864_7051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_close_device";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12732);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12732);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alcCloseDevice((ALCdevice *) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_listener_fv */
void F864_7052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_get_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12733);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12733);
	RTIV(Current, RTAL);alGetListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_set_listener_fv */
void F864_7053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_set_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12734);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12734);
	RTIV(Current, RTAL);alListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_source_fv */
void F864_7054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12735);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12735);
	RTIV(Current, RTAL);alGetSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_source_i */
void F864_7055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_i";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12736);
	RTIV(Current, RTAL);alGetSourcei((ALuint) arg1, (ALenum) arg2, (ALint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_source_f */
void F864_7056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12737);
	RTIV(Current, RTAL);alGetSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_is_source */
EIF_TYPED_VALUE F864_7057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_is_source";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12738);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alIsSource((ALuint) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_set_source_fv */
void F864_7058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12739);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12739);
	RTIV(Current, RTAL);alSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_set_source_f */
void F864_7059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12740);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12740);
	RTIV(Current, RTAL);alSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_gen_sources */
void F864_7060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12741);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12741);
	RTIV(Current, RTAL);alGenSources((ALsizei) arg1, (ALuint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_delete_sources */
void F864_7061 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_delete_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12742);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12742);
	RTIV(Current, RTAL);alDeleteSources((ALsizei) arg1, (ALuint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_gen_buffers */
void F864_7062 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_buffers";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12743);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12743);
	RTIV(Current, RTAL);alGenBuffers((ALsizei) arg1, (ALuint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_is_buffer */
EIF_TYPED_VALUE F864_7063 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_is_buffer";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12744);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12744);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alIsBuffer((ALuint) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_queue_buffers */
void F864_7064 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_queue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12745);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12745);
	RTIV(Current, RTAL);alSourceQueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_unqueue_buffers */
void F864_7065 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_unqueue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 3, 12746);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12746);
	RTIV(Current, RTAL);alSourceUnqueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_delete_buffers */
void F864_7066 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_delete_buffers";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 2, 12747);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12747);
	RTIV(Current, RTAL);alDeleteBuffers((ALsizei) arg1, (ALuint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_buffer_data */
void F864_7067 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "al_buffer_data";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 5, 12748);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12748);
	RTIV(Current, RTAL);alBufferData((ALuint) arg1, (ALenum) arg2, (ALvoid *) arg3, (ALsizei) arg4, (ALsizei) arg5);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_play */
void F864_7068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_play";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12749);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12749);
	RTIV(Current, RTAL);alSourcePlay((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_pause */
void F864_7069 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_pause";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12750);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12750);
	RTIV(Current, RTAL);alSourcePause((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_stop */
void F864_7070 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_stop";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12751);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12751);
	RTIV(Current, RTAL);alSourceStop((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_rewind */
void F864_7071 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_rewind";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 1, 12752);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12752);
	RTIV(Current, RTAL);alSourceRewind((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_all_device_specifier */
EIF_TYPED_VALUE F864_7072 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_all_device_specifier";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12753);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12753);
	RTIV(Current, RTAL);
	Result = inline_F864_7072 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_device_specifier */
EIF_TYPED_VALUE F864_7073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_device_specifier";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12754);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12754);
	RTIV(Current, RTAL);
	Result = inline_F864_7073 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_invalid_value */
EIF_TYPED_VALUE F864_7074 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_value";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12755);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12755);
	RTIV(Current, RTAL);
	Result = inline_F864_7074 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_invalid_value */
EIF_TYPED_VALUE F864_7075 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_value";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12756);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12756);
	RTIV(Current, RTAL);
	Result = inline_F864_7075 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_invalid_enum */
EIF_TYPED_VALUE F864_7076 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_enum";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12757);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12757);
	RTIV(Current, RTAL);
	Result = inline_F864_7076 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_invalid_enum */
EIF_TYPED_VALUE F864_7077 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_enum";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12758);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12758);
	RTIV(Current, RTAL);
	Result = inline_F864_7077 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_invalid_operation */
EIF_TYPED_VALUE F864_7078 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_operation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12759);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12759);
	RTIV(Current, RTAL);
	Result = inline_F864_7078 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_invalid_name */
EIF_TYPED_VALUE F864_7079 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_name";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12760);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12760);
	RTIV(Current, RTAL);
	Result = inline_F864_7079 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_out_of_memory */
EIF_TYPED_VALUE F864_7080 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_out_of_memory";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12761);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12761);
	RTIV(Current, RTAL);
	Result = inline_F864_7080 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_out_of_memory */
EIF_TYPED_VALUE F864_7081 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_out_of_memory";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12762);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12762);
	RTIV(Current, RTAL);
	Result = inline_F864_7081 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_invalid_device */
EIF_TYPED_VALUE F864_7082 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_device";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12763);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12763);
	RTIV(Current, RTAL);
	Result = inline_F864_7082 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_invalid_context */
EIF_TYPED_VALUE F864_7083 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_context";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12764);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12764);
	RTIV(Current, RTAL);
	Result = inline_F864_7083 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_no_error */
EIF_TYPED_VALUE F864_7084 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_no_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12765);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12765);
	RTIV(Current, RTAL);
	Result = inline_F864_7084 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.alc_no_error */
EIF_TYPED_VALUE F864_7085 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_no_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12766);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12766);
	RTIV(Current, RTAL);
	Result = inline_F864_7085 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_position */
EIF_TYPED_VALUE F864_7086 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_position";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12767);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12767);
	RTIV(Current, RTAL);
	Result = inline_F864_7086 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_velocity */
EIF_TYPED_VALUE F864_7087 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_velocity";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12768);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12768);
	RTIV(Current, RTAL);
	Result = inline_F864_7087 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_orientation */
EIF_TYPED_VALUE F864_7088 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_orientation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12769);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12769);
	RTIV(Current, RTAL);
	Result = inline_F864_7088 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_direction */
EIF_TYPED_VALUE F864_7089 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_direction";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12770);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12770);
	RTIV(Current, RTAL);
	Result = inline_F864_7089 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_buffers_processed */
EIF_TYPED_VALUE F864_7090 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_buffers_processed";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12771);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12771);
	RTIV(Current, RTAL);
	Result = inline_F864_7090 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_format_mono8 */
EIF_TYPED_VALUE F864_7091 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono8";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12772);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12772);
	RTIV(Current, RTAL);
	Result = inline_F864_7091 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_format_stereo8 */
EIF_TYPED_VALUE F864_7092 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo8";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12773);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12773);
	RTIV(Current, RTAL);
	Result = inline_F864_7092 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_format_mono16 */
EIF_TYPED_VALUE F864_7093 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono16";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12774);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12774);
	RTIV(Current, RTAL);
	Result = inline_F864_7093 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_format_stereo16 */
EIF_TYPED_VALUE F864_7094 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo16";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12775);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12775);
	RTIV(Current, RTAL);
	Result = inline_F864_7094 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_source_state */
EIF_TYPED_VALUE F864_7095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_source_state";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12776);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12776);
	RTIV(Current, RTAL);
	Result = inline_F864_7095 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_initial */
EIF_TYPED_VALUE F864_7096 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_initial";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12777);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12777);
	RTIV(Current, RTAL);
	Result = inline_F864_7096 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_playing */
EIF_TYPED_VALUE F864_7097 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_playing";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12778);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12778);
	RTIV(Current, RTAL);
	Result = inline_F864_7097 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_paused */
EIF_TYPED_VALUE F864_7098 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_paused";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12779);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12779);
	RTIV(Current, RTAL);
	Result = inline_F864_7098 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_stopped */
EIF_TYPED_VALUE F864_7099 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_stopped";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12780);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12780);
	RTIV(Current, RTAL);
	Result = inline_F864_7099 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_EXTERNAL}.al_gain */
EIF_TYPED_VALUE F864_7100 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_gain";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 863, Current, 0, 0, 12781);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(863, Current, 12781);
	RTIV(Current, RTAL);
	Result = inline_F864_7100 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit864 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
