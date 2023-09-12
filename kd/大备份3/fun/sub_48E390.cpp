#include "sub.h" 
int sub_48E390(int thisx)
{
    struct _CancellationTokenState* v1; // esi
    struct _CancellationTokenState* v2; // esi
    int v5; // [esp+8h] [ebp-Ch]
    unsigned __int8* v6; // [esp+Ch] [ebp-8h]
    int v7; // [esp+10h] [ebp-4h]

    v6 = (unsigned __int8*)sub_47EFA0((char*)unk_4B9B10);
    sub_480016(*(_DWORD**)(thisx + 12), v6[369]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 32), v6[228]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 64), v6[371]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 96), v6[178]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 128), v6[252]);
    delbuf((ios*)(*(_DWORD*)(thisx + 12) + 128), v6[376]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 160), v6[376]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 192), v6[224]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 224), v6[247]);
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 256), v6[248]);
    v7 = sub_480227((_DWORD*)thisx);
    v6[369] = (unsigned __int8)_GetToken(*(_CancellationTokenRegistration**)(thisx + 12));
    v6[228] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 32));
    v6[371] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 64));
    v6[178] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 96));
    v1 = (struct _CancellationTokenState*)v6[252];
    if (v1 != _GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 128)))
    {
        v6[252] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 128));
        if (v6[252] < 2u)
            v6[252] = 2;
        if (v6[252] > unk_4B92D0)
            v6[252] = unk_4B92D0;
    }
    v2 = (struct _CancellationTokenState*)v6[376];
    if (v2 != _GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 160)))
    {
        v6[376] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 160));
        if (v6[376] >= 2u)
        {
            if (v6[376] > 4u)
                v6[376] = 4;
        }
        else
        {
            v6[376] = 2;
        }
    }
    v5 = v6[252] % (int)v6[376];
    if (v5)
        v6[252] -= v5;
    if (v6[252] < (int)v6[376])
        v6[252] = v6[376];
    sub_480016((_DWORD*)(*(_DWORD*)(thisx + 12) + 128), v6[252]);
    v6[224] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 192));
    v6[247] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 224));
    v6[248] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)(*(_DWORD*)(thisx + 12) + 256));
    return v7;
}
