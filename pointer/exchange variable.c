#include<stdio.h>
main()
{
    int x=7;
    printf("The value of x before using pointer is %d.\n\n",x);
    int *p;
    p=&x;
    *p=12;
    printf("The value of x after using pointer is %d.\n",x);
}
