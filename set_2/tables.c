#include<stdio.h>
int main(){
	int st,end ,limit;
	printf("enter the start table\n");
	scanf("%d",&st);
	printf("enter the end table\n");
        scanf("%d",&end);
	printf("enter the limit \n");
        scanf("%d",&limit);
	for(int i=st;i<=end;i++){
		for(int j=1;j<=limit;j++){
			printf("%d x %2d =%d\n",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
