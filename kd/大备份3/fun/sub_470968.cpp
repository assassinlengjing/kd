#include "sub.h" 
int sub_470968(int thisx)
{
    int v1; // edx
    char* v2; // eax
    char* v3; // eax
    int v6; // [esp+4h] [ebp-134h]
    int v7; // [esp+8h] [ebp-130h]
    int v8; // [esp+10h] [ebp-128h]
    int v9; // [esp+14h] [ebp-124h]
    int v10; // [esp+18h] [ebp-120h]
    unsigned __int8* v11; // [esp+1Ch] [ebp-11Ch]
    int v12; // [esp+20h] [ebp-118h]
    int v13; // [esp+24h] [ebp-114h]
    CHAR String[256]; // [esp+28h] [ebp-110h] BYREF
    struct tagRECT rc; // [esp+128h] [ebp-10h] BYREF

    v8 = *(unsigned __int16*)(thisx + 2564);
    v7 = *(unsigned __int8*)(thisx + *(unsigned __int8*)(thisx + 2562) + 13047);
    v9 = thisx + 244 * v7 + 1392;
    v11 = (unsigned __int8*)(84 * *(__int16*)(thisx + 244 * v7 + 1628) + unk_4B92D4);
    v12 = unknown_libname_10((_DWORD*)(thisx + 128));
    v6 = 24 * (*(unsigned __int8*)(thisx + 2562) - 1) + 88;
    wsprintfA(String, "%d", v8 + 1);
    sub_47B7ED(152, v6, String, 0, v12);
    sub_47B91A(160, v6, &unk_4B385C, 0, v12);
    sub_47B91A(176, v6, (LPCSTR)(v9 + 172), 0, v12);
    v10 = 50 * (4 - v8);
    if (sub_43ED9E(v11, 1u, 0))
    {
        v10 = 300 * (4 - v8) / 5;
    }
    else if (sub_43ED9E(v11, 1u, 1u))
    {
        v10 = 200 * (4 - v8) / 5;
    }
    wsprintfA(String, "%3d", v10);
    sub_47B7ED(272, v6 + 8, String, 0, v12);
    sub_47B91A(296, v6 + 8, &unk_4B3864, 0, v12);
    *(_DWORD*)(v9 + 168) += v10;
    SetRect(&rc, 24, 144, 104, 160);
    sub_4A02E9((_DWORD*)unk_4BDC60, v1, (int)&rc, 0, v12);
    v2 = unknown_libname_18((char*)v11);
    v13 = lstrlenA(v2);
    v3 = unknown_libname_18((char*)v11);
    return sub_47B91A(64 - 8 * (v13 / 4), 152, v3, 0, v12);
}

