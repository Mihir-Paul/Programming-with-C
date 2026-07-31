#include <stdio.h>
int main(){
    int year;
    printf("Enter the leap year: ");
    scanf("%d",&year);

    if (year % 400 == 0 && year % 4==0)
    {   
        printf("This year is a leap year \n");
    }
    else if (year % 100 ==0)
    {
        printf("This year is not a leap year \n");
    }
    else
    {
        printf(" Not a leap year! \n");
    }  
}