#include "sub.h" 
_DWORD* sub_49530B(int thisx, _DWORD* a2)
{
    _DWORD* v2; // eax
    int v4[4]; // [esp+4h] [ebp-14h] BYREF
    char* v5; // [esp+14h] [ebp-4h]

    v5 = (char*)(140 * *(unsigned __int16*)(thisx + 20) + unk_4B92E8);
    v2 = sub_47EE60(v5, v4, *(_DWORD*)(thisx + 164), 0);
    *a2 = *v2;
    a2[1] = v2[1];
    a2[2] = v2[2];
    a2[3] = v2[3];
    return a2;
}
