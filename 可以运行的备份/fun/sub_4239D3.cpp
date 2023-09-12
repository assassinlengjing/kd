#include "sub.h" 
int sub_4239D3(int thisx, __int16 a2)
{
    int result; // eax
    int v3; // [esp+4h] [ebp-8h]

    if (*(_BYTE*)(thisx + 188) == 2 || (result = *(unsigned __int8*)(thisx + 188), result == 3))
    {
        v3 = *(__int16*)(thisx + 600) / 100;
        *(_WORD*)(thisx + 600) += a2;
        if (*(__int16*)(thisx + 600) <= 300)
        {
            if (*(__int16*)(thisx + 600) < 0)
                *(_WORD*)(thisx + 600) = 0;
        }
        else
        {
            *(_WORD*)(thisx + 600) = 300;
        }
        result = *(__int16*)(thisx + 600) / 100;
        if (v3 < result)
        {
            if (result >= 3)
                return sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
            else
                return sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9AB4, -1, 100, 100, 0);
        }
    }
    return result;
}

