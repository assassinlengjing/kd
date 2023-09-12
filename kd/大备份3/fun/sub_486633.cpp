#include "sub.h" 
int sub_486633(_DWORD* thisx, int a2, int a3)
{
    _BYTE* v4; // eax
    char v5; // al
    int v7; // [esp+Ch] [ebp-24h]
    int v8; // [esp+10h] [ebp-20h]
    int v9; // [esp+14h] [ebp-1Ch]
    int v10; // [esp+18h] [ebp-18h]
    _BYTE* v11; // [esp+1Ch] [ebp-14h]
    unsigned __int8 v12; // [esp+20h] [ebp-10h]
    unsigned __int8 v13; // [esp+28h] [ebp-8h]

    if (!unknown_libname_24(thisx + 1))
        return 0;
    v10 = a2 / 8;
    v9 = a3 / 8;
    if (a2 < 0)
        --v10;
    if (a3 < 0)
        --v9;
    v11 = (_BYTE*)sub_4816F5((int)(thisx + 1), v10, v9);
    if (v11)
    {
        v13 = unknown_libname_6(v11);
        if (unknown_libname_5(v11) == 7 && v13 == 255)
        {
            return -1020;
        }
        else
        {
            v5 = sub_425FD0(v11);
            v12 = 1;
            if (v5 == 3 || v5 == 4)
            {
                v12 = 2;
            }
            else if (v5 == 5 || v5 == 6)
            {
                v12 = 4;
            }
            if (v5)
            {
                if ((v5 & 1) == 1)
                {
                    return v12 * (a2 % 8) / 2 + 4 * v13;
                }
                else if ((v5 & 1) != 0)
                {
                    return 4 * (unsigned __int8)unknown_libname_6(v11);
                }
                else
                {
                    return v12 * (8 - a2 % 8) / 2 + 4 * v13;
                }
            }
            else
            {
                return 4 * v13;
            }
        }
    }
    else
    {
        v8 = (unsigned __int8)unknown_libname_25((_BYTE*)thisx + 1);
        v7 = (unsigned __int8)sub_4261F0((_BYTE*)thisx + 4);
        if (v10 >= 0)
        {
            if (v10 >= v8)
                LOBYTE(v10) = v8 - 1;
        }
        else
        {
            LOBYTE(v10) = 0;
        }
        if (v9 >= 0)
        {
            if (v9 >= v7)
                LOBYTE(v9) = v7 - 1;
            v4 = (_BYTE*)sub_4816F5((int)(thisx + 1), v10, v9);
        }
        else
        {
            v4 = (_BYTE*)sub_4816F5((int)(thisx + 1), v10, 0);
        }
        if (v4 && unknown_libname_5(v4) == 7)
            return -1020;
        else
            return 1020;
    }
}
