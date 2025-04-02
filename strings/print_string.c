#include<stdio.h>
int main(){
	char str[25];
	printf("enter the string\n");
	fgets(str,25,stdin);
	fputs(str,stdout);
	//printf("\n");

	return 0;
}
