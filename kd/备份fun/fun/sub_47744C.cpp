#include "sub.h" 
BOOL __cdecl sub_47744C(unsigned __int8 a1, unsigned __int8 a2)
{
    unsigned __int8 v3; // [esp+8h] [ebp-70h]
    unsigned __int8 v4; // [esp+10h] [ebp-68h]
    char v5[8]; // [esp+24h] [ebp-54h]
    int v6; // [esp+2Ch] [ebp-4Ch]
    char v7; // [esp+30h] [ebp-48h]
    int v8; // [esp+34h] [ebp-44h]
    int i; // [esp+38h] [ebp-40h]
    char v10; // [esp+3Ch] [ebp-3Ch]
    int v11; // [esp+40h] [ebp-38h]
    char v12; // [esp+44h] [ebp-34h]
    char v13; // [esp+48h] [ebp-30h]
    int v14; // [esp+4Ch] [ebp-2Ch]
    char v15; // [esp+50h] [ebp-28h]
    char v16; // [esp+54h] [ebp-24h]
    char v17; // [esp+58h] [ebp-20h]
    char v18; // [esp+5Ch] [ebp-1Ch]
    char v19; // [esp+60h] [ebp-18h]
    int v20; // [esp+64h] [ebp-14h]
    char v21; // [esp+68h] [ebp-10h]
    int v22; // [esp+6Ch] [ebp-Ch]
    char v23; // [esp+70h] [ebp-8h]
    char v24; // [esp+74h] [ebp-4h]

    if (a1 == 255 || a2 == 255)
        return 0;
    if (a1 == a2)
        return 1;
    if (a1 > (int)a2)
    {
        v3 = a1;
        a1 = a2;
        a2 = v3;
    }
    v5[0] = a1;
    v5[1] = a2;
    v12 = 0;
    v21 = 0;
    v13 = 0;
    v5[4] = 0;
    LOBYTE(v14) = 0;
    v15 = 0;
    v16 = 0;
    v24 = 0;
    v18 = 0;
    v17 = 0;
    LOBYTE(v6) = 0;
    v10 = 0;
    LOBYTE(v22) = 0;
    v23 = 0;
    v4 = 0;
    v19 = 0;
    v7 = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v8) = 0;
    for (i = 0; i < 2; ++i)
    {
        switch (v5[i])
        {
        case 3:
        case 12:
            LOBYTE(v14) = v14 + 1;
            break;
        case 4:
        case 13:
        case 15:
            LOBYTE(v6) = v6 + 1;
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
            LOBYTE(v22) = v22 + 1;
            break;
        case 25:
        case 54:
            ++v4;
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
            LOBYTE(v11) = v11 + 1;
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
            LOBYTE(v8) = v8 + 1;
            break;
        case 70:
            LOBYTE(v11) = v11 + 1;
            LOBYTE(v8) = v8 + 1;
            break;
        case 72:
            LOBYTE(v14) = v14 + 1;
            LOBYTE(v6) = v6 + 1;
            break;
        default:
            continue;
        }
    }
    if ((unsigned __int8)v14 >= 2u
        || (unsigned __int8)v6 >= 2u
        || (unsigned __int8)v11 >= 2u
        || (unsigned __int8)v8 >= 2u
        || (unsigned __int8)v22 >= 2u
        || v4 >= 2u)
    {
        return 1;
    }
    v20 = 1;
    if (a1 == 1 && (a2 == 22 || a2 == 46))
        v20 = 0;
    if (v20 && a1 == 2 && (a2 == 18 || a2 == 47))
        v20 = 0;
    if (v20 && a1 == 3 && (a2 == 12 || a2 == 72))
        v20 = 0;
    if (v20 && a1 == 4 && (a2 == 13 || a2 == 15))
        v20 = 0;
    if (v20 && a1 == 6 && (a2 == 14 || a2 == 22))
        v20 = 0;
    if (v20 && a1 == 7 && a2 == 37)
        v20 = 0;
    if (v20 && a1 == 8 && a2 == 22)
        v20 = 0;
    if (v20 && a1 == 11 && (a2 == 14 || a2 == 22))
        v20 = 0;
    if (v20 && a1 == 13 && a2 == 15)
        v20 = 0;
    if (v20 && a1 == 14 && a2 == 22)
        v20 = 0;
    if (v20 && a1 == 16 && (a2 == 27 || a2 == 45))
        v20 = 0;
    if (v20 && a1 == 17 && a2 == 41)
        v20 = 0;
    if (v20 && a1 == 18 && a2 == 47)
        v20 = 0;
    if (v20 && a1 == 20 && a2 == 21)
        v20 = 0;
    if (v20 && a1 == 22 && a2 == 46)
        v20 = 0;
    if (v20 && a1 == 23 && (a2 == 24 || a2 == 40 || a2 == 41 || a2 == 53))
        v20 = 0;
    if (v20 && a1 == 24 && (a2 == 40 || a2 == 53))
        v20 = 0;
    if (v20 && a1 == 27 && a2 == 45)
        v20 = 0;
    if (v20 && a1 == 32 && a2 == 33)
        v20 = 0;
    if (v20 && a1 == 29 && (a2 == 31 || a2 == 44 || a2 == 49))
        v20 = 0;
    if (v20 && a1 == 31 && a2 == 44)
        v20 = 0;
    if (v20 && a1 == 40 && (a2 == 41 || a2 == 53))
        v20 = 0;
    return v20 == 0;
}

