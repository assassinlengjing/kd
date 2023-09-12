#include "sub.h" 
int __cdecl sub_47BD8E(int a1, int a2, int a3, int a4)
{
    int result; // eax
    int i; // [esp+4h] [ebp-18h]
    int v6; // [esp+8h] [ebp-14h]
    int v7; // [esp+Ch] [ebp-10h]
    CHAR String[4]; // [esp+10h] [ebp-Ch] BYREF
    int v9; // [esp+14h] [ebp-8h]
    int v10; // [esp+18h] [ebp-4h]

    v9 = 0;
    result = a3 - 1;
    switch (a3)
    {
    case 1:
    case 22:
    case 46:
        v9 = 1;
        break;
    case 2:
    case 18:
    case 47:
        v9 = 2;
        break;
    case 3:
    case 12:
        v9 = 3;
        break;
    case 4:
    case 13:
    case 15:
        v9 = 4;
        break;
    case 5:
        v9 = 5;
        break;
    case 6:
        v9 = 6;
        break;
    case 7:
        v9 = 7;
        break;
    case 8:
        v9 = 8;
        break;
    case 9:
        v9 = 9;
        break;
    case 10:
        v9 = 10;
        break;
    case 11:
        v9 = 11;
        break;
    case 14:
        v9 = 12;
        break;
    case 16:
    case 27:
    case 45:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 71:
        v9 = 13;
        break;
    case 17:
        v9 = 14;
        break;
    case 19:
        v9 = 15;
        break;
    case 20:
    case 21:
        v9 = 16;
        break;
    case 23:
        v9 = 17;
        break;
    case 24:
    case 53:
        v9 = 18;
        break;
    case 25:
    case 54:
        v9 = 19;
        break;
    case 26:
        v9 = 20;
        break;
    case 28:
        v9 = 21;
        break;
    case 29:
    case 31:
    case 44:
    case 49:
    case 51:
    case 61:
    case 63:
    case 65:
    case 67:
        v9 = 22;
        break;
    case 30:
    case 50:
    case 52:
    case 60:
    case 62:
    case 64:
    case 66:
    case 68:
    case 69:
        v9 = 23;
        break;
    case 32:
    case 33:
        v9 = 24;
        break;
    case 34:
        v9 = 25;
        break;
    case 35:
        v9 = 26;
        break;
    case 36:
        v9 = 27;
        break;
    case 37:
        v9 = 28;
        break;
    case 38:
        v9 = 29;
        break;
    case 39:
        v9 = 30;
        break;
    case 40:
        v9 = 31;
        break;
    case 41:
        v9 = 32;
        break;
    case 42:
        v9 = 33;
        break;
    case 43:
        v9 = 34;
        break;
    case 48:
        v9 = 35;
        break;
    case 70:
        v9 = 36;
        break;
    case 72:
        v9 = 37;
        break;
    case 255:
        v9 = 38;
        break;
    default:
        break;
    }
    if (a3 != 255 && a3 >= 73)
        v9 = a3 - 127;
    if (v9)
    {
        --v9;
        if (a3 == 255 || a3 < 73)
            v10 = (int)&unk_4B4F88 + 57 * v9;
        else
            v10 = (int)&unk_4B5800 + 57 * v9;
        v7 = a1;
        result = a2;
        v6 = a2;
        while (1)
        {
            for (i = 0; i < 2; ++i)
            {
                result = i + v10;
                if (!*(_BYTE*)(i + v10))
                    break;
                result = i;
                String[i] = *(_BYTE*)(i + v10);
            }
            if (i < 2)
                break;
            v10 += 2;
            String[2] = 0;
            if (String[0] == 92 && String[1] == 110)
            {
                v7 = a1;
                result = v6 + 16;
                v6 += 16;
            }
            else
            {
                result = sub_47B91A(v7, v6, String, 0, a4);
                v7 += 8;
            }
        }
    }
    return result;
}
