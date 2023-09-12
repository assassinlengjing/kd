#include "sub.h" 
char __cdecl sub_478682(_DWORD* a1, unsigned __int8 a2, int a3, int a4, int a5, int a6)
{
    char result; // al
    unsigned __int8 v7; // [esp+0h] [ebp-44h]
    int yBottom; // [esp+4h] [ebp-40h]
    int v9; // [esp+8h] [ebp-3Ch]
    int j; // [esp+Ch] [ebp-38h]
    int v11; // [esp+10h] [ebp-34h]
    unsigned __int8 v12; // [esp+14h] [ebp-30h]
    unsigned __int8 v13; // [esp+18h] [ebp-2Ch]
    int v14; // [esp+1Ch] [ebp-28h]
    int v15; // [esp+20h] [ebp-24h]
    int v16; // [esp+28h] [ebp-1Ch]
    int i; // [esp+2Ch] [ebp-18h]
    struct tagRECT rc; // [esp+30h] [ebp-14h] BYREF
    int v19; // [esp+40h] [ebp-4h]

    if (a6)
    {
        result = a2;
        if (a2)
        {
            a1[9] = a5;
            if (a2 >= 0x80u)
                *a1 = a4;
            else
                *a1 = dword_4B9238 + a3;
            v19 = 0;
            v15 = 8;
            v14 = 8;
            if (a1[6])
                v15 = -8;
            if (a1[7])
                v14 = -8;
            v11 = a1[1];
            result = SetRect(&rc, 0, 0, 8, 8);
            if (a2 >= 0x80u)
            {
                v12 = 2;
                v13 = 2;
                v16 = 1;
            }
            else
            {
                result = byte_4B011F[a2];
                v12 = result;
                v13 = byte_4B0113[a2];
                v16 = 0;
            }
            for (i = 0; i < v12; ++i)
            {
                v9 = a1[2];
                if (a6 > 0)
                {
                    if (a1[7])
                        yBottom = a6 - 8 * (v12 - 1 - i);
                    else
                        yBottom = a6 - 8 * i;
                    if (yBottom <= 0)
                        yBottom = 0;
                    if (yBottom > 8)
                        yBottom = 8;
                    if (a1[7])
                        SetRect(&rc, 0, 8 - yBottom, 8, yBottom);
                    else
                        SetRect(&rc, 0, 0, 8, yBottom);
                }
                for (j = 0; j < v13; ++j)
                {
                    if (v16)
                        v7 = byte_4AFF40[4 * a2 + v19];
                    else
                        v7 = byte_4B012A[2 * a2 + v19] + 1;
                    if (v7)
                        sub_4A00C6((int)byte_4BDC60, a1, v7 - 1, (int*) & rc);
                    a1[1] += v15;
                    ++v19;
                }
                a1[1] = v11;
                a1[2] = v14 + v9;
                result = i + 1;
            }
        }
    }
    return result;
}
