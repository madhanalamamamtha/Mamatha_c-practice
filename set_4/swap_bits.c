#include<stdio.h>
int main(){
	int num,i,j;
	printf("enter the number\nenter the bit positions\n");
	scanf("%d%d%d",&num,&i,&j);
	if(((num>>i)&1)!=((num>>j)&1)){
		num=(num^((1<<i)|(1<<j)));
		
	}
	printf("afer swaping %d and %d the results is: %d\n",i,j,num);
	return 0;
}
