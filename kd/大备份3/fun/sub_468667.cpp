#include "sub.h" 
int sub_468667(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 104) != 2)
        return sub_4685D3((void*)thisx, (wchar_t*)&unk_4B3450, 120);
    unk_4B9974 = 1;
    *(_DWORD*)(thisx + 108) = 11;
    *(_BYTE*)(thisx + 2516) = 2;
    return result;
}
