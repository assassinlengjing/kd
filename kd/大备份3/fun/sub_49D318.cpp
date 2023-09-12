#include "sub.h" 
int sub_49D318(int thisx, int a2)
{
    int v3; // eax
    int v4; // [esp-4h] [ebp-55Ch]
    signed int j; // [esp+Ch] [ebp-54Ch]
    int v7; // [esp+10h] [ebp-548h]
    int v8; // [esp+14h] [ebp-544h]
    int v9; // [esp+18h] [ebp-540h]
    size_t v10; // [esp+1Ch] [ebp-53Ch]
    char v11[4]; // [esp+20h] [ebp-538h] BYREF
    int v12; // [esp+24h] [ebp-534h]
    CHAR Text[256]; // [esp+28h] [ebp-530h] BYREF
    size_t Size; // [esp+128h] [ebp-430h]
    int v15; // [esp+12Ch] [ebp-42Ch]
    int v16; // [esp+130h] [ebp-428h]
    int v17; // [esp+134h] [ebp-424h]
    char Src[1024]; // [esp+138h] [ebp-420h] BYREF
    int i; // [esp+538h] [ebp-20h]
    int v20; // [esp+53Ch] [ebp-1Ch]
    void* v21; // [esp+540h] [ebp-18h]
    char v22; // [esp+544h] [ebp-14h]
    char v23; // [esp+548h] [ebp-10h]
    int v24; // [esp+54Ch] [ebp-Ch]
    int v25; // [esp+550h] [ebp-8h]
    int cy; // [esp+554h] [ebp-4h]

    if (*(_DWORD*)(thisx + 50436) || *(_DWORD*)(a2 + 52))
    {
        if (!*(_DWORD*)(a2 + 52))
            *(_DWORD*)(a2 + 52) = *(_DWORD*)(thisx + 50436);
        if (*(_DWORD*)a2 == -1 || *(int*)a2 <= 2048)
        {
            v20 = *(_DWORD*)a2;
            v17 = 0;
            if (*(_DWORD*)a2 == -1)
                v20 = *(_DWORD*)(thisx + 49152);
            v23 = sub_4A13C0(*(_BYTE**)(a2 + 52));
            v16 = unknown_libname_13(*(_DWORD**)(a2 + 52));
            v25 = unknown_libname_21(*(_DWORD**)(a2 + 52));
            if (*(_DWORD*)(a2 + 12) + *(_DWORD*)(a2 + 4) <= v16 && *(_DWORD*)(a2 + 16) + *(_DWORD*)(a2 + 8) <= v25 || v23)
            {
                if (*(_DWORD*)(a2 + 12) == -1)
                    Size = v16;
                else
                    Size = *(_DWORD*)(a2 + 12);
                if (*(_DWORD*)(a2 + 16) == -1)
                    cy = v25;
                else
                    cy = *(_DWORD*)(a2 + 16);
                if (v23 == 1)
                {
                    Size = *(_DWORD*)(a2 + 4);
                    cy = *(_DWORD*)(a2 + 8);
                }
                v15 = 0;
                v24 = 0;
                v21 = operator new(cy * Size);
                if (*(_DWORD*)(a2 + 44))
                    memcpy(Src, *(const void**)(a2 + 44), sizeof(Src));
                else
                    sub_4A1AA5(*(_DWORD*)(a2 + 52), Src);
                *(_DWORD*)a2 = v20;
                if (*(_DWORD*)(a2 + 20) == -1)
                    *(_DWORD*)(a2 + 20) = v25 / cy * (v16 / (int)Size);
                if (*(_BYTE*)(a2 + 48))
                {
                    if (*(_BYTE*)(a2 + 48) != 1 && *(_BYTE*)(thisx + 50442))
                    {
                        if (*(_BYTE*)(a2 + 48) == 2 && *(_BYTE*)(thisx + 50442))
                            v22 = 0;
                    }
                    else
                    {
                        v22 = 1;
                    }
                }
                else
                {
                    v22 = *(_BYTE*)(thisx + 50443);
                }
                for (i = v20; i < *(_DWORD*)(a2 + 20) + v20; ++i)
                {
                    if (i >= 2048)
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aI_0, aEntrypat_8, 0);
                        break;
                    }
                    if (!v23 && v16 <= (int)(Size * v15 + *(_DWORD*)(a2 + 4)))
                    {
                        v15 = 0;
                        ++v24;
                    }
                    if (!v23 && v25 <= cy * v24 + *(_DWORD*)(a2 + 8))
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aBitmap_0, aEntrypat_9, 0);
                        break;
                    }
                    v10 = Size * v15 + *(_DWORD*)(a2 + 4);
                    v9 = cy * v24 + *(_DWORD*)(a2 + 8);
                    *(_DWORD*)(thisx + 24 * i + 20) = i;
                    if (*(_DWORD*)(a2 + 56))
                    {
                        sub_4A1216(24 * i + thisx, Size, cy, *(_DWORD*)(a2 + 56));
                    }
                    else if (!sub_49B578((_DWORD*)(24 * i + thisx), *(_DWORD*)(thisx + 50508), Size, cy, v22))
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7F04, aEntrypat_10, 0);
                        break;
                    }
                    if (v23)
                    {
                        if (v23 == 1)
                            v7 = sub_4A1C28(*(_DWORD**)(a2 + 52), v21, Size, cy, 1);
                    }
                    else
                    {
                        v7 = sub_4A1694(*(_DWORD*)(a2 + 52), v21, v10, v9, Size, cy);
                    }
                    if (!v7)
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aCutbit_0, aEntrypat_11, 0);
                        break;
                    }
                    if (*(_DWORD*)(a2 + 56))
                    {
                        sub_4A1299(24 * i + thisx, (int)v21, Size, cy);
                    }
                    else if (!sub_49D0B7((_DWORD*)(24 * i + thisx), (int)v21, Size, cy, Src))
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aEntrybit3, aEntrypat_12, 0);
                        break;
                    }
                    v8 = *(_DWORD*)(a2 + 36);
                    if (v8 == -1)
                    {
                        v11[0] = 0;
                    }
                    else
                    {
                        v11[0] = 0;
                        if (v8 > 255)
                            v8 = (unsigned __int8)v8;
                        for (j = 0; j < (int)(cy * Size); ++j)
                        {
                            if (*((unsigned __int8*)v21 + j) == v8)
                            {
                                v11[0] = 1;
                                break;
                            }
                        }
                        if (*(_DWORD*)(a2 + 56))
                        {
                            v12 = v8;
                        }
                        else
                        {
                            v4 = ((unsigned __int8)Src[4 * v8] << 16) | ((unsigned __int8)Src[4 * v8 + 1] << 8) | (unsigned __int8)Src[4 * v8 + 2];
                            v3 = unknown_libname_30((_DWORD*)(void*)(24 * i + thisx));
                            v12 = sub_4A246A(v3, v4);
                        }
                    }
                    sub_49CDF4((_DWORD*)(24 * i + thisx), (int)v11);
                    ++v15;
                    ++v17;
                    if ((unsigned int)i >= *(_DWORD*)(thisx + 49152))
                        ++* (_DWORD*)(thisx + 49152);
                }
                operator delete(v21);
                if (*(_DWORD*)(a2 + 52) == *(_DWORD*)(thisx + 50436))
                    *(_DWORD*)(a2 + 52) = 0;
                return v17;
            }
            else
            {
                wsprintfA(
                    Text,
                    "type=%d, x=%d, y=%d, w=%d, h=%d, bw=%d, bh=%d",
                    0,
                    *(_DWORD*)(a2 + 4),
                    *(_DWORD*)(a2 + 8),
                    *(_DWORD*)(a2 + 12),
                    *(_DWORD*)(a2 + 16),
                    v16,
                    v25);
                MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7E70, aEntrypat_7, 0);
                sub_499850(Text);
                return 0;
            }
        }
        else
        {
            MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7E10, aError_64, 0);
            return 0;
        }
    }
    else
    {
        sub_499850(&unk_4B7DE0);
        return 0;
    }
}
