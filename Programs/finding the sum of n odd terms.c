#include<stdio.h>
main()
{
    int n,sum=0,i=0;
    scanf("%d",&n);
    while(i<n)
    {

        sum+=(2i+1);
        i++;
    }
    printf("%d",sum);
}
