#include "sub.h" 
char sub_457659(unsigned __int8* thisx, int a2, int a3)
{
    char v5; // [esp+4h] [ebp-10h]
    int v6; // [esp+8h] [ebp-Ch]
    int i; // [esp+Ch] [ebp-8h]
    char v8; // [esp+10h] [ebp-4h]

    if (a2 < 0 || a2 >= 8)
        return 0;
    v8 = sub_4575B4(thisx, a2, a3);
    v6 = a2;
    if (a3)
        v6 = (unsigned __int8)unk_4B9988[a2];
    v5 = 0;
    for (i = 0; i < v6; ++i)
    {
        if (sub_4575B4(thisx, i, 0) == v8)
            ++v5;
    }
    return v5;
}

