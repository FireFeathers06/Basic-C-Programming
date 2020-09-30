#include<stdio.h>
void f1(int,int);
main()
{
    int a=5,b=6;
    f1(a,b);
    printf("a=%d and b=%d",a,b);
}
void f1(x,y)
{
    x=4;
    printf("x=%d\n",x);
}
