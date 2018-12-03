#include <stdio.h>

typedef struct list{
  char title[10] ;
  int amount_of_students;
  struct list * next;
} linked_list;
main()
{
  linked_list group;
  int N;
  printf("Please, enter amount or groups: \n");
  scanf("%d", &N);
  for (int i = 0;i < N; i++)
  {
    printf("Enter name of group:\n");
    fgets(group.title, 11, stdin);
    printf("Enter amount of students:\n");
    scanf("%d", &group.amount_of_students);
   }
}
