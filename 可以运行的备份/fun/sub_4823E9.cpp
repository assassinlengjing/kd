#include "sub.h" 
int sub_4823E9(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 16))
        operator delete(*(void**)(thisx + 16));
    *(_DWORD*)(thisx + 16) = 0;
    *(_WORD*)(thisx + 20) = 0;
    return result;
}

