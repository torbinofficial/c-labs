#include<math.h>
#include<stdio.h>
#define N 10

int main()
{
int i,k,t,R,L;
int A[N];
printf("Vvestu chusla\n");
for(i=0;i<N;i++)
scanf("%d",&A[i]);

L=0;
R=N-1;
k=0;
while(L<R)
{
	i=L;
	while(i<R)
		{
		if(A[i]>A[i+1])
			{
			t=A[i];
			A[i]=A[i+1];
			A[i+1]=t;
			k=i;
			}
		i++;
		}
	R=k;
	i=R-1;
	R=k;
	i=R-1;
		while(i>=L)
		{
			if(A[i]>A[i++])
			{
			t=A[i];
			A[i]=A[i++];
			A[i++]=t;
			k=i;
			}
		i--;
		}
L=k++;
}
for (i = 0; i < N; i++)
printf("%d ",A[i]);
}
