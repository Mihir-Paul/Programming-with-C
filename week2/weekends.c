# include <stdio.h>
int main(){
    int number;
    printf("Enter the number btwn 1 and 7:\n");
    scanf("%d",&number);
    switch(number){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Weekdays");
        break;
        case 6:
        case 7:
            printf("Weekends");
        break;
        default:
            printf("Error");
    
             
    }return 0;
}