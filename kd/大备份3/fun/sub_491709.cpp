#include "sub.h" 
struct tagRECT* sub_491709(int thisx, struct tagRECT* a2, int a3)
{
    LONG* v4; // eax
    int v5[4]; // [esp+4h] [ebp-28h] BYREF
    struct tagRECT rc; // [esp+14h] [ebp-18h] BYREF
    int v7; // [esp+24h] [ebp-8h]
    char* v8; // [esp+28h] [ebp-4h]

    if (a3)
    {
        if (a3 >= 1)
        {
            v7 = *(__int16*)(thisx + 16 * (a3 - 1) + 24);
            if (v7 == -1)
            {
                v7 = *(unsigned __int16*)(thisx + 20);
            }
            else if (v7 == -2)
            {
                SetRect(&rc, 0, 0, 0, 0);
                *a2 = rc;
                return a2;
            }
            v8 = (char*)(140 * v7 + unk_4B92E8);
        }
    }
    else
    {
        v8 = (char*)(140 * *(unsigned __int16*)(thisx + 20) + unk_4B92E8);
    }
    v4 = (LONG*)sub_47EE20(v8, (_DWORD*)v5, *(_DWORD*)(thisx + 164), 0);
    a2->left = *v4;
    a2->top = v4[1];
    a2->right = v4[2];
    a2->bottom = v4[3];
    return a2;
}
