#include<stdio.h>
void swap(int*,int* );
void swap(int *x,int *y){
       printf("address of x is %p\naddress of y is %p\n",x,y);
       int t;
       t=*x;
       *x=*y;
       *y=t;
}
int main()
{
	int a,b;
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("address of a is %p\naddress of b is %p\n",&a,&b);
	printf("after swaping\na=%d\nb=%d\n",a,b);
	return 0;
}

