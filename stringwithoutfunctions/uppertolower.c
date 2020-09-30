#include<stdio.h>
main()
{
    int i;
    char c[20];
    printf("Enter the string:\n");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>64&&c[i]<91)
           printf("%c",c[i]+32);
        else
            printf("%c",c[i]);
    }
}

