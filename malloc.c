#include<stdio.h>
main()
{
    int s,*p,*ptr,i,sum=0,*q,m;
    printf("Enter the size of array:\n");
    scanf("%d",&s);
    ptr=(int*)malloc(s*sizeof(int));
    p=ptr;
    printf("Memory allocation is %u.",ptr);
if(ptr==NULL)
{
    printf("Out of Memory.\n");
    exit(0);
}
printf("\nEnter %d values:\n",s);
for(i=1;i<=s;i++)
{
    scanf("%d",ptr);     //Don't use backslash here after %d as if you use it then it will bring the cursor at the next line when value of i becomes equal to s. Even if you don't use \n the cursor will go to new line.
    sum+=*ptr;
    ptr++;
}
printf("Elements are:\n");
for(i=1;i<=s;i++)
{
    printf("%d\n",*p);
    printf("\n%d its address is %u\n",*p,p);
    p++;
}
printf("\nAddition is %d.",sum);
printf("Enter the new size of array:\n");
scanf("%d",&m);
ptr=(int*)realloc(ptr,m*sizeof(int));
if(ptr=NULL)
{
    printf("Out of memory.");
    exit(0);
}
printf("Reallocated memory %u.",ptr);
q=ptr;
printf("\nEnter %d values:\n",m);
for(i=1;i<=s;i++)
{
    scanf("%d",ptr);     //Don't use backslash here after %d as if you use it then it will bring the cursor at the next line when value of i becomes equal to s. Even if you don't use \n the cursor will go to new line.
    sum+=*ptr;
    ptr++;
}
printf("Elements are:\n");
for(i=1;i<=s;i++)
{
    printf("%d\n",*q);
    printf("\n%d its address is %u\n",*q,q);
    q++;
}
printf("\nAddition is %d.",sum);
}
