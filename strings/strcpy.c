// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
char str[]="hello";
char str1[]="hi";
strcpy(str1,str);


    // Write C code here
    printf("%s\n",str1);
    printf("%d",sizeof(str1));
    printf("%s\n",str1);
    str1[0]='a';
     printf("%s\n",str1);
     strlcpy(str1,str,sizeof(str1)); printf("%s\n",str1);

     strncpy(str1, str,3);
str1[sizeof(str1) - 1] = '\0';  // Ensure null termination
 printf("%s\n",str1);

    return 0;
}
