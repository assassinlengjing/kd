//#include "sub.h"???
//wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
//{
//  const wchar_t *v2; // ecx
//  wchar_t *result; // eax
//  wchar_t v4; // dx
//  wchar_t *v5; // esi
//
//  v2 = Source;
//  result = Destination;
//  v4 = *Source;
//  v5 = Destination + 1;
//  *Destination = *Source;
//  while ( 1 )
//  {
//    ++v2;
//    if ( !v4 )
//      break;
//    v4 = *v2;
//    *v5++ = *v2;
//  }
//  return result;
//}