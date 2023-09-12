#include "sub.h" 
int sub_49BB8A(int thisx, int* a2)
{
    int v3; // edx
    int v5; // [esp+Ch] [ebp-13Ch]
    int v6; // [esp+10h] [ebp-138h]
    int v7; // [esp+14h] [ebp-134h]
    int v8; // [esp+18h] [ebp-130h]
    int Size; // [esp+1Ch] [ebp-12Ch]
    int v10; // [esp+20h] [ebp-128h]
    int v11; // [esp+24h] [ebp-124h]
    int v12; // [esp+28h] [ebp-120h]
    int i; // [esp+2Ch] [ebp-11Ch]
    int v14; // [esp+30h] [ebp-118h]
    _DWORD* v15; // [esp+34h] [ebp-114h]
    char v16; // [esp+38h] [ebp-110h]
    char v17[256]; // [esp+3Ch] [ebp-10Ch] BYREF
    int v18; // [esp+13Ch] [ebp-Ch]
    int v19; // [esp+140h] [ebp-8h]
    int cy; // [esp+144h] [ebp-4h]

    if (*(_DWORD*)(thisx + 50436))
    {
        if (*a2 == -1 || *a2 <= 2048)
        {
            v14 = *a2;
            v12 = 0;
            if (*a2 == -1)
                v14 = *(_DWORD*)(thisx + 49152);
            v16 = sub_4A13C0(*(_BYTE**)(thisx + 50436));
            v11 = unknown_libname_13(*(_DWORD**)(thisx + 50436));
            v19 = unknown_libname_21(*(_DWORD**)(thisx + 50436));
            if (a2[3] + a2[1] <= v11 && a2[4] + a2[2] <= v19 || v16)
            {
                if (a2[3] == -1)
                    Size = v11;
                else
                    Size = a2[3];
                if (a2[4] == -1)
                    cy = v19;
                else
                    cy = a2[4];
                if (v16 == 1)
                {
                    Size = a2[1];
                    cy = a2[2];
                }
                v10 = 0;
                v18 = 0;
                v15 = (_DWORD*)operator new(cy * Size);
                sub_4A17BF(*(_BYTE**)(thisx + 50436), thisx + 49156, thisx + 50180, (char*)a2[6], (int)v17, 0);
                *a2 = v14;
                for (i = v14; i < a2[5] + v14; ++i)
                {
                    if (i >= 2048)
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aI, aEntrypat_1, 0);
                        break;
                    }
                    if (!v16 && v11 <= a2[3] * v10 + a2[1])
                    {
                        v10 = 0;
                        ++v18;
                    }
                    if (!v16 && v19 <= a2[4] * v18 + a2[2])
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aBitmap, aEntrypat_2, 0);
                        break;
                    }
                    v8 = a2[3] * v10 + a2[1];
                    v7 = a2[4] * v18 + a2[2];
                    *(_DWORD*)(thisx + 24 * i + 20) = i;
                    if (!sub_49B578((_DWORD*)(24 * i + thisx), *(_DWORD*)(thisx + 50508), Size, cy, *(_BYTE*)(thisx + 50443)))
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7AEC, aEntrypat_3, 0);
                        break;
                    }
                    if (!v16)
                        v5 = sub_4A1694(*(_DWORD*)(thisx + 50436), v15, v8, v7, Size, cy);
                    if (v16 == 1)
                        v5 = sub_4A1C28(*(_DWORD**)(thisx + 50436), v15, Size, cy, 1);
                    if (!v5)
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aCutbit, aEntrypat_4, 0);
                        break;
                    }
                    v3 = thisx;
                    if (*(_BYTE*)(thisx + 50441))
                    {
                        LOBYTE(v3) = *(_BYTE*)(thisx + 50441);
                        if (!sub_49B106((_DWORD*)(thisx + 24 * i), (int)v15, Size, cy, (int)v17, v3))
                        {
                            MessageBoxA(*(HWND*)(thisx + 50500), aEntrybit, aEntrypat_5, 0);
                            break;
                        }
                    }
                    else if (!sub_49B2A5((_DWORD*)(thisx + 24 * i), (int)v15, Size, cy, (int)v17, thisx + 49156))
                    {
                        MessageBoxA(*(HWND*)(thisx + 50500), aEntrybit2, aEntrypat_6, 0);
                        break;
                    }
                    v6 = a2[9];
                    if (v6 != -1)
                        v6 = v17[a2[9]];
                    sub_49B0AB((_BYTE*)(24 * i + thisx), v6);
                    ++v10;
                    ++v12;
                    ++* (_DWORD*)(thisx + 49152);
                }
                operator delete(v15);
                return v12;
            }
            else
            {
                MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7A58, aEntrypat_0, 0);
                return 0;
            }
        }
        else
        {
            MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B7A28, aError_55, 0);
            return 0;
        }
    }
    else
    {
        MessageBoxA(0, &unk_4B79F8, aError_54, 0);
        return 0;
    }
}