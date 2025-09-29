#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number (greater than 1): ");
    scanf("%d", &n);

    printf("\n ");
    for (int i = 1; i <= 10; i++)
    {
        printf("%2d\t", i);
    }
    printf("\n");
    printf("---------------------------------------------------------------------------\n");

    for (int i = 1; i <= n; i++)
    {  
        for (int j = 1; j <= 10; j++)
        {
            printf(" %2d\t", i * j);
        }
        printf("  \n");
    }

    return 0;
}
