#include "sub.h" 
int sub_4A00C6(int thisx, int* a2, int a3, _DWORD* a4)
{
    int result; // eax
    unsigned __int16 v5; // ax
    int v6; // eax
    int v7; // [esp-4h] [ebp-38h]
    int v9; // [esp+Ch] [ebp-28h]
    struct tagRECT rc; // [esp+10h] [ebp-24h] BYREF
    struct tagRECT v11; // [esp+20h] [ebp-14h] BYREF
    int v12; // [esp+30h] [ebp-4h]

    result = thisx;
    if (*(_BYTE*)(thisx + 50440) || a2[9] >= 0)
    {
        result = (int)a2;
        if (*a2 >= 0 && *a2 < 2048)
        {
            if (a2[9] >= 0)
            {
                if (a2[9] >= 2048)
                    return result;
                v7 = (unsigned __int16)sub_48E130((_WORD*)(thisx + 24 * a2[9]));
                v5 = sub_4260F0((short*)thisx + 24 * a2[9]);
                SetRect(&rc, 0, 0, v5, v7);
                a2[3] = (int)&rc;
            }
            else
            {
                a2[3] = thisx + 50452;
            }
            LOWORD(v12) = sub_4260F0((short*)thisx + 24 * *a2);
            v12 = (unsigned __int16)v12;
            v9 = (unsigned __int16)sub_48E130((_WORD*)(thisx + 24 * *a2));
            result = a3;
            if (a3 < v9 * (v12 / 8) / 8)
            {
                SetRect(&v11, 8 * (a3 % (v12 / 8)), 8 * (a3 / (v12 / 8)), 8, 8);
                if (a4)
                {
                    v11.top += a4[1];
                    v11.left += *a4;
                    v11.bottom = a4[3];
                    v11.right = a4[2];
                }
                if (a2[9] >= 0)
                {
                    v6 = unknown_libname_30((_DWORD*)(void*)(24 * a2[9] + thisx));
                    return sub_49C541((_DWORD*)(24 * *a2 + thisx), v6, (int)a2, (tagRECT*)(_DWORD*)&v11);
                }
                else if (*(_BYTE*)(thisx + 50443))
                {
                    return sub_49C541((_DWORD*)(thisx + 24 * *a2), *(_DWORD*)(thisx + 50520), (int)a2, (tagRECT*)(_DWORD*)&v11);
                }
                else
                {
                    return sub_49C541((_DWORD*)(24 * *a2 + thisx), *(_DWORD*)(thisx + 50516), (int)a2, (tagRECT*)(_DWORD*)&v11);
                }
            }
        }
    }
    return result;
}

