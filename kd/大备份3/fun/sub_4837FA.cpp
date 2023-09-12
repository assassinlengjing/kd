#include "sub.h" 
char  sub_4837FA(int* thisx, int a2)
{
    int v2; // edx
    int v3; // eax
    int v5; // [esp+0h] [ebp-24h]
    int v6; // [esp+4h] [ebp-20h]
    int i; // [esp+Ch] [ebp-18h]
    unsigned __int8 v9; // [esp+14h] [ebp-10h]
    unsigned __int8 v10; // [esp+1Ch] [ebp-8h]
    char v11; // [esp+20h] [ebp-4h]

    v9 = sub_425EF0((char*)a2);
    if ((char)sub_485120((char*)a2) <= 0)
        v6 = ((sub_485120((char*)a2) & 0x80u) == 0) - 1;
    else
        v6 = 1;
    if ((char)sub_485140((char*)a2) <= 0)
        v5 = ((sub_485140((char*)a2) & 0x80u) == 0) - 1;
    else
        v5 = 1;
    v2 = 3 * (v6 + 1);
    v10 = unk_4B6CED[v2 + v5];
    v11 = 0;
    for (i = 0; i < 4; ++i)
    {
        if (sub_485100((_BYTE*)a2, i))
            v11 |= 1 << i;
        v2 = i + 1;
    }
    LOBYTE(v2) = v10;
    LOBYTE(v3) = sub_48342F((int)&thisx[69 * v9 + 3], v2, v10, v11);
    if (thisx[1])
    {
        LOBYTE(v3) = v9;
        LOBYTE(v3) = sub_483927((int)&thisx[69 * v9 + 3], thisx[1], (HANDLE)thisx[1], v3, 0);
    }
    return v3;
}