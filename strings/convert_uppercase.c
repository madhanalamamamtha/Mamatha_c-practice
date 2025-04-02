#include<stdio.h>
#include<string.h>

int main() {
    char str[45];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
 //   fgets(str, 45, stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
	    if(str[i]>=97&&str[i]<=122){
		    str[i]=str[i]-32;
	    }
    }
    printf("after converting into upper case the string is:\n%s\n",str);
    return 0;
}
