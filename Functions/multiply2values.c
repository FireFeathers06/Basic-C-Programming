/*Use of functions*/
#include<stdio.h>
int sum(int,int);
main()
{
    int x,y,a;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the value of y:\n");
    scanf("%d",&y);
    a=sum(x,y);
    printf("The sum of x and y is %d.\n",a);
}
 int sum(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
