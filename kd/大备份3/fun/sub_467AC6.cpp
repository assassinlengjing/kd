#include "sub.h" 
int sub_467AC6(int thisx, const char* a2)
{
	CHAR FileName[256]; // [esp+4h] [ebp-100h] BYREF

	*(_DWORD*)(thisx + 1296) = 0;
	*(_DWORD*)(thisx + 2528) = 0;
	*(_DWORD*)(thisx + 2532) = 0;
	*(_DWORD*)(thisx + 2488) = 100;
	*(_DWORD*)(thisx + 2492) = 0;
	unk_4B93AC = 0;
	wsprintfA(FileName, "Demo\\%s", a2);
	sub_4891E4((_DWORD*)(thisx + 128), FileName);
	sub_47F958((_DWORD*)(thisx + 736));
	*(_BYTE*)(thisx + 2516) = 1;
	return sub_456169((void*)thisx);
}

