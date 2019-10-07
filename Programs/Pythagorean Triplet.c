/*
 ============================================================================
 Name        : Pythagorean.c
 Author      : Shubham Bhandari
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// n1 represents smallest number and n1>=n2>=n3
int n1,n2,n3,no;
scanf("%d",&no);

for(n3=3;n3<no;n3++)											//Loop to select third value in the pythagorean triplet.
{
	for(n2=2;n2<n3;n2++)										//Loop to select second value in the pythagorean triplet.
	{
		for(n1=1;n1<=n2;n1++)									//Loop to select first value in the pythagorean triplet.
		{
			if((n3*n3)==(n2*n2)+(n1*n1))		//Applies conditions for pythagorean triplet.
			{
				printf("\n%d,%d,%d",n1,n2,n3);
			}

		}
	}
}
return 0;
}


