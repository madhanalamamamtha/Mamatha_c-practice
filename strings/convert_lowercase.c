#include<stdio.h>
#include<string.h>

int main() {
    char str[45];
    printf("Enter the string:\n");
    fgets(str, 45, stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
            if(str[i]>=65&&str[i]<=90){
                    str[i]=str[i]+32;
            }
    }
    printf("after converting into lower case the string is:\n%s\n",str);
    return 0;
}
