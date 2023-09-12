#include "sub.h" 
int sub_467CD0(_DWORD* thisx)
{
    _DWORD* v2; // [esp+0h] [ebp-24h]
    int* Block; // [esp+8h] [ebp-1Ch]
    int i; // [esp+10h] [ebp-14h]
    int v6; // [esp+14h] [ebp-10h]

    sub_467C6D((int)thisx);
    sub_467BBB(thisx);
    if ((int)thisx[3347] <= 0)
        return 0;
    v6 = thisx[3347];
    Block = (int*)operator new(20 * v6 + 4);
    if (Block)
    {
        *Block = v6;
        eh_vector_constructor_iterator(Block + 1, 0x14u, v6, sub_48A100, sub_48A134);
            v2 = Block + 1;
    }
    else
    {
        v2 = 0;
    }
    thisx[3348] = (_DWORD)v2;
    for (i = 0; i < thisx[3347]; ++i)
        sub_48A1AD((void**)(thisx[3348] + 20 * i), i + 1);
    return 1;
}

