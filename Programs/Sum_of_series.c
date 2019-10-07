#include<stdio.h>

/*

Program to print sum of series

1-2*2+3*3-4*4+5*5....... upto N



*/

int main() {

    int n, sign = 1, sum=0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum+=sign*i*i;
        sign=-sign;
    }
    printf("%d", sum);
    return 0;
}