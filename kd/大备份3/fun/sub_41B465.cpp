#include "sub.h" 
unsigned __int8* sub_41B465(_DWORD* thisx)
{
    int v2; // esi
    int v4; // [esp+8h] [ebp-1Ch]
    int v5; // [esp+Ch] [ebp-18h]
    int v6; // [esp+Ch] [ebp-18h]
    int v7; // [esp+10h] [ebp-14h]
    unsigned __int8 v8; // [esp+1Ch] [ebp-8h]
    int v9; // [esp+20h] [ebp-4h]

    sub_425EF0((char*)thisx[31]);
    v8 = sub_426070((_BYTE*)thisx[31]);
    v9 = sub_4630A4((unsigned char*)unk_4B9B10) - 1;
    if (v9 <= 0)
        return 0;
    v5 = rand() % v9;
    v4 = -1;
    while (v5 >= 0)
    {
        ++v4;
        while (v4 == v8 || !sub_426490((unsigned __int8*)unk_4B9B10, v4))
            ++v4;
        --v5;
    }
    v2 = rand();
    v6 = v2 % sub_426490((unsigned __int8*)unk_4B9B10, v4);
    v7 = -1;
    while (v6 >= 0)
    {
        ++v7;
        do
        {
            if (sub_4630BF((unsigned __int8*)unk_4B9B10, v4, v7))
                break;
            ++v7;
        } while (v7 < 8);
        --v6;
    }
    if (v7 < 8)
        return sub_463101((unsigned __int8*)unk_4B9B10, v4, v7);
    else
        return 0;
}