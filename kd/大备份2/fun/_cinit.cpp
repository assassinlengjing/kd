#include "sub.h"
void _cinit()
{
  if ( off_4B82B8 )
    off_4B82B8();
  _initterm((void**)&First, (void**)&Last);
  _initterm((void**)&dword_4B0000, (void**)&dword_4B001C);
}