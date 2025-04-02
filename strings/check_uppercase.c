#include<stdio.h>
int main(){
        char ch;
        printf("enter the character to check upper case or not\n");
        scanf("%c",&ch);
        if(ch>=65&&ch<=90){
                printf("%c is a upper case\n",ch);
        }
        else{
                 printf("%c is not upper case\n",ch);
        }
        return 0;
}
