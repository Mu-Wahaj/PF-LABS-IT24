#include <stdio.h>

int main()
{
    float Balance = 10000;
    int PIN, choice;
    int attemptNo = 0;
    int maxAttempt = 3;
    char NextTransaction;
    while (attemptNo < maxAttempt)
    {
        printf("Enter your PIN codes : ");
        scanf("%d", &PIN);
        if (PIN == 1234)
        {
            break;
        }
        else
        {
            attemptNo++;
            if (attemptNo < maxAttempt)
            {
                printf("Incorrect PIN. Please try again\n");
            }
        }
    }
    if (attemptNo == maxAttempt && PIN != 1234)
    {
        printf("Maximum attemptNo exceed  acount locked.\n");
        return 0;
    }

    printf("LOGIN SUCCESSFUL\n\n");
    do
    {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdrawal\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Select a choice you want to execute: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Your current balance is: %d\n", Balance);
        }
        else if (choice == 2)
        {
            float withdraw;
            printf("Enter the amount you want to withdraw: ");
            scanf("%f", &withdraw);
            if (withdraw > Balance)
            {
                printf("Insufficient amount.\n");
            }
            else
            {
                Balance = Balance - withdraw;
                printf("Withdrawal successful.\n\nYour remaining balance is: %d\n", Balance);
            }
        }
        else if (choice == 3)
        {
            float deposit;
            printf("Enter the amount you want to deposit: ");
            scanf("%f", &deposit);
            if (deposit <= 0)
            {
                printf("Deposit amount must be positive.\n");
            }
            else
            {
                Balance = Balance + deposit;
                printf("Deposit successful.\n\nYour new balance is: %d\n", Balance);
            }
        }
        else if (choice == 4)
        {
            printf("Thanks for using the ATM.\n");
            return 0;
        }
        else
        {
            printf("Enter a valid service.\n");
        }

        printf("Do you want another transaction? (y/n): ");
        scanf(" %c", &NextTransaction);

    } while (NextTransaction == 'y' || NextTransaction == 'Y');

    printf("Thanks for using the ATM.\n");
    return 0;
}
