 #include<stdlib.h>
 #include<stdio.h>
 #include<string.h>

 typedef struct ollist {
 	char name[20],surname[20];
 	struct ollist *next;
 }ollist;

 ollist *AddFirst(ollist *head,char Name[20],char Surname[20]);
 void DelFirst(ollist *head);
 ollist* GetNth(ollist *head, int n);
 ollist* GetLastButOne(ollist* head);
 ollist* GetLast(ollist *head);
 void AddLast(ollist *head,char Name[20],char Surname[20]);
 void DelLast(ollist *head);
 void DeleteList(ollist *head);
 void PrintList(const ollist *head);

int main(){
ollist *head=NULL;
head=AddFirst(head,"Name5","Surname5");
head=AddFirst(head,"Name4","Surname4");
//printf("%s", head->name);
head=AddFirst(head,"Name3","Surname3");
head=AddFirst(head,"Name2","Surname2");
head=AddFirst(head,"Name1","Surname1");
PrintList(head);
return 0;
}
 ollist *AddFirst(ollist *head,char Name[20],char Surname[20]){
 ollist *tmp=malloc(sizeof(ollist));
 strcpy(tmp->name,Name);
 strcpy(tmp->surname,Surname);
 tmp->next=head;
 head->next=tmp;
 return tmp;
 }


 void DelFirst(ollist *head) {
    ollist* prev = NULL;
    int value;
    if (head == NULL) {
        exit(-1);
    }
    prev = head;
    head = head->next;
    free(prev);
}

ollist* GetNth(ollist *head, int n) {
    int counter = 0;
    while (counter < n && head) {
        head = head->next;
        counter++;
    }
    return head;
}

ollist* GetLast(ollist *head) {
    if (head == NULL)
		{
        return NULL;
    	}
    while (head->next)
		{
        head = head->next;
    	}
    return head;
}

void AddLast(ollist *head,char Name[20],char Surname[20]) {
    ollist *last = GetLast(head);
    ollist *tmp = (ollist*) malloc(sizeof(ollist));
	strcpy(tmp->name,Name);
 	strcpy(tmp->surname,Surname);
    tmp->next = NULL;
    last->next = tmp;
}

ollist* GetLastButOne(ollist* head) {
    if (head == NULL) {
        exit(-2);
    }
    if (head->next == NULL) {
        return NULL;
    }
    while (head->next->next) {
        head = head->next;
    }
    return head;
}

void DelLast(ollist *head) {
    ollist *lastbn = NULL;
    if (!head) {
        exit(-1);
    }
    if (!head) {
        exit(-1);
    }
    lastbn = GetLastButOne(head);
    if (lastbn == NULL) {
        free (head);
        head = NULL;
    } else {
        free(lastbn->next);
        lastbn->next = NULL;
    }
}

void DeleteList(ollist *head) {
    while (head->next) {
        DelFirst(head);
        head = head->next;
    }
    free (head);
}

void PrintList(const ollist *head) {
    while (head) {
    	printf("%c.%s",head->name[0],head->surname);
        head = head->next;
    }
    printf("\n");
}
