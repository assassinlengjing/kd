#include "sub.h"
char* (__cdecl* _cfltcvt_init())(int a1, char* Str, int a3, size_t Size, int a5)
{
	char* (__cdecl * result)(int, char*, int, size_t, int); // eax

	result = _cfltcvt;
	unk_4B831C = (void (*)())_cropzeros;
	unk_4B8318 = (int(__cdecl*)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))_cfltcvt;
	unk_4B8320 = (void (*)())_fassign;
	unk_4B8324 = (void (*)())_forcdecpt;
	unk_4B8328 = (void (*)())_positive;
	unk_4B832C = (void (*)())_cfltcvt;
	return result;
}