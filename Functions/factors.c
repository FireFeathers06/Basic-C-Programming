#include<stdio.h>
void factors(int);
main()
{
    int x;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    factors(x);
}
void factors(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d",i);
        }

    }
}
