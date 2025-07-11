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

void delete_begin(){
	if(head==NULL){
		printf("list is empty\n");
	}
     list *t=head;
     head=head->next;
     free(t);
     if(head==NULL){
	     tail=NULL;
     }
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
        	//printf("%p ",t->next);
        	//printf("%p ",&t->data);
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
printf("before deleting  the node at beggining the list is\n");
display();
delete_begin();
printf("after deleting the node at beggining the list is\n");
display();
//free(t);
return 0;
}

