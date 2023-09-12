#include "sub.h"
void _ctrandisp1(double a1, double a2)
{
	int v2; // edx
	__int16 v3; // cx
	__int16 v4; // fps
	int savedregs; // [esp+2A4h] [ebp+0h] BYREF

	_fload(a2);
	_trandisp1(v2, v3, (int)&savedregs, v4, a1);
	ctranexit(&savedregs, a1);
}