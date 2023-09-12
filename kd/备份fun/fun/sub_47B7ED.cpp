#include "sub.h" 
int __cdecl sub_47B7ED(int a1, int a2, LPCSTR lpString, int a4, int a5)
{
    int result; // eax
    int v6; // [esp+4h] [ebp-50h]
    int i; // [esp+8h] [ebp-4Ch]
    struct tagRECT rc; // [esp+Ch] [ebp-48h] BYREF
    int v9; // [esp+1Ch] [ebp-38h] BYREF
    int v10; // [esp+20h] [ebp-34h]
    int v11; // [esp+24h] [ebp-30h]

    sub_49C15E((_DWORD)&v9);
    v10 = a1;
    v11 = a2;
    v6 = lstrlenA(lpString);
    result = a4 & 2;
    if ((a4 & 2) != 0)
    {
        v10 -= 4 * v6;
    }
    else
    {
        result = a4 & 4;
        if ((a4 & 4) != 0)
            v10 -= 8 * v6;
    }
    for (i = 0; i < v6; ++i)
    {
        v9 = dword_4B9218;
        SetRect(&rc, 8 * ((lpString[i] - 32) % 32), 8 * ((lpString[i] - 32) / 32), 8, 8);
        sub_4A03B3((short*)byte_4BDC60, a5, &v9, (_DWORD*)&rc);
        if ((a4 & 1) != 0)
        {
            ++v10;
            sub_4A03B3((short*)byte_4BDC60, a5, &v9, (_DWORD*)&rc);
            v10 += 7;
        }
        else
        {
            v10 += 8;
        }
        result = i + 1;
    }
    return result;
}

