#include<stdio.h>
main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Address of p is %d and address of p+1 is %d.\n",p,p+1);
    printf("Address of p is %d and address of p+3 is %d.\n",p,p+3);
    printf("Address of p is %d and address of p-2 is %d.\n",p,p-2);
    printf("Address of p is %d and address of q is %d and p-q is %d.\n",p,q,p-q);
}
