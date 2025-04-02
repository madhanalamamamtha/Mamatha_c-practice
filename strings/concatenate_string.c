#include<stdio.h>
#include<string.h>
int main(){
	char str1[30];
	char str2[30];
	int j=0;
	printf("enter the first string\n");
	fgets(str1,30,stdin);
	//printf("%s",str1);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the second string\n");
	fgets(str2,30,stdin);
	str2[strcspn(str2,"\n")]='\0';
	//strcat(str1,str2);
	int l=strlen(str1);
	for(j=0;str2[j]!='\0';j++){
               str1[l+j]=str2[j];
	}
	str1[l+j]='\0';
        printf("After concatenation the string is : %s\n",str1);
        return 0;
}

