#include <stdio.h>
int x = 10;
void display()
{
   printf(x);
   x += 10;

}
int main()
{
    printf("Value = ",x);
    return 0;
}


