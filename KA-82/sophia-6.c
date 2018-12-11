#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100], res[100]="Result is :", delim[]=" .,!?\n", *words[20], *pw;
    int i;
    printf("Input a string:");
    fgets(sent, sizeof(sent), stdin);
    for (i=0, pw = strtok(sent, delim); pw!=NULL; pw=strtok(NULL, delim), i++)
    {
      if(strlen(pw)>3)
      {
        strcat(res, pw);
        strcat(res, " ");
      }
    }
    puts(res);
    return 0;
}
