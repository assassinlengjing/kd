#include "sub.h" 
BOOL sub_44E484(_BYTE* thisx, int a2, int a3)
{
    int v4; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    v4 = a3;
    if (a3 == -1)
        v4 = *(unsigned __int16*)&thisx[2 * a2 + 2564];
    if (unk_4B99CD || (int)Size < (unsigned __int8)unk_4B9985)
        return 0;
    for (i = 0;
        i < (unsigned __int8)unk_4B9985
        && (i == a2 || *(unsigned __int16*)&thisx[2 * i + 2564] != v4 || !thisx[i + 2588]);
        ++i)
    {
        ;
    }
    return i != (unsigned __int8)unk_4B9985;
}

