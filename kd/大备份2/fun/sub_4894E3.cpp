#include "sub.h" 
int sub_4894E3(_DWORD* thisx, int a2)
{
    if (!thisx[88])
        return -1;
    if (a2 >= 0 && a2 < thisx[88])
        return unknown_libname_26(12 * a2 + (_DWORD*)thisx[87]);
    return -1;
}
