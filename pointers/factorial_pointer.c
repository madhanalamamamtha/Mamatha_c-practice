#include<stdio.h>
int main(){
	int num;
	printf("enter number to find factorial\n");
	scanf("%d",&num);
	int mul=1;
	int *k=&num;
	for(int i=*k;i>=1;i--){
		mul=(mul)*(i);
		printf("%d\n",mul);
	}
	printf("factorial of %d is %d\n",*k,mul);
	return 0;
}


