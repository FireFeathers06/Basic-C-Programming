#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    printf("enter no.of rows and column ");
    scanf("%d %d",&r,&c);
    int* arr[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=(int*)malloc(c*sizeof(int));
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int temp;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][c-1-j];
            arr[i][c-1-j]=temp;
        }
    }
    printf("The swapped matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}