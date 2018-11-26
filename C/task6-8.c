#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
  int i, j, start, end, len;
  char sent[100], word[10], temp;
  printf("Please, enter a sentence\n ");
  fgets(sent, 101, stdin);
  printf("Please, enter a word to delete\n");
  fgets(word, 11 , stdin);
  len = strlen(word);
  for (i = 0; sent[i] != '\0';i++)
  {
    start=i;
    end=i;
    while ((toupper(sent[i])==toupper(word[j])) && (word[j]!='\0'))
    {
      end++;
      i++;
      j++;
    }
    if ((end-start)==(len-1))
    {
      sent[start]=toupper(sent[start]);
      putchar(sent[start]);
    }
    else
    {
      putchar(sent[start]);
    }
    j=0;
    i=start;
  }
  printf("\n");
}
