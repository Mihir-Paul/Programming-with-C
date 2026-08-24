#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Left diagonal
    printf("Left diagonal elements: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i][i]);
    }

    // Right diagonal
    printf("\nRight diagonal elements: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i][2 - i]);
    }

    return 0;
}