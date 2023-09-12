#include "sub.h" 
int sub_4822EC(int thisx, unsigned __int16 a2)
{
    void* v3; // [esp+0h] [ebp-20h]
    void* Block; // [esp+8h] [ebp-18h]

    if (a2 == *(unsigned __int16*)(thisx + 20))
    {
        memset(*(void**)(thisx + 16), 0, 56 * *(unsigned __int16*)(thisx + 20));
        return 1;
    }
    else
    {
        sub_4823E9(thisx);
        Block = operator new(56 * a2);
        if (Block)
        {
            sub_402080((int)Block, 56, a2, (void(*)(int))sub_4810C0);
            v3 = Block;
        }
        else
        {
            v3 = 0;
        }
        *(_DWORD*)(thisx + 16) = (_DWORD)v3;
        *(_WORD*)(thisx + 20) = a2;
        if (*(_DWORD*)(thisx + 16))
        {
            return 1;
        }
        else
        {
            *(_WORD*)(thisx + 20) = 0;
            return 0;
        }
    }
}

