#include<stdio.h>
int main(){
	short int num;
	printf("enter the number\n");
	scanf("%hx",&num);
	num=(((num&0xF0)>>4)|((num&0x0F)<<4));
	printf("after swaping the nibbles the result is 0x%hx\n",num);
	return 0;
}
