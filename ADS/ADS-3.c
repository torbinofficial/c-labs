#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define S 100000

int max,i,N,answ_s,answ_hs,j,temp;
double cc=0,ca=0;
float duration, all_time;
void print_array(int *A, int N);
void best_array(int *A, int N);
void worst_array(int *A, int N);
void avg_array(int *A, int N);
void BUBBLE(int *A, int N);
void MAX_HEAPIFY(int *A, int i, int N);
void BUILD_MAX_HEAP (int *A, int N);
void HEAPSORT(int *A, int N);
void COUNTINGSORT (int*A, int N, int k);

main()
{
  duration=clock();
  int A[S];
 for(int k=0; k<1000;k++)
  {
    avg_array(A, S);
    BUBBLE(A, S);
  }
  printf("Count of replaces: %.f\n", ca);
  printf("Count of comparatons: %.f\n", cc);
  all_time=(clock()-duration)/CLOCKS_PER_SEC;
  printf("Time: %f\n", all_time);
}
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
void BUBBLE(int *A, int N)
{
  for (int k = N-1; k>=0; k--)
  {
    for (i = 0; i < k; i++)
    {
      if (A[i]>A[i+1])
      {
        temp=A[i+1];
        A[i+1]=A[i];
        A[i]=temp;
        ca+=3;
      }
      cc++;
    }
  }
}
void MAX_HEAPIFY(int *A, int i, int N)
{
  int temp,left,right,largest;
  left=2*(i+1)-1;
  right=2*(i+1);
  if (left < N && A[left] > A[i])
  {
    largest=left;
  }
  else
  {
    largest=i;
  }
  cc++;
  if (right < N && A[right] > A[largest])
  {
    largest=right;
  }
  cc++;
  if (largest!=i)
  {
    temp=A[i];
    A[i]=A[largest];
    A[largest]=temp;
    ca+=3;
    MAX_HEAPIFY(A, largest, N);
  }
}
void BUILD_MAX_HEAP (int *A, int N)
{
  for (i = N/2; i >= 0; i--)
  {
    MAX_HEAPIFY(A, i, N);
  }
}
void HEAPSORT(int *A, int N)
{
  int heap_size = N;
  BUILD_MAX_HEAP(A, N);
  for (i = N-1; i > 0; i--)
  {
    temp=A[0];
    A[0]=A[i];
    A[i]=temp;
    ca=ca+3;
    MAX_HEAPIFY(A, 0, --heap_size);
  }
}
void COUNTINGSORT (int*A, int N, int k)
{
  int B[N], C[k];
  for (i = 0; i < k; i++ )
  {
    C[i]=0;
  }
  for (i = 0; i < N; i++)
  {
    C[A[i]]++;
  }
  for (i = 1; i < k; i++)
  {
    C[i]+=C[i-1];
  }
  for (j = N-1; j >=0; j--)
  {
    B[C[A[j]]-1]=A[j];
    C[A[j]]--;
    ca++;
  }
}
