#include<stdio.h>
int main(){
	int num,cnt=0;
	printf("enter decimal number\n");
	scanf("%d",&num);
	int temp=num;
	while(num!=0){
		cnt++;
		num=num/10;
	}
	printf("%d after converting decimal to octal number is ",temp); 
	int arr[cnt];
	for(int i=cnt-1;i>=0;i--){
		arr[i]=temp%8;
		temp=temp/8;
	}
        for(int i=0;i<cnt;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}

