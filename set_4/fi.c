#include<stdio.h>
int main(void){
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int a=0,b=1;
	for(int i=0;i<num;i++){
		printf("%d ",a);
		b=a+b;
		a=b-a;
	}
	printf("\n");
	return 0;
}
