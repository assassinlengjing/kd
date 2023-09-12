#include "sub.h" 
int sub_45FF40(unsigned __int8* thisx)
{
    int result; // eax
    int m; // [esp+8h] [ebp-18h]
    int j; // [esp+Ch] [ebp-14h]
    char v4; // [esp+10h] [ebp-10h]
    int i; // [esp+18h] [ebp-8h]
    int k; // [esp+18h] [ebp-8h]
    int v7; // [esp+1Ch] [ebp-4h]

    for (i = 0; i < thisx[11688]; ++i)
    {
        v4 = 1;
        for (j = 0; j < thisx[11688]; ++j)
        {
            if (i != j && *(unsigned __int16*)&thisx[2 * i + 11692] < (int)*(unsigned __int16*)&thisx[2 * j + 11692])
                ++v4;
        }
        thisx[i + 13060] = v4;
    }
    v7 = 0;
    for (k = 0; ; ++k)
    {
        result = thisx[11688];
        if (k >= result)
            break;
        for (m = 0; m < thisx[11688]; ++m)
        {
            if (k + 1 == thisx[m + 13060])
            {
                thisx[v7 + 13076] = m;
                if (++v7 >= thisx[11688])
                {
                    k = v7;
                    break;
                }
            }
        }
    }
    return result;
}

