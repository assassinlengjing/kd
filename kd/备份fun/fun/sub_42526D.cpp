#include "sub.h" 
_DWORD* sub_42526D(_DWORD* thisx, int a2)
{
	_DWORD* result; // eax
	int v4[2]; // [esp+4h] [ebp-10h] BYREF
	int v5; // [esp+Ch] [ebp-8h]
	int v6; // [esp+10h] [ebp-4h]

	v6 = thisx[110] % 8 - 1;
	v5 = thisx[110] / 8 - 1;
	sub_42532C(thisx, v6, v5, a2, v4);
	thisx[82] = v4[0];
	thisx[83] = v4[1];
	thisx[84] = -100 * sub_446497((_DWORD*)byte_4B9B10, thisx[82] / 100, thisx[83] / 100) - 4000;
	result = thisx;
	thisx[98] = 1;
	return result;
}

