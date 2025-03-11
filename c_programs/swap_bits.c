#include<stdio.h>
int dec_to_bin(int num);
int dec_to_bin(int num)
{
	int res=0,base=1,rem;
	while(num!=0){
		rem=num%2;
		res=res+rem*base;
		base=base*10;
		num=num/2;
	}
	return res;
}
int main(){
	int num,p1,p2;
	printf("Enter the number and enter the bit position1 and bit position2 for swap\n");
	scanf("%d%d%d",&num,&p1,&p2);
	int temp=num;
	printf("%d binary number is %d\n",num,dec_to_bin(num));
	temp^=(1<<p1)|(1<<p2);
	printf("after swaping the bit positions the decimal number:%d and binary number is:%d\n",temp,dec_to_bin(temp));
  return 0;
}


