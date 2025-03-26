#include<stdio.h>
int main(){
	int num,cnt;
	printf("enter the range\n");
	scanf("%d",&num);
	printf("prime numbers up to 2 to %d\n",num);
	for(int i=2;i<=num;i++){
		cnt=1;
	  for(int j=2;j*j<=i;j++){
		  if(i%j==0){
			  cnt=0;
			  break;
		  }
	  }
	  if(cnt==1)
		  printf("%d ",i);
	}
	printf("\n");
	return 0;
}

