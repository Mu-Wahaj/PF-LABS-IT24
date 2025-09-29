#include <stdio.h>

void printReverse(int arr[], int n) {
    if (n == 0) return;
    printf("%d ", arr[n - 1]);
    printReverse(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array in reverse: ");
    printReverse(arr, n);
    return 0;
}
