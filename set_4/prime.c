#include<stdio.h>
int main(){
	int num,i;
	printf("enter the number to check prime or not\n");
	scanf("%d",&num);
	int lim=num/2;
	for(i=2;i<=lim;i++){
		if(num%i==0){
			printf("%d is not prime number\n",num);
			break;
		}
	}
	if(i>lim){
		 printf("%d is prime number\n",num);
	}
	return 0;
}
