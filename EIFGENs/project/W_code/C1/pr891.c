/*
 * Code for class PROCESS_UTILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F891_8904(EIF_REFERENCE);
extern void F891_8905(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F891_8906(EIF_REFERENCE);
extern EIF_TYPED_VALUE F891_8907(EIF_REFERENCE);
extern EIF_TYPED_VALUE F891_8908(EIF_REFERENCE);
extern void F891_8909(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F891_8910(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F891_8911(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F891_8912(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F891_8913(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F891_8914(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F891_8915(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit891(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "eif_process.h"
#include <windows.h>
#include <Tlhelp32.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F891_8905
static void inline_F891_8905 (EIF_BOOLEAN* arg1, EIF_BOOLEAN* arg2)
{
	{
   					OSVERSIONINFOEX osvi;
   					BOOL bOsVersionInfoEx;
   					BOOL ok = TRUE;

				   ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
   				   osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
				   if( !(bOsVersionInfoEx = GetVersionEx ((OSVERSIONINFO *) &osvi)) ) {
      					osvi.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
      					if (! GetVersionEx ( (OSVERSIONINFO *) &osvi) )
   							ok = FALSE;
   					}
   					if(ok) {
   						if(osvi.dwPlatformId = VER_PLATFORM_WIN32_NT && osvi.dwMajorVersion <= 4 ) {
   							*arg1 = 1;
   						} else {
   							*arg1 = 0;
   						}

						*arg2 = 1;
   					} else {
   						*arg2 = 0;
   					}
				}
	;
}
#define INLINE_F891_8905
#endif
#ifndef INLINE_F891_8909
static void inline_F891_8909 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER* arg3)
{
	{
	FARPROC snapshotCreator = NULL;
	HMODULE toolhelpModule = (HMODULE) arg1;
	
	snapshotCreator = GetProcAddress (toolhelpModule, "CreateToolhelp32Snapshot");					
	if(snapshotCreator) {
		*arg3 = (FUNCTION_CAST_TYPE (HANDLE, WINAPI, (DWORD, DWORD)) snapshotCreator) (TH32CS_SNAPPROCESS, arg2);
		if(*arg3 == INVALID_HANDLE_VALUE) {
			*arg3 = 0;
		}						
	}
}
	;
}
#define INLINE_F891_8909
#endif
#ifndef INLINE_F891_8910
static void inline_F891_8910 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3, EIF_BOOLEAN* arg4)
{
	{
					FARPROC process32First = NULL;
					HMODULE toolhelpModule = (HMODULE) arg1;					
					PROCESSENTRY32 *pe32;
					BOOL ok = FALSE;
										
					pe32 = (PROCESSENTRY32 *)malloc (sizeof (PROCESSENTRY32));
					pe32->dwSize = sizeof( PROCESSENTRY32 );
					
					process32First = GetProcAddress (toolhelpModule, "Process32First");
					if(process32First) {
						if ((FUNCTION_CAST_TYPE (BOOL, WINAPI, (HANDLE, LPPROCESSENTRY32)) process32First) (arg2, pe32)) {
							*arg4 = 1;
							*arg3 = (EIF_POINTER)pe32;
							ok = TRUE;
	 					}
	 				}
					if(!ok) {
 						*arg3 = 0;
 						*arg4 = 0;
 						free (pe32);						 				
					}
				}
	;
}
#define INLINE_F891_8910
#endif
#ifndef INLINE_F891_8911
static void inline_F891_8911 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3, EIF_BOOLEAN* arg4)
{
	{
	FARPROC process32Next = NULL;
	HMODULE toolhelpModule = (HMODULE) arg1;

	process32Next = GetProcAddress (toolhelpModule, "Process32Next");
	
	if(process32Next)
	{
		if ((FUNCTION_CAST_TYPE (BOOL, WINAPI, (HANDLE, LPPROCESSENTRY32)) process32Next) (arg2, (PROCESSENTRY32 *)(*arg3))) {
			*arg4 = 1;
		}
		else {
			*arg4 = 0;
		}						
	}
	else {
		*arg4 = 0;
	}
}
	;
}
#define INLINE_F891_8911
#endif
#ifndef INLINE_F891_8912
static void inline_F891_8912 (EIF_POINTER arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3)
{
	{
	*arg2 = ((PROCESSENTRY32 *)(arg1))->th32ProcessID;
	*arg3 = ((PROCESSENTRY32 *)(arg1))->th32ParentProcessID;
}
	;
}
#define INLINE_F891_8912
#endif
#ifndef INLINE_F891_8913
static void inline_F891_8913 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32* arg3, EIF_BOOLEAN* arg4)
{
	{
	FARPROC queryProcess = NULL;
	HMODULE ntdllModule = (HMODULE) arg1;
	BOOL ok = FALSE;
	EIF_PROCESS_BASIC_INFORMATION pbi;
	LONG ntStatus;
	ULONG ulRetLen;
	
	HANDLE hProcess = OpenProcess (PROCESS_QUERY_INFORMATION, FALSE, arg2);
	if (hProcess) {
		queryProcess = GetProcAddress (ntdllModule, "NtQueryInformationProcess");
		if (queryProcess) {							
			ntStatus = ((FUNCTION_CAST_TYPE (LONG, WINAPI, (HANDLE, EIF_PROCESSINFOCLASS, PVOID, ULONG, PULONG))
					   queryProcess)
					   (hProcess, 
					    eif_ProcessBasicInformation, 
					    (PVOID *)&pbi, 
					    sizeof(EIF_PROCESS_BASIC_INFORMATION),
					    &ulRetLen 
					   ));
			if (!ntStatus) {
				*arg3 = pbi.InheritedFromUniqueProcessId;
				ok = TRUE;
			}
		}
		CloseHandle (hProcess);
	}
	if (ok) {
		*arg4 = 1;
	} else {
		*arg4 = 0;
	}					
}
	;
}
#define INLINE_F891_8913
#endif
#ifndef INLINE_F891_8914
static void inline_F891_8914 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32* arg4, EIF_BOOLEAN* arg5)
{
	{
	DWORD *prc_list;
	DWORD size = 1024;
	DWORD bytesReturned;
	BOOL ok = FALSE;
	FARPROC enumProcesses = NULL;
	HMODULE ntpsModule = (HMODULE) arg1;
	DWORD rlt;

	enumProcesses = GetProcAddress (ntpsModule, "EnumProcesses");
	if(enumProcesses) {					
		/* Return list of running processes. */	
		for(;;) {
			prc_list = (DWORD*)malloc (size);
			rlt = (FUNCTION_CAST_TYPE (BOOL, WINAPI, (DWORD*, DWORD, DWORD*))enumProcesses) (prc_list, size, &bytesReturned);
			if(rlt) {
				if(bytesReturned < size) {
					ok = TRUE;
					break;									
				} else {
					free (prc_list);
					size*=2;
				}
			} else {
				free (prc_list);
				break;
			}
		}							
	}
	if(ok) {
		*arg2 = prc_list;
		*arg3 = bytesReturned / sizeof(DWORD);
		*arg4 = sizeof(DWORD);
		*arg5 = TRUE;			
	} else {
		*arg2 = NULL;
		*arg3 = 0;
		*arg5 = FALSE;
	}
}
	;
}
#define INLINE_F891_8914
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_UTILITY}.process_id_pair_list */
EIF_TYPED_VALUE F891_8904 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_id_pair_list";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,loc8);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	
	RTEAA(l_feature_name, 890, Current, 10, 0, 14585);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(890, Current, 14585);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,430,0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	up1 = (EIF_BOOLEAN *) &(loc10);
	up2 = (EIF_BOOLEAN *) &(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6830, dtype))(Current, up1x, up2x);
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc3 || (EIF_BOOLEAN) !loc10)) {
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6831, dtype))(Current)).it_p);
		up1 = tp1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		up2 = (EIF_POINTER *) &(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6834, dtype))(Current, up1x, ui4_1x, up2x);
		RTHOOK(5);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			RTHOOK(6);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6831, dtype))(Current)).it_p);
			up1 = tp1;
			up2 = loc1;
			up3 = (EIF_POINTER *) &(loc2);
			up4 = (EIF_BOOLEAN *) &(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6835, dtype))(Current, up1x, up2x, up3x, up4x);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN)(loc3 == (EIF_BOOLEAN) 0)) break;
				RTHOOK(8);
				up1 = loc2;
				up2 = (EIF_INTEGER_32 *) &(loc4);
				up3 = (EIF_INTEGER_32 *) &(loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6837, dtype))(Current, up1x, up2x, up3x);
				RTHOOK(9);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc5;
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc4;
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", Result))(Result, ur1x);
				RTHOOK(10);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6831, dtype))(Current)).it_p);
				up1 = tp1;
				up2 = loc1;
				up3 = (EIF_POINTER *) &(loc2);
				up4 = (EIF_BOOLEAN *) &(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6836, dtype))(Current, up1x, up2x, up3x, up4x);
			}
			RTHOOK(11);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(loc2 != tp1)) {
				RTHOOK(12);
				free(loc2);
			}
			RTHOOK(13);
			up1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4963, 861))(Current, up1x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				if (RTAL & CK_CHECK) {
					RTHOOK(14);
					RTCT("close_handle_success", EX_CHECK);
						RTCF;
				}
			}
		}
	} else {
		RTHOOK(15);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6832, dtype))(Current)).it_p);
		up1 = tp1;
		up2 = (EIF_POINTER *) &(loc1);
		up3 = (EIF_INTEGER_32 *) &(loc6);
		up4 = (EIF_INTEGER_32 *) &(loc7);
		up5 = (EIF_BOOLEAN *) &(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6839, dtype))(Current, up1x, up2x, up3x, up4x, up5x);
		RTHOOK(16);
		tb1 = '\0';
		if (loc3) {
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			tb1 = (EIF_BOOLEAN)(loc1 != tp1);
		}
		if (tb1) {
			RTHOOK(17);
			RTDBGAL(Current, 8, 0xF8000097, 0, 0); /* loc8 */
			tr1 = RTLN(eif_new_type(151, 0x01).id);
			up1 = loc1;
			ui4_1 = (EIF_INTEGER_32) (loc6 * loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2672, Dtype(tr1)))(tr1, up1x, ui4_1x);
			RTNHOOK(17,1);
			loc8 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(19);
				if ((EIF_BOOLEAN) (loc9 >= loc6)) break;
				RTHOOK(20);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				ui4_1 = (EIF_INTEGER_32) (loc9 * loc7);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2684, "read_integer_32", loc8))(loc8, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6833, dtype))(Current)).it_p);
				up1 = tp1;
				ui4_1 = loc4;
				up2 = (EIF_INTEGER_32 *) &(loc5);
				up3 = (EIF_BOOLEAN *) &(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6838, dtype))(Current, up1x, ui4_1x, up2x, up3x);
				RTHOOK(22);
				if (loc3) {
					RTHOOK(23);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0.id, 3, 1);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc5;
					((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc4;
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", Result))(Result, ur1x);
				}
				RTHOOK(24);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				loc9++;
			}
			RTHOOK(25);
			free(loc1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ui4_1
}

