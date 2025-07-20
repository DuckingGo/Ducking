#include <stdio.h>

int main()
{
    int secret_number = 5;
    int guess;

    while(guess != secret_number)
    {
        printf("Guess a number the computer think: ");
        scanf("%d", &guess);
        if (guess != secret_number)
        {
            printf("Try Again\n");
        }
    }
    printf("Congratulation! You're Right!\n");

    return 0;
}