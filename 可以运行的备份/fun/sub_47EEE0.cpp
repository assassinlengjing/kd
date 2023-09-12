#include "sub.h" 
int sub_47EEE0(char* thisx, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char* v7; // edx
    int result; // eax

    v7 = &thisx[32 * a6 + 68 + 16 * a7];
    *(_DWORD*)v7 = a2;
    *((_DWORD*)v7 + 1) = a3;
    *((_DWORD*)v7 + 2) = a4;
    result = a5;
    *((_DWORD*)v7 + 3) = a5;
    return result;
}
