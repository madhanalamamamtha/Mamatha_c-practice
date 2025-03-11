#include<stdio.h>
int main(){
	int p,t,i;
	float si;
	printf("enter the principal amount, rate of interest and enter time in months\n");
	scanf("%d%d%d",&p,&i,&t);
	si=p*(t*12)*i/100.0;
	printf("after calculating simple interest the result is %f\n",si);
}
