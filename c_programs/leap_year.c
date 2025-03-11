#include<stdio.h>
int main(){
	short int st,end;
	printf("enter the start and end years for leap year \n");
	scanf("%hd%hd",&st,&end);
        printf("List of leap years from %d to %d\n",st,end);
	/*if((year%4==0)&&(year%100!=0) ||(year%400==0))
		printf("%hd is Leap year\n",year);
	else
		printf("%hd is not leap year\n",year);*/
	for(int i=st;i<=end;i++){
             if((i%4==0)&&(i%100!=0) ||(i%400==0))
                printf("%hd\n",i);
	}
}
