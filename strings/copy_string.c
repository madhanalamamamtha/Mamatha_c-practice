#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	int i;
	printf("enter the string\n");
	fgets(str,30,stdin);
	str[strcspn(str,"\n")]='\0';
	char str1[30];
	//strcpy(str1,str);
	for(i=0;str[i]!='\0';i++){
		str1[i]=str[i];
	}
	str1[i]='\0';
        printf("after coping the string is: %s\n",str1);
	return 0;
}

