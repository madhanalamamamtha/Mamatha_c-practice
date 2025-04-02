#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[50];
	int cnt=0;
	printf("enter the string\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i]!='\0';i++){
	/*  if((str[i]==33)||(str[i]==34)||(str[i]>=39&&str[i]<=41)||(str[i]>=44&&str[i]<=47)||(str[i]==59)||(str[i]==58)||(str[i]==63)||(str[i]==91)||(str[i]==93))*/
		if(ispunct(str[i])){
		  cnt++;
	  }
	}
	printf("The punctuation characters exists in the string is : %d\n",cnt);
	return 0;
}

