#include "sub.h" 
_DWORD* sub_422526(int* thisx)
{
	struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

	SetRect(&rc, 0, 0, thisx[16], thisx[17]);
	return sub_425617(thisx, rc.left, rc.top, rc.right, rc.bottom);
}

