#include <stdio.h>
int main(){
    int num1,num2;

    printf("Enter both the numbers: ");
    scanf("%d %d",&num1,&num2);

    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else if (num2>num1)
    {
        printf("%d is greater",num2);
    }
    else 
        printf("Both are equal");
    
    return 0;
}