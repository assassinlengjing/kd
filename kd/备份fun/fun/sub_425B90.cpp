#include "sub.h" 
_DWORD* sub_425B90(char* thisx, _DWORD* a2, int a3, int a4)
{
    char* v4; // edx

    v4 = &thisx[32 * a3 + 16 + 16 * a4];
    *a2 = *(_DWORD*)v4;
    a2[1] = *((_DWORD*)v4 + 1);
    a2[2] = *((_DWORD*)v4 + 2);
    a2[3] = *((_DWORD*)v4 + 3);
    return a2;
}

