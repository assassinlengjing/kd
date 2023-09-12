#include "sub.h"
void sub_4015C7(int thisx, int a2, int a3, int a4, int a5)
{
    unsigned __int8 v6; // [esp+4h] [ebp-30h]
    unsigned __int16 v7; // [esp+8h] [ebp-2Ch]
    _BYTE* v8; // [esp+Ch] [ebp-28h]
    int v9[9]; // [esp+10h] [ebp-24h] BYREF

    if (a3 >= 0 && a3 < *(unsigned __int16*)(thisx + 4))
    {
        memset(v9, 0, sizeof(v9));
        v9[0] = 152 * a3 + *(_DWORD*)(thisx + 8);
        v9[1] = *(_DWORD*)(thisx + 16);
        BYTE1(v9[6]) = *(_BYTE*)(thisx + 28);
        v9[4] = a4;
        v9[7] = a5;
        v9[2] = *(_DWORD*)(thisx + 24);
        if (!*(_BYTE*)(thisx + 28))
        {
            v8 = (_BYTE*)(36 * a5 + dword_4B92E0);
            v6 = sub_4016F0(v8);
            v7 = (unsigned __int8)sub_401710(v8);
            LOWORD(v9[8]) = sub_475CB0((short*)v8);
            v9[8] = LOWORD(v9[8]);
            v9[3] = *(_DWORD*)(*((_DWORD*)dword_4B9360 + v6) + 4 * v7);
        }
        sub_478C4C((_DWORD*)a2, (int)v9);
    }
}