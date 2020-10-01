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
   printf("Both are the same.....its rights\n");
}
else
{
   printf("Both are not same...its Wrong.\n");
}

   return 0;
}
