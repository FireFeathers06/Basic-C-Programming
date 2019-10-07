#include<stdio.h>

/*
Program to input positive integer and if its a multiple of 5 print area of square else print area of circle

Sample Input 0:
10

Sample Output 0:
Area of square: 100

Explaination 0: 10 is a multiple of 5 hence printed the area of square i.e n*n

Sample Input 1:
3

Sample Output 1:
Area of cirlce: 28.26

Explaination 1: 3 isn't a multiple of 5 hence printed area of circle i.e 3.14*n*n
*/

int main()
{
    int n;
    scanf("%d", &n);
    if(n%5==0) // Check if n is a multiple of 5
        printf("Area of square: %d", n*n); // Print area of square
    else 
        printf("Area of circle %.2f", 3.14*n*n); // Print Area of circle with precision of 2
}
