#include <stdio.h>
#include <math.h>
main()
{
  int n,i,j,max=0,j_max,i_max;
  char answ;
  printf("Please, enter a size of matrix\n");
  scanf("%d",&n);
  int A[n][n];
  printf("Do you want to use random numbers? Y/N \n");
  scanf("%c\n", &answ);
  if (answ=='N')
  {
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        scanf("%d", &A[i][j]);
        if (fabs(A[i][j])>max)
        {
          max=A[i][j];
          j_max=j;
          i_max=i;
        }
      }
    }
  }
  else
  {
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        A[i][j]=rand() % 100;
        if (fabs(A[i][j])>max)
        {
          max=A[i][j];
          j_max=j;
          i_max=i;
        }
      }
    }
  }
  printf("\n");
  printf("Matrix before: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Matrix after: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if ((i_max!=i) && (j_max!=j))
      {
        printf("%d ",A[i][j]);
      }
    }
    printf("\n");
  }
}
