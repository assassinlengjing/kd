#include "sub.h" 
void sub_47FADE(int thisx, LPCSTR lpString)
{
    int iMaxLength; // [esp+4h] [ebp-8h]
    int v4; // [esp+8h] [ebp-4h]

    if (lpString)
    {
        v4 = lstrlenA((LPCSTR)(thisx + 4));
        if (v4)
        {
            iMaxLength = v4 + lstrlenA(lpString) + 1;
            if (iMaxLength > 256)
                iMaxLength = 256;
            lstrcpynA((LPSTR)(thisx + v4 + 4), lpString, iMaxLength - v4);
            if (v4 == *(_DWORD*)(thisx + 260))
                *(_DWORD*)(thisx + 260) = v4 - 1;
            *(_DWORD*)(thisx + 268) = *(_DWORD*)(thisx + 272);
            *(_DWORD*)(thisx + 552) = 0;
        }
        else
        {
            sub_47F9D6(thisx, lpString, 4);
        }
    }
}
