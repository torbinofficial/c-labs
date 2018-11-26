#include <stdio.h>
//#ifndef MAX(a,b)
#define  MAX(a,b) (a>b)?a:b;
//#endif

main()
{
  int x=0, y=0, z;
  z = MAX(++x, y--);
  printf("%d\n", z);
}
