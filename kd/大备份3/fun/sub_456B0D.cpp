#include "sub.h" 
int sub_456B0D(unsigned __int8* thisx, _DWORD* a2, int a3)
{
    int v4; // [esp+0h] [ebp-3Ch]
    int v5; // [esp+4h] [ebp-38h]
    int v6; // [esp+8h] [ebp-34h]
    int v8; // [esp+1Ch] [ebp-20h]
    int v9; // [esp+20h] [ebp-1Ch]
    int v10; // [esp+24h] [ebp-18h]
    int v11; // [esp+28h] [ebp-14h]
    int v12; // [esp+2Ch] [ebp-10h]
    int v13; // [esp+30h] [ebp-Ch]
    int i; // [esp+34h] [ebp-8h]
    int v15; // [esp+38h] [ebp-4h]

    v10 = sub_426090(a2) / 100;
    v8 = sub_4260B0(a2) / 100;
    v11 = -sub_4260D0(a2) / 100;
    v12 = 0;
    v9 = 0;
    v13 = 0;
    v15 = 0;
    for (i = 0; i < 8; ++i)
    {
        if (sub_426290(&thisx[40 * i + 10760]))
        {
            if (unknown_libname_22((int*)&thisx[40 * i + 10760]) - v10 <= 0)
                v6 = v10 - unknown_libname_22((int*)&thisx[40 * i + 10760]);
            else
                v6 = unknown_libname_22((int*)&thisx[40 * i + 10760]) - v10;
            if (unknown_libname_26((int*)&thisx[40 * i + 10760]) - v8 <= 0)
                v5 = v8 - unknown_libname_26((int*)&thisx[40 * i + 10760]);
            else
                v5 = unknown_libname_26((int*)&thisx[40 * i + 10760]) - v8;
            if (unknown_libname_12((int*)&thisx[40 * i + 10760]) - v11 <= 0)
                v4 = v11 - unknown_libname_12((int*)&thisx[40 * i + 10760]);
            else
                v4 = unknown_libname_12((int*)&thisx[40 * i + 10760]) - v11;
            if (a3)
            {
                if (v6 <= 16 && v5 <= 5 && v4 <= 4)
                    return (int)&thisx[40 * i + 10760];
            }
            else if (!v15 || v13 + v9 + v12 > v4 + v5 + v6)
            {
                v12 = v6;
                v9 = v5;
                v13 = v4;
                v15 = (int)&thisx[40 * i + 10760];
            }
        }
    }
    return v15;
}

