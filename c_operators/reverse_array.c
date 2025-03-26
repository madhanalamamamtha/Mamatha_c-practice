#include<stdio.h>
int main(){
	int size;
	printf("enter the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("after reverse the array\n");
	for(int i=size-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}




