#include "sub.h" 
LPSTR sub_47FE10(void** thisx, LPCSTR lpString)
{
    int v4; // [esp+Ch] [ebp-4h]

    if (*thisx)
        operator delete(*thisx);
    v4 = lstrlenA(lpString);
    *thisx = operator new(v4 + 1);
    return lstrcpyA((LPSTR)*thisx, lpString);
}

