#include<stdio.h>
int main(){
	int num,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num==0){
		printf("please enter positive number\n");
	}
	else{
	int d=num/2;
	for(int i=1;i<=d;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num)
		printf("%d is perfect number\n",num);
	else
		printf("%d is not perfect number\n",num);
}
}
