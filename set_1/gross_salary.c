#include<stdio.h>
int main(){
	int base_sal,hra,other;
	printf("enter the basic salary,HRA and other allowances\n");
	scanf("%d%d%d",&base_sal,&hra,&other);
	printf("the gross salary of an employee is %d\n",base_sal+hra+other);
}
