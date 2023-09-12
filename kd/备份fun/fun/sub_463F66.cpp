#include "sub.h" 
int sub_463F66(char* thisx, _BYTE* a2)
{
    int v3; // [esp+4h] [ebp-40h]
    int v4; // [esp+8h] [ebp-3Ch]
    int v5; // [esp+Ch] [ebp-38h]
    bool v6; // [esp+10h] [ebp-34h]
    int v8; // [esp+18h] [ebp-2Ch]
    int v9; // [esp+1Ch] [ebp-28h]
    int v10; // [esp+20h] [ebp-24h]
    int v11; // [esp+24h] [ebp-20h]
    char* v12; // [esp+28h] [ebp-1Ch]
    int v13; // [esp+2Ch] [ebp-18h]
    int v14; // [esp+30h] [ebp-14h]
    int i; // [esp+34h] [ebp-10h]
    int v16; // [esp+38h] [ebp-Ch]
    unsigned __int8 v17; // [esp+3Ch] [ebp-8h]
    char v18; // [esp+40h] [ebp-4h]

    v18 = sub_426070(a2);
    v17 = sub_425EF0(a2);
    v14 = sub_426090((_DWORD*)a2);
    v13 = sub_4260B0((_DWORD*)a2);
    v16 = sub_4260D0((_DWORD*)a2);
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        v12 = &thisx[612 * i + 2628];
        if (v17 != (unsigned __int8)sub_425EF0(v12)
            && (byte_4B99CC || v18 != sub_426070(v12) || (unsigned __int8)sub_4752F0(v12)))
        {
            v6 = sub_426070(v12) && (unsigned __int8)sub_4752F0(v12) == 2;
            v18 = v6;
            if (!v6)
            {
                v9 = v14 - sub_426090((_DWORD*)v12);
                v11 = v13 - sub_4260B0((_DWORD*)v12);
                v10 = v16 - sub_4260D0((_DWORD*)v12);
                v8 = 3200;
                if (v9 > 0 && !sub_425D70((_DWORD*)v12) || v9 < 0 && sub_425D70((_DWORD*)v12))
                    v8 = 800;
                v5 = v9 <= 0 ? -v9 : v9;
                if (v5 <= v8)
                {
                    v4 = v11 <= 0 ? -v11 : v11;
                    if (v4 <= 100 * (unsigned __int8)sub_4264B0(v12))
                    {
                        v3 = v10 <= 0 ? -v10 : v10;
                        if (v3 <= 2400 && (unsigned __int8)sub_4264D0(v12) == 1 && !sub_4753D0(v12, v17))
                            return 1;
                    }
                }
            }
        }
    }
    return 0;
}

