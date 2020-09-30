#include<stdio.h>
void italy();
void germany();
void india();

main()
{
    printf("I am in main.\n");
    italy();
    printf("I am back in main.\n");
}
void italy()
{
    printf("I am in  ITALY.\n");
    germany();
    printf("I am back in ITALY.\n");
}
void germany()
{
    printf("I am in GERMANY.\n");
    india();
    printf("I am back in GERMANY.\n");
}
void india()
{
    printf("I am in INDIA.\n");
}

