#include<stdio.h>
int main(){
	int num1,num2,sum;
	float average;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
        //average=num1+num2/2.0;
	average=(float)sum/2;
        printf("sum of %d and %d is: %d\nproduct of %d and %d is:%f\n",num1,num2,sum,num1,num2,average);
}

