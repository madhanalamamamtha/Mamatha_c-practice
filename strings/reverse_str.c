#include<stdio.h>
#include<string.h>
int main(){
	char str[25];
	printf("enter the string\n");
	fgets(str,25,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("after reverse the string:");
        for(int i=strlen(str);i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
	
}
