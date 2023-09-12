#include "sub.h" 
int  sub_41D697(int thisx)
{
    int v1; // esi
    int i; // eax
    int v3; // esi
    int v6; // [esp+8h] [ebp-18h]
    char* v7; // [esp+Ch] [ebp-14h]
    int v8; // [esp+10h] [ebp-10h]
    int v9; // [esp+14h] [ebp-Ch]
    int v10; // [esp+18h] [ebp-8h]

    sub_41BF1D(thisx);
    sub_409273(thisx, 1);
    *(_DWORD*)(thisx + 432) = 1;
    *(_DWORD*)(thisx + 428) = 1;
    *(_DWORD*)(thisx + 444) = 0;
    *(_BYTE*)(thisx + 177) = 1;
    *(_BYTE*)(thisx + 178) = 0;
    v7 = sub_426210((char*)unk_4B9B10);
    sub_4897D0(v7);
    v8 = 8 * sub_4261D0(v7);
    v1 = rand() % 303;
    v10 = v1 + sub_446465((char*)unk_4B9B10) + 8;
    v9 = rand() % v8;
    for (i = sub_486633((_DWORD*)v7, v10, v9); ; i = sub_486633((_DWORD*)v7, v10, v9))
    {
        v6 = i;
        if (sub_4773CC(v10 / 8, v9 / 8))
        {
            if (v6 < 1020)
                break;
        }
        v3 = rand() % 303;
        v10 = v3 + sub_446465((char*)unk_4B9B10) + 8;
        v9 = rand() % v8;
    }
    *(_DWORD*)(thisx + 336) = -100 * v6;
    *(_DWORD*)(thisx + 328) = 100 * v10;
    *(_DWORD*)(thisx + 332) = 100 * v9;
    return sub_417763((_WORD*)thisx);
}

