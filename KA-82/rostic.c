#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000000
#define R 100
#define RAND(R) rand()%R

int best_array(int a[], int n);
int avg_array(int a[], int n);
int worst_array(int a[], int n);
int printf_array(int a[], int n);
int b[N];
long int cc=0,ca=0;

void swap(int* a, int* b);

void counting(int a[],int b[],int dim, int range);

int main(){
	int array[N],l=0,r=N-1;
	avg_array(array,N);
//	printf_array(array,N);
	counting(array,b,N,100);
		printf("compare = %ld\n", cc);
		printf("assign = %ld\n", ca);
  		cc=ca=0;
//	printf_array(b,N);

	return 0;
}

int best_array(int a[], int n){
	int i;
	for(i=0; i<n; i++) a[i] = i;
	return i;
}

int avg_array(int a[], int n){
	int i;
	srand(n); 				// srand(13);
	for(i = 0; i < n; i++) a[i] = RAND(R);
	return i;
}

int worst_array(int a[], int n){
	int i;
	for(i=0; i<n; i++) a[i] = n - 1 - i;
	return i;
}

int printf_array(int a[], int n){
	int i;
	for(i = 0; i < n; i++) printf("%d\t",a[i]);
	printf("\n\n");
	return i;
}

void swap(int* a, int* b)
{
    int t;
	t = *a;
    *a = *b;
    *b = t;
}

void counting(int a[],int b[],int dim, int range)
{
	int h/*helping array*/[range],i,j;
	for(i=0;i<range;i++)  {h[i]=0;ca++;cc++;}
	for(j=0;j<dim;j++)  {h[ a[j] ]++;ca++;cc++;}
	for(i=1;i<range;i++)  {h[i]+=h[i-1];ca++;cc++;}
	for(j=dim-1;j>=0;j--) {{b[ --h[ a[j]]]=a[j];}ca++;cc++;}
}

void radix(int a[],int number_of_digits,int dim)
{
	int i;
	for(i=0;i<number_of_digits;i++) counting(a,b,dim,pow(10,number_of_digits));
}
