#include<stdio.h>
int main(){
	int num;
        printf("enter decimal number\n");
	scanf("%d",&num);
	 if(num==0){
		 printf("0 binary number is:0");
	 }
	 else{
		 printf("%d binary number is:",num);
		 int binary[32];
		 int i=0;
	       while(num>0){
	         binary[i]=num&1;
          	num=num>>1;
		i++;
	}
	       for(int j=i-1;j>=0;j--){
                 printf("%d",binary[j]);
	       }
	       printf("\n");
	 }
	 }
