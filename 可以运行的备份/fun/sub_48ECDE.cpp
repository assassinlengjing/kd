#include "sub.h" 
int sub_48ECDE(int thisx)
{
    int result; // eax
    int k; // [esp+4h] [ebp-124h]
    int v4; // [esp+8h] [ebp-120h]
    unsigned __int8 v5; // [esp+Ch] [ebp-11Ch]
    unsigned __int8 v6; // [esp+10h] [ebp-118h]
    int v7; // [esp+14h] [ebp-114h]
    int i; // [esp+18h] [ebp-110h]
    int j; // [esp+18h] [ebp-110h]
    int v10; // [esp+1Ch] [ebp-10Ch]
    int v11; // [esp+1Ch] [ebp-10Ch]
    CHAR String[256]; // [esp+20h] [ebp-108h] BYREF
    int v13; // [esp+120h] [ebp-8h]
    int v14; // [esp+124h] [ebp-4h]

    sub_480A51((unsigned __int8*)thisx);
    v13 = *(unsigned __int8*)(thisx + 4);
    v10 = *(unsigned __int8*)(thisx + 5);
    v13 = 8 * v13 + 16;
    v11 = 8 * v10 + 16;
    v14 = 224 / (unsigned __int8)byte_4B9990;
    for (i = 0; i < (unsigned __int8)byte_4B9990; ++i)
    {
        wsprintfA(String, "%d", *(unsigned __int8*)(i + thisx + 44));
        sub_47B7ED(v14 / 2 + v13 + v14 * i - 4, v11, String, 0, dword_4B9248);
        if (i < (unsigned __int8)byte_4B9990 - 1)
            sub_47B91A(v14 + v13 + v14 * i - 4, v11, (LPCSTR)aVs, 0, dword_4B9248);
    }
    v7 = v14 / 24;
    if (!(v14 / 24))
        v7 = 1;
    for (j = 0; ; ++j)
    {
        result = (unsigned __int8)byte_4B9986;
        if (j >= (unsigned __int8)byte_4B9986)
            break;
        v5 = *(_BYTE*)(j + thisx + 36);
        v6 = 0;
        for (k = 0; k < j; ++k)
        {
            if (*(unsigned __int8*)(k + thisx + 36) == v5)
                ++v6;
        }
        v4 = 24 * (v6 % v7) + v14 * v5 + v14 / 2 + v13 - 12 * v7;
        wsprintfA(String, "%dP", j + 1);
        sub_47B7ED(v4 + 4, v11 + 8 * (v6 / v7) + 16, String, 0, dword_4B9248);
        if (j == *(_DWORD*)(thisx + 20))
        {
            *(_DWORD*)(thisx + 52) = v4 - 4;
            *(_DWORD*)(thisx + 56) = v11 + 8 * (v6 / v7) + 16;
        }
    }
    return result;
}
