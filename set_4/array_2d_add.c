#include<stdio.h>
void print(int a[][4])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){                                                                                                                  printf("%d ",a[i][j]);
         }
         printf("\n");
	 }                            
	 }
int main(){
	int arr1[3][4],arr2[3][4];
	printf("enter the first array elements\n");
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	  scanf("%d",&arr1[i][j]);
         }
	 }
	printf("enter the second array elements\n");
        for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
          scanf("%d",&arr2[i][j]);
         }
	 }
	 printf("first array elements\n");
	 print(arr1);
	 printf("second array elements\n");
	 print(arr2);
	 printf("addition of 2 arrays\n");
	 for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
          printf("%d\t ",arr1[i][j]+arr2[i][j]);
         }
         printf("\n");
         }
	 return 0;
	 }
