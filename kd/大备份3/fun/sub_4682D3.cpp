#include "sub.h" 
int sub_4682D3(char* thisx, _DWORD* a2, char a3)
{
    int v4; // [esp+4h] [ebp-4Ch]
    int v5; // [esp+8h] [ebp-48h]
    int v6; // [esp+Ch] [ebp-44h]
    int v7; // [esp+10h] [ebp-40h]
    char* v9; // [esp+18h] [ebp-38h]
    int v10; // [esp+1Ch] [ebp-34h]
    int v11; // [esp+24h] [ebp-2Ch]
    int v12; // [esp+28h] [ebp-28h]
    int v13; // [esp+2Ch] [ebp-24h]
    int i; // [esp+30h] [ebp-20h]
    int v15; // [esp+34h] [ebp-1Ch]
    int v16; // [esp+38h] [ebp-18h]
    int v17; // [esp+3Ch] [ebp-14h]
    int v18; // [esp+40h] [ebp-10h]
    char v19; // [esp+44h] [ebp-Ch]
    int v20; // [esp+48h] [ebp-8h]
    int v21; // [esp+4Ch] [ebp-4h]

    v16 = sub_426090(a2) / 100;
    v15 = sub_4260B0(a2) / 100;
    v19 = sub_426070((char*)a2);
    v20 = sub_425D70(a2);
    v17 = (unsigned __int8)sub_425EF0((char*)a2);
    v21 = 0;
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        v9 = &thisx[612 * i + 2628];
        if (i != v17 && unknown_libname_7((_DWORD*)v9) && !sub_41BE56((_DWORD*)v9) && v19 != sub_426070(v9))
        {
            if ((v13 = sub_426090((_DWORD*)v9) / 100, v12 = sub_4260B0((_DWORD*)v9) / 100, v20) && v16 - v13 <= -32 || !v20 && v16 - v13 >= 32)
            {
                v10 = v13 - v16;
                v11 = v12 - v15;
                if (a3 != 1 || v11 <= 0)
                {
                    if (a3 != 2
                        || (v10 <= 0 ? (v7 = v16 - v13) : (v7 = v13 - v16),
                            v11 <= 0 ? (v6 = v15 - v12) : (v6 = v12 - v15),
                            v7 >= 2 * v6))
                    {
                        if (a3 != 3 || v11 >= 0)
                        {
                            if (v10 <= 0)
                                v5 = v16 - v13;
                            else
                                v5 = v13 - v16;
                            if (v11 <= 0)
                                v4 = v15 - v12;
                            else
                                v4 = v12 - v15;
                            if (!v21 || v4 + v5 < v18)
                            {
                                v21 = (int)&thisx[612 * i + 2628];
                                v18 = v4 + v5;
                            }
                        }
                    }
                }
            }
        }
    }
    return v21;
}

