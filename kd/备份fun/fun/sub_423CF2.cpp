#include "sub.h" 
_BYTE* sub_423CF2(_BYTE* thisx, char a2, char a3, char a4, char a5, char a6, char a7)
{
	_BYTE* result; // eax

	thisx[602] = a2;
	thisx[603] = a3;
	thisx[604] = a4;
	result = thisx;
	thisx[605] = a5;
	LOBYTE(result) = a6;
	thisx[606] = a6;
	thisx[607] = a7;
	return result;
}

