#include "sub.h" 
HLOCAL __cdecl sub_441434(HLOCAL hMem)
{
    HLOCAL result; // eax
    int i; // [esp+0h] [ebp-4h]

    if (hMem)
    {
        for (i = 0; i < *((_DWORD*)hMem + 2); ++i)
        {
            if (*((_DWORD*)hMem + i + 4))
            {
                (*(void(__stdcall**)(_DWORD))(**((_DWORD**)hMem + i + 4) + 8))(*((_DWORD*)hMem + i + 4));
                *((_DWORD*)hMem + i + 4) = 0;
            }
        }
        return LocalFree(hMem);
    }
    return result;
}

