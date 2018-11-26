#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F(float x)
{
return (3*(x/2)*(x*x+4)-2*asinh(x/2));
}

main()
{
  printf("Result is %lf\n", (F(3)-F(0)));
}
