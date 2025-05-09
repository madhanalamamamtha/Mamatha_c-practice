#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[50];  
    printf("enter the string\n");
    fgets(string,50,stdin);
    int i, j, length = (strlen(string))-1;
    //printf("%d ",length);
    int freq[length];
    string[strcspn(string,"\n")]='\0'; 
    for(i = 0; i < strlen(string); i++) {  
        freq[i] = 1;  
        for(j = i+1; j <strlen(string); j++) {  
            if(string[i] == string[j]) {  
                freq[i]++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
    }  
      
    //Displays the each character and their corresponding frequency  
    printf("Characters and their corresponding frequencies\n");  
    for(i = 0; i < length; i++) {  
        if(string[i] != ' ' && string[i] != '0')  
            printf("%c-%d\n", string[i], freq[i]);  
    }  
          
    return 0;  
}  
