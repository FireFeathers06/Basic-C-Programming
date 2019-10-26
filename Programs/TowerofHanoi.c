#include<stdio.h>
int count;
void tower(int n, char src, char dest, char aux)
{
     if(n>0)
     {
          tower(n-1,src,aux,dest);
          printf("Move disk %d from peg %c to peg %c\n",n,src,dest);
          count++;
          tower(n-1,aux,dest,src);
     }
}
int main()
{
     int disk;
     count=0;
     printf("Enter the number of disks\n");
     scanf("%d",&disk);
     tower(disk,'A','C','B');
     printf("The number of moves is %d\n",count);
     return 0;
}
