#include "sub.h" 
LPSTR sub_401762(CHAR* thisx, LPCSTR lpString2)
{
    return lstrcpynA(thisx + 4, lpString2, 11);
}

