#include "sub.h"
double  _startOneArgErrorHandling(
        int a1,
        int a2,
        int a3,
        double a4,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  int v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1;
  v10 = a4;
  v9[1] = a3;
  v9[2] = a7;
  v9[3] = a8;
  _87except(a2, (int)v9, (unsigned __int16 *)&a5);
  return v10;
}