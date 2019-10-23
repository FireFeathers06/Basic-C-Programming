#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int CheckCorrect(char * userin, char * secret) {
    int rndnum, i, j, correct, occ;
    correct = 0;
    occ = 0;
    int * tmp;
    int * tml;
    tmp = (int *)malloc(3 * sizeof(int));
    tml = (int *)malloc(3 * sizeof(int));
    for(i = 0; i < 3; i++) {
        tmp[i] = 0;
        tml[i] = 0;
    }
    for(i = 0; i < 3; i++) {
        if(userin[i] == secret[i]) {
            tmp[i] = 1;
            tml[i] = 1;
            correct++;
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(userin[i] == secret[j] && tmp[i] != 1 && tml[j] != 1 && i != j) {
                tmp[i] = 1;
                tml[j] = 1;
                occ++;
            }
        }
    }

    printf("\nOcc: %d", occ);
    printf("\nCorrect: %d \n", correct);
    printf("\n");
    return correct;
}

int main(int argc, char ** argv) {
    char * userin;
    char * secret;
    userin = (char *)malloc(3*sizeof(char));
    secret = (char *)malloc(3*sizeof(char));
    int i, j, o, guess, rndnum;
    guess = 3;

    srand(time(NULL));
    for(i = 0; i < 3; i++) {
        rndnum = rand() % 3;
        switch(rndnum) {
            case 0:
                secret[i] = 'r';
                break;
            case 1:
                secret[i] = 'g';
                break;
            case 2:
                secret[i] = 'b';
                break;
            default:
                printf("Invalid Letter");
                exit(0);
        }
    }
    printf("Input your guess: ");
    fgets(userin, 4, stdin);
    while(1) {
        while(strlen(userin) != 3) {
            printf("Please re-enter you guess: ");
            fgets(userin, 4, stdin);
        }
        if(CheckCorrect(userin, secret) != 3) {
            printf("Guess again: ");
            fgets(userin, 4, stdin);
        } else {
            printf("\nThe secret code was: %s\n", secret);
            printf("You Win!\n");
            printf("\n");
            guess = 0;
            exit(0);
        }
    }
}

