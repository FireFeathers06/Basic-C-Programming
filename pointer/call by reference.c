#include<stdio.h>
void f1(int *,int *);
main()
{
    int a=5,b=6;
    f1(&a,&b);
    printf("a=%d and b=%d",a,b);
}
void f1(int *p,int *q)                         //we can write *x and *y as different locations is allocated for same variable
{
    *p=7;
    *q=9;
}

