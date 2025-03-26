#include<stdio.h>
int main(){
	int size;
	int fir,sec;
	fir=sec=-2147483648;
	printf("enter the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements\n");
	 for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
        }
	for(int i=0;i<size;i++){
	  if(arr[i]>fir){
		  sec=fir;
		  fir=arr[i];
	  }
	  else if((arr[i]>sec)&&(arr[i]<fir)){
		  sec=arr[i];
	  }
	}
	printf("\n1st and 2nd large numbers in list %d and %d\n",fir,sec);
	return 0;
}

