#include<stdio.h>
int main(){
	int num,temp,rem,base=0;
	printf("enter the number\n");
	scanf("%d",&num);
	temp=num;
        if(num==0){
		printf("0 is palindrome\n");
	}
	else{
	while(num!=0){
		rem=num%10;
		base=base*10+rem;
		num=num/10;
	}
	if(base==temp)
		printf("%d is palindrome\n",temp);
	else
		printf("%d is not palindrome\n",temp);
}
}
