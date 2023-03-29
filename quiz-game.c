#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[][100] = {"1. What year did the C language debut ?    :",
                             "2. Who is created the C program Language ? :",
                             "3. What is the Precessor of C ?            :"};
    char Options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1945",
                           "A. Dennis richie", "B. Jack", "C. Nikalo Tesla", "D. James nikon",
                           "A. Java", "B. B B", "C. C#", "D. C++"};

    char answers[3] = {'B', 'A', 'B'};
    int numberofquestions = sizeof(questions) / sizeof(questions[0]);
    char guess ;
    int score = 0;
    printf("\n QUIZ GAME \n\n ");
    for (int i = 0; i <= numberofquestions; i++)
    {

        printf("%s\n", questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", Options[j]);
        }
        printf("Guess : ");
        scanf("%c", &guess);
        scanf("%*c"); // Clear \n From input Buffer
        guess = toupper(guess);
        if (guess == answers[i])
        {
            printf("Correct ! \n");
            score++;
        }
        else
        {
            printf("Wrong ! \n");
        }
    }
    printf("---------------------------------------------------------\n");
    printf(" Final Score  : %d / %d\n ", score, numberofquestions);
    printf("---------------------------------------------------------\n");

    return 0;
}
