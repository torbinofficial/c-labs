#include <stdio.h>
#include <ctype.h>
#include <string.h>

main(){
 char str[80];
 char lt;
 int counter=0, c=0;
 puts("Enter sentense:");
 fgets(str, 81, stdin);
 puts("Enter letter:");
 scanf("%c",&lt);
 puts("\nOutput sentense:");
 for (int i=0; str[i+1]!='\0'; ){
  if((str[i]==str[i+1])&&(str[i]!=lt)){
   i=i+2;
  }
  else
  {
    printf("%c", str[i]);
    i++;
  }
 }
}
