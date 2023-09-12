#include "sub.h" 
int __cdecl sub_4414A0(int a1)
{
    int v2; // [esp+4h] [ebp-8h] BYREF
    int v3; // [esp+8h] [ebp-4h]

    if (!a1)
        return 0;
    v3 = *(_DWORD*)(a1 + 4 * *(_DWORD*)(a1 + 12) + 16);
    if (v3)
    {
        if ((*(int(__stdcall**)(int, int*))(*(_DWORD*)v3 + 36))(v3, &v2) < 0)
            v2 = 0;
        if ((v2 & 1) == 1)
        {
            if (*(int*)(a1 + 8) <= 1)
            {
                v3 = 0;
            }
            else
            {
                if (++ * (_DWORD*)(a1 + 12) >= *(_DWORD*)(a1 + 8))
                    *(_DWORD*)(a1 + 12) = 0;
                v3 = *(_DWORD*)(a1 + 4 * *(_DWORD*)(a1 + 12) + 16);
                if ((*(int(__stdcall**)(int, int*))(*(_DWORD*)v3 + 36))(v3, &v2) >= 0 && (v2 & 1) == 1)
                {
                    (*(void(__stdcall**)(int))(*(_DWORD*)v3 + 72))(v3);
                    (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v3 + 52))(v3, 0);
                }
            }
        }
        if (v3
            && (v2 & 2) != 0
            && ((*(int(__stdcall**)(int))(*(_DWORD*)v3 + 80))(v3) < 0 || !sub_4416F7(v3, *(void**)a1, *(_DWORD*)(a1 + 4))))
        {
            return 0;
        }
    }
    return v3;
}

