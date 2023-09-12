#include "sub.h" 
char* sub_4759B0(_BYTE* thisx, char a2, int a3)
{
    char* result; // eax

    result = &thisx[a3];
    thisx[a3 + 13] = a2;
    return result;
}
