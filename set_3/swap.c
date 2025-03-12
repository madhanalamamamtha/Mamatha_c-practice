#include<stdio.h>
int main(){
	int a,b,t;
        printf("enter the a nd b values\n");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d and b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("after swaping a=%d and b=%d \n",a,b);
}

