#include "sub.h" 
int sub_47EFF2(int thisx, int a2)
{
    int result; // eax

    if (a2)
    {
        *(_BYTE*)(thisx + 28) = *(_BYTE*)(a2 + 12);
        *(_DWORD*)(thisx + 4) = *(_DWORD*)a2;
        *(_DWORD*)(thisx + 8) = *(_DWORD*)(a2 + 4);
        *(_DWORD*)(thisx + 12) = *(_DWORD*)(a2 + 8);
        result = thisx;
        *(_DWORD*)(thisx + 32) = 0;
        *(_DWORD*)(thisx + 36) = 0;
    }
    return result;
}
