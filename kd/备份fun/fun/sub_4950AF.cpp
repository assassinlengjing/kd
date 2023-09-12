#include "sub.h" 
int sub_4950AF(int thisx)
{
    int result; // eax
    int v2; // edx
    int v3; // edx
    int v4; // edx
    int v5; // edx
    int v6; // edx
    int v7; // edx
    int v8; // edx
    int v9; // edx
    int v10; // edx
    int v11; // edx

    result = thisx;
    switch (*(_BYTE*)(thisx + 72))
    {
    case 0:
        v2 = 10 * (rand() % 5) + 175;
        result = thisx;
        *(_WORD*)(thisx + 190) = v2;
        break;
    case 1:
        v3 = 10 * (rand() % 10) + 155;
        result = thisx;
        *(_WORD*)(thisx + 190) = v3;
        break;
    case 2:
    case 0xB:
        v4 = 10 * (rand() % 5) + 195;
        result = thisx;
        *(_WORD*)(thisx + 190) = v4;
        break;
    case 3:
        v5 = 10 * (rand() % 3) + 225;
        result = thisx;
        *(_WORD*)(thisx + 190) = v5;
        break;
    case 4:
        v6 = 10 * (rand() % 5) + 200;
        result = thisx;
        *(_WORD*)(thisx + 190) = v6;
        break;
    case 5:
        v7 = 10 * (rand() % 5) + 185;
        result = thisx;
        *(_WORD*)(thisx + 190) = v7;
        break;
    case 6:
        v8 = 10 * (rand() % 5) + 190;
        result = thisx;
        *(_WORD*)(thisx + 190) = v8;
        break;
    case 7:
        v9 = 5 * (rand() % 5) + 150;
        result = thisx;
        *(_WORD*)(thisx + 190) = v9;
        break;
    case 8:
    case 9:
    case 0xD:
        v11 = 5 * (rand() % 7) + 225;
        result = thisx;
        *(_WORD*)(thisx + 190) = v11;
        break;
    case 0xA:
        result = 10 * (rand() % 4) + 225;
        *(_WORD*)(thisx + 190) = result;
        break;
    case 0xC:
        v10 = 5 * (rand() % 5) + 125;
        result = thisx;
        *(_WORD*)(thisx + 190) = v10;
        break;
    default:
        return result;
    }
    return result;
}

