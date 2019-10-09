#include <stdio.h>

int fib(num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fib(num - 2) + fib(num - 1);
}

main(int argc, char ** argv)
{
    int num;
    printf("Please input a number: ");
    scanf("%d, \n",&num);
    printf("Fibonacci of %d is %d\n",num,fib(num));
}

