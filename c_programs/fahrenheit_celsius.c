#include<stdio.h>
int main(){
	float fahrenheit,celsius1;
	printf("enter the fahrenheit\n");
	scanf("%f",&fahrenheit);
	celsius1=(fahrenheit-32)/(1.8);
	printf("After calculate fahrenheit to celsius is %f\n",celsius1);
	return 0;
}

