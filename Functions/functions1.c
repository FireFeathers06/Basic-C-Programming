#include<stdio.h>
main()
{
    int sum(int x,int y);
    int x,y,s;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter y:\n");
    scanf("%d",&y);
    s=sum(x,y);
    printf("The sum is %d.\n",s);
}
sum(a,b)
{
    int z;
    z=a+b;
}