/* {PROCESS_UTILITY}.check_nt_platform */
void F891_8905 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "check_nt_platform";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_BOOLEAN* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_BOOLEAN* *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 2, 14586);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(890, Current, 14586);
	RTIV(Current, RTAL);
	inline_F891_8905 ((EIF_BOOLEAN*) arg1, (EIF_BOOLEAN*) arg2);
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

/* {PROCESS_UTILITY}.toolhelp_handle */
RTOID (F891_8906)
EIF_TYPED_VALUE F891_8906 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "toolhelp_handle";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOTDB(EIF_POINTER, F891_8906);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 0, 14587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(890, Current, 14587);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1040, 0x01).id);
	tr2 = RTMS_EX_H("Kernel32.dll",12,947386476);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9270, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(9261, "item", tr1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ur1
#undef Result
}

/* {PROCESS_UTILITY}.ntps_handle */
RTOID (F891_8907)
EIF_TYPED_VALUE F891_8907 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ntps_handle";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOTDB(EIF_POINTER, F891_8907);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 0, 14588);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(890, Current, 14588);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1040, 0x01).id);
	tr2 = RTMS_EX_H("psapi.dll",9,619089004);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9270, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(9261, "item", tr1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ur1
#undef Result
}

/* {PROCESS_UTILITY}.ntdll_handle */
RTOID (F891_8908)
EIF_TYPED_VALUE F891_8908 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ntdll_handle";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOTDB(EIF_POINTER, F891_8908);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 0, 14589);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(890, Current, 14589);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1040, 0x01).id);
	tr2 = RTMS_EX_H("ntdll.dll",9,2003462764);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9270, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(9261, "item", tr1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ur1
#undef Result
}

