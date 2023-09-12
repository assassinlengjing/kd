#include "sub.h" 
char* sub_475990(_BYTE* thisx, char a2, int a3)
{
    char* result; // eax

    result = &thisx[a3];
    thisx[a3 + 11] = a2;
    return result;
}

