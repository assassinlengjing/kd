#include "sub.h" 
BOOL __fastcall sub_484175(int a1)
{
    BOOL result; // eax
    int v2; // [esp+4h] [ebp-1Ch]
    DWORD NumberOfBytesWritten; // [esp+8h] [ebp-18h] BYREF
    unsigned int Buffer; // [esp+Ch] [ebp-14h] BYREF
    int j; // [esp+10h] [ebp-10h]
    _DWORD* v6; // [esp+14h] [ebp-Ch]
    int v7; // [esp+18h] [ebp-8h]
    int i; // [esp+1Ch] [ebp-4h]

    v2 = a1;
    result = a1;
    if (*(_DWORD*)(a1 + 4))
    {
        LOBYTE(v7) = unk_4B9986;
        for (i = 0; i < (unsigned __int8)v7; ++i)
        {
            LOBYTE(a1) = i;
            sub_483927(v2 + 276 * i + 12, v2, *(HANDLE*)(v2 + 4), a1, 1);
        }
        SetFilePointer(*(HANDLE*)(v2 + 4), *(_DWORD*)(v2 + 8), 0, 0);
        for (i = 0; i < (unsigned __int8)v7; ++i)
        {
            v6 = (_DWORD*)(v2 + 276 * i + 12);
            for (j = 0; j < 5; ++j)
            {
                Buffer = 0;
                if (j)
                    Buffer = sub_485180(v6, j - 1);
                else
                    Buffer = unknown_libname_22(v6);
                Buffer = Buffer + 16 - Buffer % 0x10;
                WriteFile(*(HANDLE*)(v2 + 4), &Buffer, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
            }
        }
        result = CloseHandle(*(HANDLE*)(v2 + 4));
        *(_DWORD*)(v2 + 4) = 0;
    }
    return result;
}
