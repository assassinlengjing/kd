#include "sub.h"
_BYTE *_wincmdln()
{
  _BYTE *v0; // esi
  unsigned __int8 v1; // al

  if ( !dword_4CC7C8 )
    __initmbctable();
  v0 = (_BYTE *)dword_4CC7D4;
  if ( *(_BYTE *)dword_4CC7D4 != 34 )
  {
    if ( *(_BYTE *)dword_4CC7D4 > 0x20u )
    {
      do
        ++v0;
      while ( *v0 > 0x20u );
    }
    goto LABEL_12;
  }
  while ( 1 )
  {
    v1 = *++v0;
    if ( v1 == 34 || !v1 )
      break;
    if ( _ismbblead(v1) )
      ++v0;
  }
  if ( *v0 != 34 )
    goto LABEL_12;
  do
  {
    ++v0;
LABEL_12:
    ;
  }
  while ( *v0 && *v0 <= 0x20u );
  return v0;
}