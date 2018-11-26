#include <stdio.h>
main()
{
  float a1,a2,b1,b2,c1,c2,x,y;
  printf("%s\n", "Enter first coordinates:  ");
  scanf("%f\n%f\n%f" , &a1, &b1, &c1);
  printf("%s\n", "Enter second coordinates:  ");
  scanf("%f\n%f\n%f" , &a2, &b2, &c2);
  if ((a1==a2) && (b1==b2) && (c1==c2))
  {
    printf("%s", "Point doesn't exsist" );
  }
  else if((a1*b2-a2*b1)!=0)
  {
    x=-(c1*b2-c2*b1)/(a1*b2-a2*b1);
    y=-(a1*c2-a2*c1)/(a1*b2-a2*b1);
      printf("х: %g\nу: %g\n",x,y );
  }
  else
  {
    printf("%s", "Point doesn't exsist" );
  }
  return (0);
}
