#include "sub.h" 
int sub_4655EF(_DWORD* thisx, _DWORD* a2, int a3, int a4)
{
    unsigned __int64 v4; // rax
    int v6; // [esp+4h] [ebp-3Ch]
    int v7; // [esp+8h] [ebp-38h]
    int v8; // [esp+Ch] [ebp-34h]
    int v10; // [esp+14h] [ebp-2Ch]
    int v11; // [esp+18h] [ebp-28h]
    int v12; // [esp+20h] [ebp-20h]
    int i; // [esp+24h] [ebp-1Ch]
    int v14; // [esp+28h] [ebp-18h]
    int v15; // [esp+2Ch] [ebp-14h]
    int v16; // [esp+30h] [ebp-10h]
    int v17; // [esp+34h] [ebp-Ch]
    char v18; // [esp+38h] [ebp-8h]
    int v19; // [esp+3Ch] [ebp-4h]

    v15 = sub_426090(a2) / 100;
    v14 = sub_4260B0(a2) / 100;
    v16 = sub_4260D0(a2) / 100;
    v18 = sub_426070((char*)a2);
    v19 = sub_425D70(a2);
    v17 = (unsigned __int8)sub_425EF0((char*)a2);
    for (i = 0; i < 8; ++i)
    {
        if (i != v17
            && unknown_libname_7(&thisx[153 * i + 657])
            && !sub_41BE56(&thisx[153 * i + 657])
            && v18 != sub_426070((char*)&thisx[153 * i + 657]))
        {
            if ((v4 = __PAIR64__(i, sub_426090(&thisx[153 * i + 657]) / 100),
                v12 = v4,
                v10 = sub_4260B0(&thisx[153 * HIDWORD(v4) + 657]) / 100,
                v11 = sub_4260D0(&thisx[153 * i + 657]) / 100,
                !a4)
                || v19 && v15 < v12
                || !v19 && v15 > v12)
            {
                v8 = v15 - v12 <= 0 ? v12 - v15 : v15 - v12;
                if (v8 < a3)
                {
                    v7 = v14 - v10 <= 0 ? v10 - v14 : v14 - v10;
                    if (v7 <= 5)
                    {
                        v6 = v16 - v11 <= 0 ? v11 - v16 : v16 - v11;
                        if (v6 <= 16)
                            return 1;
                    }
                }
            }
        }
    }
    return 0;
}

