#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100], out[100], delim[]=" .,!?\n", *words[20], *pw, *pw1;
    int i;
    printf("Input a string:\n");
    fgets(sent, sizeof(sent), stdin);
    pw = strtok(sent, delim);
    for (i=0;pw!=NULL; pw=strtok(NULL, delim), i++)
    {
      words[i]=pw;
    }
    for (i = 0;  words[i]!=NULL; i++)
    {
      if(strcmp(words[i], words[i+1])==0)
      {
        strcat(out, words[i]);
      }
    }

    puts(out);
    return 0;
}
