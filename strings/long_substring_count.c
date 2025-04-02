#include<stdio.h>
#include<string.h>
int main(){
	char str[25];
	int cnt=1;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;i<(strlen(str))-1;i++){
	  if(str[i]==str[i+1]){
		  break;
	  }
	  else{
		  cnt++;
	  }
	}
	printf("Length of the longest substring without repeating characters: %d\n",cnt);
	return 0;
}
