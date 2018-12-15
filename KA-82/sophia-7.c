#include <stdio.h>
#include <math.h>
float exp_man(int pw);
int factorial(int i);
void table_print(float a, int b);
int main()
{
  int answ, start, end, step;
  printf("Enter starting power of exp \n");
  scanf("%d", &start);
  printf("Enter ending power of exp \n");
  scanf("%d", &end);
  printf("Enter step to count\n");
  scanf("%d", &step);
  printf("Do you want to use manual exp or system exp? (1/0)\n");
  scanf("%d", &answ);
  for (int i = start; i <= end; i+=step)
  {
    if (answ==1)
    {
      table_print(exp_man(i), i);
    }
    else if (answ==0)
    {
      table_print(exp(i), i);
    }
  }
}
float exp_man(int pw)
{
  float res=0;
  int i;
  for (i = 0; pow(pw, i+1)/(factorial(i+1))>=0.001; i++)
  {
    res+=(pow(pw, i)/(factorial(i)));
  }
  return res;
}
int factorial(int n)
{
  int fact=1;
  for(int j = 1; j <= n; j++)
  {
    fact*=j;
  }
  return fact;
}
void table_print(float a, int b)
{
  printf("-----------------------\n");
  printf("|%-15.3f | %3d|\n", a, b);
}
