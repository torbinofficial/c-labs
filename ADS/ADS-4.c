#include <stdio.h>
#include <stdlib.h>
typedef struct group_name
{
  int amount_of_students;
  char * title;
}group;

typedef struct list
{
  group gn;
  struct list *next;
} linked_list;
main()
{
  linked_list *l_l;
  int N;
  printf("Please, enter amount or groups: \n");
  scanf("%d", &N);
  l_l=calloc(N ,sizeof(linked_list));
  l_l /*-> head*/ -> next = NULL;
  for (int i = 0; i < N; i++)
  {
    l_l->gn.title = (char *)malloc(6);
    printf("Enter name of group:\n");
    scanf("%s", l_l->gn.title);
    printf("Enter amount of students:\n");
    scanf("%d", &l_l->gn.amount_of_students);
   }
   printf("%s\n", l_l->gn.title);
   printf("%d", l_l->gn.amount_of_students);
}
