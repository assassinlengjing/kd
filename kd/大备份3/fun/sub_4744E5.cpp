#include "sub.h" 
int __fastcall sub_4744E5(int a1)
{
    int result; // eax
    int kk; // [esp+8h] [ebp-38h]
    _DWORD* v4; // [esp+Ch] [ebp-34h]
    int n; // [esp+10h] [ebp-30h]
    int k; // [esp+14h] [ebp-2Ch]
    int m; // [esp+14h] [ebp-2Ch]
    int ii; // [esp+14h] [ebp-2Ch]
    int jj; // [esp+14h] [ebp-2Ch]
    int j; // [esp+18h] [ebp-28h]
    int i; // [esp+1Ch] [ebp-24h]
    int mm; // [esp+20h] [ebp-20h]
    char* v13; // [esp+24h] [ebp-1Ch]
    int v14; // [esp+28h] [ebp-18h]
    int v15; // [esp+2Ch] [ebp-14h]
    int v16; // [esp+30h] [ebp-10h]
    int v17; // [esp+34h] [ebp-Ch]
    int v18; // [esp+38h] [ebp-8h]
    int v19; // [esp+38h] [ebp-8h]
    int v20; // [esp+3Ch] [ebp-4h]

    result = a1;
    if (*(_DWORD*)(a1 + 16400))
    {
        *(_DWORD*)(a1 + 16400) = 0;
        v15 = sub_4897D0((_BYTE*)(a1 + 128)) / 8;
        v14 = sub_4261D0((char*)(a1 + 128));
        v13 = unknown_libname_20((char*)(a1 + 128));
        for (i = 0; i < v14; ++i)
        {
            for (j = 0; j < v15; ++j)
            {
                if (sub_482A7E((int)v13, j, i))
                {
                    for (k = j + 1; k < v15 && sub_482A7E((int)v13, k, i); ++k)
                        ;
                    v18 = k;
                    for (m = i + 1; m < v15; ++m)
                    {
                        for (n = j; n < v18 && sub_482A7E((int)v13, n, m); ++n)
                            ;
                        if (n < v18)
                            break;
                    }
                    v16 = j - 1;
                    v17 = i - 1;
                    v19 = v18 + 1;
                    v20 = m + 1;
                    for (ii = 0; ii < (unsigned __int8)unk_4B9985; ++ii)
                    {
                        if (sub_41BEA6((_DWORD*)(a1 + 612 * ii + 2628)))
                        {
                            v4 = (_DWORD*)sub_41F0A9((_DWORD*)a1 + 612 * ii + 2628);
                            sub_424C9A(v4, v20, v16, v17, v19, v20);
                            sub_425617(v4, v16, v17, v19, v20);
                        }
                    }
                    for (jj = i; jj < v20 - 1; ++jj)
                    {
                        for (kk = j; kk < v19 - 1; ++kk)
                            sub_482A1B((int)v13, kk, jj, 0);
                    }
                }
            }
        }
        for (mm = 0; ; ++mm)
        {
            result = (unsigned __int8)unk_4B9985;
            if (mm >= (unsigned __int8)unk_4B9985)
                break;
            if (sub_41BEA6((_DWORD*)(a1 + 612 * mm + 2628)))
                sub_41F0A9((_DWORD*)a1 + 612 * mm + 2628);
        }
    }
    return result;
}

