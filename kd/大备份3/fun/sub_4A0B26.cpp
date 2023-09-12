#include "sub.h"
unsigned __int16* sub_4A0B26(
    unsigned __int16* thisx,
    unsigned __int8 a2,
    unsigned __int8 a3,
    unsigned __int8 a4,
    unsigned __int8 a5)
{
    unsigned __int16* result; // eax
    int j; // [esp+4h] [ebp-28h]
    int v7; // [esp+8h] [ebp-24h]
    int i; // [esp+14h] [ebp-18h]
    int v9[3]; // [esp+20h] [ebp-Ch]

    result = thisx;
    if (thisx[2] > (int)a2)
    {
        for (i = 0; i < 3; ++i)
        {
            v7 = 8 - unk_4CA218[i];
            v9[i] = 1;
            for (j = 0; j < v7; ++j)
                v9[i] *= 2;
        }
        result = *(unsigned __int16**)thisx;
        *(_WORD*)(*(_DWORD*)thisx + 2 * a2) = (((unsigned int)a5 / v9[2]) << unk_4CA212) | (((unsigned int)a4 / v9[1]) << unk_4CA211) | (((unsigned int)a3 / v9[0]) << (int)unk_4CA210);
    }
    return result;
}