#include "sub.h" 
int sub_48F0A7(_DWORD* thisx)
{
    BOOL v1; // esi
    BOOL v2; // esi
    int v3; // eax
    int v6; // [esp+8h] [ebp-38h]
    int k; // [esp+Ch] [ebp-34h]
    int v8; // [esp+10h] [ebp-30h]
    int v9; // [esp+14h] [ebp-2Ch]
    int v10; // [esp+18h] [ebp-28h]
    int i; // [esp+1Ch] [ebp-24h]
    int j; // [esp+20h] [ebp-20h]
    int v13; // [esp+24h] [ebp-1Ch]
    char* v14; // [esp+28h] [ebp-18h]
    BOOL v15; // [esp+2Ch] [ebp-14h]
    int v16; // [esp+30h] [ebp-10h]
    int v17; // [esp+34h] [ebp-Ch]
    BOOL v18; // [esp+38h] [ebp-8h]
    int v19; // [esp+3Ch] [ebp-4h]

    v1 = sub_476D78(0);
    v17 = v1 - sub_476D29(0);
    v2 = sub_476CDA(0);
    v16 = v2 - sub_476C8B(0);
    v15 = sub_476DC7(0, 0);
    v18 = sub_476DC7(0, 1);
    v19 = 0;
    if (v17)
    {
        thisx[5] = (v17 + thisx[5] + (unsigned __int8)byte_4B9990 + 1) % ((unsigned __int8)byte_4B9990 + 1);
        v19 = 3;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
    }
    else if (v16)
    {
        v19 = 4;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
        v14 = (char*)sub_48F610((char*)byte_4B9B10);
        if (thisx[5])
        {
            v10 = v16 + (unsigned __int8)v14[thisx[5] - 1];
            if (v10 < 1)
                v10 = 1;
            v9 = 0;
            for (i = 0; i < (unsigned __int8)byte_4B9990; ++i)
            {
                if (i == thisx[5] - 1)
                    v9 += v10;
                else
                    v9 += (unsigned __int8)v14[i];
            }
            if (v9 <= (unsigned __int8)byte_4B9985)
                v14[thisx[5] - 1] = v10;
        }
        else
        {
            v13 = v16 + (unsigned __int8)byte_4B9990;
            if (v13 >= 2)
            {
                if (v13 > (unsigned __int8)byte_4B9985)
                    LOBYTE(v13) = byte_4B9985;
            }
            else
            {
                LOBYTE(v13) = 2;
            }
            byte_4B9990 = v13;
            memset(v14, 0, 8u);
            for (j = 0; j < (unsigned __int8)byte_4B9990; ++j)
            {
                if (j + 1 > (unsigned __int8)byte_4B9985 % (int)(unsigned __int8)byte_4B9990)
                    LOWORD(v3) = (unsigned __int8)byte_4B9985 / (__int16)(unsigned __int8)byte_4B9990;
                else
                    v3 = (unsigned __int8)byte_4B9985 / (int)(unsigned __int8)byte_4B9990 + 1;
                v14[j] = v3;
            }
        }
    }
    else if (v15 || v18)
    {
        if (v15)
        {
            v19 = 1;
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        }
        else
        {
            v19 = 2;
        }
        v6 = 0;
        v8 = (_DWORD)sub_48F610((char*)byte_4B9B10);
        for (k = 0; k < (unsigned __int8)byte_4B9990; ++k)
            v6 += *(unsigned __int8*)(k + v8);
        if (v6 != (unsigned __int8)byte_4B9985)
        {
            v19 = 0;
            sub_47B91A(16, 224, (LPCSTR)dword_4ABC40, 0, dword_4B9248);
        }
    }
    return v19;
}


