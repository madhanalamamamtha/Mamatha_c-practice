#include<stdio.h>
int main(){
	char str[30];
	int vowel=0,con=0;
	printf("enter the string\n");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++){
	 if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(         str[i]=='O')||(str[i]=='U')){
		 vowel++;
	 }
	 else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
		 con++;
	 }
	}
	printf("The total number of vowel in the string is : %d\n",vowel);
	printf("The total number of consonant in the string is : %d\n",con);
	return 0;
}
