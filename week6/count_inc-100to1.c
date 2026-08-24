#include <stdio.h>

int main()
{
    int i;

    for (i = 100; i >= 1; i -= 10)
    {
        printf("%d ", i);
    }

    return 0;
}