#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main()
 {
  char sent1[100], sent2[100];
  int i=0, j=0;
  fgets(sent1, 100, stdin);
  fgets(sent2 , 100, stdin);
  for (i = 0; sent1[i]!='\0'; i++)
  {
    if (sent1[i]!='$')
    {
      putchar(sent1[i]);
    }
    else
    {
      while(sent2[j]!=' ' && sent2[j]!='\0')
      {
        putchar(sent2[j]);
        j++;
      }
      j++;
    }
  }
}
