#include <stdio.h>
#include <stdlib.h> 

typedef struct list{
 int data;
 struct list *next;
}list;

struct list *head=NULL, *tail=NULL;


list* create_node(int n)
{
list *temp;
temp=(list*)malloc(sizeof(list));
if(temp==NULL){
 return NULL;
}
else{
temp->data=n;
temp->next=NULL;
return temp;
}
}

void insert_begin(list *temp){
	temp->next=head;
	head=temp;
}

void insert(list* temp)
{
	if(head==NULL){
		head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}



void display()
{
	for(list *t=head;t!=NULL;t=t->next){
		printf("%d->",t->data);
        	printf("%p ",t->next);
        	printf("%p ",&t->data);
}
printf("\n");
}

int main(){
int var,dt;
list *t;
printf("enter the number nodes u want\n");
scanf("%d",&var);
for(int i=1;i<=var;i++)
{
printf("enter the value in %d node\n",i);
scanf("%d",&dt);
t=create_node(dt);
insert(t);
}
printf("before adding the node at beggining the list is\n");
display();
printf("enter the value to add at beggining of the list\n");
scanf("%d",&dt);
t= create_node(dt);
insert_begin(t);
printf("after adding the node at beggining the list is\n");
display();
free(t);
return 0;
}

