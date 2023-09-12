#include "sub.h" 
char* sub_47EC30(char* thisx, char a2)
{
    if ((a2 & 2) != 0)
    {
        eh_vector_destructor_iterator(thisx, 0x24u, *((_DWORD *)thisx - 1), sub_40174E);
            if ((a2 & 1) != 0)
                operator delete(thisx - 4);
        return thisx - 4;
    }
    else
    {
        sub_40174E(thisx);
        if ((a2 & 1) != 0)
            operator delete(thisx);
        return thisx;
    }
}
