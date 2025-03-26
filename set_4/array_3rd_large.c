#include<stdio.h>
int main(){
	int size;
	printf("%d\n",size);
	int fir,sec,thi;
         fir=sec=thi=-2147483648;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	int arr[size];
	printf("array size is %d\n",sizeof(arr)/4);
	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	 for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
        }
	 printf("\n");
	for(int i=0;i<size;i++){
	 if(arr[i]>fir){
		 thi=sec;
		 sec=fir;
		 fir=arr[i];
	 }
	 else if((arr[i]>sec)&&(arr[i]>fir)){
		 thi=sec;
		 sec=arr[i];
	 }
	 else if((arr[i]>thi)&&(arr[i]<sec)&&(arr[i]<fir)){
		 thi=arr[i];
	 }
	}
	printf("third large number in list is %d\n",thi);
	return 0;
}
