#include<stdio.h>
int main(void){
	int a=0,b=1;
	for(int i=0;i<10;i++){
		printf("%d ",a);
		b=a+b;
		a=b-a;
	}
	printf("\n");
	return 0;
}
