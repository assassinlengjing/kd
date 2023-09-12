#include "sub.h" 
int sub_48E8B8(int thisx, wchar_t* Source, int a3)
{
    int result; // eax

    wcscpy((wchar_t*)(thisx + 4), Source);
    result = a3;
    *(_DWORD*)(thisx + 88) = a3;
    return result;
}
