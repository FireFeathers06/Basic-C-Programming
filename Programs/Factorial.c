#include<stdio.h>

/*
Program to print factorial of positive numbers

Sample input 0:
5
Sample output 0:
120

Sample input 1:
0
Sample Output 1;
1

Sample input 2:
-12
Sample output 2:
"Undefined"


*/

int main() {

    int n, fact=1; // Initialize fact with 1 for further multiplications
    scanf("%d", &n);
    if( n > = 0) { // Work only if number is positive
        for(int i = 2; i <= n; i++) fact*=i; // Iterate as fact*2*3*.....*n
        printf("%d", fact); // At last print the factorial
    }
    else printf("Undefined"); // print undefined if number is negative
    return 0;
}
