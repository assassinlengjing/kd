#include "sub.h" 
int sub_473CFA(int thisx)
{
	*(_DWORD*)(thisx + 104) = 27;
	*(_BYTE*)(thisx + 2516) = 1;
	sub_4898D3((_DWORD*)(thisx + 128));
	sub_4891E4((_DWORD*)(thisx + 128), aDemoKkEndTxt);
	return sub_456D33((const CHAR*)thisx, aKkEndWav, 1, 0);
}

