#include<stdio.h>
int main(){
	int size,j,arr[size],num;
	printf("enter the size of array\n");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\nenter number to check in list\n");
	scanf("%d",&num);
	for(j=0;j<size;j++){
	     if(num==arr[j]){
		     printf("%d is present at index %d\n",num,j);
		     break;
	     }
	}
	     if(j==size){
		    printf("%d is not present in list\n",num);
	}
	return 0;
}
