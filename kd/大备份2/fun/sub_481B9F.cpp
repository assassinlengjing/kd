#include "sub.h" 
int sub_481B9F(int thisx, HANDLE hFile)
{
    int v3; // eax
    int v4; // edx
    _DWORD* v5; // [esp+0h] [ebp-140h]
    _DWORD* Block; // [esp+Ch] [ebp-134h]
    bool RuntimeOwnsLifetime; // [esp+14h] [ebp-12Ch]
    int v9; // [esp+18h] [ebp-128h]
    int v10; // [esp+1Ch] [ebp-124h] BYREF
    int v11; // [esp+20h] [ebp-120h] BYREF
    int i; // [esp+24h] [ebp-11Ch]
    int v13; // [esp+28h] [ebp-118h] BYREF
    DWORD NumberOfBytesRead; // [esp+2Ch] [ebp-114h] BYREF
    CHAR Buffer[256]; // [esp+30h] [ebp-110h] BYREF
    int v16; // [esp+130h] [ebp-10h]
    int v17; // [esp+13Ch] [ebp-4h]

    LOWORD(v13) = 0;
    ReadFile(hFile, Buffer, 0xBu, (LPDWORD)&NumberOfBytesRead, 0);
    if (lstrcmpiA(Buffer, aKdMapdata))
    {
        SetFilePointer(hFile, 0, 0, 0);
        *(_BYTE*)(thisx + 14) = 0;
    }
    else
    {
        ReadFile(hFile, &v13, 2u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, (LPVOID)(thisx + 14), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    ReadFile(hFile, &v11, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, &v10, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if (!(_BYTE)v11 || !(_BYTE)v10 || (unsigned __int8)v10 > 0x16u)
        return 0;
    if ((unsigned __int8)v11 != *(unsigned __int8*)(thisx + 12)
        || (unsigned __int8)v10 != *(unsigned __int8*)(thisx + 13))
    {
        sub_48151A(thisx);
        *(_BYTE*)(thisx + 13) = v10;
        *(_BYTE*)(thisx + 12) = v11;
        v9 = *(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12);
        Block = (int*)operator new(20 * v9 + 4);
        v17 = 0;
        if (Block)
        {
            *Block = v9;
            eh_vector_constructor_iterator(Block + 1, 0x14u, v9, sub_48142C, sub_48148F);
                v5 = Block + 1;
        }
        else
        {
            v5 = 0;
        }
        v17 = -1;
        *(_DWORD*)(thisx + 4) = (_DWORD)v5;
        if (!*(_DWORD*)(thisx + 4))
            return 0;
        *(_DWORD*)(thisx + 8) = (_DWORD)operator new(*(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12));
        memset(*(void**)(thisx + 8), 0, *(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12));
    }
    v3 = *(unsigned __int8*)(thisx + 13);
    v16 = v3 * *(unsigned __int8*)(thisx + 12);
    for (i = 0; ; ++i)
    {
        HIWORD(v4) = HIWORD(i);
        if (i >= v16)
            break;
        LOWORD(v3) = v13;
        v3 = sub_481F98((_WORD*)(20 * i + *(_DWORD*)(thisx + 4)), hFile, v3);
    }
    if ((unsigned __int16)v13 < 2u)
    {
        if (!sub_482427((void*)thisx))
            return 0;
    }
    else
    {
        LOWORD(v4) = v13;
        if (!sub_482900((int*)thisx, hFile, v4))
            return 0;
    }
    *(_BYTE*)(thisx + 15) = 0;
    for (i = 0; i < v16; ++i)
    {
        RuntimeOwnsLifetime = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(*(_DWORD*)(thisx + 4) + 20 * i));
        if (RuntimeOwnsLifetime > (int)*(unsigned __int8*)(thisx + 15))
            *(_BYTE*)(thisx + 15) = RuntimeOwnsLifetime;
    }
    return 1;
}
