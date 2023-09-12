#include "sub.h" 
int sub_4A1216(int thisx, int a2, int a3, int a4)
{
    if (a2 <= 0 || a3 <= 0 || !a4)
        return 0;
    if (*(_DWORD*)(thisx + 12))
        operator delete(*(void**)(thisx + 12));
    *(_DWORD*)(thisx + 12) = (_DWORD)operator new(a3 * a2);
    *(_DWORD*)(thisx + 16) = a4;
    *(_WORD*)(thisx + 6) = a2;
    *(_WORD*)(thisx + 8) = a3;
    return 1;
}

