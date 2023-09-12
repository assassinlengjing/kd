#include "sub.h" 
int __cdecl sub_47A55C(LPCSTR lpFileName)
{
    _DWORD* v2; // esi
    unsigned __int16 v3; // ax
    _DWORD* v4; // esi
    unsigned __int16 v5; // ax
    char v6; // al
    char v7; // al
    int* v8; // eax
    int* v9; // eax
    char v10; // al
    char v11; // al
    int v12[4]; // [esp+4h] [ebp-64h] BYREF
    int v13[4]; // [esp+14h] [ebp-54h] BYREF
    int v14; // [esp+24h] [ebp-44h]
    int v15; // [esp+28h] [ebp-40h]
    struct tagRECT rc; // [esp+2Ch] [ebp-3Ch] BYREF
    int v17; // [esp+3Ch] [ebp-2Ch]
    int yTop; // [esp+40h] [ebp-28h]
    int v19; // [esp+44h] [ebp-24h]
    int yBottom; // [esp+48h] [ebp-20h]
    int v21; // [esp+4Ch] [ebp-1Ch]
    int v22; // [esp+50h] [ebp-18h]
    char* v23; // [esp+54h] [ebp-14h]
    int j; // [esp+58h] [ebp-10h]
    int v25; // [esp+5Ch] [ebp-Ch]
    HANDLE hObject; // [esp+60h] [ebp-8h]
    int i; // [esp+64h] [ebp-4h]

    hObject = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hObject == (HANDLE)-1)
        return 0;
    if (!sub_47A326(hObject, *((_DWORD*)lpFileName + 130), *((LPVOID*)lpFileName + 132)))
        goto LABEL_4;
    CloseHandle(hObject);
    hObject = CreateFileA(lpFileName + 260, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hObject == (HANDLE)-1)
        return 0;
    if (!sub_47A42F(hObject, *((_DWORD*)lpFileName + 131), *((LPVOID*)lpFileName + 133)))
    {
    LABEL_4:
        CloseHandle(hObject);
        return 0;
    }
    CloseHandle(hObject);
    for (i = 0; i < **((unsigned __int16**)lpFileName + 133); ++i)
    {
        v23 = (char*)(152 * i + **((_DWORD**)lpFileName + 131));
        LOBYTE(v25) = sub_401DFE(v23);
        v25 = (unsigned __int8)v25;
        for (j = 0; j < v25; ++j)
        {
            v2 = (_DWORD*)*((_DWORD*)lpFileName + 130);
            v3 = sub_401BEF((_DWORD*)v23, j);
            LOBYTE(v22) = sub_425F50((_BYTE*)(12 * v3 + *v2));
            v22 = (unsigned __int8)v22;
            v4 = (_DWORD*)*((_DWORD*)lpFileName + 130);
            v5 = sub_401BEF((_DWORD*)v23, j);
            LOBYTE(v21) = sub_425F90((_BYTE*)(12 * v5 + *v4));
            v21 = (unsigned __int8)v21;
            v6 = sub_401C1E((_DWORD*)v23, j, 0);
            v14 = -v6 - 8 * v22;
            v7 = sub_401C5B((_DWORD*)v23, j, 0);
            v15 = -v7 - 8 * v21;
            sub_401D24((_DWORD*)v23, j, v14, 1);
            sub_401D62((_DWORD*)v23, j, v15, 1);
            v8 = sub_425B90(v23, v13, 0, 0);
            v17 = *v8;
            yTop = v8[1];
            v19 = v8[2];
            yBottom = v8[3];
            SetRect(&rc, -v19, yTop, -v17, yBottom);
            sub_475910(v23, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
            v9 = sub_425BD0(v23, v12, 0, 0);
            v17 = *v9;
            yTop = v9[1];
            v19 = v9[2];
            yBottom = v9[3];
            SetRect(&rc, -v19, yTop, -v17, yBottom);
            sub_475950(v23, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
            v10 = sub_4758D0(v23, 0);
            sub_475990(v23, -v10, 1);
            v11 = sub_4758F0(v23, 0);
            sub_4759B0(v23, -v11, 1);
        }
    }
    return 1;
}