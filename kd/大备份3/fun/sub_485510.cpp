#include "sub.h" 
int sub_485510(unsigned __int8* thisx)
{
    int v3; // [esp+4h] [ebp-108h]
    int v4; // [esp+4h] [ebp-108h]
    int v5; // [esp+8h] [ebp-104h]
    int v6; // [esp+8h] [ebp-104h]
    CHAR String[256]; // [esp+Ch] [ebp-100h] BYREF

    sub_480A51(thisx);
    v5 = thisx[4];
    v3 = thisx[5];
    sub_47B91A(8 * v5 + 16, 8 * v3 + 16, (LPCSTR)unk_4ABAEC, 0, unk_4B9248);
    v6 = 8 * v5 + 16;
    v4 = 8 * v3 + 32;
    wsprintfA(String, (LPCSTR)unk_4ABB0C, (unsigned __int8)unk_4B9985);
    sub_47BC5A(v6 + 16, v4, String, 0, unk_4B9248);
    sub_47B91A(v6 + 8, v4, (LPCSTR)unk_4ABB10, 0, unk_4B9248);
    wsprintfA(String, (LPCSTR)unk_4ABB0C, (unsigned __int8)unk_4B9986);
    sub_47BC5A(v6 + 64, v4, String, 0, unk_4B9248);
    sub_47B91A(v6 + 56, v4, (LPCSTR)unk_4ABB10, 0, unk_4B9248);
    wsprintfA(String, (LPCSTR)unk_4ABB0C, (unsigned __int8)unk_4B9987);
    sub_47BC5A(v6 + 112, v4, String, 0, unk_4B9248);
    return sub_47B91A(v6 + 104, v4, (LPCSTR)unk_4ABB10, 0, unk_4B9248);
}
