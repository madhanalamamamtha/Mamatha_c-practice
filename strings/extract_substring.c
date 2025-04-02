#include<stdio.h>
int main(){
	char str[25];
	printf("enter the string\n");
	fgets(str,25,stdin);
	int pos,len;
	printf("enter the position and length of substring\n");
	scanf("%d%d",&pos,&len);
	printf("The substring retrieve from the string is : ");
	for(int i=pos;i<pos+len;i++){
		printf("%c",str[i]);
                  }
        printf("\n");
	return 0;
}

