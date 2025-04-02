#include<stdio.h>
int main(){
	char str[25];
	printf("enter the string\n");
	fgets(str,25,stdin);
	printf("After Case changed the string  is: ");

	for(int i=0;str[i]!='\0';i++){
	   if((str[i]>=65)&&(str[i]<=90)){
		   str[i]=str[i]+32;
	   }
	   else if((str[i]>=97)&&(str[i]<=122)){
		   str[i]=str[i]-32;
	   }
	}
	printf("%s",str);
	return 0;
}
	
