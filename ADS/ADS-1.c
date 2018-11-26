#include <stdio.h>
#include <stdlib.h>
#define N 10
int best_array(int a[], int n){
	int i;
	for(int i=0; i<n; i++) a[i] = i;
  printf("Stack array addr = %p, %p, %p\n", a, &a, &(a[9]));
	return i;
}
int main()
{
  int a[N];
  int *a_h = (int *) malloc (N * sizeof(int));
  if(!a_h) exit(1);
  printf("Stack array addr = %p, %p, %p\n", a, &a, &(a[9]));
  printf("Heap array addr = %p, %p\n", a_h, &a_h);
  best_array(a, N);
  free(a_h);
  return 0;
}
