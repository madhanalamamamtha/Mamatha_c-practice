#include<stdio.h>
#include<string.h>
int main(){
	char str[25];
	printf("enter the string to find the length\n");
	fgets(str,25,stdin);
	int cnt=0;
	//int l=strlen(str);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=0){
			cnt++;
		
		}}
	printf("the length of '%s' is %d\n",str,cnt);
	return 0;
}

