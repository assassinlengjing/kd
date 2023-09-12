#include "sub.h" 
int sub_482A1B(int thisx, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
    int result; // eax

    result = a2;
    if (a2 < (int)*(unsigned __int8*)(thisx + 12))
    {
        result = a3;
        if (a3 < (int)*(unsigned __int8*)(thisx + 13))
        {
            result = *(unsigned __int8*)(thisx + 12) * a3 + a2;
            *(_BYTE*)(*(_DWORD*)(thisx + 8) + result) = a4;
        }
    }
    return result;
}
