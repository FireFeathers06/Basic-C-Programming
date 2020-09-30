#include<stdio.h>

int main(int argc, char const *argv[])
{
   int num1,num2;

printf("Enter the first number:\n");
scanf("%d",&num1);

printf("Enter the second number:\n");
scanf("%d",&num2);

if (num1==num2)
{
   printf("Both the numbers are same.\n");
}
else
{
   printf("Both the numbers are different.\n");
}

   return 0;
}
