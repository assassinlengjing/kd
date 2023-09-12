#include "sub.h" 
int sub_46D6CB(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 15628))
        operator delete(*(void**)(thisx + 15628));
    *(_DWORD*)(thisx + 15628) = 0;
    if (*(_DWORD*)(thisx + 15632))
        operator delete(*(void**)(thisx + 15632));
    result = thisx;
    *(_DWORD*)(thisx + 15632) = 0;
    *(_DWORD*)(thisx + 15636) = 0;
    return result;
}

