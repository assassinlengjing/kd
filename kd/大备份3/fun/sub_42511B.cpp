#include "sub.h" 
char* sub_42511B(char* thisx, int a2)
{
    char* result; // eax
    int v3; // [esp+Ch] [ebp-5Ch]
    int v4[7]; // [esp+10h] [ebp-58h]
    int v5[7]; // [esp+2Ch] [ebp-3Ch]
    int v6; // [esp+48h] [ebp-20h]
    int i; // [esp+4Ch] [ebp-1Ch]
    int v8; // [esp+50h] [ebp-18h]
    int v9; // [esp+54h] [ebp-14h]
    int v10; // [esp+58h] [ebp-10h]
    int v11; // [esp+5Ch] [ebp-Ch]
    int v12; // [esp+60h] [ebp-8h]
    int v13; // [esp+64h] [ebp-4h]

    v4[0] = (int)(thisx + 502);
    v4[1] = (int)(thisx + 504);
    v4[2] = (int)(thisx + 506);
    v4[3] = (int)(thisx + 508);
    v4[4] = (int)(thisx + 510);
    v4[5] = (int)(thisx + 512);
    result = thisx + 514;
    v4[6] = (int)(thisx + 514);
    v5[0] = (int)(thisx + 516);
    v5[1] = (int)(thisx + 518);
    v8 = 50;
    v9 = 25;
    v10 = 12;
    v11 = 6;
    v12 = 3;
    v13 = 2;
    v5[2] = 10;
    v5[3] = 5;
    v5[4] = 2;
    v5[5] = 1;
    v5[6] = 1;
    v6 = 1;
    for (i = 0; i < 9; ++i)
    {
        v3 = (v5[a2] + *(&v6 + a2) * *(unsigned __int16*)v4[i] / 100) / (3 * (i >= 5) + 1) + *(unsigned __int16*)v4[i];
        if (v3 > 0xFFFF)
            LOWORD(v3) = -1;
        *(_WORD*)v4[i] = v3;
        result = (char*)(i + 1);
    }
    return result;
}

