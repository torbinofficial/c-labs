#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
  srand(time(NULL));
  int n,i,i_ins,item,temp;
  char answ;
  printf("Enter a size of array: \n");
  scanf("%i",&n);
  printf("Enter an insert position: \n");
  scanf("%i",&i_ins);
  printf("Enter an insert value: \n");
  scanf("%i",&item);
  int A[n+1];
  printf("Do you want to use random numbers? Y/N \n");
  scanf("%c\n", &answ);
  if (answ=='N')
  {
    printf("Enter array values: \n");
    for (i = 0; i < n; i++)
    {
      scanf("%d",&A[i]);
    }

  }
  else
  {
    for (i = 0; i < n; i++)
    {
    A[i] = rand() % 100;
    }
  }
  printf("Array before: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");
  for (i = n-1; i >= i_ins-1; i--)
  {
    A[i+1]=A[i];
  }
  A[i_ins-1]=item;
  printf("Array after\n");
  for (i = 0; i < n+1; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");
}
