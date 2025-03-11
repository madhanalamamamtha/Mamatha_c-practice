#include<stdio.h>
int main()
{
	int num,rem,res=0;
	printf("enter the number\n");
	scanf("%d",&num);
	int tem=num;
	if(num>0){
	   while(num!=0){
		   rem=num%10;
		   res=(res*10)+rem;
		   num=num/10;
	   }
	   printf("%d after reverse the results is:%d\n",tem,res);
	}
	else{
                printf("0 after reverse the results is:0\n");
     }
  
	   return 0;
}
