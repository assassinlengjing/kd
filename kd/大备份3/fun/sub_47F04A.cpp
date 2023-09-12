#include "sub.h" 
int sub_47F04A(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_BYTE*)(thisx + 28))
    {
        if ((int)++ * (_DWORD*)(thisx + 32) >= 300)
            *(_DWORD*)(thisx + 36) = *(_DWORD*)(thisx + 32) / 5 % 2;
        result = thisx;
        if (*(_DWORD*)(thisx + 32) == 480)
            *(_BYTE*)(thisx + 28) = 0;
    }
    return result;
}
