#include "sub.h" 
int sub_48F3C5(unsigned __int8* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-110h]
    int v4; // [esp+8h] [ebp-10Ch]
    int v5; // [esp+Ch] [ebp-108h]
    CHAR String[256]; // [esp+10h] [ebp-104h] BYREF
    int v7; // [esp+110h] [ebp-4h]

    sub_480A51(thisx);
    v5 = 8 * thisx[4] + 16;
    v4 = 8 * thisx[5] + 16;
    sub_47B91A(v5, v4, (LPCSTR)word_4ABBFE, 0, dword_4B9248);
    wsprintfA(String, "%d", (unsigned __int8)byte_4B9990);
    sub_47B7ED(v5 + 16, v4 + 24, String, 0, dword_4B9248);
    result = (_DWORD)sub_48F610((char*)byte_4B9B10);
    v7 = result;
    for (i = 0; i < (unsigned __int8)byte_4B9990; ++i)
    {
        wsprintfA(String, "%d", *(unsigned __int8*)(i + v7));
        sub_47B7ED(v5 + 20 * i + 48, v4 + 24, String, 0, dword_4B9248);
        if (i < (unsigned __int8)byte_4B9990 - 1)
            sub_47B91A(v5 + 20 * i + 58, v4 + 24, aVs_0, 0, dword_4B9248);
        result = i + 1;
    }
    return result;
}

