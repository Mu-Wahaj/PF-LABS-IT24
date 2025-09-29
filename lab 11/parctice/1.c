#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {5, 7, 3, 9},
        {1, 4, 8, 6},
        {0, 2, 5, 7}
    };

    int rows = 3, cols = 4;
    int key = 5;
    int found = 0;

    // Search for the key
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                printf("Element %d found at position (%d, %d)\n", key, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element %d not found in the matrix.\n", key);
    }

    return 0;
}
