#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100], out[100]=" ", delim[]=" .,!?\n", *words[20], *pw;
    int i;
    printf("Input a string:\n");
    gets(sent);
//    fgets(sent, sizeof(sent), stdin);
    for (i=0, pw = strtok(sent, delim); pw!=NULL; pw=strtok(NULL, delim), i++)
    {
      strcat(out, pw);
      strcat(out, " ");
    }
    printf("%s\n", out);
    return 0;
}
