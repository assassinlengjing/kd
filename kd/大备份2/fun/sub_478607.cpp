#include "sub.h" 
int __cdecl sub_478607(_DWORD* a1, unsigned __int8 a2, int a3, int a4, int a5)
{
    int result; // eax
    int v6; // [esp+0h] [ebp-14h]
    struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

    result = a2;
    if (a2)
    {
        v6 = (unsigned __int16)sub_475CB0((_WORD*)(dword_4B92D4 + 84 * a3));
        *a1 = a4;
        a1[9] = a5;
        SetRect(&rc, 32 * (a2 - 1), 16 * v6, 32, 16);
        return sub_49C8A6((int)byte_4BDC60, a1, (_DWORD*)&rc);
    }
    return result;
}
