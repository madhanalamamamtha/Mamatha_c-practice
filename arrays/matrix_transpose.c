#include <stdio.h>

int main()
{
    int r,c;
    printf("enter the number of rows and coloumns\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int a[c][r];
     printf("enter the array elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
      for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
             
        a[i][j]=arr[j][i];
        }
    }
    printf("after traspose the array is\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
