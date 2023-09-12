#include "sub.h" 
int sub_453A31(int thisx)
{
	int v3[15]; // [esp+4h] [ebp-3Ch] BYREF

	*(_DWORD*)(thisx + 104) = 2;
	*(_BYTE*)(thisx + 2516) = 1;
	sub_49DB90(v3);
	v3[1] = 0;
	v3[2] = 0;
	v3[3] = -1;
	v3[4] = -1;
	v3[9] = -1;
	v3[0] = dword_4B9248;
	sub_49DA45((_DWORD*)byte_4BDC60, aGraphicTitleBm, (int)v3);
	return sub_456D33((const CHAR*)thisx, aTitleWav, 1, 0);
}

