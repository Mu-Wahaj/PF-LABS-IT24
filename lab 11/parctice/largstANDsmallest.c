#include <stdio.h>

int main() {
    int matrix[2][3] = {{3, 8, 2}, {4, 6, 9}};
    int largest = matrix[0][0], smallest = matrix[0][0];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++) {
            if(matrix[i][j] > largest)
                largest = matrix[i][j];
            if(matrix[i][j] < smallest)
                smallest = matrix[i][j];
        }

    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}
