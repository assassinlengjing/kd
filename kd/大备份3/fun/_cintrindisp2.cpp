#include "sub.h"
void _cintrindisp2(double a1, double a2, int a3, __int16 a4)
{
	int savedregs; // [esp+2A4h] [ebp+0h] BYREF

	_trandisp2(a3, (int)&savedregs, a4, a1, a2);
	unk_4CB268 = 1;
	cintrinexit(&savedregs, a2);
}