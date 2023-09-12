#include "sub.h" 
char* sub_4631D0(_BYTE* thisx, int a2)
{
    char* result; // eax

    result = &thisx[a2];
    ++thisx[a2 + 13092];
    return result;
}

