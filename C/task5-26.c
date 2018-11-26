#include <stdio.h>
#include <stdlib.h>

int i, j, N, c, L, k;
void BUBBLE (int *B)
{
  int temp;
  for (int k = N-2; k>=0; k--)
  {
    for (i = 0; i < k; i++)
    {
      if (B[i]>B[i+1])
      {
        temp=B[i+1];
        B[i+1]=B[i];
        B[i]=temp;
      }
    }
  }
}

main()
{
  printf("Please, input a dimention of array\n");
  scanf("%d", &N);
  int A[N], B[N], I[N];
  printf("Please, input a number to sort\n");
  scanf("%d", &c);
  for (i = 0, j=0; i < N; i++)
  {
    A[i]=rand() % 100;
    if (A[i]>c)
    {
      B[j]=A[i];
      I[j]=i;
      j++;
    }
  }
  printf("Array before\n");
  for (i = 0; i < N; i++)
  {
    printf("%d ", A[i]);
  }
  BUBBLE(B);
  j=0;
  for (i = 0; i < N; i++)
  {
    if(i==I[j])
    {
      A[i]=B[j];
      j++;
    }
  }
  printf("\n");
  printf("Array after\n");
  for (i = 0; i < N; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");
}
