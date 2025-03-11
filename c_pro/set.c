#include<stdio.h>
int main(){
	int num,bit;
	printf("enter the number and enter set bit\n");
	scanf("%d%d",&num,&bit);
	num=num|(1<<bit);
	printf("after the setting the bit the result is:%d\n",num);
}
