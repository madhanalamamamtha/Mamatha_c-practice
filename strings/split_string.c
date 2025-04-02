#include<stdio.h>
#include<string.h>
int main(){
        char str[50];
        printf("enter the string\n");
        fgets(str,50,stdin);
        str[strcspn(str,"\n")]='\0';
	printf("Strings or words after split by space are :\n");
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}
		else{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

