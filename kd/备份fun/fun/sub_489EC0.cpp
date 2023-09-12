#include "sub.h" 
char* sub_489EC0(char* thisx, char a2)
{
    if ((a2 & 2) != 0)
    {
        eh_vector_destructor_iterator(thisx, 0x1B0u, *((_DWORD *)thisx - 1), sub_48A43A);
            if ((a2 & 1) != 0)
                operator delete(thisx - 4);
        return thisx - 4;
    }
    else
    {
        sub_48A43A(thisx);
        if ((a2 & 1) != 0)
            operator delete(thisx);
        return thisx;
    }
}
