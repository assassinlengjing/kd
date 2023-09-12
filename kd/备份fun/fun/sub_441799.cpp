#include "sub.h" 
int __cdecl sub_441799(_DWORD* a1, _DWORD* a2, _DWORD* a3, unsigned int* a4)
{
    unsigned int v5; // eax
    unsigned int v6; // [esp+4h] [ebp-14h]
    unsigned int v7; // [esp+Ch] [ebp-Ch]
    _DWORD* v8; // [esp+10h] [ebp-8h]
    unsigned int* v9; // [esp+10h] [ebp-8h]
    _DWORD* v10; // [esp+10h] [ebp-8h]
    int v11; // [esp+14h] [ebp-4h]

    if (a2)
        *a2 = 0;
    if (a3)
        *a3 = 0;
    if (a4)
        *a4 = 0;
    v8 = a1 + 3;
    if (*a1 == 1179011410 && a1[2] == 1163280727)
    {
        v6 = (unsigned int)v8 + a1[1] - 4;
        while ((unsigned int)v8 < v6)
        {
            v11 = *v8;
            v9 = (unsigned int*)v8 + 1;
            v7 = *v9;
            v10 = (_DWORD*)v9 + 1;
            if (v11 == 544501094)
            {
                if (a2 && !*a2)
                {
                    if (v7 < 0xE)
                        return 0;
                    *a2 = (_DWORD)v10;
                    if ((!a3 || *a3) && (!a4 || *a4))
                        return 1;
                }
            }
            else if (v11 == 1635017060 && (a3 && !*a3 || a4 && !*a4))
            {
                if (a3)
                    *a3 = (_DWORD)v10;
                if (a4)
                    *a4 = v7;
                if (!a2 || *a2)
                    return 1;
            }
            v5 = v7 + 1;
            LOBYTE(v5) = (v7 + 1) & 0xFE;
            v8 = (_DWORD*)((char*)v10 + v5);
        }
    }
    return 0;
}

