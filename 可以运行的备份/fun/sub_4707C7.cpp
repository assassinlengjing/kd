#include "sub.h" 
__int16 sub_4707C7(int thisx, int a2)
{
    int v2; // eax
    int v5; // [esp+4h] [ebp-4h]

    v5 = sub_47075A((_DWORD*)thisx);
    if (a2 + *(__int16*)(thisx + 8) <= v5)
    {
        v2 = a2 + *(__int16*)(thisx + 8);
        if (v2 >= 0)
        {
            LOWORD(v2) = a2 + *(_WORD*)(thisx + 8);
            *(_WORD*)(thisx + 8) = v2;
        }
        else
        {
            *(_WORD*)(thisx + 8) = 0;
        }
    }
    else
    {
        LOWORD(v2) = thisx;
        *(_WORD*)(thisx + 8) = v5;
    }
    return v2;
}

