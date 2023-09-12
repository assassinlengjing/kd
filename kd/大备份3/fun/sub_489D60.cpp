#include "sub.h" 
char* sub_489D60(char* thisx, char a2)
{
    if ((a2 & 2) != 0)
    {
        eh_vector_destructor_iterator(thisx, 8u, *((_DWORD *)thisx - 1), sub_4892EE);
            if ((a2 & 1) != 0)
                operator delete(thisx - 4);
        return thisx - 4;
    }
    else
    {
        sub_4892EE(thisx);
        if ((a2 & 1) != 0)
            operator delete(thisx);
        return thisx;
    }
}
