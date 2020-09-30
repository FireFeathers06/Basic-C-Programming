#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, nguess = 0;

    srand(time(0));
    number = rand() % 100 + 1;
    // printf("\n%d", number);

    do
    {
        printf("\nEnter your guess... ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("\nLower number plese..");
        }
        else if (guess < number)
        {
            printf("\nHigher number plese..");
        }
        else
        {
            printf("\nYou guessed number in %d attempt", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}
