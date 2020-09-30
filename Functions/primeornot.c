#include<stdio.h>
int prime(int);
main()
{
    int x,z;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    z=prime(x);
    if(z==1)
        printf("The number is not a prime number.\n");
    else
        printf("The number is a prime number.\n");
}
int prime(int x)
{
    int num;
    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
            return 1;
        else
            return 0;
    }
}
