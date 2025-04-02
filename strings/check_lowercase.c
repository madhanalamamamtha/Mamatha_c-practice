#include<stdio.h>
int main(){
        char ch;
        printf("enter the character to check lower case or not\n");
        scanf("%c",&ch);
        if(ch>=97&&ch<=122){
                printf("%c is a lower case\n",ch);
        }
        else{
                 printf("%c is not lower case\n",ch);
        }
        return 0;
}
