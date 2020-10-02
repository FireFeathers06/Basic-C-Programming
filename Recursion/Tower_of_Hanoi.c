#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	char A,B,C;
	void towers(int,char,char,char);
	clrscr();
	printf("\nTowers of Hanoi\n");
	printf("\nEnter the number of disks : ");
	scanf("%d",&n);
	printf("The number of moves=%0.f\n",(pow(2,n)-1));
	printf("\nTowers of Hanoi simulation for %d disks\n",n);
	towers(n,'A','C','B');
	getch();
}
void towers(int n,char source,char dest,char aux)
{
	if(n==1)
	{
		printf("\nMove disk %d from %c to %c",n,source,dest);
		return;
	}
	towers(n-1,source,aux,dest);
	printf("\nMove disk %d from %c to %c",n,source,dest);
	towers(n-1,aux,dest,source);
}

