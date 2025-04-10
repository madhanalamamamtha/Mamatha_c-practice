#include<stdio.h>
int main(){
	int a,b;
	printf("enter a and b values to find maximum number\n");
	scanf("%d%d",&a,&b);
	int *j=&a;
	int *k=&b;
	if(*j>*k)
		printf("%d is maximum number\n",*j);
        else
		printf("%d is maximum number\n",*k);
         return 0;
}
