#include "sub.h" 
int sub_440BC2(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 196))
    {
        result = (*(int(**)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD**)(thisx + 196) + 48))(
            *(_DWORD*)(thisx + 196),
            *(_DWORD*)(thisx + 196),
            0,
            0,
            1);
        *(_DWORD*)(thisx + 164) = 1;
    }
    return result;
}

