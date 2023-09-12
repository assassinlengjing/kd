#include "sub.h" 
int sub_49C541(_DWORD* thisx, int a2, int a3, struct tagRECT* a4)
{
    int result; // eax
    int v5; // ecx
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    CHAR Text[256]; // [esp+4h] [ebp-19Ch] BYREF
    int v11[25]; // [esp+104h] [ebp-9Ch] BYREF
    int v12; // [esp+168h] [ebp-38h]
    int v13; // [esp+16Ch] [ebp-34h]
    int v14; // [esp+170h] [ebp-30h]
    int v15; // [esp+174h] [ebp-2Ch] BYREF
    int v16; // [esp+178h] [ebp-28h]
    int v17; // [esp+17Ch] [ebp-24h]
    int v18; // [esp+180h] [ebp-20h]
    int v19; // [esp+184h] [ebp-1Ch]
    int v20; // [esp+188h] [ebp-18h]
    int v21; // [esp+18Ch] [ebp-14h] BYREF
    int v22; // [esp+190h] [ebp-10h]
    int v23; // [esp+194h] [ebp-Ch]
    int v24; // [esp+198h] [ebp-8h]
    int v25; // [esp+19Ch] [ebp-4h]

    if (!a2)
        return sub_499850(aLpddsNull);
    if (thisx[3])
        return sub_4A0CA2((int)thisx, a2, a3, a4);
    if (!*thisx)
        return sub_499850(aMPddsbufNull);
    if (*(char*)(a3 + 45) > 0)
        return sub_49F638(thisx, a2, a3, (_DWORD*)&a4->left);
    v13 = 0;
    v19 = 0;
    v14 = 0;
    v20 = 0;
    if (**(_DWORD**)(a3 + 12) > *(_DWORD*)(a3 + 4))
        v20 = **(_DWORD**)(a3 + 12) - *(_DWORD*)(a3 + 4);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > *(_DWORD*)(a3 + 8))
        v14 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - *(_DWORD*)(a3 + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < a4->right + *(_DWORD*)(a3 + 4))
        v19 = a4->right + *(_DWORD*)(a3 + 4) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < a4->bottom + *(_DWORD*)(a3 + 8))
        v13 = a4->bottom + *(_DWORD*)(a3 + 8) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
    if (*(_DWORD*)(a3 + 24))
    {
        v21 = v19 + a4->left;
        v22 = v14 + a4->top;
        v23 = a4->right + v21 - v20 - v19;
        v5 = a4->bottom + v22 - v14;
    }
    else
    {
        v21 = a4->left + v20;
        v22 = a4->top + v14;
        v23 = a4->right + a4->left - v19;
        v5 = a4->bottom + a4->top;
    }
    v24 = v5 - v13;
    result = v21;
    if (v21 < v23 && v22 < v24)
    {
        v15 = (*(_DWORD*)(a3 + 16) * (v20 + *(_DWORD*)(a3 + 4))) >> 8;
        v16 = (*(_DWORD*)(a3 + 20) * (v14 + *(_DWORD*)(a3 + 8))) >> 8;
        v17 = (*(_DWORD*)(a3 + 16) * (a4->right + v15 - v20 - v19)) >> 8;
        result = (*(_DWORD*)(a3 + 20) * (a4->bottom + v16 - v14 - v13)) >> 8;
        v18 = result;
        if (v15 < v17)
        {
            result = v16;
            if (v16 < v18)
            {
                memset(v11, 0, sizeof(v11));
                v11[0] = 100;
                v11[1] = 0;
                v25 = 0x1000000;
                if (*((_BYTE*)thisx + 5))
                {
                    v6 = v25;
                    BYTE1(v6) = BYTE1(v25) | 0x80;
                    v25 = v6;
                }
                if (*(_DWORD*)(a3 + 24))
                {
                    v7 = v25;
                    BYTE1(v7) = BYTE1(v25) | 8;
                    v25 = v7;
                    v11[1] |= 2u;
                }
                if (*(_DWORD*)(a3 + 28))
                {
                    v8 = v25;
                    BYTE1(v8) = BYTE1(v25) | 8;
                    v25 = v8;
                    v11[1] |= 4u;
                }
                result = (*(int(__stdcall**)(int, int*, _DWORD, int*, int, int*))(*(_DWORD*)a2 + 20))(
                    a2,
                    &v15,
                    *thisx,
                    &v21,
                    v25,
                    v11);
                v12 = result;
                if (result)
                {
                    if (v12 == -2005532222)
                    {
                        return sub_499850(&unk_4B7CE0);
                    }
                    else if (v12 != -2005532522)
                    {
                        wsprintfA(Text, "%X", v12);
                        return sub_499850(Text);
                    }
                }
            }
        }
    }
    return result;
}