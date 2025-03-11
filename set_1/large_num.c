#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("enter the 3 numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if((num1>num2)&&(num1>num3))
		printf("%d is big\n",num1);
	else if((num2>num3)&&(num2>num1))
		printf("%d is big\n",num2);
	else
		printf("%d is big\n",num3);
}

