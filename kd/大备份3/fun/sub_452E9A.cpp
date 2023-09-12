#include "sub.h" 
void sub_452E9A(int thisx)
{
    int v2[2]; // [esp+10h] [ebp-54h] BYREF
    int v3; // [esp+18h] [ebp-4Ch]
    int v4; // [esp+1Ch] [ebp-48h]
    int v5; // [esp+20h] [ebp-44h]
    int v6[2]; // [esp+24h] [ebp-40h] BYREF
    int v7; // [esp+2Ch] [ebp-38h]
    int v8; // [esp+30h] [ebp-34h]
    int v9; // [esp+34h] [ebp-30h]
    int v10[2]; // [esp+38h] [ebp-2Ch] BYREF
    int v11; // [esp+40h] [ebp-24h]
    int v12; // [esp+44h] [ebp-20h]
    int v13[2]; // [esp+48h] [ebp-1Ch] BYREF
    int v14; // [esp+50h] [ebp-14h]
    int v15; // [esp+54h] [ebp-10h]
    unsigned int NodeId; // [esp+58h] [ebp-Ch]
    int i; // [esp+60h] [ebp-4h]

    NodeId = Concurrency::details::ExecutionResource::GetNodeId((Concurrency::details::ExecutionResource*)(thisx + 128));
    if (unk_4B9985 == 2)
    {
        v15 = sub_4891BA((_DWORD*)(thisx + 128), 0);
        for (i = 0; i < 2; ++i)
        {
            v14 = (unsigned __int8)unk_4B9988[i];
            sub_4757B0((_DWORD*)(thisx + 612 * v14 + 2628), i == 0);
            v13[0] = 160 * i + 80;
            v13[1] = NodeId + v15;
            sub_48655E(thisx + 128, v13, (_DWORD*)thisx + 612 * v14 + 2628);
        }
    }
    else if ((unsigned __int8)unk_4B9985 > 4u)
    {
        if ((unsigned __int8)unk_4B9985 > 6u)
        {
            v5 = (int)(176 - NodeId) / 10;
            for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
            {
                v4 = (unsigned __int8)unk_4B9988[i];
                if (!i || i == 1 || i == 2 || i == 3)
                    sub_4757B0((_DWORD*)(thisx + 612 * v4 + 2628), 1);
                else
                    sub_4757B0((_DWORD*)(thisx + 612 * v4 + 2628), 0);
                if (i % 2)
                {
                    v2[0] = 72 * (i / 2) + 44;
                    v3 = sub_4891BA((_DWORD*)(thisx + 128), 2);
                }
                else
                {
                    v2[0] = 80 * (i / 2) + 32;
                    v3 = sub_4891BA((_DWORD*)(thisx + 128), 1);
                }
                v2[1] = NodeId + v3;
                sub_48655E(thisx + 128, v2, (_DWORD*)thisx + 612 * v4 + 2628);
            }
        }
        else
        {
            v9 = (int)(176 - NodeId) / 10;
            for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
            {
                v8 = (unsigned __int8)unk_4B9988[i];
                if (!i || i == 1 || i == 2)
                    sub_4757B0((_DWORD*)(thisx + 612 * v8 + 2628), 1);
                else
                    sub_4757B0((_DWORD*)(thisx + 612 * v8 + 2628), 0);
                if (i % 2)
                {
                    v6[0] = 96 * (i / 2) + 64;
                    v7 = sub_4891BA((_DWORD*)(thisx + 128), 2);
                }
                else
                {
                    v6[0] = 112 * (i / 2) + 48;
                    v7 = sub_4891BA((_DWORD*)(thisx + 128), 1);
                }
                v6[1] = NodeId + v7;
                sub_48655E(thisx + 128, v6, (_DWORD*)thisx + 612 * v8 + 2628);
            }
        }
    }
    else
    {
        for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
        {
            v12 = (unsigned __int8)unk_4B9988[i];
            if (!i || i == 1)
                sub_4757B0((_DWORD*)(thisx + 612 * v12 + 2628), 1);
            else
                sub_4757B0((_DWORD*)(thisx + 612 * v12 + 2628), 0);
            if (i % 2)
            {
                v10[0] = ((i / 2) << 7) + 96;
                v11 = sub_4891BA((_DWORD*)(thisx + 128), 2);
            }
            else
            {
                v10[0] = 160 * (i / 2) + 80;
                v11 = sub_4891BA((_DWORD*)(thisx + 128), 1);
            }
            v10[1] = NodeId + v11;
            sub_48655E(thisx + 128, v10, (_DWORD*)thisx + 612 * v12 + 2628);
        }
    }
}

