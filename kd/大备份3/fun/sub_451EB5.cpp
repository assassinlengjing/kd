#include "sub.h" 
_DWORD* sub_451EB5(_BYTE* thisx, int a2, int a3)
{
    _DWORD* result; // eax
    struct tagRECT rc; // [esp+4h] [ebp-5Ch] BYREF
    int v6; // [esp+14h] [ebp-4Ch]
    int k; // [esp+18h] [ebp-48h]
    int j; // [esp+1Ch] [ebp-44h]
    int i; // [esp+20h] [ebp-40h]
    int m; // [esp+24h] [ebp-3Ch]
    int v11; // [esp+28h] [ebp-38h] BYREF
    int v12; // [esp+2Ch] [ebp-34h]
    int v13; // [esp+30h] [ebp-30h]

    sub_49C15E((_DWORD)&v11);
    result = (_DWORD*)unk_4B91F8;
    v11 = unk_4B91F8;
    if (a2)
    {
        for (i = 0; i < 24; ++i)
        {
            v12 = 8 * ((i + 1) % 5) - 40;
            v13 = 8 * i;
            for (j = 0; j < 9; ++j)
            {
                sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v11);
                v6 = v12 / 8;
                for (k = 0; k < 5; ++k)
                {
                    if (v6 >= 0 && v6 < 40)
                        thisx[25 * v6 + 11969 + i] = k;
                    ++v6;
                }
                v12 += 40;
            }
        }
        v13 = 8 * i;
        result = (_DWORD*)unk_4B91F4 + 9;
        v11 = unk_4B91F4 + 9;
        for (m = 0; m < 40; ++m)
        {
            v12 = 8 * m;
            sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v11);
            result = (int*)thisx;
            thisx[25 * m + 11993] = 19;
        }
    }
    if (a3)
    {
        SetRect(&rc, 0, 200, 320, 240);
        return sub_4A02E9((_DWORD*)unk_4BDC60, unk_4B9248, (int)&rc, 0, unk_4B9248);
    }
    return result;
}

