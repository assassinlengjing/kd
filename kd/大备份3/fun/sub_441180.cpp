#include "sub.h" 
int __cdecl sub_441180(int a1, LPCSTR lpName)
{
    void* Src; // [esp+0h] [ebp-1Ch] BYREF
    int v4; // [esp+4h] [ebp-18h] BYREF
    int v5; // [esp+8h] [ebp-14h] BYREF
    int v6; // [esp+Ch] [ebp-10h]
    int v7[2]; // [esp+10h] [ebp-Ch] BYREF
    int v8; // [esp+18h] [ebp-4h] BYREF

    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v8 = 0;
    if (sub_441282(0, lpName, (int)&v8, (int)&Src, (int)v7))
    {
        v5 = 20;
        v6 = 65538;
        if ((*(int(__stdcall**)(int, int*, int*, _DWORD))(*(_DWORD*)a1 + 12))(a1, &v5, &v4, 0) < 0)
        {
            return 0;
        }
        else if (!sub_4416F7(v4, Src, v7[0]))
        {
            (*(void(__stdcall**)(int))(*(_DWORD*)v4 + 8))(v4);
            return 0;
        }
    }
    return v4;
}

