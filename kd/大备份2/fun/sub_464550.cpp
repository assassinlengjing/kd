#include "sub.h" 
int __stdcall sub_464550(Concurrency::details::UMSFreeVirtualProcessorRoot* a1, int a2)
{
    int v3; // eax
    int* v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // esi
    int v10; // esi
    int v11; // esi
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // [esp+4h] [ebp-60h]
    char v16[16]; // [esp+Ch] [ebp-58h] BYREF
    int v17[4]; // [esp+1Ch] [ebp-48h] BYREF
    _DWORD* v18; // [esp+2Ch] [ebp-38h]
    struct tagRECT v19; // [esp+30h] [ebp-34h]
    int v20; // [esp+40h] [ebp-24h]
    int v21; // [esp+44h] [ebp-20h]
    int v22; // [esp+48h] [ebp-1Ch]
    char* v23; // [esp+4Ch] [ebp-18h]
    int v24; // [esp+50h] [ebp-14h]
    int v25; // [esp+54h] [ebp-10h]
    int v26; // [esp+58h] [ebp-Ch]
    int v27; // [esp+5Ch] [ebp-8h]
    int i; // [esp+60h] [ebp-4h]

    v23 = (char*)sub_41C915(a2);
    if (!v23)
        return 0;
    v3 = sub_425D70((_DWORD*)a2);
    v4 = sub_425BD0(v23, v17, v3, 0);
    v24 = *v4;
    v25 = v4[1];
    v26 = v4[2];
    v27 = v4[3];
    if (!v24 && !v25 && !v26 && !v27)
        return 0;
    v5 = sub_426090((_DWORD*)a2);
    v24 += v5 / 100;
    v6 = sub_4260D0((_DWORD*)a2);
    v25 += v6 / 100;
    v7 = sub_426090((_DWORD*)a2);
    v26 += v7 / 100;
    v8 = sub_4260D0((_DWORD*)a2);
    v27 += v8 / 100;
    for (i = 0; i < 3; ++i)
    {
        v19 = *sub_491709((int)a1, (struct tagRECT*)v16, i);
        if (*(_QWORD*)&v19.left || v19.right || v19.bottom)
        {
            v9 = sub_426470((_DWORD*)a1) / 100;
            v21 = sub_48A0E0((_DWORD*)a1) + v9;
            v10 = sub_426530((_DWORD*)a1) / 100;
            v20 = unknown_libname_16((_DWORD*)a1) + v10;
            v11 = (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(a1) / 100;
            v22 = sub_475BE0((_DWORD*)a1) + v11;
            if (i > 0)
            {
                v18 = (_DWORD*)sub_475BA0(a1, i - 1);
                v21 += v18[1];
                v20 += v18[2];
                v22 += v18[3];
            }
            v12 = sub_4260B0((_DWORD*)a2);
            if (v20 - v12 / 100 <= 0)
            {
                v14 = sub_4260B0((_DWORD*)a2);
                v15 = v14 / 100 - v20;
            }
            else
            {
                v13 = sub_4260B0((_DWORD*)a2);
                v15 = v20 - v13 / 100;
            }
            if (v15 <= (unsigned __int8)sub_4264F0((char*)a1))
            {
                v19.left += v21;
                v19.top += v22;
                v19.right += v21;
                v19.bottom += v22;
                if (v19.left - v24 <= v26 - v24
                    && v24 - v19.left <= v19.right - v19.left
                    && v19.top - v25 <= v27 - v25
                    && v25 - v19.top <= v19.bottom - v19.top)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}