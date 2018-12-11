#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100], delim[]=" .,!?\n", *words[20], *pw;
    int i;
    printf(" Input  a string : ");
    fgets(sent, sizeof(sent), stdin);
    for (i=0, pw = strtok(sent, delim); pw!=NULL; pw=strtok(NULL, delim), i++)
    {
      words[i] = pw;
    }

    for (i = 0;  words[i]!=NULL; i++)
    {
      if(strcmp(words[i], words[i+1]==0)
      {
        if (i==0)
        {
          printf(" ");
        }
        else
        {
          printf("");
        }
      }
      else
      {
        printf("%s ", words[i]);
      }
    }
    printf("\n");
    return 0;
}
