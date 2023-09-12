#include "sub.h" 
int sub_4A0A40(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)thisx)
        operator delete(*(void**)thisx);
    *(_DWORD*)thisx = 0;
    *(_WORD*)(thisx + 4) = 0;
    return result;
}

