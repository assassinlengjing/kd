#include "sub.h" 
int  sub_47FEB2(int thisx, LPCSTR lpString, void* Src, int a4)
{
    int v6; // [esp+14h] [ebp-10h]
    int v7; // [esp+18h] [ebp-Ch]
    int v8; // [esp+18h] [ebp-Ch]
    int i; // [esp+1Ch] [ebp-8h]
    int j; // [esp+20h] [ebp-4h]

    sub_47FE10((void**)thisx, lpString);
    if (*(_DWORD*)(thisx + 8))
        operator delete(*(void**)(thisx + 8));
    if (*(_DWORD*)(thisx + 12))
        operator delete(*(void**)(thisx + 12));
    v7 = 0;
    for (i = 0; ; ++i)
    {
        v6 = lstrlenA((LPCSTR)Src + v7);
        if (!v6)
            break;
        v7 += v6 + 1;
    }
    *(_DWORD*)(thisx + 8) = (_DWORD)operator new(v7 + 1);
    *(_DWORD*)(thisx + 12) = (_DWORD)operator new(2 * i);
    memcpy(*(void**)(thisx + 8), Src, v7 + 1);
    v8 = 0;
    for (j = 0; j < i; ++j)
    {
        *(_WORD*)(*(_DWORD*)(thisx + 12) + 2 * j) = v8;
        v8 += lstrlenA((LPCSTR)Src + v8) + 1;
    }
    *(_DWORD*)(thisx + 4) = 1;
    *(_DWORD*)(thisx + 20) = 0;
    *(_DWORD*)(thisx + 24) = i - 1;
    return sub_480016((_DWORD*)thisx, a4);
}