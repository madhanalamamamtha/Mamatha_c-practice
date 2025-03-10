#include<stdio.h>
int main(){
	char str[20];
	int cnt=0;
	printf("enter the string\n");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		cnt++;
	}
	printf("the length of %s is %d\n",str,cnt);
}

