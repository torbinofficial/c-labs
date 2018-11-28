#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double result(int a, int b)
{
  printf("%lf\n", ((sqrt(4+b*b)-sqrt(4+a*a))*(b-a)/2 + (b-a)*sqrt(4+a*a)));
}
main()
{
  result(0,3);
}
