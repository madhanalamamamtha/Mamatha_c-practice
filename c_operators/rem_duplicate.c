#include<stdio.h>
int main(){
	int size,cnt,j;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter array elements\n");
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<size;i++){
	  for(j=0;j<cnt;j++){
		  if(arr[i]==arr[j]){
			  break;
		  }
         }
	  if(j==cnt){
	  arr[cnt]=arr[i];
	  cnt++;
	}
       }
       printf("\nafter removing the duplicates\n");
      for(int i=0;i<cnt;i++){
      printf("%d ",arr[i]);
      }
     printf("\n");
     return 0;
}     

