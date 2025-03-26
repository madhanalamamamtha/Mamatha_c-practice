#include<stdio.h>
int main(){
	int num=0x12345678;
        num=(((num&0x00FF0000)>>8)|((num&0x0000FF00)<<8)|(num&0xFF0000FF));
	printf("after swapinf the result is %x\n",num);
	return 0;
}
