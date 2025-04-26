#include<stdio.h>
#include<string.h>
int str_length(const char *s);
int str_length(const char *s)
{
	int i;
	for(i=0;*(s+i);i++);
	return i;
}
int main(){
	char str[25];
	int cnt;
	printf("enter the string to find the length\n");
	fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
	cnt=str_length(str);
	printf("the length of '%s' is %d\n",str,cnt);
	return 0;
}

