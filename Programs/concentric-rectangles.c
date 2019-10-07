/*
Author : MiKueen
Problem Statement : Print concentric rectangular pattern in a 2d matrix

Given a positive integer n, print the matrix filled with rectangle pattern as shown below:
a a a a a
a b b b a
a b c b a
a b b b a
a a a a a

where a = n, b = n – 1,c = n – 2 and so on.

Example:
Input : n = 3
Output :
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3 
*/

#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int len = 2*n-1;
	int min1,min2,min;

	for (int i=1; i <=len; i++) {
		
		for (int j=1; j<=len; j++) {
	        
	        if (i<=len-i)
	        	min1=i-1;
	        else
	          min1=len-i;
	        
	        if (j<=len-j)
	        	min2= j -1;
	        else
	        	min2= len-j;
	        
	        if (min1<=min2)
	        	min=min1;
	        else
	        	min= min2;
	        
	        printf("%d ",n-min);
	    }
	    printf("\n");
	}
	return 0;
}
