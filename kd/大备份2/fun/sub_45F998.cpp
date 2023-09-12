#include "sub.h" 
int sub_45F998(_DWORD* thisx, LPCSTR lpFileName)
{
    unsigned __int16 v3; // ax
    unsigned __int16 v4; // ax
    char v5; // al
    char v6; // al
    int* v7; // eax
    int* v8; // eax
    char v9; // al
    char v10; // al
    char* v11; // [esp+0h] [ebp-8Ch]
    int v13[4]; // [esp+8h] [ebp-84h] BYREF
    int v14[4]; // [esp+18h] [ebp-74h] BYREF
    void* Block; // [esp+28h] [ebp-64h]
    char* v16; // [esp+2Ch] [ebp-60h]
    int v17; // [esp+30h] [ebp-5Ch]
    int v18; // [esp+34h] [ebp-58h]
    struct tagRECT rc; // [esp+38h] [ebp-54h] BYREF
    int v20; // [esp+48h] [ebp-44h]
    int yTop; // [esp+4Ch] [ebp-40h]
    int v22; // [esp+50h] [ebp-3Ch]
    int yBottom; // [esp+54h] [ebp-38h]
    int v24; // [esp+58h] [ebp-34h]
    int v25; // [esp+5Ch] [ebp-30h]
    char* v26; // [esp+60h] [ebp-2Ch]
    int j; // [esp+64h] [ebp-28h]
    int v28; // [esp+68h] [ebp-24h]
    HANDLE hFile; // [esp+6Ch] [ebp-20h]
    unsigned int i; // [esp+70h] [ebp-1Ch]
    int Buffer; // [esp+74h] [ebp-18h] BYREF
    DWORD NumberOfBytesRead; // [esp+78h] [ebp-14h] BYREF
    int v33; // [esp+7Ch] [ebp-10h]
    int v34; // [esp+88h] [ebp-4h]

    sub_45F935((int)thisx);
    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    SetFilePointer(hFile, 12, 0, 0);
    ReadFile(hFile, &Buffer, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, thisx + 3277, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    v33 = thisx[3277];
    Block = operator new(152 * v33 + 4);
    v34 = 0;
    if (Block)
    {
        *(_DWORD*)Block = v33;
        eh_vector_constructor_iterator((char *)Block + 4, 0x98u, v33, sub_401870, sub_401927);
            v11 = (char*)Block + 4;
    }
    else
    {
        v11 = 0;
    }
    v16 = v11;
    v34 = -1;
    thisx[3278] = (_DWORD)v11;
    for (i = 0; i < thisx[3277]; ++i)
        sub_40197E((_BYTE*)(152 * i + thisx[3278]), hFile, (unsigned __int8)Buffer, 0);
    for (i = 0; i < thisx[3277]; ++i)
    {
        v26 = (char*)(152 * i + thisx[3278]);
        LOBYTE(v28) = sub_401DFE(v26);
        v28 = (unsigned __int8)v28;
        for (j = 0; j < v28; ++j)
        {
            v3 = sub_401BEF((_DWORD*)v26, j);
            LOBYTE(v25) = sub_425F50((_BYTE*)(12 * v3 + thisx[3280]));
            v25 = (unsigned __int8)v25;
            v4 = sub_401BEF((_DWORD*)v26, j);
            LOBYTE(v24) = sub_425F90((_BYTE*)(12 * v4 + thisx[3280]));
            v24 = (unsigned __int8)v24;
            v5 = sub_401C1E((_DWORD*)v26, j, 0);
            v17 = -v5 - 8 * v25;
            v6 = sub_401C5B((_DWORD*)v26, j, 0);
            v18 = -v6 - 8 * v24;
            sub_401D24((_DWORD*)v26, j, v17, 1);
            sub_401D62((_DWORD*)v26, j, v18, 1);
            v7 = sub_425B90(v26, v14, 0, 0);
            v20 = *v7;
            yTop = v7[1];
            v22 = v7[2];
            yBottom = v7[3];
            SetRect(&rc, -v22, yTop, -v20, yBottom);
            sub_475910(v26, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
            v8 = sub_425BD0(v26, v13, 0, 0);
            v20 = *v8;
            yTop = v8[1];
            v22 = v8[2];
            yBottom = v8[3];
            SetRect(&rc, -v22, yTop, -v20, yBottom);
            sub_475950(v26, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
            v9 = sub_4758D0(v26, 0);
            sub_475990(v26, -v9, 1);
            v10 = sub_4758F0(v26, 0);
            sub_4759B0(v26, -v10, 1);
        }
    }
    CloseHandle(hFile);
    return 1;
}

