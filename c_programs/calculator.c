#include<stdio.h>
int main(){
	int a,b;
	char ope;
	printf("Enter the values a and b\n");
	scanf("%d %d",&a,&b);
	printf("enter the operator (+,_,*,/,%%) u  want\n");
        scanf(" %c",&ope);
	switch(ope){
		case '+': printf("%d%c%d=%d\n",a,ope,b,a+b);
			  break;
	        case '-': printf("%d%c%d=%d\n",a,ope,b,a-b);
                          break;
                case '*': printf("%d%c%d=%d\n",a,ope,b,a*b);
                          break; 
	        case '/': if(b!=0)
			  printf("%d%c%d=%f\n",a,ope,b,(float)a/b);
			  else
		          printf("Error: Division by zero is not allowed.\n");
                          break;
                case '%': if(b!=0)
			  printf("%d%c%d=%d\n",a,ope,b,a%b);
			  else
		          printf("Error: Modulo by zero is not allowed.\n");
                          break;  
	        default : printf("Invalid oprator\n");
	}
}

