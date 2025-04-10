#include<stdio.h>
int main(){
	int a,b;
	printf("enter the a and b values for addition\n");
	scanf("%d%d",&a,&b);
	int *k=&a;
	int *j=&b;
	//printf("The sum of the entered numbers is : %d\n",*(&a)+*(&b));
	printf("The sum of the entered numbers is : %d\n",*k+*j);
	return 0;
}
