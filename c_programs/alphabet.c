#include<stdio.h>
int main(){
	printf("Upper case alphabets\n");
	for(char i =65;i<123;i++){
	        if(i==91)
                  printf("\nLower case alphabets\n");
	        else if(i>=91&&i<=96)
			continue;
		else
		  printf("%c ",i);
	}
	printf("\n");

}
