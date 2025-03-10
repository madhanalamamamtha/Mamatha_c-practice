#include<stdio.h>
int main(){
	int num,rem,base=0;
	printf("enter the number");
	scanf("%d",&num);
	int tem=num;
	while(num>0){
		rem=num%10;
		base=base*10+rem;
		num=num/10;
	}
	if(tem==base)
		printf("the number %d is palindrome\n",tem);
	else
		 printf("the number %d is not palindrome\n",tem);
	return 0;
}
