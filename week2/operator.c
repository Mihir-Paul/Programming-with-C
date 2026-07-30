#include <stdio.h>
int main(){
    int num1, num2;
    char ord;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the operator: \n");
    scanf(" %c",&ord);
    printf("Enter the second number:\n");
    scanf("%d",&num2);
    switch(ord){
        case '+':
            printf("Result: %d\n",num1+num2);
        break;
        case '-':
            printf("Result: %d\n",num1-num2);
        break;
        case '*':
            printf("Result: %d\n",num1*num2);
        break;
        case '/':
            if (num2!=0)
                printf("Result: %d\n",num1/num2);
            else
                printf("ErrorDivision. \n");
        break;
        
        default:
            printf("Invalid Operator! \n"); 


            

    } return 0;

}