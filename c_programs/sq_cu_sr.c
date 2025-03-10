#include<stdio.h>
void square(int st,int end);
void cube(int st,int end);
void square_root(int st,int end);
void square(int st,int end){
for(int i=st;i<=end;i++){
	printf("%d ",i*i);
}
}
void cube(int st,int end){
for(int i=st;i<=end;i++){
        printf("%d ",i*i*i);
}
}
void square_root(int st,int end)
{
	float j;
	for(float i=(float)st;i<=(float)end;i++){
		for(j=0.001;j*j<i;j=j+0.001);
		printf("%0.3f\t",j);
	}
}
int main(){
         int st,end;
	 printf("enter start and end numbers\n");
	 scanf("%d%d",&st,&end);
	 printf("square of %d to %d is:",st,end);
	 square(st,end);
	 printf("\ncube of %d to %d is:",st,end);
         cube(st,end);
	 printf("\nsquare root of %d to %d is:",st,end);
	 square_root(st,end);
	 printf("\n");
	 return 0;

}
