#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int isIdentity = 1;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != 1)
                isIdentity = 0;
            else if (i != j && matrix[i][j] != 0)
                isIdentity = 0;
        }

    if (isIdentity)
        printf("Matrix is an Identity Matrix\n");
    else
        printf("Matrix is NOT an Identity Matrix\n");

    return 0;
}
