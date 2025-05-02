#include<stdio.h>
int small_num(int,int);
int main(){
    int a,b,s;	
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    if((a^b)==0){
            printf("both are equal\n");
        }
    else{
    s=small_num(a,b);
    printf("%d is small number\n",s);
    }
    return 0;
}
int small_num(int x,int y)
{
  int diff=x-y;
  int k=(diff>>31)&1;
  if(k==1)
	  return x;

  else 
          return y;
  }

