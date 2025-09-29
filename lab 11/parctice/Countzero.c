#include <stdio.h>

int main() {
    int matrix[3][3] = {{0, 1, 0}, {2, 0, 3}, {4, 5, 0}};
    int zeroCount = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == 0)
                zeroCount++;

    printf("Total Zero Elements = %d\n", zeroCount);
    return 0;
}
