#include<stdio.h>
int add(int*,int*);
int add(int *x,int *y)
{
   return *x+*y;
}
int main()
{
	int a,b;
	printf("enter the a and b values\n");
	scanf("%d%d",&a,&b);
	printf("The sum of %d and %d  is %d\n",a,b,add(&a,&b));
	return 0;
}

