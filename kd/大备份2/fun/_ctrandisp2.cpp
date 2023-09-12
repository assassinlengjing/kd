#include "sub.h"
void _ctrandisp2(double a1, double a2, double a3)
{
	double v4; // st6
	int v5; // edx
	__int16 v6; // fps
	int savedregs; // [esp+2A4h] [ebp+0h] BYREF

	_fload(a2);
	v4 = _fload(a3);
	_trandisp2(v5, (int)&savedregs, v6, v4, a1);
	ctranexit(&savedregs, a1);
}