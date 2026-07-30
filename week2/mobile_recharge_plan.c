#include <stdio.h>
int main(){
    int choice;
    int MobileNumber;
    int RechargeAmount;
    char RechargeType[30];

    printf("\n==========Mobile Recharge Menu=========== \n");
    printf("1.TalkTime Recaharge. \n");
    printf("2.Data Recharge. \n");
    printf("3.Unlimited Recharge. \n");
    printf("4.Display Reacharge Details. \n");
    printf("5.Exit. \n");
    
    printf("Enter Choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter the mobile number: ");
            scanf("%d",&MobileNumber);

            printf("Enter the recharge amount: ");
            scanf("%d",RechargeAmount);

            printf("Recaharge Type: ");
            scanf("%s",RechargeType);

            printf("TalkTime Recharged Successfully! \n");

        break;
        
        case 2:
            printf("Enter the mobile number:");
            scanf("%d",&MobileNumber);

            printf("Enter the data amount:");
            scanf("%d",&RechargeAmount);

            printf("Enter the Recharge Type: ");
            scanf("%s",RechargeType);
            
            printf("Data Recharge Successfully! \n");
        break;

        case 3:
           printf("Enter the mobile number:");
            scanf("%d",&MobileNumber);

            printf("Enter the unlimited data amount:");
            scanf("%d",&RechargeAmount);

            printf("Enter the Recharge Type: ");
            scanf("%s",RechargeType);

            printf("Unlimited Data Recharged Successfully! \n");

        break;

        case 4:
           printf("Mobile Number: %d\n",MobileNumber);
           printf("Recharge Amount: %d\n",RechargeAmount);
           printf("Recharge Type: %s\n", RechargeType);

        break;

        case 5:
           printf("Exited Program Successfully! \n");

        default:
           printf("Invalid Input! \n");

             
            
    } return 0;
}