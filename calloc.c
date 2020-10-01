#include<stdio.h>
main()
{
    int n,*arr,i;
    printf("Enter the size:\n");
    scanf("%d",&n);
    arr=(int*)(calloc(n,sizeof(int)));
    if(arr==NULL)
    {
        printf("No memory.\n");
    }
    else
    {
    printf("Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    }

}
