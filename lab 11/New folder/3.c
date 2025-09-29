
#include <stdio.h>

int maxRowSum(int matrix[][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int currentRowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currentRowSum += matrix[i][j];
        }
        printf("SUM of  row %d is %d\n", i, currentRowSum);
    }
}
int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2;
    int cols = 3;

    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    maxRowSum(matrix, rows, cols);

    return 0;
}