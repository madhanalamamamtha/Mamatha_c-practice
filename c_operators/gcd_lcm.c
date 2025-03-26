#include<stdio.h>
int main(){
	int num,num2,gcd,lcm;
	printf("enter two positive numbers\n");
	scanf("%d%d",&num,&num2);
	int min=(num<num2)?num:num2;
        for(int i=1;i<=min;i++){
	  if((num%i==0)&&(num2%i==0)){
		  gcd=i;
	  }
	}
	  lcm=(num*num2)/(gcd);
	  printf("GCD of %d and %d is:%d\nLCM of %d and %d is:%d\n",num,num2,gcd,num,num2,lcm);
	}
