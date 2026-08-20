#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum = 0;

    // Input elements
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("\nSum of all elements = %d", sum);

    return 0;
}