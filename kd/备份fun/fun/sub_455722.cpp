#include "sub.h" 
int sub_455722(int thisx, unsigned __int8 a2, int a3)
{
    int result; // eax

    result = a2;
    if (a2 < (int)*(unsigned __int8*)(thisx + 11364))
    {
        result = a2;
        *(_DWORD*)(*(_DWORD*)(thisx + 11368) + 4 * a2) = a3;
    }
    return result;
}

