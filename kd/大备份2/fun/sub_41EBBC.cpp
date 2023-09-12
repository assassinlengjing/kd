#include "sub.h" 
__int16 __fastcall sub_41EBBC(int a1, int a2, int a3, int a4)
{
    int v4; // eax

    LOWORD(v4) = a1;
    if (a3 + *(unsigned __int16*)(a1 + 500) > 0)
    {
        if (a4 || *(unsigned __int16*)(a1 + 500) >= 0xFFu || (v4 = a3 + *(unsigned __int16*)(a1 + 500), v4 <= 255))
        {
            LOWORD(v4) = a3 + *(_WORD*)(a1 + 500);
            *(_WORD*)(a1 + 500) = v4;
        }
        else
        {
            *(_WORD*)(a1 + 500) = 255;
        }
    }
    else
    {
        *(_WORD*)(a1 + 500) = 1;
    }
    return v4;
}

