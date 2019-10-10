#include<stdio.h>
main()
{
	int a[3],i=0,sum=0;
	for(i;i<4;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d",sum/3);
	
	
}
