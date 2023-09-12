#include "sub.h"
type_info * vector_deleting_destructor2(type_info *thisx, unsigned int a2)
{
  if ( (a2 & 2) != 0 )
  {
    eh_vector_destructor_iterator(thisx, 0xCu, *((_DWORD *)thisx - 1), sub_48F666);
    if ( (a2 & 1) != 0 )
      operator delete((char *)thisx - 4);
    return (type_info *)((char *)thisx - 4);
  }
  else
  {
    sub_48F666(thisx);
    if ( (a2 & 1) != 0 )
      operator delete(thisx);
    return thisx;
  }
}