#include "sub.h" 
int sub_49B0AB(_BYTE* thisx, int a2)
{
    int v4[2]; // [esp+4h] [ebp-8h] BYREF

    if (!*(_DWORD*)thisx)
        return 0;
    v4[0] = a2;
    v4[1] = a2;
    (*(void(**)(_DWORD, _DWORD, int, int*))(**(_DWORD**)thisx + 116))(
        *(_DWORD*)thisx,
        *(_DWORD*)thisx,
        8,
        v4);
    thisx[5] = 1;
    return 1;
}
