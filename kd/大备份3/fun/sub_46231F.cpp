#include "sub.h" 
int sub_46231F(_DWORD* thisx, int a2)
{
    int v3; // [esp+4h] [ebp-10h]
    int v4; // [esp+10h] [ebp-4h]

    if (!a2)
        return thisx[3280];
    if (a2 < 0)
        return 0;
    v4 = (unsigned __int8)sub_4264F0((char*)&thisx[153 * ((a2 - 1) % 2) + 657]);
    v3 = (a2 - 1) / 2;
    if (v3)
        v3 = v4 + 1;
    return unk_4B9348[v3];
}

