#include <stdio.h>

int main()
{
    int target;
    int steps = 0;
    printf("Enter the a non negative number: ");
    scanf("%d", &target);

    if (target <= 1)
    {
        printf("0 steps needed\n");
        return 0;
    }
    while (target > 1)
    {
        if (target % 2 == 0)
        {
            target /= 2;
        }
        else
        {
            target -= 1;
        }
        steps++;
    }

    printf("Minimum steps needed: %d\n", steps);
    return 0;
}
