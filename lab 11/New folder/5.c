#include <stdio.h>
int main()
{
    int omr[5][4] = {
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0}};
    int rows = 5;
    int cols = 4;
    printf("Original OMR Sheet:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", omr[i][j]);
        printf("\n");
    }

    int valid = 1;
    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < cols; j++)
            count += omr[i][j];
        if (count != 1)
        {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid OMR Sheet\n");
    else
        printf("Invalid OMR Sheet\n");

    return 0;
}
