#include<stdio.h>
int main(){
	int st,end;
	printf("enter the start year and end year for list of leap years\n");
	scanf("%d%d",&st,&end);
	printf("list of leap years\n");
	for(int i=st;i<=end;i++){
		if(((i%4==0)&&(i%100!=0))||(i%400==0)){
			printf("%d\n",i);
		}}
		return 0;
	}
