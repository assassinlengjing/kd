#include "sub.h" 
int sub_45FD81(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 13120))
        (***(void(****)(_DWORD, int))(thisx + 13120))(*(_DWORD*)(thisx + 13120), 3);
    result = thisx;
    *(_DWORD*)(thisx + 13120) = 0;
    *(_DWORD*)(thisx + 13116) = 0;
    return result;
}

