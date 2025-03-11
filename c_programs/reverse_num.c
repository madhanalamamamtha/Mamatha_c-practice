#include<stdio.h>
int main(){
	int num,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("after reverse the number ");
	while(num!=0){
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
	printf("\n");
	return 0;
}
