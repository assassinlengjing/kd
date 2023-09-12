#include "sub.h" 
__int16 sub_456738(int thisx, unsigned __int8 a2)
{
    int v2; // eax

    *(_WORD*)(thisx + 2 * a2 + 11404) = 60 * (*(_DWORD*)(thisx + 11376) + 10) / 20;
    if (*(_BYTE*)(thisx + 11372))
    {
        if (*(_BYTE*)(thisx + 11372) == 1)
        {
            v2 = 15 * *(__int16*)(thisx + 2 * a2 + 11404) / 10;
            *(_WORD*)(thisx + 2 * a2 + 11404) = v2;
        }
        else if (*(_BYTE*)(thisx + 11372) == 3)
        {
            v2 = 75 * *(__int16*)(thisx + 2 * a2 + 11404) / 100;
            *(_WORD*)(thisx + 2 * a2 + 11404) = v2;
        }
        else
        {
            v2 = *(unsigned __int8*)(thisx + 11372);
            if (v2 == 4)
            {
                LOWORD(v2) = *(__int16*)(thisx + 2 * a2 + 11404) / 2;
                *(_WORD*)(thisx + 2 * a2 + 11404) = v2;
            }
        }
    }
    else
    {
        LOWORD(v2) = 2 * *(_WORD*)(thisx + 2 * a2 + 11404);
        *(_WORD*)(thisx + 2 * a2 + 11404) = v2;
    }
    return v2;
}

