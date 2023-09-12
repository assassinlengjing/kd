#include "sub.h" 
int sub_490A5B(void* thisx, void* Src)
{
    int result; // eax
    int v4; // [esp+4h] [ebp-54h]
    int v5; // [esp+8h] [ebp-50h]
    int v6; // [esp+Ch] [ebp-4Ch]
    int i; // [esp+10h] [ebp-48h]
    int v8; // [esp+14h] [ebp-44h]
    int v9; // [esp+18h] [ebp-40h]
    char* v10; // [esp+1Ch] [ebp-3Ch]
    int v11[14]; // [esp+20h] [ebp-38h] BYREF

    sub_49C15E((int)v11);
    memcpy(v11, Src, sizeof(v11));
    v11[0] = dword_4B91E8;
    v10 = sub_47EF20((char*)thisx);
    v5 = unknown_libname_2((_DWORD*)v10);
    v9 = (unsigned __int8)unknown_libname_3(v10);
    v4 = v11[1];
    v6 = v11[2];
    for (i = 0; ; ++i)
    {
        result = i;
        if (i >= v9)
            break;
        v8 = 12 * *(unsigned __int16*)(v5 + 8 * i) + dword_4B92F0;
        v11[1] = *(char*)(v5 + 8 * i + *((_DWORD*)Src + 6) + 2) + v4;
        v11[2] = *(char*)(v5 + 8 * i + 4) + v6;
        if (*(_BYTE*)(v5 + 8 * i + 6))
            v11[6] = *((_DWORD*)Src + 6) == 0;
        else
            v11[6] = *((_DWORD*)Src + 6);
        v11[7] = *(unsigned __int8*)(v5 + 8 * i + 7);
        sub_48FB00(v8, (int)v11, (int)byte_4BDC60, v11, 0);
    }
    return result;
}
