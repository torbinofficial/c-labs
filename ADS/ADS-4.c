#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
  int amount_of_students;
  char *title;
  struct list *next;
} linked_list;
linked_list *create_node(char name, int amount);
 main()
{
  int N, i;
  linked_list *ll, pw;
  linked_list *head = malloc(sizeof(linked_list));
  printf("Enter amount of groups\n");
  scanf("%d\n", &N);
  ll = calloc(N, sizeof(linked_list));
  head = create_node('0', 0);
  for (i = 1, ll = head; i < N;)
  {
    ll->title = (char*)malloc(6);
    printf("Enter name of group\n");
    fgets(ll->title, 6, stdin);
    printf("Enter amount of students\n");
    scanf("%d\n", &ll->amount_of_students);
    ll=ll->next;
  }
  linked_list *create_node(char name, int amount)
  {
   linked_list *result;
   result = (linked_list*)malloc(sizeof(linked_list));
   printf("Enter name of group\n");
   scanf("%s\n", result->title);
   printf("Enter amount of students\n");
   scanf("%d", &result->amount_of_students);
   result->next=NULL;
   return result;
  }
}
