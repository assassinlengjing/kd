#include "sub.h" 
int __stdcall sub_440A5D(int a1)
{
    int v2; // [esp+0h] [ebp-4h]

    v2 = 0;
    while (*(_DWORD*)(a1 + 160))
    {
        while (!*(_DWORD*)(a1 + 164))
        {
            Sleep(0x10u);
            if (!*(_DWORD*)(a1 + 160))
                return 0;
        }
        if (v2 >= 60)
        {
            v2 = 0;
            *(_DWORD*)(a1 + 172) = 1;
            sub_44076B(a1, 0);
            *(_DWORD*)(a1 + 172) = 0;
        }
        Sleep(0x10u);
        if (*(_BYTE*)(a1 + 296))
            sub_440CD0(a1);
        ++v2;
    }
    return 0;
}

