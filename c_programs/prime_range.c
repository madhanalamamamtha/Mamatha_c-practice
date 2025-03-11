#include<stdio.h>
int main(){
	int range,cnt;
	printf("enter the range\n");
	scanf("%d",&range);
	printf("prime numbers from 2 to %d\n",range);
	for(int i=1;i<=range;i++){
		cnt=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)
                              cnt++;
		}
		if(cnt==2)
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
