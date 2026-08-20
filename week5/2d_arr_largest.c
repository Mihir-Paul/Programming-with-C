#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, max;

    // Input elements
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }

    // Assume first element is largest
    max = a[0][0];

    // Find largest element
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("\nLargest element = %d", max);

    return 0;
}