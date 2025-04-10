#include<stdio.h>
int main(){
	int m = 300;
        float fx = 300.600006;
        char cht = 'z';
	int *j=&m;
	float *k=&fx;
	char *l=&cht;
	printf("Pointer : Demonstrate the use of & and * operator :\n");                                                          
        printf("-------------------------------------------------------\n");
        printf("m = %d\nfx = %f\ncht=%c\n",m,fx,cht);                                                                                       printf("Using & operator : \n");                                                                                                      printf("-----------------------\n");                                                                                       
        printf("address of m = %p\n",&m);                                                                                
        printf("address of fx = %p\n",&fx);                                                                              
        printf("address of cht = %p\n",&cht); 
	printf("\nUsing & and * operator : \n");
        printf("-----------------------\n");
        printf("address of m = %d\n",*(&m));
        printf("address of fx = %f\n",*(&fx));
        printf("address of cht = %c\n",*(&cht));
	 printf("\nUsing pointer variable: \n");
        printf("-----------------------\n");
        printf("address of m = %p\n",j);
        printf("address of fx = %p\n",k);
        printf("address of cht = %p\n",l);
	printf("\nUsing pointer operator: \n");
        printf("-----------------------\n");
        printf("address of m = %d\n",*j);
        printf("address of fx = %f\n",*k);
        printf("address of cht = %c\n",*l);
	return 0;
}
