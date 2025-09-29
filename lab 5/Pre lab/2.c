#include <stdio.h>

void show_rates()
{
    printf("\nExchange Rates:\n");
    printf("1 USD = 280 PKR\n");
    printf("1 EUR = 300 PKR\n");
    printf("1 GBP = 350 PKR\n");
}

float Getrate(int choice)
{
    if (choice == 1)
        return 280.0;
    if (choice == 2)
        return 300.0;
    if (choice == 3)
        return 350.0;
    return -1.0;
}

float P2F(float pkr, float rate)
{
    return pkr / rate;
}

float F2p(float foreign, float rate)
{
    return foreign * rate;
}

int main()
{
    int choice, currency;
    float amount, rate, result;

    while (1)
    {
        printf("\nCURRENCY CONVERTER\n");
        printf("1. Show Exchange Rates\n");
        printf("2. Convert PKR to Foreign Currency\n");
        printf("3. Convert Foreign Currency to PKR\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            show_rates();
        }
        else if (choice == 2)
        {
            printf("Enter PKR amount: ");
            scanf("%f", &amount);
            printf("Select currency Choice:\n1. USD\n2. EUR\n3. GBP\n enter here\t: ");
            scanf("%d", &currency);
            rate = Getrate(currency);
            if (rate == -1)
                printf("Invalid choice!\n");
            else
            {
                result = P2F(amount, rate);
                printf("Converted Amount : %.2f\n", result);
            }
        }
        else if (choice == 3)
        {
            printf("Enter foreign amount: ");
            scanf("%f", &amount);
            printf("Select currency choice :\n1. USD\n2. EUR\n3. GBP \nenter here\t: ");
            scanf("%d", &currency);
            rate = Getrate(currency);
            if (rate == -1)
                printf("Invalid choice!\n");
            else
            {
                result = F2p(amount, rate);
                printf("Converted Amount: %.2f PKR\n", result);
            }
        }
        else if (choice == 4)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
            break;
        }
    }
    return 0;
}
