#include<stdio.h>
int main(){
	int num,cnt=0,k,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	int tmp1=num,tmp2=num;
	while(num!=0){
              cnt++;
	      num=num/10;
        }
      while(tmp1!=0){
	      rem=tmp1%10;
	      k=1;
	      for(int i=1;i<=cnt;i++){
		      k=k*rem;
		      }
	      sum=sum+k;
	      tmp1=tmp1/10;
      }
      if(tmp2==sum)
	      printf("%d is armstrong number\n",tmp2);
      else
	     printf("%d is not armstrong number\n",tmp2);
}


