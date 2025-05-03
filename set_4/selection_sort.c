#include<stdio.h>
void selection_sort(int *arr, int s);
void swap(int *x, int *y);
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
	selection_sort(a,n);
	for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
	printf("\n");
	return 0;
}
void selection_sort(int *arr, int s)
{     
	for(int i=0;i<s-1;i++){
               int min = i;
	for(int j=i+1;j<s;j++){
	    if((*(arr+j))<(*(arr+min))){
		    min =j;
	    }
	}
              if(min!=i){
               swap(arr+i,arr+min);
	      }
	}
}
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}



