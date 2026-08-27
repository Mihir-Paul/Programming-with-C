#include <stdio.h>

int main()
{
    char a[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            count++;
        }
        i++;
    }

    printf("Total number of words = %d", count + 1);

    return 0;
}