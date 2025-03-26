#include<stdio.h>
int main(){
	int sum=0,num,cnt=0,mul,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num==0){
		printf("plese provide input greater then 0\n");
	}
	else{
        int temp=num,temp2=num;
	while(num!=0){
		cnt++;
             num=num/10;
	}
	for(int i=1;i<=cnt;i++){
		rem=temp%10;
		mul=1;
	 for(int j=1;j<=rem;j++){
		 mul=mul*j;
	 }
	 sum=sum+mul;
	 temp=temp/10;
	}
	if(temp2==sum)
		printf("%d is strong number\n",temp2);
	else
		printf("%d is not strong number\n",temp2);
}
}
