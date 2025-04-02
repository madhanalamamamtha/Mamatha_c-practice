#include<stdio.h>
int main(){
	char str[30];
	printf("enter the string\n");
	int i,j=0;
	fgets(str,30,stdin);
	for(i=0;str[i]!=0;i++){
	  if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
		  str[j++]=str[i];
	  }
	 }
	str[j]='\0';
	printf("After removing the Output String : %s\n",str);
	return 0;
}


