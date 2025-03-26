#include<stdio.h>
#include<stdint.h>
int main(){
   uint8_t num,choice,start,end;
   printf("enter the number\n");
   scanf("%hhu",&num);
   printf("enter the end and start bits to set the range\n");
   scanf("%hhu%hhu",&end,&start);
   printf("enter the choice\n1-including bits from start to end range\n2-Between start and end bits\n");
   scanf("%hhu",&choice);
   switch(choice){
          case 1: num=num|((0xFF>>((8-end)-1))&(0xFF<<(start)));
		 printf("after set the range of bits the results is:%hhu\n",num);
		 break;
	  case 2: num=num|((0xFF>>(8-end))&(0xFF<<(start+1)));
                 printf("after set the between range bits the results is:%hhu\n",num);			 
	         break;
         default: printf("enter choice 1 or 2\n");
                   break;
   }
   return 0;
}
