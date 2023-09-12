#include "sub.h"
void _cintrindisp1(double a1, int a2, __int16 a3, __int16 a4)
{
	int savedregs; // [esp+2A4h] [ebp+0h] BYREF

	_trandisp1(a2, a3, (int)&savedregs, a4, a1);
	byte_4CB268 = 1;
	cintrinexit(&savedregs, a1);
}