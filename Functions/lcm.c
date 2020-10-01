#include<stdio.h>
int lcm(int,int);
main()
{
    int x,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the value of y:\n");
    scanf("%d",&y);
    if(x<y)
    {
        x=x+y;
        y=x-y;
        x=x-y;

    }
    printf("The lcm of x and y is %d.\n",lcm(x,y));
}
int lcm(int x,int y)
{
    int i;
    for(i=x;;i++)
    {
        if(i%x==0&&i%y==0)
        {
            return i;
        }
    }
}
