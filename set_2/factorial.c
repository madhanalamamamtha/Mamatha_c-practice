#include<stdio.h>
int main(){
        int i,num;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("factorial of %d is:",num);
        for(i=num-1;i>=1;i--){
                num=num*i;
        }
        printf("%d\n",num);
}
