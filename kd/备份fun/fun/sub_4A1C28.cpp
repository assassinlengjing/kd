#include "sub.h" 
int sub_4A1C28(_DWORD* thisx, void* a2, int a3, int a4, int a5)
{
    if ((unsigned int)(a4 * a3 + thisx[337]) > thisx[338])
        return 0;
    memcpy(a2, (const void*)(thisx[337] + thisx[15]), a4 * a3);
    if (a5)
        thisx[337] += a4 * a3;
    return 1;
}
