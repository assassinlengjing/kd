#include "sub.h" 
void* sub_466901(_DWORD* thisx)
{
    unsigned __int8 v1; // al
    void* result; // eax
    unsigned __int8 v3; // al
    int v5; // [esp+4h] [ebp-8h]
    signed int i; // [esp+8h] [ebp-4h]
    signed int j; // [esp+8h] [ebp-4h]
    int k; // [esp+8h] [ebp-4h]
    signed int m; // [esp+8h] [ebp-4h]

    for (i = 0; i < (int)dword_4B93A0; ++i)
        streambuf::unbuffered((streambuf*)((char*)dword_4B93A4 + 24 * i), 0);
    for (j = 0; j < (int)Size; ++j)
    {
        v1 = sub_401710((_BYTE*)(36 * j + dword_4B92E0));
        streambuf::unbuffered((streambuf*)((char*)dword_4B93A4 + 24 * v1), 1);
    }
    result = thisx;
    if (!thisx[29])
    {
        for (k = 0; k < 2; ++k)
        {
            v3 = sub_426550((char*) & thisx[19 * k + 2954]);
            streambuf::unbuffered((streambuf*)((char*)dword_4B93A4 + 24 * v3), 1);
        }
    }
    v5 = 0;
    for (m = 0; m < (int)dword_4B93A0; ++m)
    {
        result = (void*)unknown_libname_17((_DWORD*)(char*)dword_4B93A4 + 24 * m);
        if (result)
        {
            LOWORD(result) = v5;
            *((_WORD*)Src + m) = v5++;
        }
        else
        {
            result = (void*)Src;
            *((_WORD*)Src + m) = -1;
        }
    }
    return result;
}

