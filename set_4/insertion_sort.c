#include<stdio.h>
void insertion_sort(int *arr, int s);
int main(){
	int n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("after sorting the array is\n");
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
	printf("\n");
	return 0;
}
void insertion_sort(int *arr, int s)
{       int temp;
	for(int i=1;i<s;i++){
	     temp=*(arr+i);
	   int j=i-1;
	     while((j>=0)&&((*(arr+j))>temp)){
		     *(arr+j+1)=*(arr+j);
		     j--;
	     }
	     *(arr+j+1)=temp;
	}

}

