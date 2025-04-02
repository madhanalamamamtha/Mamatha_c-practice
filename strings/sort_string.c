#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
        char temp;
	printf("enter the string\n");
	fgets(str,20,stdin);
	int l=strlen(str);
	if(str[l-1]=='\n'){
		str[l-1]='\0';
		l--;
	}
	for(int i=0;i<l-1;i++){
	  for(int j=0;j<l-1-i;j++){
		  if(str[j]>str[j+1]){
                      temp=str[j];
		      str[j]=str[j+1];
		      str[j+1]=temp;
		  }
	  }
	}
           printf("After sorting the string appears like : %s\n",str);
	   return 0;
}


