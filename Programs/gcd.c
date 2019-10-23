#include <stdio.h>

int main() {
    long temp, num1, num2;
    printf("Insert your first number\n");
    scanf("%ld", &num1);
    printf("Insert your second number\n");
    scanf("%ld", &num2);

    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    printf("Greatest common denominator = %ld\n", num1);
}
