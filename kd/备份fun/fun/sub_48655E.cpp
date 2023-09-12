#include "sub.h" 
void sub_48655E(int thisx, _DWORD* a2, _DWORD* a3)
{
    int v4; // [esp+4h] [ebp-8h]
    int v5; // [esp+8h] [ebp-4h]

    if (a3 && a2)
    {
        v5 = *(_DWORD*)(thisx + 28) + *a2;
        v4 = a2[1] - *(_DWORD*)(thisx + 36);
        if (v5 >= 0)
        {
            if (v5 >= 8 * (unsigned __int8)unknown_libname_25((char*)thisx + 4))
                v5 = 8 * (unsigned __int8)unknown_libname_25((char*)thisx + 4) - 1;
        }
        else
        {
            v5 = 0;
        }
        if (v4 >= 0)
        {
            if (v4 >= 8 * (unsigned __int8)sub_4261F0((_BYTE*)(thisx + 4)))
                v4 = 8 * (unsigned __int8)sub_4261F0((_BYTE*)(thisx + 4)) - 1;
        }
        else
        {
            v4 = 0;
        }
        sub_41C432(a3, 100 * v5, 100 * v4);
    }
}
