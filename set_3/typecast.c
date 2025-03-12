#include<stdio.h>
int main(){
	float num;
	printf("please enter the float number\n");
	scanf("%f",&num);
	printf("float number is %f and after type cast  into integer result is: %d\n",num,(int)num);
}
