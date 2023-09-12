#include "sub.h"
void _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v2; // esi
  const char *i; // edi
  size_t v4; // eax
  size_t v5; // ebp
  char *v6; // eax

  if ( !unk_4CC7C8 )
    __initmbctable();
  v0 = Block;
  v1 = 0;
  while ( *v0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v2 = (char **)malloc(4 * v1 + 4);
  unk_4CB294 = (int)v2;
  if ( !v2 )
    _amsg_exit(9u);
  for ( i = Block; *i; i += v5 )
  {
    v4 = strlen(i);
    v5 = v4 + 1;
    if ( *i != 61 )
    {
      v6 = (char *)malloc(v4 + 1);
      *v2 = v6;
      if ( !v6 )
        _amsg_exit(9u);
      strcpy(*v2++, i);
    }
  }
  free(Block);
  Block = 0;
  *v2 = 0;
  unk_4CC7C4 = 1;
}