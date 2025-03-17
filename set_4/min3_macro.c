#include<stdio.h>
//#define MIN ((a<b)&&(a<c))?a:(b<c)?b:c
#define MI ((a<b)&&(a<c)&&(a<d))?a:((b<c)&&(b<d))?b:(c<d)?c:d
int main(void){
	int a,b,c,d;
	printf("enter the 3 numbers to find minimum\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("mininum of %d %d %d %d is: %d\n",a,b,c,d,MI);
	
	return 0;
}

