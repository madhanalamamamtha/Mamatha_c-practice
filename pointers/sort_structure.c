#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[25];
	int roll_no;
	int marks;
};
void sort_rollNo(struct student *stu, int s);
void sort_marks(struct student *stu, int s);
void sort_name(struct student *stu, int s);
void display(struct student *stu, int s);
int main()
{
	int n,choice;
	printf("enter the number of students\n");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
         printf("enter the name of student\n");
	 getchar();
	 scanf("%[^\n]",s[i].name);
         printf("enter the roll number of student\n");
	 scanf("%d",&s[i].roll_no);
         printf("enter the marks of student\n");
	 scanf("%d",&s[i].marks);
	 }
	 while(1){
	 printf("1-sort by name\n");
	 printf("2-sort by roll number\n");
         printf("3-sort by marks\n");
	 printf("4- exit\n");
	 printf("enter the choice\n");
	 scanf("%d",&choice);
	 switch (choice){
	 case 1:sort_name(s,n);
	         break;
         case 2:sort_rollNo(s,n);
                 break;
         case 3:sort_marks(s,n);
                 break;
	 case 4:exit(1);
	 default:printf("select the correct choice\n");
	 }
	display(s,n);
	 }
       return 0;
}
void sort_name(struct student *stu, int s){
	struct student temp;
	for(int i=0;i<s-1;i++){
	   for(int j=0;j<s-i-1;j++){
	if(strcmp((stu+j)->name,(stu+j+1)->name)>0){
		temp=(*(stu+j));
	       (*(stu+j))=(*(stu+j+1));
	       (*(stu+j+1))=temp;
	   }
	}
}
}
void sort_rollNo(struct student *stu, int s){
        struct student temp;
        for(int i=0;i<s-1;i++){
           for(int j=0;j<s-i-1;j++){
        if((stu+j)->roll_no>(stu+j+1)->roll_no){
                temp=(*(stu+j));
               (*(stu+j))=(*(stu+j+1));
               (*(stu+j+1))=temp;
           }
        }
}}
void sort_marks(struct student *stu, int s){
        struct student temp;
        for(int i=0;i<s-1;i++){
           for(int j=0;j<s-i-1;j++){
        if((stu+j)->marks>(stu+j+1)->marks){
                temp=(*(stu+j));
               (*(stu+j))=(*(stu+j+1));
               (*(stu+j+1))=temp;
           }
        }

	}}
void display(struct student *stu, int s){
	for(int i=0;i<s;i++){
	printf("Name : %s\n",(stu+i)->name);
	printf("Roll number : %d\n",(stu+i)->roll_no);
	printf("Marks : %d\n",(stu+i)->marks);
	printf("-------------------------------------------\n");
}
}



