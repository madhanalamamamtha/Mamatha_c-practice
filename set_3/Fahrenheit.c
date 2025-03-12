#include<stdio.h>
int main(){
	float temp,f;
	printf("enter the temperature\n");
	scanf("%f",&temp);
	f = (temp* 9/5) + 32;
	printf("after converting %0.2f Celsius to Fahrenheit the result is: %f\n",temp,f);
}
