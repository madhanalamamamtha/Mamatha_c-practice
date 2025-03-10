#include<stdio.h>
int main(){
	int size,sum=0;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int a[size];
	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
     printf("Sum of array is %d\n",sum);
}
