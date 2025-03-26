#include<stdio.h>
#include<math.h>
int main(){
        int a,b,c,d;
	printf("enter the a,b c values to find the roots\n");
	scanf("%d%d%d",&a,&b,&c);
	float x1=0.0,x2=0.0;
	d=(b*b)-4*a*c;
	if(d>0){
		x1=((-b)+sqrt(d))/(2.0*a);
		x2=((-b)-sqrt(d))/(2.0*a);
		printf("roots of quadratic equation is %f %f\n",x1,x2);
	}
	else if(d==0){
		x1=(-b)/(2.0*a);
                printf("root of quadratic equation is %f\n",x1);
	}
	else{
	    x1=(-b)/(2.0*a);
                x2=sqrt(-d)/(2.0*a);
                printf("roots of quadratic equation is %f %f\n",x1,x2);
		}
	return 0;
}
