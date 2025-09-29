#include <stdio.h>

int chackOnes(int mat[][2], int rows, int cols)
{
    int max = mat[0][0];
    int row = 0;
    for (int i = 0; i < rows; i++)
    {
        int currentRowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currentRowSum += mat[i][j];
        }
        if (max < currentRowSum)
        {
            max = currentRowSum;
            row = i;
        }
    }
    printf(" %d row  is  highest  number of ones   %d\n", row, max);
}
int chackOnesC(int mat[][2], int rows, int cols)
{
    int max = mat[0][0];
    int col = 0;
    for (int i = 0; i < rows; i++)
    {
        int currentColSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currentColSum += mat[j][i];
        }
        if (max < currentColSum)
        {
            max = currentColSum;
            col = i;
        }
    }
    printf(" %d Colounm  is  highest  number of ones   %d\n", col, max);
}

int main()
{
    int mat[2][2];

    int rows = 2;
    int cols = 2;

    printf("Original OMR Sheet:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }

    chackOnes(mat, rows, cols);
    chackOnesC(mat, rows, cols);
    return 0;
}
