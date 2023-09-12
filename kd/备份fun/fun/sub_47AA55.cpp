#include "sub.h" 
int sub_47AA55()
{
    streambuf* v1; // [esp+0h] [ebp-54h]
    _DWORD* Block; // [esp+20h] [ebp-34h]
    int v3[4]; // [esp+30h] [ebp-24h] BYREF
    int i; // [esp+40h] [ebp-14h]
    int v5; // [esp+44h] [ebp-10h]
    int v6; // [esp+50h] [ebp-4h]

    sub_482BF0(v3);
    v6 = 0;
    if (!sub_482C74((int)v3, aGraphicSkincol))
        goto LABEL_11;
    dword_4B93A0 = sub_4831B2(v3, aStart_10, aEnd_6);
    if ((int)dword_4B93A0 <= 0)
        goto LABEL_11;
    v5 = dword_4B93A0;
    Block = (_DWORD*)operator new(24 * dword_4B93A0 + 4);
    LOBYTE(v6) = 1;
    if (Block)
    {
        *Block = v5;
        eh_vector_constructor_iterator(Block + 1, 0x18u, v5, sub_485B30, sub_485B78);
            v1 = (streambuf*)(Block + 1);
    }
    else
    {
        v1 = 0;
    }
    LOBYTE(v6) = 0;
    dword_4B93A4 = (_DWORD)v1;
    if (v1 && (Src = (_DWORD)operator new(2 * dword_4B93A0)) != 0 && (dword_4B9394 = (_DWORD)operator new(8 * dword_4B93A0)) != 0)
    {
        sub_48328F(v3, aStart_11);
        sub_482FAA(v3);
        for (i = 0; i < (int)dword_4B93A0; ++i)
        {
            if (!sub_485BCA((int)dword_4B93A4 + 24 * i, v3))
                goto LABEL_11;
        }
        v6 = -1;
        sub_482C2F(v3);
        return 1;
    }
    else
    {
    LABEL_11:
        v6 = -1;
        sub_482C2F(v3);
        return 0;
    }
}
