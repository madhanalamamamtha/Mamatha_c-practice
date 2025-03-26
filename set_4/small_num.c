#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 values for find the small number\n");
	scanf("%d%d%d",&a,&b,&c);
	((a<b)&&(a<c))?printf("%d is small\n",a):(b<c)?printf("%d is small\n",b):printf("%d is small\n",c);
	return 0;
}
