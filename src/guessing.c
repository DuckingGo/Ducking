#include <stdio.h>

int main()
{
    int secret_number = 5;
    int limit = 3;
    int guess_count = 0;
    int out_of_guess = 0;
    int guess;

    while(guess != secret_number && out_of_guess == 0)
    {
        if (guess_count < limit)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            guess_count++;
        } else
        {
            out_of_guess = 1;
        }
    }
    if (out_of_guess == 1)
    {
        printf("You Lose\n");
    } else {
        printf("You Win\n");
    }

    return 0;
}