#include<stdio.h>
int main(){
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(((num>>5)&1)&&((num>>10)&1)){
		num=(num^(1<<12));
	}
	else{
		num=(num&(~(1<<5)|(1<<10)));
	}
	printf("number is %d\n",num);
	return 0;
}

