#include<stdio.h>
main()
{
    int *p;
    p=(int*)malloc(4);
    *p=27;
    printf("The value in malloc is %d.\n",*p);
}
