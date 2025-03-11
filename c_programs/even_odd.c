#include<stdio.h>
int main(){
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      printf("even numbers are upto %d is :",num);
      for(int i=1;i<=num;i++){
      if(i%2==0)
	      printf("%d ",i);
      }
      printf("\nodd numbers are upto %d is :",num);
      for(int i=1;i<=num;i++){
      if(i%2!=0)
              printf("%d ",i);
      }
    printf("\n");
}
