#include<stdio.h>
int sum(int a,int b);
float average(int a);
int main(){
	int num1,num2,s;
	float a;
	printf("please enter the 2 integers\n");
	scanf("%d%d",&num1,&num2);
	s=sum(num1,num2);
	a=average(s);
	printf("Sum of %d and %d is %d\n",num1,num2,s);
	printf("Average of %d and %d is %f\n",num1,num2,a);

	return 0;
}
int sum(int a,int b)
{
	return a+b;
}
float average(int a)
{
	return a/2.0;
}
