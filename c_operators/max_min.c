#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter the 2 numbers\n");
	scanf("%d%d",&num1,&num2);
	(num1<num2)?printf("Maximum value is %d\n",num1):printf("Minimum value is %d\n",num2);
	(num1>num2)?printf("Maximum value is %d\n",num1):printf("Minimum value is %d\n",num2);
}

