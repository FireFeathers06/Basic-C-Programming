#include <stdio.h>
#include <stdlib.h>

/*
This program will find sum of all uneven fobonachi numbers up until 40000000
*/

int main(void) {
    int i, sum = 0;
    int *fibonachi_sequence = calloc(2, sizeof(int));

    fibonachi_sequence[0] = 0;
    fibonachi_sequence[1] = 1;

    i = 3;
    while (1) {
        realloc(fibonachi_sequence, i * sizeof(int));
        fibonachi_sequence[i - 1] = fibonachi_sequence[i - 3] + fibonachi_sequence[i - 2];
        printf("%d -> %d\n", i-2, fibonachi_sequence[i - 2]);
        if (!(fibonachi_sequence[i-1] % 2)) {
            sum += fibonachi_sequence[i-1];
        }
        if (fibonachi_sequence[i - 1] > 40000000) {
            break;
        }
        i++;
    }

    printf("Final sum of all even fibonachi numbers is: %d\n", sum);
    return 0;
}