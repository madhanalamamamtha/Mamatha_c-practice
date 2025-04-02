#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int cnt=1;
	printf("enter the string\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("the number of words in a given string is: ");
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ')
			cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}

