#include "sub.h" 
_DWORD* sub_48330A(_DWORD* thisx)
{
    _DWORD* result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = thisx[2] - 1; i >= 0; --i)
    {
        if (*(_BYTE*)(*thisx + i) == 13 || *(_BYTE*)(*thisx + i) == 10)
        {
            ++i;
            break;
        }
    }
    if (i < 0)
        i = 0;
    result = thisx;
    thisx[2] = i;
    thisx[3] = 0;
    dword_4CA1D0 = 0;
    return result;
}

