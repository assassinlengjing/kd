#include "sub.h" 
int __fastcall sub_45948C(int a1)
{
    int v1; // edx
    int result; // eax
    int v3; // ecx
    int v4; // ecx
    int m; // [esp+10h] [ebp-28h]
    int v7; // [esp+14h] [ebp-24h]
    int v8; // [esp+1Ch] [ebp-1Ch]
    int v9; // [esp+1Ch] [ebp-1Ch]
    int v10; // [esp+20h] [ebp-18h]
    int v11; // [esp+24h] [ebp-14h]
    int i; // [esp+28h] [ebp-10h]
    int j; // [esp+28h] [ebp-10h]
    int k; // [esp+28h] [ebp-10h]
    int v15; // [esp+30h] [ebp-8h]
    unsigned __int8 v16; // [esp+34h] [ebp-4h]
    unsigned __int8 v17; // [esp+35h] [ebp-3h]
    unsigned __int8 v18; // [esp+36h] [ebp-2h]
    unsigned __int8 v19; // [esp+37h] [ebp-1h]

    for (i = 4; i >= 0 && *(char*)(a1 + 2 * i + 2) == -127 && *(_BYTE*)(a1 + 2 * i + 3) == 64; --i)
    {
        *(_BYTE*)(a1 + 2 * i + 2) = 0;
        *(_BYTE*)(a1 + 2 * i + 3) = 0;
    }
    HIWORD(v1) = HIWORD(a1);
    *(_WORD*)a1 = 1;
    *(_WORD*)(a1 + 24) = 0;
    LOWORD(v1) = *(_WORD*)(a1 + 24);
    *(_BYTE*)(a1 + 26) = sub_47C20C(v1);
    *(_WORD*)(a1 + 18) = 0;
    *(_BYTE*)(a1 + 22) = 0;
    if (lstrcmpiA((LPCSTR)(a1 + 2), &unk_4B2730))
    {
        v10 = lstrlenA((LPCSTR)(a1 + 2));
        v8 = 0;
        v15 = 1;
        for (j = 0; j < v10; ++j)
        {
            v8 += *(unsigned __int8*)(a1 + 15) + v15 * *(unsigned __int8*)(j + a1 + 2);
            v15 *= 10;
        }
        if (v8 < 0)
            v8 = -v8;
        *(_WORD*)(a1 + 28) = v8 % 40 + 168;
        *(_WORD*)(a1 + 30) = v8 % 10 + 25;
        *(_WORD*)(a1 + 32) = v8 / 2 % 10 + 25;
        *(_WORD*)(a1 + 34) = v8 / 3 % 10 + 25;
        *(_WORD*)(a1 + 36) = v8 / 18 % 10 + 35;
        *(_WORD*)(a1 + 38) = v8 / 19 % 10 + 35;
        *(_WORD*)(a1 + 40) = v8 / 4 % 15 + 35;
        *(_WORD*)(a1 + 42) = v8 / 5 % 10 + 80;
        *(_WORD*)(a1 + 44) = v8 / 6 % 18 + 50;
        *(_WORD*)(a1 + 46) = v8 / 7 % 50 + 30;
        *(_BYTE*)(a1 + 48) = v8 / 8 % 6 + 10;
        *(_BYTE*)(a1 + 49) = v8 / 9 % 6 + 10;
        *(_BYTE*)(a1 + 50) = v8 / 10 % 6 + 10;
        *(_BYTE*)(a1 + 51) = v8 / 11 % 6 + 10;
        *(_BYTE*)(a1 + 52) = v8 / 20 % 6 + 15;
        *(_BYTE*)(a1 + 53) = v8 / 21 % 6 + 15;
        *(_BYTE*)(a1 + 54) = v8 / 12 % 3 + 8;
        *(_BYTE*)(a1 + 55) = v8 / 13 % 5 + 8;
        *(_BYTE*)(a1 + 56) = v8 / 14 % 5 + 8;
        *(_BYTE*)(a1 + 57) = v8 / 15 % 5 + 8;
        *(_BYTE*)(a1 + 16) = v8 / 16 % 4;
        if (*(_BYTE*)(a1 + 16))
        {
            switch (*(_BYTE*)(a1 + 16))
            {
            case 1:
                *(_WORD*)(a1 + 30) += 30;
                *(_BYTE*)(a1 + 49) += 10;
                *(_BYTE*)(a1 + 57) += 2;
                break;
            case 2:
                *(_WORD*)(a1 + 32) += 30;
                *(_BYTE*)(a1 + 50) += 10;
                *(_BYTE*)(a1 + 55) += 2;
                break;
            case 3:
                *(_WORD*)(a1 + 34) += 30;
                *(_BYTE*)(a1 + 51) += 10;
                *(_BYTE*)(a1 + 54) += 2;
                break;
            }
        }
        else
        {
            *(_WORD*)(a1 + 30) += 10;
            *(_WORD*)(a1 + 32) += 10;
            *(_WORD*)(a1 + 34) += 10;
            *(_BYTE*)(a1 + 49) += 5;
            *(_BYTE*)(a1 + 50) += 5;
            *(_BYTE*)(a1 + 51) += 5;
        }
        *(_WORD*)(a1 + 20) = v8 / 17 % 4 + 19;
        if (*(_WORD*)(a1 + 20) == 22)
            *(_BYTE*)(a1 + 22) = 1;
        v16 = *(unsigned __int8*)(a1 + 13) / 10 + *(_BYTE*)(a1 + 15) + 1;
        v17 = *(unsigned __int8*)(a1 + 13) % 10 + *(_BYTE*)(a1 + 15) + 1;
        v18 = *(unsigned __int8*)(a1 + 14) / 10 + *(_BYTE*)(a1 + 15) + 1;
        v19 = *(unsigned __int8*)(a1 + 14) % 10 + *(_BYTE*)(a1 + 15) + 1;
        result = v18;
        v3 = (v19 + v18 + v17 + v16) % 4;
        v11 = v3;
        if (v3 >= 2)
        {
            if (v3 == 2)
            {
                v11 = 1;
            }
            else if (v3 == 3)
            {
                v11 = 3;
            }
        }
        else
        {
            v11 = 2;
        }
        if (v11 < 3)
        {
            v7 = 10;
            if (v11 == 2)
                v7 = 5;
            *(_WORD*)(a1 + 28) += v7;
            *(_WORD*)(a1 + 30) += v7;
            *(_WORD*)(a1 + 32) += v7;
            *(_WORD*)(a1 + 34) += v7;
            *(_WORD*)(a1 + 40) += v7;
            *(_WORD*)(a1 + 42) += v7 / 2;
            *(_WORD*)(a1 + 44) += v7 / 2;
            result = a1;
            *(_WORD*)(a1 + 46) += v7 / 2;
        }
        for (k = 0; k < v11; ++k)
        {
            v9 = 0;
            if (k)
            {
                if (k == 1)
                {
                    v9 = v19 + 10 * v18 + 100 * v17 + 1000 * v16;
                }
                else if (k == 2)
                {
                    v9 = 11 * v19 + 7 * v18 + 5 * v17 + 3 * v16;
                }
            }
            else
            {
                v9 = 3 * v18 + v16 + 2 * v17 + 4 * v19;
            }
            *(_BYTE*)(k + a1 + 68) = v9 % 72 + 1;
            while (1)
            {
                for (m = 0; ; ++m)
                {
                    result = m;
                    if (m >= k)
                        break;
                    result = *(unsigned __int8*)(k + a1 + 68);
                    v4 = m + a1;
                    if (result == *(unsigned __int8*)(m + a1 + 68))
                        break;
                    LOBYTE(result) = *(_BYTE*)(m + a1 + 68);
                    LOBYTE(v4) = *(_BYTE*)(k + a1 + 68);
                    result = sub_47744C(v4, result);
                    if (result)
                        break;
                }
                if (m == k)
                    break;
                if ((unsigned __int8)++ * (_BYTE*)(k + a1 + 68) >= 0x49u)
                    *(_BYTE*)(k + a1 + 68) = 1;
            }
        }
        while (k < 3)
        {
            *(_BYTE*)(k + a1 + 68) = 0;
            result = ++k;
        }
    }
    else
    {
        *(_WORD*)a1 = 19;
        *(_WORD*)(a1 + 28) = 255;
        *(_WORD*)(a1 + 30) = 99;
        *(_WORD*)(a1 + 32) = 99;
        *(_WORD*)(a1 + 34) = 99;
        *(_WORD*)(a1 + 36) = 99;
        *(_WORD*)(a1 + 38) = 99;
        *(_WORD*)(a1 + 40) = 99;
        *(_WORD*)(a1 + 42) = 99;
        *(_WORD*)(a1 + 44) = 99;
        *(_WORD*)(a1 + 46) = 99;
        *(_BYTE*)(a1 + 48) = 15;
        *(_BYTE*)(a1 + 49) = 15;
        *(_BYTE*)(a1 + 50) = 15;
        *(_BYTE*)(a1 + 51) = 15;
        *(_BYTE*)(a1 + 52) = 15;
        *(_BYTE*)(a1 + 53) = 15;
        *(_BYTE*)(a1 + 54) = 15;
        *(_BYTE*)(a1 + 55) = 13;
        *(_BYTE*)(a1 + 56) = 13;
        *(_BYTE*)(a1 + 57) = 13;
        *(_BYTE*)(a1 + 16) = 0;
        *(_WORD*)(a1 + 20) = 19;
        *(_BYTE*)(a1 + 68) = 1;
        *(_BYTE*)(a1 + 69) = 3;
        result = a1;
        *(_BYTE*)(a1 + 70) = 0;
    }
    return result;
}

