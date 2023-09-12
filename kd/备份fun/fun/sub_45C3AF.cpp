#include "sub.h" 
int sub_45C3AF(int thisx)
{
    int result; // eax
    int nn; // [esp+8h] [ebp-2Ch]
    unsigned __int8 v4; // [esp+Ch] [ebp-28h]
    unsigned __int8 mm; // [esp+10h] [ebp-24h]
    int kk; // [esp+14h] [ebp-20h]
    int ii; // [esp+18h] [ebp-1Ch]
    int m; // [esp+1Ch] [ebp-18h]
    int j; // [esp+20h] [ebp-14h]
    int v10; // [esp+24h] [ebp-10h]
    unsigned __int8 v11; // [esp+28h] [ebp-Ch]
    int i; // [esp+2Ch] [ebp-8h]
    int k; // [esp+2Ch] [ebp-8h]
    int n; // [esp+2Ch] [ebp-8h]
    int jj; // [esp+2Ch] [ebp-8h]

    if (*(_BYTE*)(thisx + 11690) == 18 || *(_BYTE*)(thisx + 11690) == 19 || *(_BYTE*)(thisx + 11690) == 20)
    {
        if (*(_BYTE*)(thisx + 13044) == 1)
        {
            if (*(_BYTE*)(thisx + 11690) == 18)
            {
                if (sub_425E70((_BYTE*)(thisx + 3852)) == 1)
                    return sub_467B8F((_DWORD*)thisx);
                else
                    return sub_462B0C(thisx);
            }
            else if (*(_BYTE*)(thisx + 11690) == 19)
            {
                return sub_463007(thisx);
            }
            else
            {
                result = thisx;
                if (*(_BYTE*)(thisx + 11690) == 20)
                    return sub_473F53((_DWORD*)thisx);
            }
        }
        else
        {
            if (*(_BYTE*)(thisx + 13044) == 2)
                *(_BYTE*)(thisx + 13044) = 4;
            sub_46287E((char*)thisx);
            if (*(_WORD*)(thisx + 2566) || *(_WORD*)(thisx + 2568))
            {
                return sub_45CF7B(thisx);
            }
            else
            {
                *(_BYTE*)(thisx + 13100) = 0;
                return sub_45DC7E(thisx);
            }
        }
    }
    else
    {
        *(_DWORD*)(thisx + 104) = 16;
        *(_BYTE*)(thisx + 2516) = 1;
        for (i = 0; i < 8; ++i)
        {
            for (j = 0; j < 4; ++j)
                *(_BYTE*)(thisx + j + 4 * i + 13010) = -1;
        }
        for (k = 0; k < *(unsigned __int8*)(thisx + 12969); ++k)
        {
            for (m = 0; m < *(unsigned __int8*)(k + thisx + 13002) && *(_BYTE*)(thisx + m + 4 * k + 12970); ++m)
                ;
            if (m < *(unsigned __int8*)(k + thisx + 13002))
                break;
        }
        v11 = k;
        memset((void*)(thisx + 2564), 0, 0x10u);
        *(_WORD*)(thisx + 2574) = (unsigned __int8)k;
        v10 = 0;
        for (n = 0; n < *(unsigned __int8*)(thisx + v11 + 13002); ++n)
        {
            for (ii = 0; ii < (unsigned __int8)byte_4B9990; ++ii)
            {
                if (*(unsigned __int8*)(ii + thisx + 13044) == n + 1)
                {
                    *(_BYTE*)(thisx + v10 + 4 * v11 + 13010) = *(_BYTE*)(thisx + ii + 4 * v11 + 12970);
                    *(_WORD*)(thisx + 2 * v10++ + 2566) = n;
                }
                if (v10 >= 4)
                    break;
            }
            if (v10 >= 4)
                break;
        }
        for (jj = 0; jj < *(unsigned __int8*)(thisx + 12969); ++jj)
        {
            if (v11 != jj)
            {
                for (kk = 0; kk < *(unsigned __int8*)(jj + thisx + 13002); ++kk)
                {
                    for (mm = rand() % *(unsigned __int8*)(jj + thisx + 13002);
                        ;
                        mm = (mm + 1) % *(unsigned __int8*)(jj + thisx + 13002))
                    {
                        v4 = *(_BYTE*)(thisx + 4 * jj + 12970 + mm);
                        for (nn = 0; nn < kk && *(unsigned __int8*)(thisx + nn + 4 * jj + 13010) != v4; ++nn)
                            ;
                        if (nn == kk)
                            break;
                    }
                    *(_BYTE*)(thisx + kk + 4 * jj + 13010) = v4;
                }
            }
        }
        *(_WORD*)(thisx + 2564) = 0;
        sub_464C88(thisx);
        return sub_456D33((const CHAR*)thisx, aMenuWav_2, 1, 0);
    }
    return result;
}

