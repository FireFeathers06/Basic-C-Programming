#include<stdio.h>
int fact(int x);
int main()
{
    int x;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    //z=fact(x);
    printf("The factorial of x is :%d",fact(x));
    return 0;
}
int fact(int x)
{
    int i,fact=1;
    for(i=x;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
