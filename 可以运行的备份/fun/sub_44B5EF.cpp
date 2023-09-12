#include "sub.h" 
int sub_44B5EF(_DWORD* thisx, int a2)
{
    int result; // eax

    thisx[26] = 12;
    thisx[630] = 0;
    result = a2;
    thisx[631] = a2;
    if (dword_4B9978)
    {
        if (!dword_4B9974)
            return sub_484175((_DWORD)thisx + 3350);
    }
    return result;
}

