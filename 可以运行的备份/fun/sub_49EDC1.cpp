#include "sub.h" 
_DWORD* sub_49EDC1(int a1, int a2, _DWORD* a3, int a4)
{
    _DWORD* result; // eax
    int v6[25]; // [esp+4h] [ebp-1C8h] BYREF
    CHAR Text[256]; // [esp+68h] [ebp-164h] BYREF
    int v8[25]; // [esp+168h] [ebp-64h] BYREF

    result = (_DWORD*)a1;
    if (*(_BYTE*)(a1 + 50440))
    {
        if (!a3)
            a3 = (_DWORD*)(a1 + 50452);
        result = a3;
        if (*a3 < a3[2])
        {
            result = a3;
            if (a3[1] < a3[3])
            {
                result = (_DWORD*)a1;
                if (*(_BYTE*)(a1 + 50443))
                {
                    if (*(_DWORD*)(a1 + 50520))
                    {
                        memset(v8, 0, sizeof(v8));
                        v8[0] = 100;
                        v8[20] = a4;
                        result = (_DWORD*)(*(int(__thiscall**)(_DWORD, _DWORD, _DWORD*, _DWORD, _DWORD, int, int*))(**(_DWORD**)(a1 + 50520) + 20))(
                            *(_DWORD*)(a1 + 50520),
                            *(_DWORD*)(a1 + 50520),
                            a3,
                            0,
                            0,
                            16778240,
                            v8);
                        if (result)
                        {
                            wsprintfA(Text, aFillrect, *a3, a3[1], a3[2], a3[3]);
                            return (_DWORD*)sub_499850(Text);
                        }
                    }
                }
                else if (*(_DWORD*)(a1 + 50516))
                {
                    memset(v6, 0, sizeof(v6));
                    v6[0] = 100;
                    v6[20] = a4;
                    result = (_DWORD*)(*(int(__thiscall**)(_DWORD, _DWORD, _DWORD*, _DWORD, _DWORD, int, int*))(**(_DWORD**)(a1 + 50516) + 20))(
                        *(_DWORD*)(a1 + 50516),
                        *(_DWORD*)(a1 + 50516),
                        a3,
                        0,
                        0,
                        16778240,
                        v6);
                    if (result)
                        return (_DWORD*)sub_499850(&byte_4B809C);
                }
                else
                {
                    return (_DWORD*)sub_499850(aMPddsbackNull);
                }
            }
        }
    }
    return result;
}