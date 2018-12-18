#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
  int amount_of_students;
  char *title;
  struct list *next;
} linked_list;

linked_list *create_node();
linked_list *add_tail(linked_list *head, linked_list *newNode);
linked_list *pop_head(linked_list *head);
linked_list *pop_all(linked_list *head);
void list_print(linked_list *head);
linked_list *swap_min(linked_list *head);

int main()
{
  int N;
  linked_list *head=NULL, *ll;
  printf("Enter amounnt of groups\n");
  scanf("%d", &N);
  if (N==0)
  {
    puts("List is empty");
    exit(1);
  }
  head=create_node();
  for(int i = 1; i < N; i++)
  {
    ll=create_node();
    add_tail(head, ll);
  }
  list_print(head);
  head=pop_head(head);
  list_print(head);
  head=pop_all(head);
  return 0;
}
linked_list *create_node()
{
  linked_list *result = (linked_list*)malloc(sizeof(linked_list));
  if (result)
  {
    printf("Enter name of group\n");
    result->title=malloc(6*sizeof(char));
    scanf("%s", result->title);
    fflush(stdin);
    printf("Enter amount of students\n");
    scanf("%d", &result->amount_of_students);
    result->next=NULL;
    return result;
  }
}

linked_list *add_tail(linked_list *head, linked_list *newNode)
{
	linked_list *x=head;
	if (head)
	{
    while (x->next) x=x->next;
    x->next=newNode;
    return head;
	}
	else
	{
    return newNode;
	}
}

linked_list *pop_head(linked_list *head)
{
  if (head)
  {
  	linked_list *x=head->next;
    free(head->title);
  	free(head);
  	return x;

  }
}

linked_list *pop_all(linked_list *head)
{
  while(head)
  {
    head=pop_head(head);
  }
}
linked_list *swap_min(linked_list *head)
{
  linked_list *x=head, *min, *tail;
  int temp, change=x->amount_of_students;
  char *ch;
  while (x->next)
  {
    x=x->next;
    if (x->amount_of_students<change)
    {
      change=x->amount_of_students;
      min=x;
    }
  }
  tail=x;
  temp=min->amount_of_students;
  min->amount_of_students=tail->amount_of_students;
  tail->amount_of_students=temp;
  ch=min->title;
  min->title=tail->title;
  tail->title=ch;
}
void list_print(linked_list *head)
{
	linked_list *x=head;
	if (head)
	{
		puts("List:");
		do{
			printf("%s:%d\n",x->title, x->amount_of_students);
			x=x->next;
		}while (x);
	}
	else puts("List is empty");
}
