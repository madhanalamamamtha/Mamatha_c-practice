#include <stdio.h>
#include <string.h>
int my_atoi(char *str,int l);
int main()
{
    char st[25];
    printf("enter the string\n");
    fgets(st,25,stdin);
    st[strcspn(st,"\n")]='\0';
    int n=strlen(st);
    int res=my_atoi(st,n);
    if(res!=-1)
    printf("after convert the ASCII to integer: %d\n",res);
    else
    printf("-1\n");
    return 0;
}
int my_atoi(char *str,int l){
    if(((str[0]>='a')&&(str[0]<='z'))||((str[0]>='A')&&(str[0]<='Z'))||((str[0]>=33)&&(str[0]<=42))||((str[0]>=46)&&(str[0]<=47))
       ||(str[0]==44)||((str[0]>=91)&&(str[0]<=96))||((str[0]>=123)&&(str[0]<=127))){
           return -1;
       }
    int i=0,sum=0,sign =1;
    while(str[i]==' '){
        i++;
    }
    if(str[i]=='+'){
        sign=1;
        i++;
    }
    else if(str[i]=='-'){
        sign=-1;
        i++;
    }
     if(!(str[i]>='0'&& str[i]<='9')){
        return-1;
    }
    for(;i<l;i++){
         if((str[i])>='0'&&(str[i]<='9')){
            sum=sum*10+(((int)str[i])-48);
        }
        else{
            break;
        }
        
    }
    return sign*sum;
}
    
    
