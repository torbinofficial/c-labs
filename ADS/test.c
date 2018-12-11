#include <stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct list
{
 int amount_of_students;
 char * title;
 struct list *next;
} linked_list;
linked_list *create_node();
void clear_list(linked_list *);
void add_to_tail(linked_list *head, linked_list *t);

int main()
{
  int N, i;
  linked_list *head = malloc(sizeof(linked_list)) , *ll;
  printf("Enter amount of groups\n");
  scanf("%d", &N);
  for(i = 1; i < N; i++, ll=ll->next);
  {
    ll->title=(char *)malloc(6);
    printf("Enter name of group \n");
    scanf("%s", ll->title);
    printf("Enter amount of students\n");
    scanf("%d\n", &ll->amount_of_students);
  }
 /*add_to_tail(head, create_node('b', 2));
 add_to_tail(head, create_node('c', 3));
 printf("%c - %d\n", head->title, head->amount_of_students);
 linked_list *x=head->next;
 printf("%c - %d\n", x->title, x->amount_of_students);*/
 return 0;
}

linked_list *create_node()
{
 linked_list *result;
 result = (linked_list*)(sizeof(linked_list));
 scanf("Enter name of group %s\n", result->title);
 scanf("Enter name of group %d\n", &result->amount_of_students);
 result->next=NULL;
 return result;
}

void clear_list(linked_list *head)
{
 linked_list *x=head, *temp;
 if(x!=NULL)
 {
  temp=x->next;
  free(x);
  x=temp;
 }
}

void add_to_tail(linked_list *head, linked_list *t)
{
 linked_list *x=head;
 while((x->next)!=NULL)
 {
  x=x->next;
 }
 x->next=t;
 t->next=NULL;
}
//TODO
//#define LINESIZE 20
/*
int main()
{
        char line[LINESIZE] = "";

        if (gets(line) == NULL) {
                 Произошла ошибка или был прочитан EOF
        }
        else {
                 Здесь можно проанализировать строку
        }

        return 0;
}
*/
