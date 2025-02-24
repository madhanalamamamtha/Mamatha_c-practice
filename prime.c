#include<stdio.h>
int main(){
	int num,cnt,prime;
	cnt=0;
	printf("Enter the number\n");
        scanf("%d",&num);
	for(int i=1;i<=num;i++){
	    prime=num%i;
        if(prime==0){
		cnt++;
	}
	}
	if(cnt==2){
		printf("The given number %d is prime number\n",num);
	}
	else{
              printf("The given number %d is not  prime number\n",num);
	}
               
}
	

