#include "sub.h" 
int sub_4857A7(unsigned __int8* thisx)
{
    int result; // eax
    CHAR String[256]; // [esp+4h] [ebp-10Ch] BYREF
    int i; // [esp+104h] [ebp-Ch]
    int v5; // [esp+108h] [ebp-8h]
    int v6; // [esp+10Ch] [ebp-4h]

    sub_480A51(thisx);
    v6 = 8 * thisx[4];
    v5 = 8 * thisx[5];
    sub_47B91A(v6 + 24, v5 + 10, (LPCSTR)&byte_4B2D45, 0, dword_4B9248);
    sub_47B91A(v6 + 24, v5 + 30, (LPCSTR)&byte_4B17DC, 0, dword_4B9248);
    sub_47B91A(v6 + 24, v5 + 46, (LPCSTR)&byte_4B17E6, 0, dword_4B9248);
    sub_47B91A(v6 + 24, v5 + 62, (LPCSTR)&byte_4B2E1E, 0, dword_4B9248);
    sub_47B91A(v6 + 24, v5 + 78, (LPCSTR)&byte_4B2EF6, 0, dword_4B9248);
    result = sub_47B91A(v6 + 24, v5 + 94, &byte_4B2F00, 0, dword_4B9248);
    for (i = 0; i < 5; ++i)
    {
        wsprintfA(String, "%3d", *(_DWORD*)&thisx[4 * i + 36]);
        sub_47B7ED(v6 + 80, v5 + 16 * i + 30, String, 0, dword_4B9248);
        result = sub_47B91A(v6 + 96, v5 + 16 * i + 30, (LPCSTR)&byte_4B17D4, 0, dword_4B9248);
    }
    return result;
}
