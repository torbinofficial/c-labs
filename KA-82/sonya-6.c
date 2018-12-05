
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int  N, i,j, ch,m;
    printf ("Enter dimension of array\n");
    scanf ("%d",&N);
    int Array[N][N];
    srand(time(NULL));
    printf ("use random value? (1/0) ");
    scanf ("%d" , &ch);
    switch ( ch ) {
        case 1:
            for(j=0;j<N; ++j){
            for (i=0;i<N; ++i){
              Array[i][j] = (rand() % 20);
        }
      }
        break;
        case 0:
          printf("Enter parts of array \n");
           for(i=0;i<=N-1; ++i){
            for (j=0;j<=N-1; ++j){
                scanf("%d", &Array[i][j]);
          }
      }
      break;
    default:
            printf( "false data\n" );
            return 0;
      }
  printf("Start array \n");
  for(j=0;j<N; ++j){
        for (i=0;i<N; ++i){
            printf ("%-3d ",Array[i][j]);
      }
      printf ("\n");
  }
  printf("Enter number of roll \n");
  scanf("%d", &m);
  int leftMark = 1;
   int rightMark = N - 1;
   int temp;
   while (leftMark <= rightMark)
   {
  for (int i = rightMark; i >= leftMark; i--)
     if (Array[m][i-1] < Array[m][i]) {
       temp= Array[m][i];
       Array[m][i]=Array[m][(i-1)];
    Array[m][i-1]=temp;}
     leftMark++;

   for (int i = leftMark; i <= rightMark; i++)
     if (Array[m][i-1] < Array[m][i]){
       temp=Array[m][i];
      Array[m][i]=Array[m][i-1];
      Array[m][i-1]=temp;}
     rightMark--;
   }
  printf ("Sorted array \n");
  for(j=0;j<N; ++j){
        for (i=0;i<N; ++i){
            printf ("%-3d ",Array[i][j]);
      }
      printf ("\n");
  }
}
