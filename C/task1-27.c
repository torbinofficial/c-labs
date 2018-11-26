#include <stdio.h>
void main()
{
  int N, summ=0;
  scanf("%i", &N);
  while (N>0)
  {
    summ+=(N%10);
    N=N/10;
  }
  printf("%i\n", summ);
}
