#include "sub.h" 
_DWORD* sub_425617(_DWORD* thisx, int a2, int a3, int a4, int a5)
{
    _DWORD* result; // eax
    unsigned __int16 v6; // ax
    int v8; // [esp+8h] [ebp-40h]
    int n; // [esp+Ch] [ebp-3Ch]
    int v10; // [esp+10h] [ebp-38h]
    int v11; // [esp+10h] [ebp-38h]
    int v12; // [esp+14h] [ebp-34h]
    int k; // [esp+18h] [ebp-30h]
    _DWORD* v14; // [esp+24h] [ebp-24h]
    int v15; // [esp+28h] [ebp-20h]
    int v16; // [esp+2Ch] [ebp-1Ch]
    int v17; // [esp+30h] [ebp-18h]
    int v18; // [esp+34h] [ebp-14h]
    int i; // [esp+38h] [ebp-10h]
    int m; // [esp+38h] [ebp-10h]
    int v21; // [esp+3Ch] [ebp-Ch]
    int j; // [esp+40h] [ebp-8h]
    _DWORD* v23; // [esp+44h] [ebp-4h]

    result = thisx;
    if (thisx[31] && thisx[15])
    {
        v6 = sub_41D067(thisx[31], 0);
        v15 = (3 * v6 / 2 + 405) * ((3 * v6 / 2 + 405) / 30) / 2;
        v21 = (3 * sub_41D067(thisx[31], 0) / 2 + 405) / 15;
        sub_426210((char*)byte_4B9B10);
        v18 = 2 * sub_4224A7((void*)thisx[31]) * v21 / 800;
        v23 = (_DWORD*)(a2 - v18);
        v16 = v18 + a4;
        v14 = (_DWORD*)a3;
        v17 = a5;
        if (a2 - v18 < 0)
            v23 = 0;
        if (v16 > thisx[16])
            v16 = thisx[16];
        if (a3 < 0)
            v14 = 0;
        if (a5 > thisx[17])
            v17 = thisx[17];
        for (i = (int)v14; i < v17; ++i)
            memset((void*)(thisx[15] + 2 * ((_DWORD)v23 + thisx[16] * i)), 0, 2 * (v16 - (_DWORD)v23));
        result = v14;
        for (j = (int)v14; j < v17; ++j)
        {
            result = v23;
            for (k = (int)v23; k < v16; ++k)
            {
                v12 = 100 * sub_446497((int*)byte_4B9B10, 8 * k + 4, 8 * j + 4);
                result = (_DWORD*)sub_4773CC(k, j);
                if (result)
                {
                    for (m = 0; m < 2; ++m)
                    {
                        if (!*(_BYTE*)(thisx[15] + 2 * (thisx[16] * j + k) + m))
                        {
                            v10 = k + 2 * m - 1;
                            if (v10 >= 0
                                && v10 < thisx[16]
                                && ((16 * (m == 0) + 8 * (m == 1)) & *(unsigned __int8*)(thisx[14] + thisx[16] * j + v10)) == 0)
                            {
                                for (n = 0; n < v18; ++n)
                                {
                                    v10 = v10 + 2 * m - 1;
                                    if (v10 < 0)
                                        break;
                                    if (v10 >= thisx[16])
                                        break;
                                    v8 = 100 * sub_446497((int*)byte_4B9B10, 8 * v10 + 4, 8 * j + 4);
                                    if (v8 - v12 > v15)
                                        break;
                                    if (v12 - v8 <= v15 && sub_4773CC(v10, j))
                                    {
                                        v11 = v10 - k;
                                        if (v11 <= 127 && v11 >= -127)
                                        {
                                            *(_BYTE*)(thisx[15] + 2 * (thisx[16] * j + k) + m) = v11;
                                            *(_BYTE*)(thisx[15] + 2 * (thisx[16] * j + v11 + k) + 1 - m) = -(char)v11;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        result = (_DWORD*)(m + 1);
                    }
                }
            }
        }
    }
    return result;
}