#include "sub.h" 
_DWORD* sub_41F712(_DWORD* thisx)
{
    int v1; // esi
    int v2; // esi
    _DWORD* result; // eax
    bool v4; // [esp+4h] [ebp-3Ch]
    bool v5; // [esp+8h] [ebp-38h]
    bool v6; // [esp+Ch] [ebp-34h]
    bool v7; // [esp+10h] [ebp-30h]
    bool v8; // [esp+14h] [ebp-2Ch]
    bool v9; // [esp+18h] [ebp-28h]
    char v11; // [esp+20h] [ebp-20h]
    int v12; // [esp+24h] [ebp-1Ch]
    int v13; // [esp+28h] [ebp-18h]
    int v14; // [esp+2Ch] [ebp-14h]
    int i; // [esp+30h] [ebp-10h]
    int v16; // [esp+34h] [ebp-Ch]
    int v17; // [esp+38h] [ebp-8h]
    int v18; // [esp+3Ch] [ebp-4h]

    thisx[1] = 1;
    *((_BYTE*)thisx + 84) = 0;
    *((_BYTE*)thisx + 86) = 0;
    *((_BYTE*)thisx + 87) = 0;
    *((_BYTE*)thisx + 91) = 0;
    *((_BYTE*)thisx + 92) = 0;
    *((_BYTE*)thisx + 93) = 0;
    *((_BYTE*)thisx + 88) = 0;
    *((_BYTE*)thisx + 89) = 0;
    *((_BYTE*)thisx + 90) = 0;
    *((_BYTE*)thisx + 148) = 0;
    *((_BYTE*)thisx + 147) = 0;
    *((_BYTE*)thisx + 96) = 0;
    *((_BYTE*)thisx + 95) = 0;
    memset(thisx + 25, 0, 0x10u);
    *((_BYTE*)thisx + 85) = 0;
    *((_BYTE*)thisx + 97) = 0;
    *((_BYTE*)thisx + 98) = 0;
    for (i = 0; i < 4; ++i)
        *((_BYTE*)thisx + i + 143) = 0;
    *((_BYTE*)thisx + 141) = 0;
    *((_BYTE*)thisx + 142) = 0;
    thisx[20] = 0;
    thisx[2] = 0;
    thisx[9] = 0;
    thisx[10] = 0;
    thisx[34] = 0;
    thisx[11] = 0;
    thisx[12] = 0;
    thisx[3] = 0;
    thisx[4] = 0;
    thisx[8] = 0;
    thisx[6] = 0;
    thisx[7] = 0;
    thisx[33] = 0;
    *thisx = 0;
    thisx[32] = 0;
    thisx[18] = 0;
    *((_WORD*)thisx + 10) = 0;
    *((_WORD*)thisx + 11) = 0;
    if (sub_41BA53(thisx[31], 0x14u, 0))
    {
        *((_BYTE*)thisx + 89) = 1;
    }
    else if (sub_41BA53(thisx[31], 0x15u, 0))
    {
        *((_BYTE*)thisx + 89) = 2;
    }
    else
    {
        *((_BYTE*)thisx + 89) = 0;
    }
    *((_BYTE*)thisx + 94) = sub_41BA53(thisx[31], 0x48u, 0);
    v9 = sub_41BA53(thisx[31], 4u, 0) || sub_41BA53(thisx[31], 0xFu, 0);
    *((_BYTE*)thisx + 91) = v9;
    v8 = sub_41BA53(thisx[31], 3u, 0) || sub_41BA53(thisx[31], 0xCu, 0);
    *((_BYTE*)thisx + 92) = v8;
    *((_BYTE*)thisx + 90) = sub_41BA53(thisx[31], 0x22u, 0);
    v7 = sub_41BA53(thisx[31], 0x20u, 0) || sub_41BA53(thisx[31], 0x21u, 0);
    *((_BYTE*)thisx + 87) = v7;
    v6 = sub_41BA53(thisx[31], 0x1Du, 0)
        || sub_41BA53(thisx[31], 0x1Fu, 0)
        || sub_41BA53(thisx[31], 0x2Cu, 0)
        || sub_41BA53(thisx[31], 0x31u, 0)
        || sub_41BA53(thisx[31], 0x33u, 0)
        || sub_41BA53(thisx[31], 0x3Du, 0)
        || sub_41BA53(thisx[31], 0x3Fu, 0)
        || sub_41BA53(thisx[31], 0x41u, 0)
        || sub_41BA53(thisx[31], 0x43u, 0)
        || sub_41BA53(thisx[31], 0x45u, 0);
    v5 = sub_41BA53(thisx[31], 0x1Eu, 0)
        || sub_41BA53(thisx[31], 0x32u, 0)
        || sub_41BA53(thisx[31], 0x34u, 0)
        || sub_41BA53(thisx[31], 0x3Cu, 0)
        || sub_41BA53(thisx[31], 0x3Eu, 0)
        || sub_41BA53(thisx[31], 0x40u, 0)
        || sub_41BA53(thisx[31], 0x42u, 0)
        || sub_41BA53(thisx[31], 0x44u, 0)
        || sub_41BA53(thisx[31], 0x45u, 0);
    *((_BYTE*)thisx + 88) = (2 * v5) | v6;
    *((_BYTE*)thisx + 86) = 20;
    if (sub_41BA53(thisx[31], 0x1Cu, 0)
        || *((_BYTE*)thisx + 88)
        || sub_41BA53(thisx[31], 0x20u, 0)
        || sub_41BA53(thisx[31], 0x21u, 0))
    {
        *((_BYTE*)thisx + 86) += 50;
    }
    v1 = (unsigned __int16)sub_41CCEA(thisx[31], 1);
    v18 = (v1 + (unsigned __int16)sub_41CB3B(thisx[31], 1)) / 2;
    v2 = (unsigned __int16)sub_41F380(thisx[31], 1);
    v17 = (v2 + (unsigned __int16)sub_41F52F(thisx[31], 1)) / 2;
    if (v17 - v18 + *((unsigned __int8*)thisx + 86) < 20)
        *((_BYTE*)thisx + 86) += v17 - v18;
    v11 = sub_425E70((char*)thisx[31]);
    if (v11 == 1 || v11 == 2 || v11 == 3 || (unsigned __int8)sub_4264F0((char*)thisx[31]) == 4)
        *((_BYTE*)thisx + 86) = 0;
    v12 = (unsigned __int16)sub_41CB3B(thisx[31], 1);
    v16 = (unsigned __int16)sub_41CCEA(thisx[31], 1);
    if (sub_41BA53(thisx[31], 1u, 0) || sub_41BA53(thisx[31], 0x16u, 0))
        v16 *= 2;
    if (sub_41BA53(thisx[31], 2u, 0) || sub_41BA53(thisx[31], 0x12u, 0))
        v12 *= 2;
    *((_BYTE*)thisx + 95) = 100 * v12 / (v16 + v12);
    *((_BYTE*)thisx + 96) = 100 - *((_BYTE*)thisx + 95);
    *((_BYTE*)thisx + 99) = 50 * sub_41BA53(thisx[31], 0x88u, 0) + 50;
    if (v11 == 1)
    {
        *((_BYTE*)thisx + 95) = 100;
        *((_BYTE*)thisx + 96) = 0;
    }
    v14 = (unsigned __int16)sub_41F380(thisx[31], 1);
    if (!v14)
        v14 = 1;
    v13 = (unsigned __int16)sub_41F52F(thisx[31], 1);
    if (!v13)
        v13 = 1;
    if (sub_41BA53(thisx[31], 0x1Cu, 0) || *((_BYTE*)thisx + 87))
        v14 *= 3;
    if (*((_BYTE*)thisx + 88))
        v13 *= 3;
    *((_BYTE*)thisx + 97) = 100 * v14 / (v13 + v14);
    *((_BYTE*)thisx + 98) = 100 - *((_BYTE*)thisx + 97);
    v4 = sub_4268D0((_DWORD*)thisx[31]) || sub_41BA53(thisx[31], 0x26u, 0);
    result = thisx;
    *((_BYTE*)thisx + 93) = v4;
    return result;
}

