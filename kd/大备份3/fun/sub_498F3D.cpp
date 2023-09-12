#include "sub.h" 
__int16 __fastcall sub_498F3D(int a1)
{
    int v1; // eax
    int v2; // esi
    int v3; // esi
    int v4; // esi
    _BYTE* v7; // [esp+8h] [ebp-4h]

    LOWORD(v1) = a1;
    if (*(_DWORD*)(a1 + 56))
    {
        *(_BYTE*)(a1 + 22) = 0;
        v7 = (_BYTE*)sub_41C915(*(_DWORD*)(a1 + 56));
        *(_DWORD*)(a1 + 164) = sub_425D70(*(_DWORD**)(a1 + 56));
        v2 = sub_426090(*(_DWORD**)(a1 + 56));
        *(_DWORD*)(a1 + 96) = 100 * sub_4758D0(v7, *(_DWORD*)(a1 + 164)) + v2;
        *(_DWORD*)(a1 + 100) = sub_4260B0(*(_DWORD**)(a1 + 56));
        v3 = sub_4260D0(*(_DWORD**)(a1 + 56));
        *(_DWORD*)(a1 + 104) = 100 * sub_4758F0(v7, 0) + v3;
        sub_499622(a1);
        v1 = (unsigned __int8)sub_425B70(v7);
        if (v1)
        {
            v4 = 44 * *(unsigned __int8*)(a1 + 72);
            LOWORD(v1) = *(_WORD*)&unk_4B7180[4 * (unsigned __int8)sub_425B70(v7) + v4];
            *(_WORD*)(a1 + 20) = v1;
        }
    }
    return v1;
}
