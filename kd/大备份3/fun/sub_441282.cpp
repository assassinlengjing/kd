#include "sub.h" 
int __cdecl sub_441282(HMODULE hModule, LPCSTR lpName, int a3, int a4, int a5)
{
    HRSRC hResInfo; // [esp+0h] [ebp-Ch]
    LPVOID v7; // [esp+4h] [ebp-8h]
    HGLOBAL hResData; // [esp+8h] [ebp-4h]

    hResInfo = FindResourceA(hModule, lpName, "WAV");
    if (hResInfo)
    {
        hResData = LoadResource(hModule, hResInfo);
        if (hResData)
        {
            v7 = LockResource(hResData);
            if (v7)
            {
                if (sub_441799((_DWORD*)v7, (_DWORD*)a3, (_DWORD*)a4, (unsigned int*)a5))
                    return 1;
            }
        }
    }
    if (!hResInfo)
    {
        MessageBoxA(0, &unk_4B0644, aError_5, 0);
        MessageBoxA(0, lpName, aError_6, 0);
    }
    return 0;
}

