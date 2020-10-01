#include<stdio.h>
main()
{
    int j=9,x=5,y=3,z=8;
    int *p;
    p=&z;
    p=&y;
    *p=11;
    printf("The value of x is %d.\n",x);
    printf("The value of y is %d.\n",y);
    printf("The address of x is %d %d %d %d.\n",&j,&x,&y,&z);
    printf("The value of pointer is %d.\n",p);
    printf("The value of pointer is %p.\n",p);
    p=11;
    printf("The value of pointer is %d.\n",p);
}
