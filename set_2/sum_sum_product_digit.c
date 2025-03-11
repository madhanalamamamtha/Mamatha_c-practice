#include<stdio.h>
int main(){
        int num,sum=0,product=1,rem;
        printf("enter the number\n");
        scanf("%d",&num);
        if(num==0){
           printf("sum of all is: 0 and product of all digits is: 0\n");
        }
        else if(num<0){
                 while(num!=0){
                rem=num%10;
                sum=sum+rem;
                product=product*rem;
                num=num/10;
        }
        printf("sum of all is: %d and product of all digits is: %d\n",(-1)*(sum),product);
        }
        else{
        while(num!=0){
                rem=num%10;
                sum=sum+rem;
                product=product*rem;
                num=num/10;
        }
        printf("sum of all is: %d and product of all digits is: %d\n",sum,product);
}
}
