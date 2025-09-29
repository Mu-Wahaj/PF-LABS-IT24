#include <stdio.h>

int main()
{
    int num, count = 0;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling case where number is 0
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        if (num < 0)
        {
            num = -num;
        }

        while (num > 0)
        {
            num /= 10;
            count++;
        }
    }

    // Displaying result
    printf("The number of digits is: %d\n", count);

    return 0;
}
