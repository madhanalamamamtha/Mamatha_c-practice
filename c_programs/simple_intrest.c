#include<stdio.h>
int main(){
	double simple_interest,principal,rate, time;
	printf("Please enter the principal, rate of interest in percentage and time in years\n");
	scanf("%lf%lf%lf", &principal,&rate, &time);
        simple_interest=(principal*rate*time)/100;
        printf("Simple Interest is %lf\n",simple_interest);
	return 0;
}
