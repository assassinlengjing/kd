#include "sub.h" 
int  sub_422B03(_DWORD* thisx, int a1, int a2)
{
	int v4; // [esp-10h] [ebp-24h] BYREF
	_DWORD* v5; // [esp+0h] [ebp-14h]
	struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

	v5 = thisx;
	SetRect(&rc, a1 - 1, a2 - 1, a1 + 2, a2 + 2);
	return sub_424C9A(v5, (int)&v4, rc.left, rc.top, rc.right, rc.bottom);
}

