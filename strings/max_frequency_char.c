#include<stdio.h>
int main(){
	char ch,str[40];
	int i,hi=0;
	int fre[256]={0};
	printf("enter the string\n");
	fgets(str,40,stdin);
	printf("The Highest frequency of character ");
        for(i=0;str[i]!='\0';i++){
           fre[(unsigned char)str[i]]++;
	}

	 for(i=0;str[i]!='\0';i++){
		 if(fre[(unsigned char)str[i]]>hi){
			 ch=str[i];
			 hi= fre[(unsigned char)str[i]];
				 }
	 }
	printf("%c\n",ch);
	printf("appears number of times : %d\n",hi);
	return 0;
}			   

