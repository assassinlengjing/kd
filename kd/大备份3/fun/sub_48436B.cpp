#include "sub.h" 
int sub_48436B(_DWORD* thisx, int a2, size_t Size)
{
    if (a2 < 0 || a2 > 4)
        return 0;
    if (a2)
    {
        thisx[a2 + 61] = (_DWORD)operator new(Size);
        if (!thisx[a2 + 61])
            return 0;
        thisx[a2 + 1] = Size;
    }
    else
    {
        thisx[57] = (_DWORD)operator new(2 * Size);
        if (!thisx[57])
            return 0;
        thisx[1] = Size;
    }
    return 1;
}

