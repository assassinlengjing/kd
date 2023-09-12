#include "sub.h" 
int sub_45B65A(int thisx)
{
    DWORD Time; // eax
    int ii; // [esp+4h] [ebp-28h]
    int n; // [esp+8h] [ebp-24h]
    int v6; // [esp+Ch] [ebp-20h]
    int m; // [esp+10h] [ebp-1Ch]
    int k; // [esp+14h] [ebp-18h]
    unsigned __int16 v9; // [esp+18h] [ebp-14h]
    unsigned __int8 v10; // [esp+1Ch] [ebp-10h]
    int i; // [esp+20h] [ebp-Ch]
    int j; // [esp+20h] [ebp-Ch]
    int v13; // [esp+24h] [ebp-8h]
    unsigned __int16 v14; // [esp+28h] [ebp-4h]

    v10 = *(_BYTE*)(thisx + 11688);
    for (i = 0; i < v10; ++i)
        *(_WORD*)(thisx + 2 * i + 11692) = 0;
    *(_BYTE*)(thisx + 11691) = 0;
    *(_WORD*)(thisx + 11724) = 0;
    *(_WORD*)(thisx + 11726) = 1;
    v13 = 1;
    if (!*(_BYTE*)(thisx + 11807))
        v13 = sub_4631F8((unsigned char*)thisx) + 1;
    v14 = sub_475850((short*)thisx + 11816);
    v9 = sub_475850((short*)thisx + 11892);
    Time = timeGetTime();
    sub_4A2B56(Time);
    rand();
    for (j = v13; j < v10; ++j)
    {
        *(_BYTE*)(j + thisx + 11788) = rand() % word_4B99E4;
        for (k = 0; k < 2; ++k)
        {
            for (m = rand() % (int)Size; ; m = (int)(m + Size + 1) % (int)Size)
            {
                v6 = 1;
                if (m >= 16 && m <= 21)
                    v6 = 0;
                if (v6 && v14 && v14 - 1 == m)
                    v6 = 0;
                if (v6 && v9 && v9 - 1 == m)
                    v6 = 0;
                if (v6 && k == 1 && *(unsigned __int16*)(thisx + 4 * j + 11724) - 2 == m)
                    v6 = 0;
                if (v6)
                {
                    for (n = 1; n < j; ++n)
                    {
                        for (ii = 0; ii < 2; ++ii)
                        {
                            if (*(unsigned __int16*)(thisx + 4 * n + 11724 + 2 * ii) - 2 == m)
                            {
                                v6 = 0;
                                break;
                            }
                        }
                        if (ii < 2)
                            break;
                    }
                }
                if (v6)
                    break;
            }
            *(_WORD*)(thisx + 4 * j + 11724 + 2 * k) = m + 2;
        }
    }
    *(_BYTE*)(thisx + 11690) = 1;
    return sub_461D3E((unsigned char*)thisx);
}

