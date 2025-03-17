#include<stdio.h>
int main(void){
	short int num,cnt=1;
	printf("enter the number\n");
	scanf("%hd",&num);
	printf("number of reset bits in %hd is:",num);
	while(num!=0){
	if(num&(num-1)){
		cnt++;
	}
		num=num>>1;
	}
	printf(" %hd\n",16-cnt);
	return 0;
}
