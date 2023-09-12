#include "sub.h" 
int sub_489927(void* thisx, int a2, int a3, int a4, _DWORD* a5)
{
    int v6; // [esp+4h] [ebp-10Ch]
    CHAR String1[256]; // [esp+8h] [ebp-108h] BYREF
    int v8; // [esp+108h] [ebp-8h]
    int v9; // [esp+10Ch] [ebp-4h]

    if (!a2 || !a3)
        return -1;
    v6 = 0;
    v8 = 0;
    LOBYTE(v9) = 0;
    while (sub_482D44((_DWORD*)a2, String1))
    {
        if (lstrcmpiA(String1, aMove_0))
        {
            if (!lstrcmpiA(String1, aMoveend_0))
                break;
            if ((unsigned __int8)v9 == 1)
            {
                if (String1[0] == 42)
                {
                    sub_48A46C((CHAR*)(a3 + 20 * v6), String1);
                    unknown_libname_27((_DWORD*)(a3 + 20 * v6++), v8);
                    if (v6 >= a4)
                        break;
                }
                sub_482FAA((_DWORD*)a2);
                ++v8;
            }
            else if (!(_BYTE)v9)
            {
                sub_482FAA((_DWORD*)a2);
            }
        }
        else
        {
            LOBYTE(v9) = 1;
            sub_482FAA((_DWORD*)a2);
        }
    }
    if (a5)
        *a5 = v6;
    return v8;
}

