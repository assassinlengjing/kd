#include "sub.h" 
_DWORD* sub_41C432(_DWORD* thisx, int a2, int a3)
{
	int v3; // edx
	_DWORD* result; // eax

	thisx[82] = a2;
	thisx[83] = a3;
	v3 = -100 * sub_446497((int*)unk_4B9B10, a2 / 100, a3 / 100);
	result = thisx;
	thisx[84] = v3;
	return result;
}

