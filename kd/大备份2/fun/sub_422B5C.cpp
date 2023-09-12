#include "sub.h" 
int sub_422B5C(int thisx, int a2, int a3, int a4, int a5, __int16 a6, char a7)
{
    int result; // eax

    *(_DWORD*)(thisx + 392) = 1;
    *(_DWORD*)(thisx + 372) = a2 - *(_DWORD*)(thisx + 328);
    *(_DWORD*)(thisx + 376) = a3 - *(_DWORD*)(thisx + 332);
    *(_DWORD*)(thisx + 348) = a4 - *(_DWORD*)(thisx + 336);
    *(_DWORD*)(thisx + 424) = a5;
    *(_BYTE*)(thisx + 212) = 0;
    *(_WORD*)(thisx + 204) = a6;
    result = thisx;
    *(_BYTE*)(thisx + 223) = a7;
    return result;
}

