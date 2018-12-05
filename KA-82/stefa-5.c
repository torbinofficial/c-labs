#include <stdio.h>
#include <stdlib.h>

main()
{
  int i,j,k,N,M,temp;
  printf("Enter count of columns:\n");
  scanf("%d", &N);
  printf("Enter count of rows\n");
  scanf("%d", &M);
  int A[N][M],S[M],I[M];
  printf("Matrix before\n");
  for (j = 0; j < M; j++)
  {
    S[j]=0;
    for (i = 0; i < N; i++)
    {
      A[i][j]=rand() % 30;
      printf("%d ", A[i][j]);
      S[j]+=A[i][j];
    }
    printf("\n");
  }
 /*for (i = 2; i < M; i++)
  {
    for (k = 0; k < N; k++)
    {
    if (A[M][i] > A[M][i-1])
      {
        for(j = i-1; A[k][j] > A[k][0]; j--)
        {
          A[k][j+1]=A[k][j];
        }
        A[k][j+1]=A[k][0];
      }
    }
  }*/
  printf("Matrix after\n");
  for (j = 0; j < M; j++)
  {
    for (i = 0; i < N+1; i++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < M; i++)
  {
    printf("%d ", S[i]);
  }
}
