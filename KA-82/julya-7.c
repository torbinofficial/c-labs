#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct coord_list
{
  float x;
	float y;
	struct coord_list*next;
}c_list;


c_list* Add_tail(c_list *head,c_list *newNode)
{
	c_list *t=head;
	if (!head)
	{
		return newNode;
	}
	else
	{
		while (t->next) t=t->next;
		t->next=newNode;
		return head;
	}
}
c_list* Add_head(c_list *head,c_list *newNode)
{
if(newNode == NULL)
  {
    exit(1);
  }

 newNode->next = head;
  head = newNode;
  return head;
}
c_list* Add_before(c_list*head, c_list *newNode,c_list *t)
{c_list*x =head;
while(x->next!=t)
            x=x->next;
    newNode->next=t;
    x->next=newNode;
    return head;
}
c_list* made_circle(c_list*head)
{c_list* t=head;
while (t->next) t=t->next;
		t->next=head;
		return head;
}
float Mod(c_list *t)
{
	return (fabs(t->x)+fabs(t->y));
}

c_list* Add(c_list *head, int i, c_list *newNode)
{ c_list* t=head;
 int j=1;
 for( ;j<i;j++)
 {
   if (Mod(newNode)<Mod(t))break;
   else t=t->next;
 }
	if (t!=NULL)
  {
    if (t==head) Add_head(head,newNode);
	  else Add_before(head,newNode,t);
	}
  else Add_tail(head,newNode);
  return head;
}
c_list* Del_tail(c_list *head)
{
  c_list* t=head,*x;
  x=t->next;
  while (x->next!=head)
  {
    x=x->next;
    t=t->next;
  }
	t->next=head;
	return head;
}
c_list*create_node(int a, int b)
{
c_list *result=(c_list*)malloc(sizeof(c_list));
	if (result)
	{
		result->x=a;
		result->y=b;

		result->next=NULL;
	}
	return result;
}
c_list* change(c_list *head, int k)
{ int i;
 c_list*t=head;
 for(i=0;i<k;i++)
    {
	  head=t->next;
	  t=t->next;}
     return head;
}

void PrintList(c_list *head)
{
	c_list *t=head;
	int i=1;
	if (head)
	{
		puts("List:");
		do{
			printf("p%02d (%5.0f,%5.f)\n",i,t->x,t->y);
			i++;
			t=t->next;
		}while (t!=head);
	}
	else puts("List is empty");

}
c_list* DelList(c_list *head,int n)
{
  int i=1;
	while(i<n)
  {
		head=Del_tail(head);
	}
	free (head);
}

int main ()
         { 	int a,b,k, i=0,n;

	c_list *head=NULL,*t;
	printf("enter numd of coords\n");
         scanf("%d",&n);
	srand(time(NULL));
	printf("enter coords\n");
	scanf("%d",&a);
	scanf("%d",&b);
	 t=create_node(a,b);
	      head=Add_head(head,t);
	      i++;
	for (;i<n;)
	      { 	printf("enter coords\n");
	scanf("%d",&a);
	scanf("%d",&b);
	       t=create_node(a,b);
	      i++;
	       head=Add(head,i,t);
		  }
		  head=made_circle(head);
		PrintList(head);
head=Del_tail(head);
n=n-1;
		PrintList(head);
		printf("Enter k\n");
		scanf("%d",&k);
		head=change(head,k);
		PrintList(head);
		DelList(head,n);

		 }
//TODO: полное удаление списка
