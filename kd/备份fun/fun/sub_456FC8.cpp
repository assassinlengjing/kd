#include "sub.h" 
void sub_456FC8(int thisx)
{
    int v2; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]
    int j; // [esp+8h] [ebp-4h]
    int k; // [esp+8h] [ebp-4h]

    if (*(int*)(thisx + 2488) > 100)
        dword_4B99EC = 1;
    *(_DWORD*)(thisx + 2492) += *(_DWORD*)(thisx + 2488);
    while (*(int*)(thisx + 2492) >= 100)
    {
        *(_DWORD*)(thisx + 2492) -= 100;
        v2 = 1;
        if (dword_4B91D4 && !byte_4B91D1 || *(int*)(thisx + 2528) > 0)
            v2 = 0;
        if (v2)
        {
            sub_488981((int*)thisx + 128);
            for (i = 0; i < 32; ++i)
                sub_4419F6(thisx + 36 * i + 9608);
            for (j = 0; j < 8; ++j)
                sub_47F04A(thisx + 40 * j + 10760);
            if (*(_DWORD*)(thisx + 1292))
                sub_47F211(thisx + 736);
            byte_4B91D1 = 0;
            ++dword_4B93AC;
        }
    }
    sub_486476((_DWORD*)(thisx + 128));
    if (*(_BYTE*)(thisx + 11364))
        sub_44325C(thisx);
    for (k = 0; k < 32; ++k)
        sub_441DB3(thisx + 36 * k + 9608);
    if (*(_DWORD*)(thisx + 1292))
        sub_47F98B((_DWORD*)(thisx + 736));
    sub_477F0C(0);
    if (sub_476DC7(0, 0))
        *(_DWORD*)(thisx + 1296) = 1;
    if (*(_DWORD*)(thisx + 1296) && *(_BYTE*)(thisx + 2516) != 2)
        sub_4571BB(thisx);
}

