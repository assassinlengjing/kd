#include "sub.h" 
int sub_480737(_DWORD* thisx, int a2)
{
    _DWORD* v3; // [esp+0h] [ebp-2Ch]
    _DWORD* Block; // [esp+Ch] [ebp-20h]

    if (thisx[3])
        sub_480950((char*)thisx[3], 3);
    thisx[5] = 0;
    thisx[6] = 0;
    Block = (_DWORD*)operator new(32 * a2 + 4);
    if (Block)
    {
        *Block = a2;
        eh_vector_constructor_iterator(Block + 1, 0x20u, a2, sub_47FD4E, sub_47FDAB);
            v3 = Block + 1;
    }
    else
    {
        v3 = 0;
    }
    thisx[3] = (_DWORD)v3;
    if (!thisx[3])
        return 0;
    thisx[4] = a2;
    return 1;
}
