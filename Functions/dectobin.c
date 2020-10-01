#include<stdio.h>
int dec(int);
main()
{
    int x,i;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    dec(x);
}
int dec(x)
{
    int i,bin[15];
    for(i=0;i<15;i++)
    {
        bin[i]=x%2;
        x=x/2;
    }
     printf("The Binary value is:\n");
    for(i=14;i>=0;i--)
    {
         printf("%d",bin[i]);
    }
}
