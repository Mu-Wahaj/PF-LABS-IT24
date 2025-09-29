#include <stdio.h>

int main()
{
 
    int n ;
    do {
        printf("Enter an odd number greater than or equal to 3 for pattern height: ");
        scanf("%d", &n);
    } while (n < 3 || n % 2 == 0);


    for (int i = 0; i < n ; i++)
    {
        printf(" ");
    }
    printf("*\n");
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j <= n - i - 1; j++)
        {
            printf(" ", j);
        }
        printf("*");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("*\n");
    }

    // // botom
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf(" ", j);
        }
        printf("*");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("*\n");
    }
    for (int i = 0; i < n ; i++)
    {
        printf(" ");
    }
    printf("*\n");

    return 0;
}