#include<stdio.h>
int main(){
	float weight, height;
	printf("enter the weight and height of person\n");
	scanf("%f%f",&weight,&height);
	printf("BMI of a person is %f\n",weight/(height*height));
}
