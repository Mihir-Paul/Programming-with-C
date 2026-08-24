#include <stdio.h>

int main()
{
    int start, end, increment;

    printf("Enter the beginning number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Enter the increment number: ");
    scanf("%d", &increment);

    printf("\nCounting: ");

    for (int i = start; i <= end; i += increment)
    {
        printf("%d ", i);
    }

    return 0;
}