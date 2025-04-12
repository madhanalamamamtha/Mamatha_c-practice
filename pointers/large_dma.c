#include<stdio.h>
#include<stdlib.h>
int main(){
         int n;
	 printf("enter number of elements\n");
	 scanf("%d",&n);
	 int max=-2147483648;
	 int *p=(int*)malloc(n*sizeof(int));
	 printf("enter values of array\n");
	 if(p!=NULL){
		 for(int i=0;i<n;i++){
	           scanf("%d",p+i);
		   if(*(p+i)>max)
			   max=*(p+i);
		 }
		 printf("maximum number in list is:%d\n",max);
		 free(p);
		 p=NULL;
	 }
	 return 0;
}


