#include "sub.h" 
char sub_482A7E(int thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    if (a2 < (int)*(unsigned __int8*)(thisx + 12) && a3 < (int)*(unsigned __int8*)(thisx + 13))
        return *(_BYTE*)(*(_DWORD*)(thisx + 8) + *(unsigned __int8*)(thisx + 12) * a3 + a2);
    else
        return 0;
}
