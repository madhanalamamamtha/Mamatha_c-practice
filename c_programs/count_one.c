#include<stdio.h>
int main(){
	int num,res=0,base=1,rem,cnt=0;
	printf("enter the number\n");
	scanf("%d",&num);
	  printf("%d binary number is ",num);
	while(num!=0){
		rem=num%2;
		if(rem==1)
			cnt++;
		res=res+rem*base;
		base=base*10;
		num=num/2;
	}
	printf("%d\n",res);
	printf("number of 1's is %d\n",cnt);
}


