#include "sub.h" 
void sub_47F9D6(int thisx, LPCSTR lpString, int a3)
{
    int iMaxLength; // [esp+4h] [ebp-4h]

    if (lpString)
    {
        sub_47FBA3(thisx);
        iMaxLength = lstrlenA(lpString) + 1;
        if (iMaxLength > 256)
            iMaxLength = 256;
        lstrcpynA((LPSTR)(thisx + 4), lpString, iMaxLength);
        *(_DWORD*)(thisx + 272) = a3;
        *(_BYTE*)(thisx + 264) = 0;
        *(_BYTE*)(thisx + 265) = 0;
        *(_DWORD*)(thisx + 260) = -1;
        *(_DWORD*)(thisx + 268) = *(_DWORD*)(thisx + 272);
        *(_DWORD*)(thisx + 552) = 0;
        sub_47FA81((_DWORD*)thisx);
    }
}
