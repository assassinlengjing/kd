#include "sub.h" 
_DWORD* __fastcall sub_4210E3(_DWORD* a1, int a2, int a3, unsigned __int8 a4)
{
    _DWORD* result; // eax

    if (a4 == 3)
    {
        a1[33] = 0;
        a1[32] = 0;
        result = a1;
        a1[18] = 0;
    }
    else
    {
        a1[32] = a3;
        result = a1;
        a1[18] = 0;
        if (a4 == 1)
        {
            *a1 = 6;
        }
        else
        {
            result = (_DWORD*)a4;
            if (a4 == 2)
                *a1 = 7;
        }
        a1[33] = 600;
    }
    return result;
}

