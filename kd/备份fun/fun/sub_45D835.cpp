#include "sub.h" 
_WORD* sub_45D835(_WORD* thisx, int a2)
{
    _WORD* result; // eax
    int v3; // [esp+8h] [ebp-2Ch]
    int v4; // [esp+Ch] [ebp-28h]
    int v5; // [esp+10h] [ebp-24h]
    int v6; // [esp+14h] [ebp-20h]
    int v7; // [esp+18h] [ebp-1Ch]
    int v8; // [esp+1Ch] [ebp-18h]
    int v9; // [esp+20h] [ebp-14h]
    int v10; // [esp+24h] [ebp-10h]
    int v11; // [esp+28h] [ebp-Ch]
    int v12; // [esp+2Ch] [ebp-8h]
    int i; // [esp+30h] [ebp-4h]

    if (a2)
    {
        *thisx += a2;
        v3 = a2 * *((unsigned __int8*)thisx + 48) + *((unsigned __int8*)thisx + 58);
        v4 = a2 * *((unsigned __int8*)thisx + 49) + *((unsigned __int8*)thisx + 59);
        v5 = a2 * *((unsigned __int8*)thisx + 50) + *((unsigned __int8*)thisx + 60);
        v6 = a2 * *((unsigned __int8*)thisx + 51) + *((unsigned __int8*)thisx + 63);
        v7 = a2 * *((unsigned __int8*)thisx + 52) + *((unsigned __int8*)thisx + 61);
        v8 = a2 * *((unsigned __int8*)thisx + 53) + *((unsigned __int8*)thisx + 62);
        v9 = a2 * *((unsigned __int8*)thisx + 54) + *((unsigned __int8*)thisx + 64);
        v10 = a2 * *((unsigned __int8*)thisx + 55) + *((unsigned __int8*)thisx + 65);
        v11 = a2 * *((unsigned __int8*)thisx + 56) + *((unsigned __int8*)thisx + 66);
        v12 = a2 * *((unsigned __int8*)thisx + 57) + *((unsigned __int8*)thisx + 67);
        for (i = 0; i < 10; ++i)
        {
            while (i < 7 && *(&v3 + i) >= 10 || i >= 7 && *(&v3 + i) >= 100)
            {
                switch (i)
                {
                case 0:
                    if ((unsigned __int16)thisx[14] + 3 <= 0xFFFF)
                        thisx[14] += 3;
                    else
                        thisx[14] = -1;
                    break;
                case 1:
                    if ((unsigned __int16)thisx[15] + 1 <= 0xFFFF)
                        ++thisx[15];
                    else
                        thisx[15] = -1;
                    break;
                case 2:
                    if ((unsigned __int16)thisx[16] + 1 <= 0xFFFF)
                        ++thisx[16];
                    else
                        thisx[16] = -1;
                    break;
                case 3:
                    if ((unsigned __int16)thisx[17] + 1 <= 0xFFFF)
                        ++thisx[17];
                    else
                        thisx[17] = -1;
                    break;
                case 4:
                    if ((unsigned __int16)thisx[18] + 1 <= 0xFFFF)
                        ++thisx[18];
                    else
                        thisx[18] = -1;
                    break;
                case 5:
                    if ((unsigned __int16)thisx[19] + 1 <= 0xFFFF)
                        ++thisx[19];
                    else
                        thisx[19] = -1;
                    break;
                case 6:
                    if ((unsigned __int16)thisx[20] + 1 <= 0xFFFF)
                        ++thisx[20];
                    else
                        thisx[20] = -1;
                    break;
                case 7:
                    if ((unsigned __int16)thisx[21] + 1 <= 0xFFFF)
                        ++thisx[21];
                    else
                        thisx[21] = -1;
                    break;
                case 8:
                    if ((unsigned __int16)thisx[22] + 1 <= 0xFFFF)
                        ++thisx[22];
                    else
                        thisx[22] = -1;
                    break;
                case 9:
                    if ((unsigned __int16)thisx[23] + 1 <= 0xFFFF)
                        ++thisx[23];
                    else
                        thisx[23] = -1;
                    break;
                default:
                    break;
                }
                if (i >= 7)
                    *(&v3 + i) -= 100;
                else
                    *(&v3 + i) -= 10;
            }
        }
        *((_BYTE*)thisx + 58) = v3;
        *((_BYTE*)thisx + 59) = v4;
        *((_BYTE*)thisx + 60) = v5;
        *((_BYTE*)thisx + 63) = v6;
        *((_BYTE*)thisx + 61) = v7;
        *((_BYTE*)thisx + 62) = v8;
        *((_BYTE*)thisx + 64) = v9;
        *((_BYTE*)thisx + 65) = v10;
        *((_BYTE*)thisx + 66) = v11;
        result = thisx;
        *((_BYTE*)thisx + 67) = v12;
    }
    return result;
}

