#include "sub.h" 
int sub_46588C(char* thisx, _BYTE* a2)
{
    int v2; // esi
    char* v5; // [esp+8h] [ebp-1Ch]
    char v6[8]; // [esp+Ch] [ebp-18h]
    int i; // [esp+14h] [ebp-10h]
    int v8; // [esp+18h] [ebp-Ch]
    int v9; // [esp+1Ch] [ebp-8h]
    int v10; // [esp+20h] [ebp-4h]

    LOBYTE(v8) = sub_425EF0(a2);
    LOBYTE(v10) = 0;
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        v5 = &thisx[612 * i + 2628];
        v2 = (unsigned __int8)v8;
        if (v2 != (unsigned __int8)sub_425EF0(v5) && unknown_libname_7((_DWORD*)v5) && !sub_41BE56((_DWORD*)v5) && !sub_425E70(v5))
        {
            v6[(unsigned __int8)v10] = i;
            LOBYTE(v10) = v10 + 1;
        }
    }
    if (!(_BYTE)v10)
        return 0;
    v9 = rand() % (unsigned __int8)v10;
    return (int)&thisx[612 * (unsigned __int8)v6[v9] + 2628];
}

