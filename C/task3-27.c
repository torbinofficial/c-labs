#include <stdio.h>
#include <math.h>

main()
{
  float eps,s1,s2,a,x,i,k;
  while ((eps<=0) || (eps>=1))
  {
    scanf("%f\n", &eps);
  }
  s1=0;x=1;
  while (x<=5)
  {
    a=-x/2;k=1;s2=0;
    while ((fabs(a)>eps) && (k<100))
    {
      s2=s2+a;
      a=a*(-x/(k+2));
      k++;
    }
    printf("%g\n %1.f\n", s2,k);
    s1=s1+s2;
    x++;
  }
  printf("%g\n",s1);
}
