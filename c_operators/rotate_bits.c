#include<stdio.h>
int main(){
          int num,pos;
	printf("enter the decimal\n");
	scanf("%d",&num);
	int binary[16]={0};
	int i=0;
	while(num>0){
		binary[i]=num&1;
		num=num>>1;
		i++;
       }
	for(int j=15;j>=0;j--){
		printf("%d",binary[j]);
	}
	printf("\n");
}

