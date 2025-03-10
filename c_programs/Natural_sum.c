#include<stdio.h>
int main(){
	unsigned short int num,sum=0;
	printf("Enter the number\n");
	scanf("%hd",&num);
        for(int i=1;i<=num;i++)
	{
           sum=sum+i;
	}
	printf("sum of natural number is %d\n",sum);
}
