#include<stdio.h>
int main(){
   int num,rem,base=1,res=0;
   printf("enter the decimal number\n");
   scanf("%d",&num);
   while(num!=0){
	   rem=num%2;
	   res=res+rem*base;
	   base=base*10;
	   num=num/2;
   }
   printf("After conveting decimal to binary is:%d\n",res);
}


