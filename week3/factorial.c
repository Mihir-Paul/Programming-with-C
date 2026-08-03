# include <stdio.h>
int main(){
    int num,fact = 1;
    printf("Enter the number:");
    scanf("%d",&num);

    while(num!=1)
    {
        fact = fact*num;
        num-=1;
    }
    printf("Factorial= %d",fact);
    
}