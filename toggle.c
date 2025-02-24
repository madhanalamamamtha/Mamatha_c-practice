#include<stdio.h>
int main(){
        int num,toggle_bit;
        printf("enter the number and enter the toggle bit\n");
        scanf("%d%d",&num,&toggle_bit);
        num=num^(1<<toggle_bit);
        printf("after toggling the bits the result is:%d\n",num);
}
