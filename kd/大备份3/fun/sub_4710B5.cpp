#include "sub.h" 
int sub_4710B5(int thisx)
{
    int v2; // [esp+0h] [ebp-160h]
    int v3; // [esp+4h] [ebp-15Ch]
    int mm; // [esp+Ch] [ebp-154h]
    int kk; // [esp+10h] [ebp-150h]
    int v7; // [esp+14h] [ebp-14Ch]
    int v8; // [esp+18h] [ebp-148h]
    int v9; // [esp+1Ch] [ebp-144h]
    unsigned __int8 v10; // [esp+20h] [ebp-140h]
    int v11; // [esp+28h] [ebp-138h]
    int v12; // [esp+2Ch] [ebp-134h]
    int ii; // [esp+30h] [ebp-130h]
    int v14; // [esp+34h] [ebp-12Ch]
    int m; // [esp+38h] [ebp-128h]
    int v16; // [esp+3Ch] [ebp-124h]
    int v17; // [esp+40h] [ebp-120h]
    unsigned __int8 v18; // [esp+44h] [ebp-11Ch]
    int v19; // [esp+48h] [ebp-118h]
    int v20; // [esp+4Ch] [ebp-114h]
    int n; // [esp+50h] [ebp-110h]
    int k; // [esp+58h] [ebp-108h]
    int v23; // [esp+60h] [ebp-100h]
    int v24; // [esp+64h] [ebp-FCh]
    int j; // [esp+68h] [ebp-F8h]
    int v26[44]; // [esp+6Ch] [ebp-F4h] BYREF
    int i; // [esp+11Ch] [ebp-44h]
    int v28[15]; // [esp+120h] [ebp-40h] BYREF
    int jj; // [esp+15Ch] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 25;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_BYTE*)(thisx + 2580) = 0;
    sub_440B78(unk_4BDB28);
    sub_4A02E9((_DWORD*)unk_4BDC60, unk_4B9248, 0, 0, unk_4B9248);
    sub_49DB90(v28);
    if (sub_49DA45((_DWORD*)unk_4BDC60, aGraphicKkResul, (int)v28) >= 0)
    {
        sub_49C15E((int)v26);
        v26[0] = v28[0];
        sub_49CC5B((short*)unk_4BDC60, unk_4B9248, v26);
        sub_49DA8A((_DWORD*)unk_4BDC60, v28[0]);
    }
    *(_DWORD*)(thisx + 2528) = sub_43FC18((_DWORD*)unk_4BDB28, pszFileName);
    for (i = 0; i < 4; ++i)
    {
        v24 = thisx + 244 * i + 1392;
        v23 = *(_DWORD*)(thisx + 244 * i + 1560);
        *(_BYTE*)(thisx + 244 * i + 1634) = 1;
        for (j = 0; j < 4; ++j)
        {
            if (v23 < *(_DWORD*)(thisx + 244 * j + 1560))
                ++* (_BYTE*)(v24 + 242);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        for (k = 0; k < 6; ++k)
        {
            for (m = 0; m < 5; ++m)
                *((_BYTE*)&v26[6 * m + 14] + 6 * i + k) = 1;
            v16 = *(unsigned __int8*)(thisx + 244 * i + 1634);
            v20 = v16 + 10 * *(__int16*)(28 * k + thisx + 244 * i + 1392 + 6);
            v17 = v16 + 10 * *(unsigned __int8*)(28 * k + thisx + 244 * i + 1392 + 26);
            v18 = v16 + 10 * *(_BYTE*)(28 * k + thisx + 244 * i + 1392 + 20);
            v19 = v16
                + 10
                * (*(__int16*)(28 * k + thisx + 244 * i + 1392 + 22) - 2 * *(__int16*)(28 * k + thisx + 244 * i + 1392 + 24));
            if (!(v18 / 10))
                v20 = 0;
            for (n = 0; n < 4; ++n)
            {
                v14 = *(unsigned __int8*)(thisx + 244 * n + 1634);
                for (ii = 0; ii < 6; ++ii)
                {
                    v11 = v14 + 10 * *(__int16*)(28 * ii + thisx + 244 * n + 1392 + 6);
                    v12 = v14 + 10 * *(unsigned __int8*)(28 * ii + thisx + 244 * n + 1392 + 26);
                    v10 = v14 + 10 * *(_BYTE*)(28 * ii + thisx + 244 * n + 1392 + 20);
                    v9 = v14
                        + 10
                        * (*(__int16*)(28 * ii + thisx + 244 * n + 1392 + 22)
                            - 2 * *(__int16*)(28 * ii + thisx + 244 * n + 1392 + 24));
                    if (!(v10 / 10))
                        v11 = 0;
                    if (v18 < (int)v10 || v18 / 10 <= 1)
                        ++* ((_BYTE*)&v26[14] + 6 * i + k);
                    if (v20 < v11 || !(v18 / 10))
                        ++* ((_BYTE*)&v26[20] + 6 * i + k);
                    if (v20 <= 0)
                        v3 = -v20;
                    else
                        v3 = v20;
                    if (v11 <= 0)
                        v2 = -v11;
                    else
                        v2 = v11;
                    if (v3 > v2 && v10 / 10 || !(v18 / 10))
                        ++* ((_BYTE*)&v26[26] + 6 * i + k);
                    if (v17 < v12 || !(v17 / 10))
                        ++* ((_BYTE*)&v26[32] + 6 * i + k);
                    if (v19 < v9)
                        ++* ((_BYTE*)&v26[38] + 6 * i + k);
                }
            }
        }
    }
    for (jj = 0; jj < 5; ++jj)
    {
        v8 = 0;
        for (i = 0; i < 4; ++i)
        {
            for (kk = 0; kk < 6; ++kk)
            {
                if (*((_BYTE*)&v26[6 * jj + 14] + 6 * i + kk) == 1)
                    ++v8;
            }
        }
        if (v8)
        {
            v7 = rand() % v8;
            for (i = 0; i < 4; ++i)
            {
                for (mm = 0; mm < 6; ++mm)
                {
                    if (*((_BYTE*)&v26[6 * jj + 14] + 6 * i + mm) == 1 && --v7 == -1)
                    {
                        *(_WORD*)(thisx + 2 * jj + 2564) = mm + 10 * i;
                        break;
                    }
                }
                if (v7 == -1)
                    break;
            }
        }
        else
        {
            *(_WORD*)(thisx + 2 * jj + 2564) = 100;
        }
    }
    return sub_47F958((_DWORD*)(thisx + 736));
}
