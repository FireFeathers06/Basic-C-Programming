#include<stdio.h>
int numbers(int);
int main()
{
    int x;
    printf("Enter the number upto which you want to print the numbers from 1:\n");
    scanf("%d",&x);
    numbers(x);
    return 0;
}
int numbers(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d\t",i);
}
