#include <stdio.h>
int main(){
    int choice;
    int StudentID;
    char StudentName[50];
    char StudentBatch[30];

    printf("\n=========Student Management System======\n");
    printf("1.Enter Student Details. \n");
    printf("2.Display Student Details. \n");
    printf("3.Update Student Name. \n");
    printf("4.Update Student Batch. \n");
    printf("5.Exit \n");

    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter Student Name:");
            scanf("%s",StudentName);

            printf("Enter Student ID:");
            scanf("%d",&StudentID);

            printf("Enter Student Batch:");
            scanf("%s",StudentBatch);

            printf("Entered Student Details Successfully! \n");
        break;

        case 2:
            printf("Student Name: %s\n",StudentName);
            printf("Student ID: %d\n",StudentID);
            printf("Student Batch: %s\n",StudentBatch);
        break;


        case 3:
            printf("Enter New Student Name: \n");
            scanf("%s",StudentName);
        break;

        case 4:
            printf("Enter New Student Batch: \n");
            scanf("%s",StudentBatch);
        break;

        case 5:
            printf("Thank You \n Program Ended");
        break;

        default:
            printf("Invalid Choice! \n");


    } return 0;
}