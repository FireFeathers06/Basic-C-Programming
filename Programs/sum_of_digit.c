#include<stdio.h>

/*

Program to print sum digit of positive number

Sample input 0:
123
Sample output 0:
6

Sample input 1:
57
Sample output:
12

Sample input 2:
-12
Sample output 2:
Negative Number


*/
int main() {

    int n, sum=0;
    scanf("%d", &n);

    if(n>0) {
        while(n>0) { // Check while n > 0
            sum+=n%10; // 123 % 10 = 3 so we get unit's digit and add it into the sum
            n/=10; // 123/10 = 12 ten's's digit changed to units
        }
        printf("%d", sum); // print sum
    }
    else printf("Negative Number");
    
    return 0;
}