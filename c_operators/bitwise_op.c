#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter 2 numbers to perform bitwise operations\n");
	scanf("%d%d",&num1,&num2);
	printf("%d & %d results is %d\n",num1,num2,num1&num2);
	printf("%d | %d results is %d\n",num1,num2,num1|num2);
	printf("%d ^ %d results is %d\n",num1,num2,num1^num2);
}
