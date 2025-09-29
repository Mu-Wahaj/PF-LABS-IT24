#include <stdio.h>

int main() {
    int units;
    float bill, tax, final_bill;
    char choice;

    do {
        do {
            printf("Enter the number of electricity units consumed: ");
            scanf("%d", &units);
            if (units <= 0) {
                printf("Invalid input! Units must be greater than zero. Please enter again.\n");
            }
        } while (units <= 0);


        if (units <= 100) {
            bill = units * 13;
        } else if (units <= 200) {
            bill = (100 * 13) + (units - 100) * 18;
        } else if (units <= 300) {
            bill = (100 * 13) + (100 * 18) + (units - 200) * 22;
        } else {
            bill = (100 * 13) + (100 * 18) + (100 * 22) + (units - 300) * 25;
        }

      
        if (bill <= 2000) {
            tax = bill * 0.05;
        } else if (bill <= 5000) {
            tax = bill * 0.10;
        } else if (bill <= 10000) {
            tax = bill * 0.15;
        } else {
            tax = bill * 0.20;
        }

        final_bill = bill + tax;

        printf("Total bill before tax: %.2f\n", bill);
        printf("Applied tax amount: %.2f\n", tax);
        printf("Final bill after tax: %.2f\n", final_bill);

  
        printf("Do you want to calculate another bill? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
