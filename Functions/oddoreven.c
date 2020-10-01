#include<stdio.h>
int check(int);
int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    return check(x);
}
int check(int x)
{
    int i;
    if(x%2==0)
        return 1;
    else
        return 0;
}
