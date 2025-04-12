#include<stdio.h>
int search(int *x,int,int);
int main(){
	int size;
	printf("enter the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter array elements\n");
	for(int i=0;i<size;i++){
	scanf("%d",arr+i);
	}
	int k;
	printf("enter the number u want search in list\n");
	scanf("%d",&k);
	int p;
	p=search(arr,k,size);
	if(p==-1)
		printf("%d not present in list\n",k);	
        else
                printf("%d is present at %d index\n",k,p);
	return 0;
}
int search(int *x,int h,int s){
	for(int i=0;i<s;i++){
		if(*(x+i)==h){
	           return i;
		   }
		   }
		   return -1;
		   }

