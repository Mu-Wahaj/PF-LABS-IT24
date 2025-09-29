#include <stdio.h>

int Sum2Num(int a, int b)
{
    return a + b;
}
int Sub2Num(int a, int b)
{
    return a - b;
}
int Mul2Num(int a, int b)
{
    return a * b;
}
float Div2Num(float a, float b)
{
    return (b != 0) ? (a / b) : 0;
}

int main()
{
    int choice, x, y;
    char repeat;

    do
    {

        printf("\n1. ADDITION");
        printf("\n2. SUBTRACTION");
        printf("\n3. MULTIPLICATION");
        printf("\n4. DIVISION");
        printf("\nselect an operation 1-4: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4)
        {
            printf("Invalid operation!.\n");
        }
        else
        {
            printf("\nEnter the first number: ");
            scanf("%d", &x);
            printf("\nEnter the second number: ");
            scanf("%d", &y);

            if (choice == 1)
            {
                printf("The ADDITION of two numbers is %d\n", Sum2Num(x, y));
            }
            else if (choice == 2)
            {
                printf("The SUBTRACTION of two numbers is %d\n", Sub2Num(x, y));
            }
            else if (choice == 3)
            {
                printf("The PRODUCT of two numbers is %d\n", Mul2Num(x, y));
            }
            else if (choice == 4)
            {
                if (y == 0)
                {
                    printf("Error! Division by zero is not allowed.\n");
                }
                else
                {
                    printf("The DIVISION of two numbers is %f\n", Div2Num(x, y));
                }
            }
            else
            {
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
            }
        }
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    printf("\nThank you for using the calculator.\n");
    return 0;
}
