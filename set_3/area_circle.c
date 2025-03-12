#include<stdio.h>
#define PI 3.14159
int main(){
	float radius,area,ar;
//	float const pi=3.14159;
	printf("enter the radius of circle\n");
	scanf("%f",&radius);
        area=PI*radius *radius;
//	ar=pi*radius *radius;
 //      printf("area of circle is %f\n",ar);
	printf("area of circle is %f\n",area);
}

