#include "sub.h" 
_BYTE* sub_44FE2E(int thisx)
{
	*(_DWORD*)(thisx + 104) = 7;
	*(_BYTE*)(thisx + 2516) = 1;
	*(_DWORD*)(thisx + 2512) = 0;
	*(_BYTE*)(thisx + 2562) = 0;
	*(_DWORD*)(thisx + 2528) = 0;
	*(_DWORD*)(thisx + 2532) = 0;
	return sub_455268((_BYTE*)thisx, -1);
}

