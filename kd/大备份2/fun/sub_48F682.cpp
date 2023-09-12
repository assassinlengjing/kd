#include "sub.h" 
int sub_48F682(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 8))
        operator delete(*(void**)(thisx + 8));
    *(_DWORD*)(thisx + 8) = 0;
    *(_BYTE*)(thisx + 5) = 0;
    result = thisx;
    *(_BYTE*)(thisx + 6) = 0;
    return result;
}
