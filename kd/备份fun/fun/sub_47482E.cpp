#include "sub.h" 
void sub_47482E(int thisx)
{
	*(_DWORD*)(thisx + 104) = 4;
	*(_DWORD*)(thisx + 2540) = 0;
	sub_480054(thisx + 15644, (int)&unk_4B3E50);
	sub_475630((_BYTE*)(thisx + 15644), 12, 2, 17, 4);
	sub_475690((_BYTE*)(thisx + 15644), 2);
	streambuf::unbuffered((streambuf*)(thisx + 15644), 0);
	sub_475670((_DWORD*)(thisx + 15644), 0);
	(*(void(**)(int, _DWORD))(*(_DWORD*)(thisx + 15680) + 4))(thisx + 15680, 0);
	(*(void(**)(int, _DWORD))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 0);
	(*(void(**)(int, _DWORD))(*(_DWORD*)(thisx + 15752) + 4))(thisx + 15752, 0);
	(*(void(**)(int, int))(*(_DWORD*)(thisx + 15788) + 4))(thisx + 15788, 1);
	sub_4756B0((_BYTE*)(thisx + 15788), 8, 7);
	sub_48089C(thisx + 15788, 0);
	*(_DWORD*)(thisx + 15640) = thisx + 15788;
	*(_BYTE*)(thisx + 2516) = 1;
	sub_47494F(thisx, 1, 1);
}

