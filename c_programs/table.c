#include<stdio.h>
void table(int num,int limit);
void table(int num,int limit)
{
	for(int i=1;i<=limit;i++)
        {
	printf("%d x %2d =%d\n",num,i,num*i);
	}
}
int main(){
	int num,limit;
	printf("enter the number for table and limit\n");
	scanf("%d%d",&num,&limit);
	table(num,limit);
}
