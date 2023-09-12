#include "sub.h" 
int sub_452045(_BYTE* thisx, int a2, int a3, int a4, int a5)
{
    int result; // eax
    unsigned __int8 v7; // [esp+4h] [ebp-5Ch]
    unsigned __int8 v8; // [esp+8h] [ebp-58h]
    int j; // [esp+Ch] [ebp-54h]
    int v10; // [esp+10h] [ebp-50h]
    int v11; // [esp+10h] [ebp-50h]
    int v12; // [esp+14h] [ebp-4Ch]
    int v13; // [esp+14h] [ebp-4Ch]
    int v14; // [esp+18h] [ebp-48h]
    int v15; // [esp+1Ch] [ebp-44h]
    int i; // [esp+20h] [ebp-40h]
    int m; // [esp+20h] [ebp-40h]
    int k; // [esp+24h] [ebp-3Ch]
    int v19; // [esp+28h] [ebp-38h] BYREF
    int v20; // [esp+2Ch] [ebp-34h]
    int v21; // [esp+30h] [ebp-30h]

    sub_49C15E((int)&v19);
    for (i = 0; i < a5; ++i)
    {
        v21 = 8 * (i + a3);
        v14 = i + a3;
        for (j = 0; j < a4; ++j)
        {
            v20 = 8 * (j + a2);
            if (j || i)
            {
                if (j != a4 - 1 || i)
                {
                    if (i)
                    {
                        if (j || i != a5 - 1)
                        {
                            if (j == a4 - 1 && i == a5 - 1)
                            {
                                v19 = unk_4B91F4 + 8;
                            }
                            else if (i == a5 - 1)
                            {
                                v19 = unk_4B91F4 + 7;
                            }
                            else if (j)
                            {
                                if (j == a4 - 1)
                                    v19 = unk_4B91F4 + 5;
                                else
                                    v19 = unk_4B91F4;
                            }
                            else
                            {
                                v19 = unk_4B91F4 + 4;
                            }
                        }
                        else
                        {
                            v19 = unk_4B91F4 + 6;
                        }
                    }
                    else
                    {
                        v19 = unk_4B91F4 + 2;
                    }
                }
                else
                {
                    v19 = unk_4B91F4 + 3;
                }
            }
            else
            {
                v19 = unk_4B91F4 + 1;
            }
            v15 = j + a2;
            if (j + a2 >= 0 && v15 < 40 && v14 >= 0 && v14 < 25)
                thisx[25 * v15 + 11969 + v14] = v19 - unk_4B91F4 + 10;
            sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v19);
        }
    }
    v12 = a5 + a3;
    v21 = 8 * (a5 + a3);
    for (k = 0; k < a4; ++k)
    {
        v10 = a2 + k + 1;
        if (v10 >= 0 && v10 < 40 && v12 >= 0 && v12 < 25)
        {
            v8 = thisx[25 * v10 + 11969 + v12];
            if (v8 < 5u)
            {
                v20 = 8 * v10;
                v19 = unk_4B91F8 + v8 + 1;
                sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v19);
            }
        }
    }
    v11 = a4 + a2;
    v20 = 8 * (a4 + a2);
    for (m = 0; ; ++m)
    {
        result = m;
        if (m >= a5)
            break;
        v13 = a3 + m + 1;
        if (v11 >= 0 && v11 < 40 && v13 >= 0 && v13 < 25)
        {
            v7 = thisx[25 * v11 + 11969 + v13];
            if (v7 < 5u)
            {
                v21 = 8 * v13;
                v19 = unk_4B91F8 + v7 + 1;
                sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v19);
            }
        }
    }
    return result;
}