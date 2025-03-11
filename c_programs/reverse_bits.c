#include<stdio.h>
int main(){
	int num,res=0,base=1,rem,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	printf("%d binary number is ",num);
	while(num!=0){
		rem=num%2;
		res=res+rem*base;
		base=base*10;
		num=num/2;
	}
	printf("%d\n",res);
	printf("after reverse the bits the result is ");
	while(temp!=0){
		rem=temp%2;
		printf("%d",rem);
		temp=temp/2;
	}
	printf("\n");
	return 0;
}


