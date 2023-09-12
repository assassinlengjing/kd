#include "sub.h" 
int sub_48E9E7(_DWORD* thisx)
{
    BOOL v1; // esi
    BOOL v2; // esi
    BOOL v5; // [esp+8h] [ebp-14h]
    int v6; // [esp+Ch] [ebp-10h]
    int v7; // [esp+10h] [ebp-Ch]
    BOOL v8; // [esp+14h] [ebp-8h]
    int v9; // [esp+18h] [ebp-4h]

    v1 = sub_476D78(0);
    v7 = v1 - sub_476D29(0);
    v2 = sub_476CDA(0);
    v6 = v2 - sub_476C8B(0);
    v5 = sub_476DC7(0, 0);
    v8 = sub_476DC7(0, 1);
    v9 = 0;
    if (v7)
    {
        *((_BYTE*)thisx + thisx[5] + 36) = ((unsigned __int8)byte_4B9990 + v7 + *((unsigned __int8*)thisx + thisx[5] + 36))
            % (unsigned __int8)byte_4B9990;
        v9 = 3;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
    }
    else if (v6)
    {
        thisx[5] = ((unsigned __int8)byte_4B9986 + v6 + thisx[5]) % (unsigned __int8)byte_4B9986;
        v9 = 4;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
    }
    else if (v5)
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        return sub_48EB7C((unsigned __int8*)thisx) == 0;
    }
    else if (v8)
    {
        return 2;
    }
    return v9;
}

