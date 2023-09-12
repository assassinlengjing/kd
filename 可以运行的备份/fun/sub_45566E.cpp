#include "sub.h" 
int sub_45566E(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 11368))
        operator delete(*(void**)(thisx + 11368));
    if (*(_DWORD*)(thisx + 11356))
        operator delete(*(void**)(thisx + 11356));
    if (*(_DWORD*)(thisx + 11360))
        operator delete(*(void**)(thisx + 11360));
    *(_BYTE*)(thisx + 11352) = 0;
    *(_BYTE*)(thisx + 11364) = 0;
    *(_DWORD*)(thisx + 11368) = 0;
    result = thisx;
    *(_DWORD*)(thisx + 11356) = 0;
    *(_DWORD*)(thisx + 11360) = 0;
    return result;
}

