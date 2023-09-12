#include "sub.h" 
char* sub_4631A8(_BYTE* thisx, int a2)
{
    char* result; // eax

    result = &thisx[a2];
    --thisx[a2 + 13092];
    return result;
}

