#include<stdio.h>

int main(int argc, char const *argv[])
{
   int m,n;
    printf("Enter the value of m:\n");
    scanf("%d",&m);

if (m>0)
{
   printf("The Value of n is 1.\n");
}
    
else if (m<0)
{
   printf("The value of n is -1.\n");
}

else
{
   printf("The value of n is 0.\n");
}

    
   return 0;
}
