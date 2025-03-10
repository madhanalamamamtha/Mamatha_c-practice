#include<stdio.h>
int main(){
        char var;
	printf("enter the character\n");
	scanf("%c",&var);
	if(var=='a'||var=='e'||var=='i'||var=='o'||var=='u')
		printf("the given character %c is vowel\n",var);
	else
                printf("the given character %c is constant\n",var);	
		return 0;
		}

