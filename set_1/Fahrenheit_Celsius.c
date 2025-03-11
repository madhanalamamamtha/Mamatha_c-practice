#include<stdio.h>
int main(){
	char option;
	float temp,cel,fah;
	printf("select:1 to convert Fahrenheit to celsius\n");
        printf("select:2 to convert Celsius to fahrenheit\n");
	scanf("%c",&option);
	printf("enter the temperature\n");
	scanf("%f",&temp);
	if(option=='1'){
		cel=(temp-32)/(1.8);
		printf("After calculating Fahrenheit to celsius is %f\n",cel);
	}
	else if(option=='2'){
		fah = (temp*(9/5.0))+ 32;
		printf("After calculatint  celsius is fahrenheit %f\n",fah);
	}
	else{
		printf("please select correct option\n");
	}}

