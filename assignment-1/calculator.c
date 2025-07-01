#include<stdio.h>
#include<stdlib.h>
#include "calc.h"
int main(){
	int choice,a,b,j;
	float k;
	while(1){
		printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Divison\n5-Number is even or odd	\n6-Number is prime or not prime\n7- fiabonacci series for given limit\n8-exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		if((choice>=1) && (choice <=4)){
			printf("enter the a and b values\n");
			scanf("%d%d",&a,&b);
		}
		else if((choice>=5) && (choice <=7)){
                        printf("enter the value\n");
                        scanf("%d",&a);
		}
		else if (choice==0){
		       exit(1);
		}
               switch (choice){
                     case 1 : printf("Addtion of %d and %d is %d\n\n",a,b,add(a,b));
			      break;
		     case 2 : printf("subtraction of %d and %d is %d\n\n",a,b,sub(a,b));
			      break;
                     case 3 : printf("multiplication of %d and %d is %d\n\n",a,b,mul(a,b)); 		
		              break;	      
                     case 4 :k=divison(a,b);
			      if(k==-1){
				      printf("divison is not possible because denominator is zero\n\n");
			      }
			      else{
				      printf("Divison of %d and %d is %f\n\n",a,b,divison(a,b));
                                   }
			     break;
		   case 5 : j=even_odd(a);
			     if(j==0){
				     printf("%d is even numbet\n\n",a);
			     }
			     else{
				     printf("%d is odd number\n\n",a);
			     }
			    break;
	           case 6 : j=prime(a);
			    if(j==1){
				    printf("%d is not prime number\n\n",a);
			    }
			    else{
				    printf("%d is prime number\n\n",a);
			    }
			    break;
		  case 7 : fibonacci(a);
			   printf("\n\n");
			   break;
	          case 8 : exit(1);
			   break;
	          default : printf("enter wrong choice please enter correct choice\n\n");
	       }
	}
	       return 0;
	}

