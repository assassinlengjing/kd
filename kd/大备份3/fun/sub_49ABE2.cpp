#include "sub.h" 
unsigned __int16* sub_49ABE2(unsigned __int16* thisx, int a2, int a3)
{
    unsigned __int16* result; // eax
    int v4; // eax
    int v5; // edx
    int v6; // eax
    int v7; // edx
    int v8; // eax
    LONG v10; // [esp+108h] [ebp-A8h]
    LONG v11; // [esp+10Ch] [ebp-A4h]
    LONG v12; // [esp+110h] [ebp-A0h]
    LONG v13; // [esp+114h] [ebp-9Ch]
    int v14; // [esp+11Ch] [ebp-94h]
    int v15[25]; // [esp+120h] [ebp-90h] BYREF
    unsigned __int16* v16; // [esp+184h] [ebp-2Ch]
    struct tagRECT v17; // [esp+188h] [ebp-28h] BYREF
    struct tagRECT rc; // [esp+198h] [ebp-18h] BYREF
    int v19; // [esp+1A8h] [ebp-8h]
    int v20; // [esp+1ACh] [ebp-4h]

    result = (unsigned __int16*)a3;
    if (*(_DWORD*)(a3 + 40) && a2)
    {
        if (*((_DWORD*)thisx + 3))
            return (unsigned __int16*)sub_4A0CA2((int)thisx, a2, a3, 0);
        if (*(_DWORD*)thisx)
        {
            if (*(int*)(a3 + 40) < 64)
                return (unsigned __int16*)sub_49E6A3((_DWORD*)thisx, a2, a3);
            if (*(_BYTE*)(a3 + 44))
                return (unsigned __int16*)sub_49E6A3((_DWORD*)thisx, a2, a3);
            if (*(char*)(a3 + 45) > 0)
                return (unsigned __int16*)sub_49F638((_DWORD*)thisx, a2, a3, 0);
            v14 = (*(_DWORD*)(a3 + 16) * thisx[3]) >> 8;
            v19 = (*(_DWORD*)(a3 + 20) * thisx[4]) >> 8;
            if (*(_DWORD*)(a3 + 16) == 256 && *(_DWORD*)(a3 + 20) == 256)
            {
                v10 = 0;
                v12 = 0;
                v11 = 0;
                v13 = 0;
                if (**(_DWORD**)(a3 + 12) > *(_DWORD*)(a3 + 4))
                    v13 = **(_DWORD**)(a3 + 12) - *(_DWORD*)(a3 + 4);
                if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > *(_DWORD*)(a3 + 8))
                    v11 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - *(_DWORD*)(a3 + 8);
                if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < v14 + *(_DWORD*)(a3 + 4))
                    v12 = v14 + *(_DWORD*)(a3 + 4) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
                if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < v19 + *(_DWORD*)(a3 + 8))
                    v10 = v19 + *(_DWORD*)(a3 + 8) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
                if (*(_DWORD*)(a3 + 24))
                {
                    rc.left = v12;
                    rc.right = thisx[3] - v13;
                }
                else
                {
                    rc.left = v13;
                    rc.right = thisx[3] - v12;
                }
                if (*(_DWORD*)(a3 + 28))
                {
                    rc.top = v10;
                    rc.bottom = thisx[4] - v11;
                }
                else
                {
                    rc.top = v11;
                    rc.bottom = thisx[4] - v10;
                }
                result = (unsigned __int16*)rc.left;
                if (rc.left >= rc.right || rc.top >= rc.bottom)
                    return result;
                v17.left = v13 + *(_DWORD*)(a3 + 4);
                v17.top = v11 + *(_DWORD*)(a3 + 8);
                result = (unsigned __int16*)(v14 + v17.left - v13 - v12);
                v17.right = (LONG)result;
                v17.bottom = v19 + v17.top - v11 - v10;
            }
            else
            {
                SetRect(&rc, 0, 0, thisx[3], thisx[4]);
                result = (unsigned __int16*)SetRect(
                    &v17,
                    *(_DWORD*)(a3 + 4),
                    *(_DWORD*)(a3 + 8),
                    v14 + *(_DWORD*)(a3 + 4),
                    v19 + *(_DWORD*)(a3 + 8));
            }
            if (v17.left < v17.right && v17.top < v17.bottom)
            {
                memset(v15, 0, sizeof(v15));
                v15[0] = 100;
                v15[1] = 0;
                v20 = 0x1000000;
                if (*((_BYTE*)thisx + 5))
                {
                    v4 = v20;
                    BYTE1(v4) = BYTE1(v20) | 0x80;
                    v20 = v4;
                }
                if (*(_DWORD*)(a3 + 24))
                {
                    v5 = v20;
                    BYTE1(v5) = BYTE1(v20) | 8;
                    v20 = v5;
                    v6 = v15[1];
                    LOBYTE(v6) = LOBYTE(v15[1]) | 2;
                    v15[1] = v6;
                }
                if (*(_DWORD*)(a3 + 28))
                {
                    v7 = v20;
                    BYTE1(v7) = BYTE1(v20) | 8;
                    v20 = v7;
                    v8 = v15[1];
                    LOBYTE(v8) = LOBYTE(v15[1]) | 4;
                    v15[1] = v8;
                }
                result = (unsigned __int16*)(*(int(__stdcall**)(int, struct tagRECT*, _DWORD, struct tagRECT*, int, int*))(*(_DWORD*)a2 + 20))(
                    a2,
                    &v17,
                    *(_DWORD*)thisx,
                    &rc,
                    v20,
                    v15);
                v16 = result;
                if (result)
                {
                    if (v16 == (unsigned __int16*)-2005532222)
                        return (unsigned __int16*)MessageBoxA(0, &unk_4B76AC, aError_42, 0);
                }
            }
        }
    }
    return result;
}