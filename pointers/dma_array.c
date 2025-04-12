#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum=0;
	int *p=NULL;
	printf("enter the number of elements of an array\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter the values of an array\n");
	if(p!=NULL){
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	 printf("sum of %d elements is:%d\n",n,sum);
               free(p);
               p=NULL;
       }
  return 0;
}


