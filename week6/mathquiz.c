#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int questions;
    int num1, num2, answer, correctAnswer;
    int correct = 0, incorrect = 0;

    srand(time(0));

    printf("Enter the number of questions: ");
    scanf("%d", &questions);

    for (int i = 1; i <= questions; i++)
    {
        num1 = rand() % 20 + 1;
        num2 = rand() % 20 + 1;

        correctAnswer = num1 + num2;

        printf("\nQuestion %d: %d + %d = ", i, num1, num2);
        scanf("%d", &answer);

        if (answer == correctAnswer)
        {
            printf("Correct! Congratulations!\n");
            correct++;
        }
        else
        {
            printf("Incorrect! The correct answer is %d.\n", correctAnswer);
            incorrect++;
        }
    }

    printf("\n===== Quiz Result =====\n");
    printf("Correct answers   : %d\n", correct);
    printf("Incorrect answers : %d\n", incorrect);
    printf("Total questions   : %d\n", questions);

    return 0;
}