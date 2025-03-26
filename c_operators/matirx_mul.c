#include<stdio.h>
int main(){
	int r1,c1,r2,c2,i,j,k;
	printf("enter first matrix rows and coloumns\n");
	scanf("%d%d",&r1,&c1);
	printf("enter the first matrix elements\n");
	int mat1[r1][c1];
	for(i=0;i<r1;i++){
           for(j=0;j<c1;j++){
		 scanf("%d",&mat1[i][j]);
	   }
	}
	printf("enter second matrix rows and coloumns\n");
        scanf("%d%d",&r2,&c2);
	printf("enter the second matrix elements\n");
        int mat2[r2][c2];
        for(i=0;i<r2;i++){
           for(j=0;j<c2;j++){
                 scanf("%d",&mat2[i][j]);
           }
        }
	int res[r1][c2];
	if(c1!=r2)
	{
		printf("matrix not possible\n");
	}
	else{
	 for(i=0;i<r1;i++){
           for(j=0;j<c2;j++){
                res[i][j]=0;
		for(k=0;k<c1;k++){
		res[i][j]+=mat1[i][k]*mat2[k][j];
		}
           }                                                                                                                                            }
	}
       	printf("multiplication of 2 matrices is\n");
	 for(i=0;i<r1;i++){
	    for(j=0;j<c2;j++){
		    printf("%d ",res[i][j]);
	    }
	    printf("\n");
	 }
	 return 0;
}
