#include <stdio.h>

int main()
{
    int num1;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        printf("Positive Number!\n");
    }
    else
    {
        printf("Negative Number!\n");
    }

    return 0;
}