#include "sub.h" 
int __cdecl sub_4416F7(int a1, void* Src, int a3)
{
    void* v4; // [esp+0h] [ebp-10h] BYREF
    void* v5; // [esp+4h] [ebp-Ch] BYREF
    size_t v6; // [esp+8h] [ebp-8h] BYREF
    size_t Size; // [esp+Ch] [ebp-4h] BYREF

    if (!a1
        || !Src
        || !a3
        || (*(int(__stdcall**)(int, _DWORD, int, void**, size_t*, void**, size_t*, _DWORD))(*(_DWORD*)a1 + 44))(
            a1,
            0,
            a3,
            &v5,
            &Size,
            &v4,
            &v6,
            0) < 0)
    {
        return 0;
    }
    memcpy(v5, Src, Size);
    if (v6)
        memcpy(v4, (char*)Src + Size, v6);
    (*(void(__stdcall**)(int, void*, size_t, void*, size_t))(*(_DWORD*)a1 + 76))(a1, v5, Size, v4, v6);
    return 1;
}

