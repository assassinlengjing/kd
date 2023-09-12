#include "sub.h"
int sub_401531(_DWORD* thisx, LPCSTR lpFileName, int a3)
{
    if (!sub_49DA45((_DWORD*)byte_4BDC60, lpFileName, a3))
        return 0;
    thisx[5] = *(_DWORD*)a3;
    return 1;
}