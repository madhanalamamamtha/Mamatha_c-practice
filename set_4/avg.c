#include<stdio.h>
int main(){
	int num,sum=0;
	//float avg;
	printf("enter the number for finding average of numbers\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	//avg=(float)(sum)/num;
	printf("average of %d numbers is:%f\n",num,((float)(sum))/num);
	return 0;
}
