#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int j=0;
	printf("enter the string\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
		  str[j]=str[i];
		  j++;
	}
}
str[j]='\0';
printf("After removing the spaces the content is: \n");
printf("%s\n",str);
return 0;
}
