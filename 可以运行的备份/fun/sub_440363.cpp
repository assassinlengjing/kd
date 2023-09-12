#include "sub.h" 
int sub_440363(_DWORD* thisx)
{
    int v3; // [esp+4h] [ebp-8h] BYREF
    int i; // [esp+8h] [ebp-4h]

    if (!sub_4410E0(thisx))
        return -1;
    for (i = 0; i < 16; ++i)
    {
        if (!thisx[i + 2])
            return i;
        (*(void(**)(_DWORD, _DWORD, int*))(*(_DWORD*)thisx[i + 2] + 36))(thisx[i + 2], thisx[i + 2], &v3);
        if ((v3 & 1) == 0)
            return i;
    }
    return -1;
}

