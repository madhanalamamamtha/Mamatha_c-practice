#include<stdio.h>
#include<string.h>
int main(){
	char str1[25];
	int cnt=0;
	char str2[25];
	printf("enter the 1st string\n");
	fgets(str1,25,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the 2nd string\n");
	fgets(str2,25,stdin);
	str2[strcspn(str2,"\n")]='\0';
        /*if(strcmp(str1,str2)==0){
		printf("both strings are equal\n");
	}
	else{
		printf("strings are not equal\n");
	}*/
	if(strlen(str1)==strlen(str2)){
		for(int i=0;str1[i]!='\0',str2[i]!='\0';i++){
			if(str1[i]==str2[i]){
				cnt++;
			}
		}
	}
	if(cnt==strlen(str1)){
		printf("both strings are equal\n");
	}
	else{
		printf("both not strings are equal\n");
	}
	return 0;
}
