#include "sub.h" 
int __stdcall sub_48307F(LPCSTR lpString)
{
    int v2; // [esp+4h] [ebp-18h]
    int v3; // [esp+8h] [ebp-14h]
    int v4; // [esp+Ch] [ebp-10h]
    int v5; // [esp+10h] [ebp-Ch]
    int i; // [esp+14h] [ebp-8h]
    int j; // [esp+14h] [ebp-8h]
    int v8; // [esp+18h] [ebp-4h]

    v8 = 0;
    v2 = 0;
    v5 = lstrlenA(lpString);
    if (*lpString == 45)
    {
        v8 = 1;
        v2 = 1;
    }
    v3 = 0;
    v4 = 1;
    for (i = v2 + 1; i < v5; ++i)
        v4 *= 10;
    for (j = v2; j < v5; ++j)
    {
        v3 += v4 * (lpString[j] - 48);
        v4 /= 10;
    }
    if (v8)
        return -v3;
    return v3;
}


