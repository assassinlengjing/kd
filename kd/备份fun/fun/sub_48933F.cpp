#include "sub.h" 
int sub_48933F(int thisx, int a2, LPCSTR lpString)
{
    int v5; // [esp+8h] [ebp-4h]

    if (!lpString)
        return 0;
    sub_489301((void**)thisx);
    *(_DWORD*)thisx = a2;
    v5 = lstrlenA(lpString);
    *(_DWORD*)(thisx + 4) = (_DWORD)operator new(v5 + 1);
    if (*(_DWORD*)(thisx + 4))
    {
        lstrcpyA(*(LPSTR*)(thisx + 4), lpString);
        return 1;
    }
    else
    {
        *(_DWORD*)thisx = -1;
        return 0;
    }
}
