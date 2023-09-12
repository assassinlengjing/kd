#include "sub.h" 
int sub_441980(int thisx, int a2)
{
    int result; // eax

    if (a2)
    {
        *(_DWORD*)(thisx + 4) = *(_DWORD*)a2;
        *(_DWORD*)(thisx + 8) = *(_DWORD*)(a2 + 4);
        *(_BYTE*)(thisx + 20) = *(_BYTE*)(a2 + 8);
        *(_DWORD*)(thisx + 28) = *(_DWORD*)(a2 + 12);
        *(_DWORD*)(thisx + 16) = *(_DWORD*)(a2 + 16);
        *(_DWORD*)(thisx + 12) = -1;
        *(_DWORD*)(thisx + 32) = 0;
        result = sub_4419F6(thisx);
        *(_DWORD*)(thisx + 12) = 0;
    }
    return result;
}

