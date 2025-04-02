#include<stdio.h>
int main(){
	char str[30];
	char ch;
	int cnt=0;
	printf("enter the string\n");
	fgets(str,30,stdin);
	printf("enter the character to find frequency\n");
	scanf("%c",&ch);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			cnt++;
		}
	}
	printf("The frequency of '%c' is : %d\n",ch,cnt);
	return 0;
}


