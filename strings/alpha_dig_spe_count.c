#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("enter the string\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	int alpha,dig,spe;
	alpha=0,dig=0,spe=0;
	for(int i=0;str[i]!='\0';i++){
	  if((str[i]>=32&&str[i]<=47)||(str[i]>=58&&str[i]<=64)||(str[i]>=91&&str[i]<=96)||(str[i]>=123&&str[i]<=126)){
		  spe++;
	  }
	  else if(str[i]>=48&&str[i]<=57){
		  dig++;
	  }
	  else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
		  alpha++;
	  }
	}
	printf("Number of Alphabets in the string is : %d\n",alpha);
	printf("Number of Digits in the string is : %d\n",dig);
	printf("Number of Special characters in the string is : %d\n",spe);
	return 0;
}
