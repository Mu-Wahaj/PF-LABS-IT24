#include <stdio.h>
int main()
{
    int a[2][3] = {{3, 8, 2}, {4, 6, 9}};
    int max = a[0][0];

    printf("Original matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (a[i][j] > max)
                max = a[i][j];

    printf("Largest element = %d\n", max);
    return 0;
}
