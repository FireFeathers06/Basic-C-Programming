#include<stdio.h>
struct Book
{
    int bid;
    float rate;
    char name[25];
};
struct Book input();

struct Book input()
{
    struct Book b;
    printf("\n Enter BookID,name,rate");
    scanf("%d",&b.bid);
    fflush(stdin);
    gets(b.name);
    scanf("%f",&b.rate);
    return b;
};
struct Book display(b)
{
    struct Book b2;
    printf("\n BookID=%d\nBook name=%s\nBook rate=%f",b2.bid,b2.name,b2.rate);
};

main()
{
    struct Book b1,b2;
    b1=input();
    b2=display();
}


