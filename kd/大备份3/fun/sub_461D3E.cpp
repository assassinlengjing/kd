#include "sub.h" 
int sub_461D3E(unsigned __int8* thisx)
{
    int result; // eax
    unsigned __int8 v3; // [esp+4h] [ebp-54h]
    int jj; // [esp+8h] [ebp-50h]
    int v5; // [esp+Ch] [ebp-4Ch]
    unsigned __int8 m; // [esp+10h] [ebp-48h]
    int j; // [esp+14h] [ebp-44h]
    int v8; // [esp+18h] [ebp-40h]
    int v9; // [esp+1Ch] [ebp-3Ch]
    int v10; // [esp+20h] [ebp-38h]
    unsigned __int8 v11; // [esp+24h] [ebp-34h]
    int i; // [esp+28h] [ebp-30h]
    int k; // [esp+28h] [ebp-30h]
    int n; // [esp+28h] [ebp-30h]
    int ii; // [esp+28h] [ebp-30h]
    char v16[16]; // [esp+2Ch] [ebp-2Ch]
    int v17; // [esp+3Ch] [ebp-1Ch]
    int v18; // [esp+40h] [ebp-18h]
    int v19; // [esp+44h] [ebp-14h]
    int v20; // [esp+48h] [ebp-10h]
    int v21; // [esp+4Ch] [ebp-Ch]
    int v22; // [esp+50h] [ebp-8h]
    unsigned __int8 v23; // [esp+54h] [ebp-4h]

    unk_4B9984 = 0;
    sub_45FF40(thisx);
    v18 = 0;
    for (i = 0; i < thisx[11688]; ++i)
    {
        for (j = 0; j < thisx[11688]; ++j)
        {
            if (thisx[j + 13060] == i + 1)
                v16[v18++] = j;
        }
    }
    LOBYTE(v17) = thisx[11812];
    LOBYTE(v22) = thisx[11688] / (__int16)(unsigned __int8)v17;
    LOBYTE(v20) = thisx[11688] % (__int16)(unsigned __int8)v17;
    for (k = 0; k < (unsigned __int8)v22; ++k)
        thisx[k + 13002] = v17;
    if ((_BYTE)v20)
        thisx[k + 13002] = v20;
    if ((_BYTE)v22 && (_BYTE)v20 && (unsigned __int8)v20 < 3u)
    {
        for (m = 3 - v20; (unsigned __int8)v22 < (int)m; --m)
            ;
        for (n = 0; n < m; ++n)
        {
            --thisx[(unsigned __int8)v22 - n + 13001];
            ++thisx[(unsigned __int8)v22 + 13002];
        }
    }
    if ((_BYTE)v20)
        LOBYTE(v22) = v22 + 1;
    thisx[12969] = v22;
    v8 = 0;
    v19 = thisx[11690] % (int)thisx[11688] + 1;
    v9 = 1;
    v10 = thisx[11688] % v19;
    for (ii = 0; ii < (unsigned __int8)v22; ++ii)
    {
        v5 = thisx[ii + 13002];
        for (jj = 0; jj < v5; ++jj)
        {
            v3 = v8;
            v8 += v19;
            if (v10)
            {
                if (v8 == thisx[11688] + v9 - 1)
                {
                    v8 = v9++;
                }
                else if (v8 > thisx[11688])
                {
                    v8 -= thisx[11688];
                }
            }
            else if (v8 >= thisx[11688])
            {
                v8 = v9++;
            }
            thisx[4 * ii + 12970 + jj] = v16[v3];
            if (!v16[v3])
            {
                LOBYTE(v21) = ii;
                v11 = jj;
            }
        }
    }
    v23 = thisx[4 * (unsigned __int8)v21 + 12970];
    thisx[4 * (unsigned __int8)v21 + 12970] = 0;
    result = v11;
    thisx[4 * (unsigned __int8)v21 + 12970 + v11] = v23;
    return result;
}

