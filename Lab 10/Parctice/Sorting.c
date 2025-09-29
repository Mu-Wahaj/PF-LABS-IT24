#include <stdio.h>

int main() {
    int arr[5] = {4, 2, 5, 1, 3};

    for(int i = 0; i < 4; i++) {
        int min = i;
        for(int j = i + 1; j < 5; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
