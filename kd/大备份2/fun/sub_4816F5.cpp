#include "sub.h" 
int sub_4816F5(int thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    if (*(unsigned __int8*)(thisx + 12) > (int)a2 && *(unsigned __int8*)(thisx + 13) > (int)a3)
        return *(_DWORD*)(thisx + 4) + 20 * (*(unsigned __int8*)(thisx + 12) * a3 + a2);
    else
        return 0;
}

