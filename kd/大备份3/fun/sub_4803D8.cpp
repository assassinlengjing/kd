#include "sub.h" 
int sub_4803D8(int thisx)
{
    int result; // eax
    const CHAR* v2; // eax
    const CHAR* v3; // eax
    struct _CancellationTokenState* Token; // eax
    int v5; // [esp-4h] [ebp-120h]
    int v6; // [esp-4h] [ebp-120h]
    _CancellationTokenRegistration* v8; // [esp+4h] [ebp-118h]
    int v9; // [esp+8h] [ebp-114h]
    int v10; // [esp+Ch] [ebp-110h]
    int i; // [esp+10h] [ebp-10Ch]
    int v12; // [esp+14h] [ebp-108h]
    int v13; // [esp+18h] [ebp-104h]
    CHAR String[256]; // [esp+1Ch] [ebp-100h] BYREF

    sub_480A51((unsigned char*)thisx);
    v12 = (*(unsigned __int8*)(thisx + 7) - 2) / 2;
    v10 = 8 * *(unsigned __int8*)(thisx + 28) + 8 * *(unsigned __int8*)(thisx + 4);
    v9 = 8 * *(unsigned __int8*)(thisx + 5) + 12;
    v13 = 8 * *(unsigned __int8*)(thisx + 29) + 8 * *(unsigned __int8*)(thisx + 4);
    for (i = *(_DWORD*)(thisx + 24); ; ++i)
    {
        result = thisx;
        if (i >= v12 + *(_DWORD*)(thisx + 24))
            break;
        result = i;
        if (i >= *(_DWORD*)(thisx + 16))
            break;
        v8 = (_CancellationTokenRegistration*)(32 * i + *(_DWORD*)(thisx + 12));
        v5 = unk_4B9248;
        v2 = (const CHAR*)unknown_libname_30((_DWORD*)v8);
        sub_47B91A(v10, v9, v2, 0, v5);
        if (unknown_libname_22((_DWORD*)v8))
        {
            if (sub_4805AD((_DWORD*)v8))
            {
                v6 = unk_4B9248;
                v3 = (const CHAR*)sub_4805AD((_DWORD*)v8);
                sub_47B91A(v13, v9, v3, 0, v6);
            }
            else
            {
                Token = _GetToken(v8);
                wsprintfA(String, "%d", Token);
                sub_47BC5A(v13, v9, String, 0, unk_4B9248);
            }
        }
        v9 += 16;
    }
    return result;
}

