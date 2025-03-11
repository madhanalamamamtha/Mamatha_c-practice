#include<stdio.h>
int main(){
        int st,end,cnt,k,sum,rem;
        printf("enter the start number and end number\n");
        scanf("%d%d",&st,&end);
	printf("Armstrong numbers from %d to %d\n",st,end);
	for(int i=st;i<=end;i++){
        int tmp1=i,tmp2=i;cnt=0;
        while(i!=0){
              cnt++;
              i=i/10;
        }
	sum=0;
      while(tmp1!=0){
              rem=tmp1%10;
              k=1;
              for(int i=1;i<=cnt;i++){
                      k=k*rem;
                      }
              sum=sum+k;
              tmp1=tmp1/10;
      }
      if(tmp2==sum){
              printf("%d\n",tmp2);
      }
     i=tmp2;
}
}
