#include <stdio.h>
#include <stdlib.h>
typedef struct list{
  char *title ;
  int amount_of_students;
  struct list * next;
} linked_list;
main()
{
  linked_list group;
  int N;
  group.title = (char *)malloc(6);
  if (group.title)
  {
    printf("Hoorray!");
  }
  printf("Please, enter amount or groups: \n");
  scanf("%d", &N);
  for (int i = 0;i < N; i++)
  {
    printf("Enter name of group:\n");
    //gets(temp);
    printf("Enter amount of students:\n");
    scanf("%d", &group.amount_of_students);
   }
}
