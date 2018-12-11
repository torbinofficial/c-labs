#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main ()
{
char text[100], word[30];
printf("Vvedit vashy frazy:\n");
fgets(text,100,stdin);
printf("Vvedit slovo yake treba zaminutu:\n");
fgets(word,100,stdin);
char *pw, rt[100], delim[]=" ,!.:;?";
pw=strtok(text, delim);
while (pw != NULL)
  {
	  if (strcmp(pw, word)!=0)
    {
		    printf("%s", pw);
    }
    pw=strtok(NULL, delim);
  }
}
