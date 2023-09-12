#include "sub.h" 
__int16 sub_467E7D(int thisx, _BYTE* a2)
{
    int v2; // esi
    unsigned __int8 v3; // al
    __int16 result; // ax
    int v6[2]; // [esp+8h] [ebp-24h] BYREF
    char v7; // [esp+10h] [ebp-1Ch]
    int v8; // [esp+14h] [ebp-18h]
    char* v9; // [esp+18h] [ebp-14h]
    char* v10; // [esp+1Ch] [ebp-10h]
    int v11; // [esp+20h] [ebp-Ch]
    int i; // [esp+24h] [ebp-8h]
    int v13; // [esp+28h] [ebp-4h]

    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        v10 = (char*)(thisx + 612 * i + 2628);
        if (v10 != a2 && !sub_41BE56((_DWORD*)v10))
        {
            LOBYTE(v11) = sub_426070(v10);
            v2 = (unsigned __int8)v11;
            if (v2 == (unsigned __int8)sub_426070(a2) && (!(_BYTE)v11 || *(_DWORD*)(thisx + 116) != 3))
            {
                if (sub_41BA53((int)v10, 0x82u, 0))
                {
                    sub_42511B(v10, *(unsigned __int8*)(thisx + (unsigned __int8)v11 + 2546));
                    sub_442863(v6);
                    v6[0] = 0;
                    v6[1] = -24;
                    v9 = v10;
                    v8 = 0;
                    v7 = 15;
                    sub_4561A5((_BYTE*)thisx, (int)v6);
                    sub_43FFC3((_DWORD*)unk_4BDB28, (_DWORD)unk_4B9AD4, -1, 100, 100, 0);
                }
            }
        }
    }
    LOBYTE(v13) = sub_425EF0(a2);
    if (*(_DWORD*)(thisx + 104) == 11 || *(_DWORD*)(thisx + 104) == 10)
        *(_BYTE*)(thisx + (unsigned __int8)v13 + 13052) = -1;
    v3 = sub_426070(a2);
    sub_4631A8((_BYTE*)thisx, v3);
    result = thisx;
    if (*(_DWORD*)(thisx + 116) == 3 && (_BYTE)v13)
    {
        sub_4565CF(thisx);
        return sub_456738(thisx, v13);
    }
    return result;
}