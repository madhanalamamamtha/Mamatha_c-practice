#include<stdio.h>
int binary(int num);
int binary(int num){
	int rem,res=0,base=1;
 while(num!=0)
        {
           rem=num%2;
           res=res+rem*base;
           base=base*10;
           num=num/2;
        }
       return res;
}
int main(){
	int num,p1,p2;
	printf("enter the number\n");
	scanf("%d",&num);
	int set=num;
	int clear=num;
	printf("%d binary number is %d\n",num,binary(num));
	printf("enter the bit position to set\n");
	scanf("%d",&p1);
	set|=(1<<p1);
	printf("after set the bit position %d the result is %d\n",p1,binary(set));
        printf("enter the bit position to clear\n");
        scanf("%d",&p2);
	clear&=(~(1<<p2));
	printf("after clear the bit position %d the result is %d\n",p2,binary(clear));
}


