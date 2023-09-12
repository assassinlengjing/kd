#include "sub.h" 
char __cdecl sub_47900E(_DWORD* a1, unsigned __int8 a2, int a3, int a4)
{
    _WORD* v5; // [esp+0h] [ebp-8h]
    int v6; // [esp+4h] [ebp-4h]

    if (a3 < 0)
    {
        v5 = (_WORD*)sub_426590(byte_4B9B10, -a3 - 1);
        v6 = (unsigned __int16)sub_4266F0(v5);
    }
    else
    {
        v6 = (unsigned __int16)sub_475CB0((_WORD*)(36 * a3 + dword_4B92E0));
    }
    return sub_478682(a1, a2, v6, 0, a4, -1);
}
