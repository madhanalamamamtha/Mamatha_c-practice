#include<stdio.h>
int main(){
     short int num;
     printf("enter the number\n");
     scanf("%hd",&num);
     if(num&1)
	     printf("%hd is odd number\n",num);
     else
	     printf("%hd is even number\n",num);
     }

