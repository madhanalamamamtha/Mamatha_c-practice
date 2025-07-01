#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Ar_sz 3
struct student 
{
    char name[25];
    int roll_no;
    int marks[Ar_sz];
};
void insert(struct student *stu);
void display(struct student *stu,int size);
void search_roll_no(struct student *stu);
void update_record(struct student *stu);
void delete_record(struct student *stu,int value,int size);
float* marks_avg(struct student *stu,int size);
int main()
{
    int n,roll,i;
    struct student *temp;
    char na[25];
    char nam[25];
    float *average;
    printf("enter the number of students\n");
    scanf("%d",&n);
    getchar();
    struct student *s=NULL;
    s=(struct student*)calloc(n,(sizeof(struct student)));
    if(s!=NULL){
    for(int i=0;i<n;i++){
        printf("enter the name of student\n");
        fgets(s[i].name,25,stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0';
        printf("enter the roll number of student\n");
        scanf("%d",&s[i].roll_no);
        printf("enter the marks of student\n");
        for(int j=0;j<Ar_sz;j++){
            printf("enter the %d subject marks\n",j+1);
            scanf("%d",&s[i].marks[j]);
        }
        getchar();
         }
    }
    while(1){
        int choice;
        printf("-------------------------------------------------\n");
        printf("1- Add a new student record\n");
        printf("2- Display all student records\n");
        printf("3- Search a student by Roll Number\n");
        printf("4- Update a student's record\n");
        printf("5- Delete a student record\n");
        printf("6- Display the average marks of each student\n");
        printf("7- exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 :  
		      temp= (struct student*)realloc(s,(n+1)*sizeof(struct student)); 
                      if(temp==NULL){
                          printf("memory not allocated\n");
                          continue;
                      }
                           s=temp;
                         insert(&s[n]);
                          n++;
                         break;
            case 2 : display(s,n);
                         break;
            case 3 : printf("enter the roll number of student\n");
                     scanf("%d",&roll);
                     for(i=0;i<n;i++){
                         if(s[i].roll_no==roll){
                            search_roll_no(&s[i]);
                              break;
                         }
                     }
                     if(i>=n){
                         printf("the entered roll number is not present please enter the correct roll number\n");
                     }
                     break;
            case 4 : printf("enter the name or roll number for updating student record\n");
		     getchar();
                      fgets(na,25,stdin);
                      na[strcspn(na,"\n")]='\0';
                      for(i=0;i<n;i++){
                         if((s[i].roll_no==atoi(na))||(strcmp(s[i].name,na)==0)){
                             update_record(&s[i]);
                             break;
                         }
                      }
                         if(i>=n){
                         printf("the entered roll number or name is not present please enter the correct roll number or name\n");
                     }
                     break;
            case 5 : printf("enter the name or roll number for deleting student record\n");
                     getchar();
                      fgets(nam,25,stdin);
                      nam[strcspn(nam,"\n")]='\0';
                      for(i=0;i<n;i++){
                         if((s[i].roll_no==atoi(nam))||(strcmp(s[i].name,nam)==0)){
                             delete_record(s,i,n);
                              n--;
                               struct student *temp= (struct student*)realloc(s,n*sizeof(struct student)); 
                               if(temp!=NULL){
                                   s=temp;
                               }
                               printf("record deleted\n");
                             break;
                         }
                         }
                         if(i>n){
                         printf("the entered roll number or name is not present please enter the correct roll number or name\n");
                       }
                      
                         break;
            case 6 : average=marks_avg(s,n);
			 for(int i=0;i<n;i++){
                           printf("%d student average marks is : %f\n",i+1,*(average+i));
                       }
                       free(average);
                       break;
            case 7 : free(s);
                      exit(1);
            default : printf("enter the correct choice\n");
                     
        }
    }
}
void insert(struct student *stu){
        printf("enter the name of student\n");
        getchar();
        fgets(stu->name,25,stdin);
        stu->name[strcspn(stu->name,"\n")]='\0';
        printf("enter the roll number of student\n");
        scanf("%d",&stu->roll_no);
        printf("enter the marks of student\n");
        for(int j=0;j<Ar_sz;j++){
            printf("enter the %d subject marks\n",j+1);
            scanf("%d",&stu->marks[j]);
        }
        getchar();
}
void display(struct student *stu,int size){
    for(int i=0;i<size;i++){
        printf("Student Name : %s\n",stu[i].name);
        printf("Student Roll Number : %d\n",stu[i].roll_no);
        for(int j=0;j<Ar_sz;j++){
            printf("%d subject marks : %d\n",j+1,stu[i].marks[j]);
        }
        printf("-----------------------------------------------------\n");
    }
}
void search_roll_no(struct student *stu){
     printf("Student Name : %s\n",stu->name);
        printf("Student Roll Number : %d\n",stu->roll_no);
        for(int j=0;j<Ar_sz;j++){
            printf("%d subject marks : %d\n",j+1,stu->marks[j]);
        }
        printf("-----------------------------------------------------\n");
    
}
void update_record(struct student *stu){
    int option,subject;
 printf("1- Name update\n");
 printf("2- Roll number update\n");
 printf("3- marks upadte\n");
 printf("enter the option\n");
 scanf("%d",&option);
 getchar();
 switch (option){
     case 1 :  fgets(stu->name,25,stdin);
               stu->name[strcspn(stu->name,"\n")]='\0';
               break;
     case 2 :  scanf("%d",&stu->roll_no);
               break;
     case 3 :   printf("1- First Subject\n");
                printf("2- Second Subject\n");
                printf("3- Third  Subject\n");
                printf("4- All three Subjects\n");
               printf("enter the which subject\n");
               scanf("%d",&subject);
               switch(subject){
                   
                   case 1 : scanf("%d",&stu->marks[0]);
                            break;
                   case 2 : scanf("%d",&stu->marks[1]);
                            break;
                   case 3 : scanf("%d",&stu->marks[2]);
                            break;
                   case 4 : for(int j=0;j<Ar_sz;j++){
                               printf("enter the %d subject\n",j+1);
                               scanf("%d",&stu->marks[j]);
                               }
                             break;
                   default :printf("entered subject invalid\n");
               }
 }
}
void delete_record(struct student *stu,int value,int size)
{
    for(int i=value;i<size-1;i++){
          stu[i]=stu[i+1];
        }
}
float* marks_avg(struct student *stu,int size)
{
    float *store_avg=(float*)malloc(size*sizeof(float));
    int sum,k=0;
    float avg;
    if((store_avg)!=NULL){
    for(int i=0;i<size;i++){
        sum=0;
        for(int j=0;j<Ar_sz;j++){
            sum+=stu[i].marks[j];
        }
        avg=(float)sum/Ar_sz;
        *(store_avg+k++)=avg;
    }
    }
    return store_avg;
}

