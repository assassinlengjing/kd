#include "sub.h" 
int sub_43FB7E(int* thisx, LPSTR pszFileName, int a3)
{
    char* v5; // [esp+4h] [ebp-4h]

    if (!sub_4410E0(thisx))
        return -1;
    if (a3 == -1)
        a3 = thisx[34];
    if (a3 > thisx[34] || a3 < -1)
        return -1;
    v5 = sub_440E6C(thisx, a3, 1);
    if (!v5)
        return -1;
    if (!sub_43FC33((_DWORD*)v5, pszFileName, *thisx))
        return -1;
    ++thisx[34];
    return a3;
}

