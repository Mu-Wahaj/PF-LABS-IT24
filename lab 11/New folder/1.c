#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    int transpose[3][2];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    printf("Transpose of the matrix:\n");

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
