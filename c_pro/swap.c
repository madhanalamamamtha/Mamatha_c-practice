#include<stdio.h>
int main(){
        int a,b;
        printf("Enter the values for swaping\n");
        scanf("%d %d",&a,&b);
	printf("Before swaping a and b values are %d %d\n",a,b);
	int temp;
	temp=a;
	a=b;
	b=temp;
         printf("After swaping a and b values are %d %d\n",a,b);
}
