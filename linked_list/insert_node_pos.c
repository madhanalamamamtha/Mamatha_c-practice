#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
        int data;
        struct list*next;
}list;
list* create_node(int value);
void insert_node(list *t,list **hd,list **tl);
void display(list *hd);
int insert_pos(list *t,list **head,list **tail,int pos);

int main(){
	int n,dt,pos;
	list *temp=NULL;
	list *head=NULL;
       	list *tail=NULL;
	printf("Enter the number of nodes you want\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("enter the  %d node value\n",i+1);
	scanf("%d",&dt);
	temp=create_node(dt);
	insert_node(temp,&head,&tail);
	}
	printf("linked list is\n");
       display(head);
       printf("enter the position and data\n");
       scanf("%d%d",&pos,&dt);
       temp=create_node(dt);
      if( insert_pos(temp,&head,&tail,pos)){
	      printf("after insert data in  %d position th linked list is\n",pos);
	      display(head);
      }

      return 0;
}

list* create_node(int value){
	list *t=NULL;
	t=malloc(sizeof(list));
	if(t==NULL){
		printf("memory not created\n");
		return NULL;
	}
	else{
		t->data=value;
		t->next=NULL;
		return t;
	}
}
void insert_node(list *t,list **hd,list **tl){
	if(*hd==NULL){
		*hd=t;
		*tl=t;
	}
	else{
		(*tl)->next=t;
		*tl=t;
	}
}
int insert_pos(list *t,list **head,list **tail,int pos)
{
	if(*head==NULL && pos!=0){
		printf("linked list not created and position is out of range\n");
		return 0;
	}
	else if(pos==0){
		t->next=*head;
		*head=t;
		if(*tail==NULL){
		     *tail=t;
		}
		return 1;
	}
	else{
		int i=0;
		list *k=*head;
		list *p=NULL;
		while(k!=NULL && i<pos){
			p=k;
			k=k->next;
			i++;
		}
		if(i!=pos){
			printf("position is out of range\n");
			return 0;
		}
		t->next=k;
		p->next=t;
		if(t->next==NULL){
			*tail=k;
		}
	}
		return 1;
}
void display(list *hd){
   list *k=hd;
   for(;k!=NULL;k=k->next){
	   printf("%d ",k->data);
   }
   printf("\n");

}

