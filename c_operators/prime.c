#include<stdio.h>
int main(){
	int num;
	int i;
	printf("enter the number\n");
	scanf("%d",&num);
	int d=num/2;
	for(i=2;i<=d;i++){
	    if(num%i==0){
		    printf("%d is not prime number\n",num);
		   
	            break;
	    }}
	if(i>d){
		 printf("%d is prime number\n",num);
	}
}   
