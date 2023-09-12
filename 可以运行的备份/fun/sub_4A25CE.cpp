#include "sub.h" 
int __cdecl sub_4A25CE(int a1, LPCSTR name, int a3, int cy, char a5, int a6)
{
    HMODULE ModuleHandleA; // eax
    int v8; // ecx
    int v9; // [esp+0h] [ebp-9Ch] BYREF
    HANDLE h; // [esp+4h] [ebp-98h]
    char pv[4]; // [esp+8h] [ebp-94h] BYREF
    int v12; // [esp+Ch] [ebp-90h]
    int v13; // [esp+10h] [ebp-8Ch]
    int v14[31]; // [esp+20h] [ebp-7Ch] BYREF

    ModuleHandleA = GetModuleHandleA(0);
    h = LoadImageA(ModuleHandleA, name, 0, a3, cy, 0x2000u);
    if (!h)
        h = LoadImageA(0, name, 0, a3, cy, 0x2010u);
    if (!h)
        return 0;
    GetObjectA(h, 24, pv);
    memset(v14, 0, sizeof(v14));
    v14[0] = 124;
    v14[1] = 7;
    v14[26] = 64;
    if (a5)
    {
        v8 = v14[26];
        BYTE1(v8) = BYTE1(v14[26]) | 8;
        v14[26] = v8;
    }
    *(_DWORD*)a6 = v12;
    v14[3] = v12;
    *(_DWORD*)(a6 + 4) = v13;
    v14[2] = v13;
    if ((*(int(__stdcall**)(int, int*, int*, _DWORD))(*(_DWORD*)a1 + 24))(a1, v14, &v9, 0))
        return 0;
    sub_4A202A(v9, h, 0, 0, 0, 0);
    DeleteObject(h);
    return v9;
}
