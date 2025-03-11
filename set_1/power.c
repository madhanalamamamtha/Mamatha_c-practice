#include<stdio.h>
#include<math.h>
int main(){
	int base,exp;
	printf("enter the power and exponent\n");
	scanf("%d%d",&base,&exp);
	int res=pow(base,exp);
	printf("the %d power %d is: %d\n",base,exp,res);
}
