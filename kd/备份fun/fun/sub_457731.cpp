#include "sub.h" 
int sub_457731(_DWORD* thisx, _DWORD* a2)
{
    int v3; // [esp+4h] [ebp-3Ch]
    int v4; // [esp+8h] [ebp-38h]
    int v5; // [esp+Ch] [ebp-34h]
    int v7; // [esp+14h] [ebp-2Ch]
    int v8; // [esp+18h] [ebp-28h]
    int v9; // [esp+1Ch] [ebp-24h]
    int v10; // [esp+20h] [ebp-20h]
    int v11; // [esp+24h] [ebp-1Ch]
    int v12; // [esp+28h] [ebp-18h]
    int i; // [esp+2Ch] [ebp-14h]
    unsigned __int8 v14; // [esp+30h] [ebp-10h]
    int v15; // [esp+34h] [ebp-Ch]
    char v16; // [esp+38h] [ebp-8h]
    int v17; // [esp+3Ch] [ebp-4h]

    if (!a2)
        return 0;
    v12 = sub_426090(a2);
    v11 = sub_4260B0(a2);
    v14 = sub_425EF0((char*)a2);
    v16 = sub_426070((char*)a2);
    v17 = sub_425D70(a2);
    v10 = 0;
    v15 = -1;
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        if (i != v14
            && v16 != sub_426070((char*)&thisx[153 * i + 657])
            && unknown_libname_7(&thisx[153 * i + 657])
            && !sub_4263D0((unsigned __int8*)&thisx[153 * i + 657])
            && !sub_41BE56(&thisx[153 * i + 657]))
        {
            v9 = sub_426090(&thisx[153 * i + 657]);
            v8 = sub_4260B0(&thisx[153 * i + 657]);
            v5 = v11 - v8 <= 0 ? v8 - v11 : v11 - v8;
            if (v5 <= 500)
            {
                if ((v7 = v12 - v9, !v17) && v7 > 0 || v17 && v7 < 0)
                {
                    if (!v10 || (v7 <= 0 ? (v4 = v9 - v12) : (v4 = v12 - v9), v15 > v4))
                    {
                        v10 = (int)&thisx[153 * i + 657];
                        if (v7 <= 0)
                            v3 = v9 - v12;
                        else
                            v3 = v12 - v9;
                        v15 = v3;
                    }
                }
            }
        }
    }
    return v10;
}

