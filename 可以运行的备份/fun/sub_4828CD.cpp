#include "sub.h" 
int sub_4828CD(int thisx, int a2)
{
    if (a2 >= 0 && *(unsigned __int16*)(thisx + 20) > a2)
        return 56 * a2 + *(_DWORD*)(thisx + 16);
    else
        return 0;
}
