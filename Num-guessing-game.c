#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 10;
    const int MAX = 150;
    int guess;
    int guesses;
    int answer;
    srand(time(0)); // Uses the current time as a seed

    answer = (rand() % MAX) + MIN;
    // Generate a random number between MIN and MAX

    do
    {
        printf("\n Enter the guess :");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf(" Too High !...\n");
        }
        else if (guess < answer)
        {
            printf(" Too Low !...\n");
        }
        else if (guess == answer)
        {
            printf(" CORRECT !\n");
        }
        guesses++;
    }

    while (guess != answer);
    printf("\n----------------------------------------\n");
    printf("answer  : %d\n", answer);
    printf("guesses : %d\n", guesses);
    printf("\n----------------------------------------\n");

    return 0;
}