#include<stdio.h>
int main(){
   int num,mul,sum=0,temp,temp1,rem,cnt=0;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num==0){
		printf("please provide input grater then 0\n");
	}
	else{
	temp=num,temp1=num;
	while(num!=0){
		cnt++;
		num=num/10;
	}
	for(int i=1;i<=cnt;i++){
		rem=temp%10;
		mul=1;
		for(int j=1;j<=cnt;j++){
			mul=mul*rem;
		}
		sum=sum+mul;
		temp=temp/10;
	}
	if(sum==temp1)
		printf("%d is Armstrong number\n",temp1);
	else
		printf("%d is not Armstrong number\n",temp1);
}
}
