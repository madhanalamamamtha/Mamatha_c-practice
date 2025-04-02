#include<stdio.h>
#include<string.h>
int main(){
	char ch,str[50];
	int i,j,r=0,cnt=0;;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	for(i=0;str[i]!='\0';i++){
	cnt=1;
	 for(j=0;str[j]!='\0';j++){
	    if(i!=j){
	       if(str[i]==str[j]){
	       cnt++;
	       }
	       }
	       }
	       if(cnt>r){
	       r=cnt;
	       ch=str[i];
	       }
	       }
	if(cnt==1)
              printf("No repetitive characters found.\n");
	else
	  printf("The first repetitive character in w3resource is: %c\n",ch);
	  return 0;
	  }
