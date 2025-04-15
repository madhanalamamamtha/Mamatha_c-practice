#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr=NULL, i;
    printf("enter the size of the array\n");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    if(arr!=NULL){
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
}
}
      int temp;
      for(int i=num-1,j=0;i>j;i--,j++){
            temp=*(arr+j);
            *(arr+j)=*(arr+i);
            *(arr+i)=temp;
      }

 for(i = 0; i < num; i++){
        printf("%d ", *(arr+ i));
 }
printf("\n");
  free(arr);
    return 0;
}
