#include "sub.h" 
_DWORD* __fastcall sub_4A02E9(_DWORD* thisx, int edx0, int a1, int a2, int a3)
{
    _DWORD* result; // eax

    if (a3 == -1)
        return sub_49EDC1((int)thisx, edx0, (_DWORD*)a1, a2);
    if (a3 >= 0 && a3 < 2048)
        return sub_4A0337(&thisx[6 * a3], (_DWORD*)a1, a2);
    return result;
}
