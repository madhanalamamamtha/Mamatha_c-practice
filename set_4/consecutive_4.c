#include<stdio.h>
int main(){
	short int num,num1;
       printf("enter the number\n");
       scanf("%hd",&num);
       num1=num;
       num=((num>>8)&0x000F);
       num1=((num1&0x0F00)>>8);
       printf("after swaping 4 consecutive from 8th position results is %x %x\n",num,num1);
   return 0;     
} 
