#include <stdio.h>

int main()
{
    int num1, num2;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num2 != 0)
    {
        result = (float)num1 / num2;
        printf("Result = %.2f", result);
    }
    else
    {
        printf("Division by 0 is not possible.");
    }

    return 0;
}