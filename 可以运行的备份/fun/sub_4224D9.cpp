#include "sub.h" 
int sub_4224D9(_DWORD* thisx)
{
	int v2; // [esp-10h] [ebp-24h] BYREF
	_DWORD* v3; // [esp+0h] [ebp-14h]
	struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

	v3 = thisx;
	SetRect(&rc, 0, 0, thisx[16], thisx[17]);
	return sub_424C9A(v3, (int)&v2, rc.left, rc.top, rc.right, rc.bottom);
}

