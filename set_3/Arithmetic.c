#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("addition of %d and %d is:%d\n",num1,num2,num1+num2);
	printf("subtraction of %d and %d is:%d\n",num1,num2,num1-num2);
	printf("multiplication of %d and %d is:%d\n",num1,num2,num1*num2);
	printf("addition of %d and %d is:%f\n",num1,num2,(float)num1/num2);
}
