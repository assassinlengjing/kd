#include "sub.h" 
char* sub_47EC10(_BYTE* thisx, int a2, char a3)
{
    char* result; // eax

    result = &thisx[a2];
    thisx[a2 + 32] = a3;
    return result;
}
