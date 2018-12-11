/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
main()
{
  int i,j,c=0,f,N=12,M=40,i_start;
  char A[N][M];
  printf("Enter row to start\n");
  scanf("%d", &i_start);
  if ((i_start)%2==0)
  {
  for (i = i_start-1; i >= 0; i--)
  {
    f=i;
    if (f%2==1)
    {
      for (j = 0; j < M; j++)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(0.5);
      }
    }
    else
    {
      for (j = M-1; j >= 0; j--)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
  }
  for (i = i_start; i < N; i++)
  {
    f=i;
    if (f%2==0)
    {
      for (j = 0; j < M; j++)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
    else
    {
      for (j = M-1; j >= 0; j--)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
  }
  }
  else
  {
  for (i = i_start-1; i >= 0; i--)
  {
    f=i;
    if (f%2==0)
    {
      for (j = 0; j < M; j++)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
    else
    {
      for (j = M-1; j >= 0; j--)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
  }
  for (i = i_start; i < N; i++)
  {
    f=i;
    if (f%2==1)
    {
      for (j = 0; j < M; j++)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
    else
    {
      for (j = M-1; j >= 0; j--)
      {
        A[i][j]='O';
        printf("%c\n", A[i][j]);
        sleep(1);
      }
    }
  }
  }
  */
/*  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }*/
}
#include<stdio.h>
#include<unistd.h>

COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main()
{
    int n,m;
    int i=0,j,k=0;
    scanf("%d",&n);
    scanf("%d",&m);
    if ((i_start)%2==0)
    {
    for (i = i_start-1; i >= 0; i--)
    {
      f=i;
      if (f%2==1)
      {
        for (j = 0; j < M; j++)
        {
          gotoxy(i,j+1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i-1,j);
      }
      else
      {
        for (j = M-1; j >= 0; j--)
        {
          gotoxy(i,j-1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i-1,j);

      }
    }
    for (i = i_start; i < N; i++)
    {
      f=i;
      if (f%2==0)
      {
        for (j = 0; j < M; j++)
        {
          gotoxy(i,j+1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i+1,j);
      }
      else
      {
        for (j = M-1; j >= 0; j--)
        {
          gotoxy(i,j-1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i+1,j);
      }
    }
    }
    else
    {
    for (i = i_start-1; i >= 0; i--)
    {
      f=i;
      if (f%2==0)
      {
        for (j = 0; j < M; j++)
        {
          gotoxy(i,j+1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i-1,j);
      }
      else
      {
        for (j = M-1; j >= 0; j--)
        {
          gotoxy(i,j-1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i-1,j);
      }
    }
    for (i = i_start; i < N; i++)
    {
      f=i;
      if (f%2==1)
      {
        for (j = 0; j < M; j++)
        {
          gotoxy(i,j+1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i+1,j);
      }
      else
      {
        for (j = M-1; j >= 0; j--)
        {
          gotoxy(i,j-1);
          printf("O");
          _sleep(10);
        }
        gotoxy(i+1,j);
      }
    }
    }

}
