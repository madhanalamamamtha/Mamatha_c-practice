#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t num,n;
	int cnt=0;
	printf("enter the num:");
	scanf("%hhd",&num);
	n=num;
	if(((n&(n-1))!=0)||n==0)
		 printf("%d is not power of 4\n",num);
	else {
		while(n>0){
		if((n&1)==0){
			cnt++;
		//printf("%d\n",cnt);
		}
		n=n>>1;
            }
	 if(cnt%2==0)
         		 printf("%d is power of 4\n",num);
	  else
                         printf("%d is not power of 4\n",num);

	}
	
	return 0;
}

