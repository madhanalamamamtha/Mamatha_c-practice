#include<stdio.h>
int main(){
	int num, reset;
	printf("please enter the numbet and enter the reset bit\n");
	scanf("%d%d",&num,&reset);
	num=num&(~(1<<reset));
	printf("after reset the bit the result is:%d\n",num);
	}
