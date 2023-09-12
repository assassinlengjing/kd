#include "sub.h" 
int __stdcall sub_4576F0(int a1)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        if ((unsigned __int8)unk_4B9988[i] == a1)
            return i;
    }
    return -1;
}

