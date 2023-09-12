#include "sub.h" 
void sub_4259A4(_DWORD* thisx, double a2, double a3, double a4)
{
    int v4; // esi
    int i; // eax
    int v6; // esi
    int v8; // [esp+8h] [ebp-18h]
    char* v9; // [esp+Ch] [ebp-14h]
    int v10; // [esp+10h] [ebp-10h]
    int v11; // [esp+14h] [ebp-Ch]
    int v12; // [esp+18h] [ebp-8h]

    if (byte_4B99E0)
    {
        if (byte_4B99E0 == 2)
        {
            thisx[145] -= 5;
            thisx[147] -= 5;
        }
        v9 = sub_426210((char*)byte_4B9B10);
        sub_4897D0(v9);
        v10 = 8 * sub_4261D0(v9);
        v4 = rand() % 303;
        v12 = v4 + sub_446465((char*)byte_4B9B10) + 8;
        v11 = rand() % v10;
        for (i = sub_486633((int*)v9, v12, v11); ; i = sub_486633((int*)v9, v12, v11))
        {
            v8 = i;
            if (sub_4773CC(v12 / 8, v11 / 8))
            {
                if (v8 < 1020)
                    break;
            }
            v6 = rand() % 303;
            v12 = v6 + sub_446465((char*)byte_4B9B10) + 8;
            v11 = rand() % v10;
        }
        thisx[84] = -100 * v8 - 17600;
        thisx[82] = 100 * v12;
        thisx[83] = 100 * v11;
    }
    else
    {
        thisx[108] = 80;
        sub_409273((int)thisx, thisx[108]);
        thisx[111] = 1;
        thisx[98] = 1;
        sub_4097FE((int)thisx, a2, a3, a4);
    }
}