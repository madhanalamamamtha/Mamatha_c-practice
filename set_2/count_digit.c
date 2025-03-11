#include<stdio.h>
int main(){
	int num,cnt=0,cnt1=0;
	printf("enter the number\n");
	scanf("%d",&num);
	int tem=num;
	if(num==0){
		printf("0 digit count is: 1\n");
	}
	else if(num<0){
	 num=num*(-1);
	  while(num!=0){
		  cnt++;
		  num=num/10;
	  } printf("%d digit count is: %d\n",tem,cnt);
	}
	else{
		while(num!=0){                                                                                                                               cnt1++;                                                                                                                               num=num/10;                                                                                                                  }printf("%d digit count is: %d\n",tem,cnt1);
		}
}
