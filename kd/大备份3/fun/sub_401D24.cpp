#include "sub.h" 
int __stdcall sub_401D24(_DWORD* thisx, char a2, char a3, int a4)
{
    int result; // eax

    result = sub_401BD0(thisx, a2);
    if (result && a3 >= 0 && a3 <= 1)
        *(_BYTE*)(a3 + result + 2) = a2;
    return result;
}

