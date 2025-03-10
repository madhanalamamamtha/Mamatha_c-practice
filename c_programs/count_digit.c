#include<stdio.h>
int main(){
	int num,cnt=0;
	printf("Enter the number");
	scanf("%d",&num);
	printf("digit count of %d is: ",num);
	if(num<0)
		num=num*(-1);
	else if(num==0)
		cnt++;
	while(num>0){
              cnt++;
	      num=num/10;
	}
	printf("%d\n",cnt);
	return 0;
}


