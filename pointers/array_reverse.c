#include<stdio.h>
/*void reverse(int *,int);
void reverse(int *a,int s){
	for(int i=s-1;i>=0;i--){
		printf("%d ",*(a+i));
	}
}*/
void reverse(int *,int);
void reverse(int *a,int s){
   int *start=a;
   int *end=a+s-1;
   int t=0;
   while(start!=end){
	   t=*start;
	   *start=*end;
	   *end=t;
	   start++;
	   end--;
   }
}

int main(){
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	reverse(arr,n);
	printf("after reverse the array\n");
	for(int i=0;i<n;i++){
                printf("%d\n",*(arr+i));
        }
	 return 0;
}
