#include<stdio.h>
int main(){
	int num,res=0;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num==0){
         printf("after reverse the bits result is: 0\n");
	}
	else{
	while(num){
		res=(res<<1)|(num&1);
		num=num>>1;
	}
	printf("after reverse the bits result is: %d\n",res);
	}
	return 0;
}


