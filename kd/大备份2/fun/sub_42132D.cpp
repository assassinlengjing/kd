#include "sub.h" 
int sub_42132D(int thisx, int a2, int a3)
{
    int result; // eax

    *(_DWORD*)(thisx + 64) = a2;
    *(_DWORD*)(thisx + 68) = a3;
    if (*(_DWORD*)(thisx + 52))
        operator delete(*(void**)(thisx + 52));
    *(_DWORD*)(thisx + 52) = (_DWORD)operator new(2 * a3 * a2);
    if (*(_DWORD*)(thisx + 56))
        operator delete(*(void**)(thisx + 56));
    *(_DWORD*)(thisx + 56) = (_DWORD)operator new(a3 * a2);
    if (*(_DWORD*)(thisx + 60))
        operator delete(*(void**)(thisx + 60));
    *(_DWORD*)(thisx + 60) = (_DWORD)operator new(2 * a3 * a2);
    sub_4224D9((_DWORD*)thisx);
    sub_422526((_DWORD*)thisx);
    *(_DWORD*)(thisx + 116) = 80;
    result = 8 * a3 / 4;
    *(_DWORD*)(thisx + 120) = result;
    return result;
}

