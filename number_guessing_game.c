#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int rand_num = rand() % 100 + 1;
    printf("The number is %d\n", rand_num);

    int no_of_guess, guess;
    printf("Enter a number between 1 to 100: ");
    scanf("%d", &guess);

    for (no_of_guess = 1; guess != rand_num; no_of_guess++){
        if (guess > rand_num)
        {
            printf("Lower number please!: ");
            scanf("%d", &guess);
        }
        else if (guess < rand_num)
        {
            printf("Higher number please!: ");
            scanf("%d", &guess);
        }
    }

    printf("You guessed it right in %d attempts\n", no_of_guess);
    return 0;
}