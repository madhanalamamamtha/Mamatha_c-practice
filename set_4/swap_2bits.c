#include<stdio.h>
int main(){
	short int num,p1,p2,p3,p4;
	printf("enter the number\nenter the bit postions\n");
	scanf("%hd%hd%hd%hd%hd",&num,&p1,&p2,&p3,&p4);
	if(((num>>p1)&1)!=((num>>p3)&1)){
		num=num^((1<<p1)|(1<<p3));
	}
	if(((num>>p2)&1)!=((num>>p4)&1)){
		num=num^((1<<p2)|(1<<p4));
	}
	printf("after shift the %hd %hd with %hd %hd bit positions the result is:%hd\n",p1,p2,p3,p4,num);
}

