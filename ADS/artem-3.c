#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define K1 1000
#define K10 10000
#define K100 100000

int max, i, N, answ_s, answ_hs, j, temp;
double cc=0, ca=0;
float duration, all_time;
void print_array(int *A, int N)
{
  for (i = 0; i < N; i++)
  {
    printf("%d\n", A[i]);
  }
}
void best_array(int *A, int N)
{
 for(i = 0; i < N; i++)
  {
    A[i] = i;
  }
}
void worst_array(int *A, int N)
{
 for(i = 0; i < N; i++)
  {
    A[i] = N-1-i;
  }
}
void avg_array(int *A, int N)
{
  srand(time(NULL));
  for(i = 0; i < N; i++)
    {
      A[i] = rand() % N;
    }
}
void InsertionSort(int *A, int N)
{
    int newElement, location, i;
    for (i = 1; i < N; i++)
    {
        newElement = A[i];
        cc++;
        location = i - 1;
        while((location >= 0) && (A[location] > newElement))
        {
            A[location+1] = A[location];
            location = location - 1;
            cc++;
            ca++;
        }
        ca++;
        A[location+1] = newElement;
        cc++;
    }
}
main()
{
  int i;
  duration=clock();
  int A[K100];
  for(i=0; i<1; i++)
  {
    avg_array(A, K100);
    InsertionSort(A, K100);
  }
  printf("Count of replaces: %.f\n", cc);
  printf("Count of comparions: %.f\n", ca);
  all_time=(clock()-duration)/CLOCKS_PER_SEC;
  printf("Spended time: %f\n", all_time);
}
