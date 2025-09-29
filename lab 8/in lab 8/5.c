#include <stdio.h>

int countWays(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Number of stairs cannot be negative.\n");
    }
    else
    {
        printf("Number of ways to reach %dth stair: %d\n", n, countWays(n));
    }

    return 0;
}
