#include<stdio.h>
int main()
{
int num,i=1,sum=0;
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
if (num%i==0)
sum=sum+i;
printf("%d\n",i);
}
if (num==sum)
{
printf("the no is perfect\n");
}
else
{
printf("the no is not perfect\n");
}
return 0;
}
