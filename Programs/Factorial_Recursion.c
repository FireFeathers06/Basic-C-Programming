#include <stdio.h>

int fact(num)
{
    if(num <= 0)
        return 1;
    else
        return num * fact(num - 1);
}

main(int argc, char ** argv)
{
    long num;
    printf("Enter a number: ");
    scanf("%d,\n",&num);
    printf("%d! is %d\n",num,fact(num));
}
