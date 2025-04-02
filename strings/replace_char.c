#include<stdio.h>
#include<string.h>
int main(){
	char str[45];
	printf("enter the string\n");
	fgets(str,45,stdin);
	char ch;
	printf("enter the character to replace spaces\n");
	scanf("%c",&ch);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i]!='\0';i++){
	    if(str[i]==' '){
		    str[i]=ch;
	    }
	}
	printf("After replacing the space with  %c the new string is :\n",ch);
	printf("%s\n",str);
	return 0;
}


