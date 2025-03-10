#include<stdio.h>
int main(){
	int num,res=1;
	printf("enter the number to check power of 2 or not\n");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		res=res*2;
		if(res==num){
			printf("%d is power of 2\n",num);
		        break;
	}
	}
	if(num!=res){
		printf("%d is not power of 2\n",num);
	}
	return 0;

}


