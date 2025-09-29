#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter numbers abd  999 to stop:\n");

    while (num != 999)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 999)
            break;

        if (num < 0)
        {
            printf("Negative number ignored.\n");
        }
        else
        {
            sum += num;
        }
    }

    printf("Sum of valid numbers: %d\n", sum);
    return 0;
}
