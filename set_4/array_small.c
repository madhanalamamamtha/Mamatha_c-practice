#include<stdio.h>
int main(void){
	int size, arr[size],min;
	printf("enter the size of array\n");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<size;i++){
                printf("%d\n",arr[i]);
        }
	min=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("minimum number in the array is:%d\n",min);
	return 0;
}
