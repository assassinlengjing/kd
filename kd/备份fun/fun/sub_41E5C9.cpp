#include "sub.h" 
void sub_41E5C9(int thisx, _DWORD* a2)
{
    int v2; // edx
    int v4; // [esp+Ch] [ebp-2Ch]
    int v5; // [esp+18h] [ebp-20h]
    int v6[2]; // [esp+1Ch] [ebp-1Ch] BYREF
    char v7; // [esp+24h] [ebp-14h]
    int v8; // [esp+28h] [ebp-10h]
    int v9; // [esp+2Ch] [ebp-Ch]
    int v10; // [esp+30h] [ebp-8h]
    char v11; // [esp+34h] [ebp-4h]

    if (a2)
    {
        LOBYTE(v10) = sub_426650((char*)a2);
        v11 = 0;
        v5 = 1;
        if (sub_41BA53(thisx, 0x88u, 0))
            v5 = 2;
        ++* (_BYTE*)(thisx + 598);
        switch ((unsigned __int8)v10)
        {
        case 1u:
            sub_41ED81((_WORD*)thisx, 15 * v5);
            v11 = 2;
            break;
        case 2u:
            sub_41EDEC((_WORD*)thisx, 5 * v5);
            v11 = 3;
            break;
        case 3u:
            sub_41ECAB((_WORD*)thisx, 20 * v5);
            sub_41EDEC((_WORD*)thisx, -5 * v5);
            v11 = 4;
            break;
        case 4u:
        LABEL_11:
            sub_41ECAB((_WORD*)thisx, 15 * v5);
            v11 = 5;
            break;
        case 5u:
        LABEL_13:
            sub_41EC40((_WORD*)thisx, 15 * v5);
            v11 = 6;
            break;
        case 6u:
        LABEL_15:
            sub_41ED16((_WORD*)thisx, 15 * v5);
            v11 = 7;
            break;
        case 7u:
            if (rand() % 2)
            {
                sub_41EE57((unsigned __int16*)thisx, -64 * v5);
                v11 = 9;
            }
            else
            {
                sub_41EE57((unsigned __int16*)thisx, v5 << 6);
                v11 = 8;
            }
            break;
        default:
            if ((unsigned __int8)v10 < 8u || (unsigned __int8)v10 > 0xDu)
            {
                switch ((unsigned __int8)v10)
                {
                case 0xEu:
                    v4 = unknown_libname_23(a2);
                    if ((unsigned __int8)v10 == 14 && v4 < 300)
                        sub_41EBBC(thisx, v2, 32, 0);
                    sub_41EE57((unsigned __int16*)thisx, v5 * (255 * (10 * (480 - v4) / 48) / 100));
                    v11 = 8;
                    break;
                case 0xFu:
                    *(_DWORD*)(thisx + 172) = 600 * v5;
                    v11 = 10;
                    break;
                case 0x10u:
                LABEL_31:
                    sub_420D47((_WORD*)thisx, 15 * v5);
                    v11 = 11;
                    break;
                case 0x11u:
                LABEL_33:
                    sub_420DB2((_WORD*)thisx, 15 * v5);
                    v11 = 12;
                    break;
                case 0x12u:
                    sub_41EC40((_WORD*)thisx, 10 * v5);
                    sub_41ECAB((_WORD*)thisx, 10 * v5);
                    sub_41ED16((_WORD*)thisx, 10 * v5);
                    sub_420D47((_WORD*)thisx, 10 * v5);
                    sub_420DB2((_WORD*)thisx, 10 * v5);
                    v11 = 13;
                    break;
                case 0x13u:
                    switch (rand() % (2 * (byte_4B999A != 0) + 3))
                    {
                    case 0:
                        goto LABEL_13;
                    case 1:
                        goto LABEL_11;
                    case 2:
                        goto LABEL_15;
                    case 3:
                        goto LABEL_31;
                    case 4:
                        goto LABEL_33;
                    default:
                        goto LABEL_46;
                    }
                case 0x14u:
                    sub_420E1D((_WORD*)thisx, 10 * v5);
                    v11 = 14;
                    break;
                case 0x15u:
                    sub_4659A5((_DWORD*)byte_4B9B10, (_BYTE*)thisx);
                    break;
                case 0x16u:
                    if (rand() % 2)
                    {
                        sub_41EC40((_WORD*)thisx, -15 * v5);
                        sub_41ECAB((_WORD*)thisx, -15 * v5);
                        sub_41ED16((_WORD*)thisx, -15 * v5);
                        sub_420D47((_WORD*)thisx, -15 * v5);
                        sub_420DB2((_WORD*)thisx, -15 * v5);
                        sub_41ED81((_WORD*)thisx, -15 * v5);
                        sub_41EDEC((_WORD*)thisx, -10 * v5);
                        sub_420E1D((_WORD*)thisx, -10 * v5);
                        sub_420E88((_WORD*)thisx, -10 * v5);
                        v11 = 16;
                    }
                    else
                    {
                        sub_41EC40((_WORD*)thisx, 15 * v5);
                        sub_41ECAB((_WORD*)thisx, 15 * v5);
                        sub_41ED16((_WORD*)thisx, 15 * v5);
                        sub_420D47((_WORD*)thisx, 15 * v5);
                        sub_420DB2((_WORD*)thisx, 15 * v5);
                        sub_41ED81((_WORD*)thisx, 15 * v5);
                        sub_41EDEC((_WORD*)thisx, 10 * v5);
                        sub_420E1D((_WORD*)thisx, 10 * v5);
                        sub_420E88((_WORD*)thisx, 10 * v5);
                        v11 = 15;
                    }
                    break;
                }
            }
            else
            {
                sub_41EE57((unsigned __int16*)thisx, v5 * (255 * (100 * ((unsigned __int8)v10 - 7) / 7) / 100));
                v11 = 8;
            }
            break;
        }
    LABEL_46:
        sub_442863(v6);
        v6[0] = 0;
        v6[1] = -24;
        v9 = thisx;
        v8 = 0;
        v7 = v11;
        sub_4561A5((char*)byte_4B9B10, (int)v6);
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        sub_47F14A((char*)a2);
    }
}
