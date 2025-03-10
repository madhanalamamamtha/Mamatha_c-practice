#include<stdio.h>
int main()
{
     short int num;
     char op;
     do{
     printf("Please enter the number\n");
     scanf("%hd",&num);
     if(num>0)
	      printf("The given number %d is Positive\n",num);
     else if(num<0)
	     printf("The given number %d is Negative\n",num);
     else if(num==0)
	    printf("The given number is zero\n");
     else 
	    printf("invalid number\n");
     printf("Do you want to continue? (Y/N): ");
     scanf(" %c" ,&op);
     }while(op=='Y'||op=='y');

     printf("Program terminated\n");


     return 0;
     }

