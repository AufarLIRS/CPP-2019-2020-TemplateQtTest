#include "int_funcs.h"

int IntFuncs::max(int a, int b)
{
  if (a > b)
    return a;
  return b;
};

int IntFuncs::min(int a, int b)
{
  if (a < b)
    return a;
  return b;
};
