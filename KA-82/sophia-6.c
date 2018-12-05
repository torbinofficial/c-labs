#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
  int i, j, k=0;
  char *words[20], sent[200], *pw, *t, delim[]=" .,?!";
  printf("Enter sentence:\n");
  fgets(sent,200,stdin);
  for (pw = strtok(sent, delim),i = 0; pw!=NULL; i++)
  {
    words[i]=pw;
    k++;
    pw = strtok(NULL, delim);
  }
  for (i = 0; i < k-1 ; i++)
  {
    for (j = k-1; j > i; j--)
    {
      if (strcmp(words[i], words[i+1])>0)
      {
        t=words[j];
        words[j]=words[j-1];
        words[j-1]=t;
      }
    }
  }
  for (i = 0; words[i]!=NULL; i++)
  {
    printf("%s ", words[i]);
  }
//  printf("%d\n", k);
}
