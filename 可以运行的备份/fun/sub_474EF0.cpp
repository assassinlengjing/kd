#include "sub.h" 
char* sub_474EF0(_BYTE* thisx, int a2, char a3)
{
    char* result; // eax

    result = &thisx[a2];
    thisx[a2 + 520] = a3;
    return result;
}
