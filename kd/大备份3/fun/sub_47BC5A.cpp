#include "sub.h" 
int __cdecl sub_47BC5A(int a1, int a2, LPCSTR lpString, int a4, int a5)
{
    int result; // eax
    int v6; // [esp+4h] [ebp-54h]
    int i; // [esp+8h] [ebp-50h]
    int v8; // [esp+Ch] [ebp-4Ch]
    struct tagRECT rc; // [esp+10h] [ebp-48h] BYREF
    int v10; // [esp+20h] [ebp-38h] BYREF
    int v11; // [esp+24h] [ebp-34h]
    int v12; // [esp+28h] [ebp-30h]

    sub_49C15E((_DWORD)&v10);
    v12 = a2;
    v8 = lstrlenA(lpString);
    v6 = a1;
    result = a4 & 2;
    if ((a4 & 2) != 0)
    {
        v6 = a1 - 4 * v8;
    }
    else
    {
        result = a4 & 4;
        if ((a4 & 4) != 0)
            v6 = a1 - 8 * v8;
    }
    for (i = 0; i < v8; ++i)
    {
        if (lpString[i] != 32)
        {
            v11 = v6 + 8 * i;
            v10 = unk_4B921C;
            SetRect(&rc, 8 * ((lpString[i] + 15) % 16), 8 * ((lpString[i] + 15) / 16), 8, 8);
            sub_4A03B3((short*)unk_4BDC60, a5, &v10, (_DWORD*)&rc);
            if ((a4 & 1) != 0)
            {
                ++v11;
                sub_4A03B3((short*)unk_4BDC60, a5, &v10, (_DWORD*)&rc);
            }
        }
        result = i + 1;
    }
    return result;
}

