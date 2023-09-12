#include "sub.h" 
int sub_46D48E(_DWORD* thisx, int a2, int a3, int a4)
{
    int v5; // [esp+4h] [ebp-Ch]
    int j; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            v5 = thisx[61 * i + 7 * j];
            if (v5 == -1)
                break;
            if ((a3 != i || a4 != j) && a2 == v5)
                return 1;
        }
    }
    return 0;
}

