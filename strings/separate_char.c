#include<stdio.h>
#include<string.h>
int main(){
	char str[25];
	printf("enter the string\n");
        fgets(str,25,stdin);
        //scanf("%[^\n]",str);
	str[strcspn(str,"\n")]='\0';
	printf("after seperate the string characters\n");
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
		printf("%c ",str[i]);
		}
	}
	printf("\n");
	return 0;
}
