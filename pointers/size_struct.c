#include <stdio.h>
#include<stdlib.h>


int main()
{
    struct rec{
        char *name;
        int age;
    };
    struct rec *ptr,abc;
    char na[10]="somalika";
    ptr=(struct rec*)malloc(sizeof(struct rec));
    ptr->name=na;
    ptr->age=93;
    int a,*p;
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->age);
  printf ("%ld\n",sizeof(abc));
  printf ("%ld\n",sizeof(ptr));
  printf ("%ld\n",sizeof(a));
  printf ("%ld\n",sizeof(p));

    return 0;
}

