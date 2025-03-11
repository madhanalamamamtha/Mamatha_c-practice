#include<stdio.h>
int main(){
        int num,shift;
        printf("enter the number and number of shifts\n");
        scanf("%d%d",&num,&shift);
        printf("%d after right shift by %d positions :",num,shift);
        num=num>>shift;
        printf("%d\n",num);
}
