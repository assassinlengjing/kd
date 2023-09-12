#include "sub.h" 
void sub_48651C(_DWORD* thisx, _DWORD* a2, _DWORD* a3)
{
    int v3; // eax
    int v4; // [esp-Ch] [ebp-10h]
    int v5; // [esp-8h] [ebp-Ch]

    if (a2)
    {
        if (a3)
        {
            v5 = sub_4260D0(a2);
            v4 = sub_4260B0(a2);
            v3 = sub_426090(a2);
            sub_48977D(thisx, v3, v4, v5, a3);
        }
    }
}

