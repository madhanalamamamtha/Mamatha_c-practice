#include<stdio.h>
int main(){
	char ch;
	printf("enter the character to check hexa decimal digit or not\n");
	scanf("%c",&ch);
	if((ch>=48&&ch<=57)||(ch>=65&&ch<=70)||(ch>=97&&ch<=102)){
		printf("%c is a hexadecimal digit\n",ch);
	}
	else{
		 printf("%c is not a hexadecimal digit\n",ch);
	}
	return 0;
}
