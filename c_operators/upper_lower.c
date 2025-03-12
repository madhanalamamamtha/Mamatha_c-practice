#include<stdio.h>
int main(){
	char a;
	printf("enter the character\n");
	scanf("%c",&a);
	if(a>=65&&a<=91)
		printf("Upper case\n");
	else if(a>=97&&a<=123)
		printf("Lower acse\n");
	else
		printf("invalid input\n");
	}

