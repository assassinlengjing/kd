#include "sub.h" 
int* sub_49951D(int* thisx)
{
    int* result; // eax

    thisx[30] /= thisx[33];
    thisx[31] /= thisx[34];
    thisx[32] /= thisx[35];
    thisx[36] /= thisx[33];
    thisx[37] /= thisx[34];
    thisx[38] /= thisx[35];
    result = thisx;
    thisx[35] = 1;
    thisx[34] = 1;
    thisx[33] = 1;
    return result;
}