/* {PROCESS_UTILITY}.cwin_create_toolhelp32_snapshot */
void F891_8909 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_create_toolhelp32_snapshot";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 3, 14590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(890, Current, 14590);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_toolhelp_handle_valid", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F891_8909 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER*) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {PROCESS_UTILITY}.cwin_process32_first */
void F891_8910 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "cwin_process32_first";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_BOOLEAN* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 4, 14591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(890, Current, 14591);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_toolhelp_handle_valid", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F891_8910 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER*) arg3, (EIF_BOOLEAN*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {PROCESS_UTILITY}.cwin_process32_next */
void F891_8911 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "cwin_process32_next";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_BOOLEAN* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 4, 14592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(890, Current, 14592);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_toolhelp_handle_valid", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F891_8911 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER*) arg3, (EIF_BOOLEAN*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {PROCESS_UTILITY}.cwin_get_process_id_and_parent_id */
void F891_8912 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_get_process_id_and_parent_id";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_INTEGER_32* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_INTEGER_32* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 3, 14593);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(890, Current, 14593);
	RTIV(Current, RTAL);
	inline_F891_8912 ((EIF_POINTER) arg1, (EIF_INTEGER_32*) arg2, (EIF_INTEGER_32*) arg3);
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

/* {PROCESS_UTILITY}.cwin_nt_get_parent_id */
void F891_8913 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "cwin_nt_get_parent_id";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_BOOLEAN* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_INTEGER_32* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 4, 14594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(890, Current, 14594);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ntdll_handle_attached", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F891_8913 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32*) arg3, (EIF_BOOLEAN*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {PROCESS_UTILITY}.cwin_nt_get_process_list */
void F891_8914 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "cwin_nt_get_process_list";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_BOOLEAN* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_INTEGER_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_INTEGER_32* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 5, 14595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(890, Current, 14595);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ntps_handle_attached", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F891_8914 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2, (EIF_INTEGER_32*) arg3, (EIF_INTEGER_32*) arg4, (EIF_BOOLEAN*) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
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

/* {PROCESS_UTILITY}.cwin_open_process */
EIF_TYPED_VALUE F891_8915 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_open_process";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
#define arg3 arg3x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 3, 14596);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(890, Current, 14596);
	RTIV(Current, RTAL);Result = (EIF_POINTER) OpenProcess((DWORD) arg1, (BOOL) arg2, (DWORD) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit891 (void)
{
	GTCX
	RTOTS (8906,F891_8906)
	RTOTS (8907,F891_8907)
	RTOTS (8908,F891_8908)
}


#ifdef __cplusplus
}
#endif