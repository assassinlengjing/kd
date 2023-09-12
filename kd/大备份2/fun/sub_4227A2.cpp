#include "sub.h" 
int sub_4227A2(_DWORD* thisx)
{
    int result; // eax
    unsigned int v2; // esi
    int v4; // [esp+8h] [ebp-5Ch]
    int v5; // [esp+Ch] [ebp-58h]
    int v6; // [esp+10h] [ebp-54h]
    int v7; // [esp+14h] [ebp-50h]
    int v8; // [esp+18h] [ebp-4Ch]
    int v9; // [esp+1Ch] [ebp-48h]
    int v10; // [esp+20h] [ebp-44h]
    int v11; // [esp+24h] [ebp-40h]
    int v12; // [esp+28h] [ebp-3Ch]
    int v13; // [esp+2Ch] [ebp-38h]
    int v14; // [esp+34h] [ebp-30h]
    int i; // [esp+44h] [ebp-20h]
    int j; // [esp+44h] [ebp-20h]
    int k; // [esp+44h] [ebp-20h]
    int v18; // [esp+48h] [ebp-1Ch]
    char v19[16]; // [esp+4Ch] [ebp-18h]
    int v20; // [esp+5Ch] [ebp-8h]
    int v21; // [esp+60h] [ebp-4h]

    result = (thisx[6] / 100 - sub_446465((char*)byte_4B9B10)) / thisx[29] + 4 * (thisx[7] / 100 / thisx[30]);
    v21 = result;
    if (result < 0 || v21 >= 16)
    {
        v20 = 0;
        v18 = 0;
    }
    else
    {
        v20 = *((unsigned __int8*)thisx + v21 + 100);
        result = v20;
        v18 = v20;
    }
    v14 = 0;
    for (i = 0; i < 16; ++i)
    {
        result = (int)thisx + i;
        if (v20 < *((unsigned __int8*)thisx + i + 100))
        {
            result = *((unsigned __int8*)thisx + i + 100);
            v20 = result;
        }
    }
    if (v18 != v20)
    {
        for (j = 0; j < 16; ++j)
        {
            if (v20 == *((unsigned __int8*)thisx + j + 100))
                v19[v14++] = j;
        }
        result = thisx[30] / 8;
    LABEL_17:
        if (v14 > 0)
        {
            v9 = rand() % v14--;
            v11 = (unsigned __int8)v19[v9];
            v19[v9] = v19[v14];
            v2 = thisx[29] * (v11 & 0x80000003) + thisx[29] / 2;
            v13 = (int)(v2 + sub_446465((char*)byte_4B9B10)) / 8;
            v12 = (thisx[30] / 2 + thisx[30] * (v11 / 4)) / 8;
            v10 = 0;
            while (1)
            {
                v4 = 4 * v10;
                if (!(4 * v10))
                    v4 = 1;
                v6 = v13;
                v5 = v12 - v10;
                v8 = 1;
                v7 = 1;
                for (k = 0;
                    k < v4
                    && (v6 < 0 || v6 >= thisx[16] || v5 < 0 || v5 >= thisx[17] || !*(_WORD*)(thisx[13] + 2 * (thisx[16] * v5 + v6)));
                    ++k)
                {
                    v6 += v8;
                    v5 += v7;
                    if (v5 == v12)
                        v8 = -v8;
                    if (v6 == v13)
                        v7 = -v7;
                }
                if (k < v4)
                    break;
                if (++v10 > thisx[29] / 8)
                {
                    result = thisx[30] / 8;
                    if (v10 > result)
                        goto LABEL_17;
                }
            }
            thisx[6] = 800 * v6 + 400;
            thisx[7] = 800 * v5 + 400;
            result = sub_446497((int*)byte_4B9B10, thisx[6] / 100, thisx[7] / 100);
            thisx[8] = result;
        }
    }
    return result;
}

