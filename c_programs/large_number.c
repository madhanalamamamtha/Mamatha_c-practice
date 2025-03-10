#include<stdio.h>
int main()
{
int num1,num2,num3,large;
printf("enter 3 numbers to find large number\n");
scanf("%d%d%d",&num1,&num2,&num3);
/*(num1>num2)?(num1>num3)?printf("%d is greater than all\n",num1):("%d is greater than all\n",num3):(num2>num3)?("%d is greater than all\n",num2):("%d is greater than all\n",num3);*/
large=(num1>num2)?(num1>num3)?num1:num3:(num2>num3)?num2:num3;
printf("%d is greater than all\n",large);
return 0;
}
