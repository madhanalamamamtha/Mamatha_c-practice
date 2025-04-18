#include <stdio.h>


int main()
{    int k=0;
      int n=0;
     printf("enter the n value\n");
     scanf("%d",&n);
     
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n*2;j++){
            if((j<=i)||((i+(k*2)<j))){
               printf("*");
            }
            else
               printf(" ");
        }
        k++;
        printf("\n");
    }
    return 0;
}

