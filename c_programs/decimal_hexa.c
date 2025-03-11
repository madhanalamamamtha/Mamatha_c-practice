#include<stdio.h>
int main(){
	int num,cnt=0,rem;
	printf("enter the decimal number\n");
	scanf("%d",&num);
	int temp=num;
	if(num!=0){
		while(num!=0){
		cnt++;
		num=num/10;
	}
	char hex[cnt];
	printf("%d after converting decimal to hexa decimal is ",temp);
	for(int i=cnt-1;i>=0;i--){
              rem=temp%16;
	      if(rem>9){
	      hex[i]=55+rem;
              }
	      else{
		hex[i]=48+rem;
	      }
	      temp=temp/16;
	}
	for(int i=0;i<cnt;i++){
	/*	if(hex[i]=='0'){
                   continue;
		}*/
		printf("%c",hex[i]);
          }
	}
	else
	    printf("%d after converting decimal to hexa decimal is 0",temp);
	printf("\n");
}
