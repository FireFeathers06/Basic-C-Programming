#include<stdio.h>
void main()
{
    int mat[100][100];
    int i,j,m,n,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //To add diagonal elements
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
