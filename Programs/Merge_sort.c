#include<stdio.h>
#include<conio.h>
void partition(int [20],int,int);
void merge(int [20],int,int,int);
void main()
{
	int i,a[20],n;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Orginal list\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	partition(a,0,n-1);
	printf("\nSorted list\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	getch();
}
void partition(int a[20],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		partition(a,0,mid);
		partition(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void merge(int a[20],int lb,int mid,int ub)
{
	int c[20],i,j,k;
	i=lb;
	k=lb;
	j=mid+1;
	while((i<=mid)&&(j<=ub))
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[j];	
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=ub)
	{
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=lb;i<k;i++)
	a[i]=c[i];
}

