#include<stdio.h>
int main(){
        int a,b;
        printf("Enter the values for swaping\n");
        scanf("%d %d",&a,&b);
        printf("Before swaping a and b values are %d %d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After swaping a and b values are %d %d\n",a,b);
}
