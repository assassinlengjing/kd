#include "sub.h" 
int __fastcall sub_48FB00(int a1, int a2, int a3, void* Src, int yTop)
{
    int result; // eax
    unsigned __int16 v7; // [esp+4h] [ebp-6Ch]
    int j; // [esp+8h] [ebp-68h]
    int v9; // [esp+10h] [ebp-60h]
    int v10; // [esp+14h] [ebp-5Ch]
    int v11; // [esp+18h] [ebp-58h]
    int i; // [esp+1Ch] [ebp-54h]
    int v13; // [esp+20h] [ebp-50h]
    int v14; // [esp+24h] [ebp-4Ch]
    int v15[14]; // [esp+28h] [ebp-48h] BYREF
    struct tagRECT rc; // [esp+60h] [ebp-10h] BYREF

    if (yTop < 0)
        yTop = 0;
    if (a3)
    {
        if (Src)
        {
            result = a1;
            if (*(_DWORD*)(a1 + 8))
            {
                sub_49C15E((_DWORD)v15);
                memcpy(v15, Src, sizeof(v15));
                v14 = 8;
                v13 = 8;
                v9 = *((_DWORD*)Src + 1);
                if (*((_DWORD*)Src + 6))
                {
                    v15[1] = v15[1] + 8 * *(unsigned __int8*)(a1 + 6) - 8;
                    v9 = v15[1];
                    v14 = -8;
                }
                if (*((_DWORD*)Src + 7))
                {
                    v15[2] = v15[2] + 8 * *(unsigned __int8*)(a1 + 5) - 8;
                    v13 = -8;
                }
                SetRect(&rc, 0, 0, 8, 8);
                v10 = 0;
                v11 = *(unsigned __int8*)(a1 + 5);
                if (*((_DWORD*)Src + 7))
                {
                    v10 = yTop / 8;
                    yTop &= 0x80000007;
                    result = 8 * v10;
                    v15[2] -= 8 * v10;
                }
                else
                {
                    result = yTop / 8;
                    v11 = *(unsigned __int8*)(a1 + 5) - yTop / 8;
                }
                for (i = v10; i < v11; ++i)
                {
                    if (*((_DWORD*)Src + 7))
                    {
                        if (i == v10)
                        {
                            SetRect(&rc, 0, yTop, 8, 8 - yTop);
                        }
                        else if (i == v10 + 1)
                        {
                            SetRect(&rc, 0, 0, 8, 8);
                        }
                    }
                    else if (8 * i + 8 > 8 * *(unsigned __int8*)(a1 + 5) - yTop)
                    {
                        SetRect(&rc, 0, 0, 8, 8 - yTop % 8);
                    }
                    for (j = 0; j < *(unsigned __int8*)(a1 + 6); ++j)
                    {
                        v7 = *(_WORD*)(*(_DWORD*)(a1 + 8) + 2 * (*(unsigned __int8*)(a1 + 6) * i + j));
                        if (v7)
                            sub_4A00C6(a3, v15, v7 - 1, (_DWORD*)&rc);
                        v15[1] += v14;
                    }
                    v15[1] = v9;
                    v15[2] += v13;
                    result = i + 1;
                }
            }
        }
    }
    return result;
}
