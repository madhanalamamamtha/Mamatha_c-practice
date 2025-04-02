#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
       printf("enter the string\n");
       fgets(str,sizeof(str),stdin);
       str[strcspn(str, "\n")] = '\0';  
       for(int i=0;i<(strlen(str));i++){
	  if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')){
		  str[i]=str[i]-32;
	  }
       }
       printf("After converting vowels into upper case the sentence becomes: \n");
       printf("%s\n",str);
       return 0;
}

