#include <stdio.h>

int a = 10;          // DATA
int b;               // BSS

static int c = 20;   // DATA
static int d;        // BSS

int main()
{
    int x = 5;        // STACK

    printf("%d", x);

    return 0;
}