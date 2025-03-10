#include<stdio.h>
int main(){
	int num,cnt=0;
	printf("enter the positive integer\n");
	scanf("%d",&num);
	int temp=num;
	if(num==0){
		 printf("0 occured 1 time\n");
	}
       else{
	while(num>0){
		cnt++;
		num=num/10;
	}
	//printf("%d\n",cnt);
	int arr[cnt],dup[cnt];
	for(int i=cnt-1;i>=0;i--){
		arr[i]=temp%10;
		dup[i]=0;
	//	printf("%d ",arr[i]);
		temp=temp/10;
	}
	for(int i=0;i<cnt;i++){
		if(dup[i]==1){
			continue;
		}
		int c=1;
	   for(int j=i+1;j<cnt;j++){
		   if(arr[i]==arr[j]){
			   c++;
			   dup[j]=1;
	}
	}
		printf("%d occured %d times\n",arr[i],c);
	}
       }
	return 0;
}
